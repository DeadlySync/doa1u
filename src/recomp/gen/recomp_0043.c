/**
 * DOAU1 - Recompiled code chunk 43
 * Functions: 250 (0x0015F960 - 0x001627D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0015F960
 * Original: 0x0015F960 - 0x0015F96C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F960(void)
{

loc_0015F960: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F970
 * Original: 0x0015F970 - 0x0015F97C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F970(void)
{

loc_0015F970: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F980
 * Original: 0x0015F980 - 0x0015F98C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F980(void)
{

loc_0015F980: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F990
 * Original: 0x0015F990 - 0x0015F99C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F990(void)
{

loc_0015F990: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x7C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F9A0
 * Original: 0x0015F9A0 - 0x0015F9D4 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F9A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x2D6));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F9C7; /* je: equal / zero */

loc_0015F9B0: ;
    MEM8(eax + 0x2D6) = LO8(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) + 0x24;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(esp + 8));
    MEM16(eax + 0x2E8) = LO16(ecx);
    esp += 4; return; /* ret */

loc_0015F9C7: ;
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(eax + 0x2E8) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F9E0
 * Original: 0x0015F9E0 - 0x0015FA0C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F9E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x2D6));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    edx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F9FE; /* je: equal / zero */

loc_0015F9F4: ;
    MEM8(eax + 0x2D6) = LO8(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) + 0x24;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F9FE: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + edx * 2 + 0x2EA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA10
 * Original: 0x0015FA10 - 0x0015FA4F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FA10: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x2D6));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FA2A; /* je: equal / zero */

loc_0015FA20: ;
    MEM8(eax + 0x2D6) = LO8(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) + 0x24;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015FA2A: ;
    _fb = (uint32_t)(0x2D7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2D7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FA4Bu); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_0015FA4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA50
 * Original: 0x0015FA50 - 0x0015FA9D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FA50: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x2D6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FA70; /* jne: not equal / not zero */

loc_0015FA61: ;
    edx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x2D6) = LO8(ecx);
    MEM32(eax + 0x48) = edx;

loc_0015FA70: ;
    MEM16(eax + 0x2E8) = LO16(ecx);
    ecx = 0xFFFFFF80u;
    MEM16(eax + 0x2EA) = LO16(ecx);
    MEM16(eax + 0x2EC) = LO16(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2D7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2D7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FAA0
 * Original: 0x0015FAA0 - 0x0015FAEA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FAA0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x2EE));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FAE9; /* je: equal / zero */

loc_0015FAB0: ;
    MEM8(ecx + 0x2EE) = LO8(eax);
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x2F0) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x2F4) = eax;
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x48);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x48) = edx;

loc_0015FAE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FAF0
 * Original: 0x0015FAF0 - 0x0015FB24 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FAF0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FAFFu); RECOMP_ABI_CALL(0x0015F890u, sub_0015F890); /* call 0x0015F890 */

loc_0015FAFF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FB0Au); RECOMP_ABI_CALL(0x0015F870u, sub_0015F870); /* call 0x0015F870 */

loc_0015FB0A: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FB15u); RECOMP_ABI_CALL(0x0015F920u, sub_0015F920); /* call 0x0015F920 */

loc_0015FB15: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FB20u); RECOMP_ABI_CALL(0x0015F880u, sub_0015F880); /* call 0x0015F880 */

loc_0015FB20: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FB30
 * Original: 0x0015FB30 - 0x0015FB8F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FB30: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_0015FB40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FB40; /* jne: not equal / not zero */

loc_0015FB47: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FB5Fu); RECOMP_ABI_CALL(0x0015E240u, sub_0015E240); /* call 0x0015E240 */

loc_0015FB5F: ;
    eax = MEM32(esp + 0x28);
    SET_LO16(edx, MEM16(esp + 0x18));
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0x2D0) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x20));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x2D2) = LO16(ecx);
    MEM16(eax + 0x2D4) = LO16(edx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FB90
 * Original: 0x0015FB90 - 0x0015FB98 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FB90(void)
{

loc_0015FB90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FBA0
 * Original: 0x0015FBA0 - 0x0015FBA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBA0(void)
{

loc_0015FBA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FBB0
 * Original: 0x0015FBB0 - 0x0015FBBC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBB0(void)
{

loc_0015FBB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FBC0
 * Original: 0x0015FBC0 - 0x0015FBC8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBC0(void)
{

loc_0015FBC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FBD0
 * Original: 0x0015FBD0 - 0x0015FBEA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FBD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FBE9; /* jl: less (signed <) */

loc_0015FBD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015FBE9; /* jge: greater or equal (signed >=) */

loc_0015FBDD: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(edx + eax * 4 + 4) = ecx;

loc_0015FBE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FBF0
 * Original: 0x0015FBF0 - 0x0015FBFC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBF0(void)
{

loc_0015FBF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FC00
 * Original: 0x0015FC00 - 0x0015FCFA (250 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FC00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x58);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0015FC6E; /* jle: less or equal (signed <=) */

loc_0015FC1B: ;
    ebx = esi + 4;
    edi = esi + 0x2C8;

loc_0015FC24: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0015FC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FC32u); } /* indirect call */
    }

loc_0015FC35: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FC6E; /* je: equal / zero */

loc_0015FC40: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(eax));
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi) = LO16(eax);
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0015FC5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FC5Au); } /* indirect call */
    }

loc_0015FC5D: ;
    eax = MEM32(esi + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FC24; /* jl: less (signed <) */

loc_0015FC6E: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FCF2; /* jl: less (signed <) */

loc_0015FC75: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015FCA1; /* jle: less or equal (signed <=) */

loc_0015FC7B: ;
    eax = esi + 0x88;

loc_0015FC81: ;
    SET_LO16(edx, MEM16(eax + 0x240));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x244));
    MEM16(eax + 4) = LO16(edx);
    edx = MEM32(esi + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FC81; /* jl: less (signed <) */

loc_0015FCA1: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FCACu); RECOMP_ABI_CALL(0x0015EF80u, sub_0015EF80); /* call 0x0015EF80 */

loc_0015FCAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FCF2; /* je: equal / zero */

loc_0015FCB3: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015FCEE; /* jle: less or equal (signed <=) */

loc_0015FCC4: ;
    ebx = esi + 0x80;
    /* nop */

loc_0015FCD0: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x64);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FCE0u); RECOMP_ABI_CALL(0x0015E590u, sub_0015E590); /* call 0x0015E590 */

loc_0015FCE0: ;
    eax = MEM32(esi + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FCD0; /* jl: less (signed <) */

loc_0015FCEE: ;
    MEM8(esi + 1) = 2;

loc_0015FCF2: ;
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
 * sub_0015FD00
 * Original: 0x0015FD00 - 0x0015FD4D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FD3A; /* jne: not equal / not zero */

loc_0015FD0C: ;
    /* nop */

loc_0015FD10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FD16u); RECOMP_ABI_CALL(0x0015EE60u, sub_0015EE60); /* call 0x0015EE60 */

loc_0015FD16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FD4B; /* je: equal / zero */

loc_0015FD1D: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0015FD10; /* jl: less (signed <) */

loc_0015FD2F: ;
    MEM8(esi + 3) = 1;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FD10; /* je: equal / zero */

loc_0015FD3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FD40u); RECOMP_ABI_CALL(0x0015EEE0u, sub_0015EEE0); /* call 0x0015EEE0 */

loc_0015FD40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015FD4B; /* jle: less or equal (signed <=) */

loc_0015FD47: ;
    MEM8(esi + 1) = 3;

loc_0015FD4B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD50
 * Original: 0x0015FD50 - 0x0015FD72 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FD50: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FD64; /* jne: not equal / not zero */

loc_0015FD5B: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0015FC00(); return; /* tail jmp 0x0015FC00 */

loc_0015FD64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FD71; /* jne: not equal / not zero */

loc_0015FD68: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0015FD00(); return; /* tail jmp 0x0015FD00 */

loc_0015FD71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD80
 * Original: 0x0015FD80 - 0x0015FDA4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD80: ;
    PUSH32(esp, esi);
    esi = 0x98C500;

loc_0015FD86: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FD94; /* jne: not equal / not zero */

loc_0015FD8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FD91u); RECOMP_ABI_CALL(0x0015FD50u, sub_0015FD50); /* call 0x0015FD50 */

loc_0015FD91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015FD94: ;
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98DCC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98DCC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FD86; /* jl: less (signed <) */

loc_0015FDA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FDB0
 * Original: 0x0015FDB0 - 0x0015FDBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDB0: ;
    eax = 0x2B1F00;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FDC0
 * Original: 0x0015FDC0 - 0x0015FDE0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDC0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0015102B(); return; /* tail jmp 0x0015102B */

    eax = 0x2B1F24;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0015FDC8
 * Original: 0x0015FDC8 - 0x0015FDD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDC8: ;
    eax = 0x2B1F24;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FDE0
 * Original: 0x0015FDE0 - 0x0015FDE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDE0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00060C20(); return; /* tail jmp 0x00060C20 */

}

/**
 * sub_0015FDE8
 * Original: 0x0015FDE8 - 0x0015FDF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDE8: ;
    eax = 0x2B1FBC;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FE00
 * Original: 0x0015FE00 - 0x0015FE20 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0015102B(); return; /* tail jmp 0x0015102B */

    eax = 0x2B1FE0;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0015FE08
 * Original: 0x0015FE08 - 0x0015FE12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE08: ;
    eax = 0x2B1FE0;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FE20
 * Original: 0x0015FE20 - 0x0015FE28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE20: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00060C20(); return; /* tail jmp 0x00060C20 */

}

/**
 * sub_0015FE28
 * Original: 0x0015FE28 - 0x0015FE32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE28: ;
    eax = 0x2B2004;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FE40
 * Original: 0x0015FE40 - 0x0015FE4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE40: ;
    eax = 0x2B2054;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FE50
 * Original: 0x0015FE50 - 0x0015FE5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE50: ;
    eax = MEM32(ebp + -8232);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FE5Cu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0015FE5C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FE5E
 * Original: 0x0015FE5E - 0x0015FE68 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE5E: ;
    eax = 0x2B2078;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FE70
 * Original: 0x0015FE70 - 0x0015FE78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE70: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0005FA60(); return; /* tail jmp 0x0005FA60 */

}

/**
 * sub_0015FE78
 * Original: 0x0015FE78 - 0x0015FE80 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE78: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_00060C50(); return; /* tail jmp 0x00060C50 */

}

/**
 * sub_0015FE80
 * Original: 0x0015FE80 - 0x0015FEA0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE80: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_00060C50(); return; /* tail jmp 0x00060C50 */

    eax = 0x2B20AC;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0015FE88
 * Original: 0x0015FE88 - 0x0015FE92 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FE88: ;
    eax = 0x2B20AC;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FEA0
 * Original: 0x0015FEA0 - 0x0015FEC0 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEA0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0006D810(); return; /* tail jmp 0x0006D810 */

    eax = 0x2B20D0;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

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
 * sub_0015FEAB
 * Original: 0x0015FEAB - 0x0015FEB5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEAB: ;
    eax = 0x2B20D0;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FEC0
 * Original: 0x0015FEC0 - 0x0015FEC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEC0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00095F30(); return; /* tail jmp 0x00095F30 */

}

/**
 * sub_0015FEC8
 * Original: 0x0015FEC8 - 0x0015FED2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEC8: ;
    eax = 0x2B20F4;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FEE0
 * Original: 0x0015FEE0 - 0x0015FEF2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEE0: ;
    PUSH32(esp, 0x98B214);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FEEEu); RECOMP_ABI_CALL(0x0015228Au, sub_0015228A); /* call 0x0015228A */

loc_0015FEEE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FEF2
 * Original: 0x0015FEF2 - 0x0015FEFC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEF2: ;
    eax = 0x2B2118;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FF00
 * Original: 0x0015FF00 - 0x0015FF12 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF00: ;
    PUSH32(esp, 0x98B214);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FF0Eu); RECOMP_ABI_CALL(0x0015228Au, sub_0015228A); /* call 0x0015228A */

loc_0015FF0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FF12
 * Original: 0x0015FF12 - 0x0015FF1C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF12: ;
    eax = 0x2B213C;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FF20
 * Original: 0x0015FF20 - 0x0015FF28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF20: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00060C20(); return; /* tail jmp 0x00060C20 */

}

/**
 * sub_0015FF28
 * Original: 0x0015FF28 - 0x0015FF32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF28: ;
    eax = 0x2B2160;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FF40
 * Original: 0x0015FF40 - 0x0015FF4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF40: ;
    ecx = ebp + -196;
    g_seh_ebp = ebp; sub_000A8F60(); return; /* tail jmp 0x000A8F60 */

}

/**
 * sub_0015FF4B
 * Original: 0x0015FF4B - 0x0015FF55 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF4B: ;
    eax = 0x2B2184;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FF5F
 * Original: 0x0015FF5F - 0x0015FF71 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF5F: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00060C20(); return; /* tail jmp 0x00060C20 */

    eax = 0x2B2234;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

}

/**
 * sub_0015FF71
 * Original: 0x0015FF71 - 0x0015FF90 (31 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF71: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00060C20(); return; /* tail jmp 0x00060C20 */

    eax = 0x2B2258;
    g_seh_ebp = ebp; sub_00150B2A(); return; /* tail jmp 0x00150B2A */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0015FF90
 * Original: 0x0015FF90 - 0x0015FFAC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FF90: ;
    ecx = 0x91E2E8;
    edx = 4;
    /* nop */

loc_0015FFA0: ;
    PUSH32(esp, 0x0015FFA5u); RECOMP_ABI_CALL(0x00083550u, sub_00083550); /* call 0x00083550 */

loc_0015FFA5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015FFA0; /* jne: not equal / not zero */

loc_0015FFAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFB0
 * Original: 0x0015FFB0 - 0x0015FFC0 (16 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FFB0: ;
    ecx = 0x91E368;
    edx = 7;
    /* nop */

    g_seh_ebp = ebp; sub_0015FFC0(); return; /* fallthrough 0x0015FFC0 */

}

/**
 * sub_0015FFC0
 * Original: 0x0015FFC0 - 0x0015FFCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FFC0: ;
    PUSH32(esp, 0x0015FFC5u); RECOMP_ABI_CALL(0x000835B0u, sub_000835B0); /* call 0x000835B0 */

loc_0015FFC5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015FFC0; /* jne: not equal / not zero */

loc_0015FFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFC8
 * Original: 0x0015FFC8 - 0x0015FFCC (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FFC8: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0015FFC0(); return; } /* jne: not equal / not zero */

loc_0015FFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFD0
 * Original: 0x0015FFD0 - 0x0015FFDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FFD0: ;
    ecx = 0x91E42C;
    g_seh_ebp = ebp; sub_000835B0(); return; /* tail jmp 0x000835B0 */

}

/**
 * sub_0015FFE0
 * Original: 0x0015FFE0 - 0x00160017 (55 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FFE0: ;
    PUSH32(esp, 0x2386E0);
    PUSH32(esp, 0x0015FFEAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0015FFEA: ;
    PUSH32(esp, 0x238668);
    MEM32(0x2E68B8) = eax;
    PUSH32(esp, 0x0015FFF9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0015FFF9: ;
    PUSH32(esp, 0x238630);
    MEM32(0x2E68BC) = eax;
    PUSH32(esp, 0x00160008u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160008: ;
    PUSH32(esp, 0x2385C0);
    MEM32(0x2E68C0) = eax;
    PUSH32(esp, 0x00160017u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

    g_seh_ebp = ebp; sub_00160017(); return; /* fallthrough 0x00160017 */

}

/**
 * sub_00160017
 * Original: 0x00160017 - 0x00160275 (606 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160017(void)
{

loc_00160017: ;
    PUSH32(esp, 0x238570);
    MEM32(0x2E68C4) = eax;
    PUSH32(esp, 0x00160026u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160026: ;
    PUSH32(esp, 0x238390);
    MEM32(0x2E68C8) = eax;
    PUSH32(esp, 0x00160035u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160035: ;
    PUSH32(esp, 0x238220);
    MEM32(0x2E68CC) = eax;
    PUSH32(esp, 0x00160044u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160044: ;
    PUSH32(esp, 0x2381C0);
    MEM32(0x2E68D0) = eax;
    PUSH32(esp, 0x00160053u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160053: ;
    PUSH32(esp, 0x2380E0);
    MEM32(0x2E68D4) = eax;
    PUSH32(esp, 0x00160062u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160062: ;
    PUSH32(esp, 0x237F70);
    MEM32(0x2E68D8) = eax;
    PUSH32(esp, 0x00160071u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160071: ;
    PUSH32(esp, 0x237E88);
    MEM32(0x2E68DC) = eax;
    PUSH32(esp, 0x00160080u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160080: ;
    PUSH32(esp, 0x237B60);
    MEM32(0x2E68E0) = eax;
    PUSH32(esp, 0x0016008Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016008F: ;
    PUSH32(esp, 0x237B08);
    MEM32(0x2E68E4) = eax;
    PUSH32(esp, 0x0016009Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016009E: ;
    PUSH32(esp, 0x237A18);
    MEM32(0x2E68E8) = eax;
    PUSH32(esp, 0x001600ADu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600AD: ;
    PUSH32(esp, 0x237948);
    MEM32(0x2E68EC) = eax;
    PUSH32(esp, 0x001600BCu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600BC: ;
    PUSH32(esp, 0x237868);
    MEM32(0x2E68F0) = eax;
    PUSH32(esp, 0x001600CBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600CB: ;
    PUSH32(esp, 0x2377B8);
    MEM32(0x2E68F4) = eax;
    PUSH32(esp, 0x001600DAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600DA: ;
    PUSH32(esp, 0x237778);
    MEM32(0x2E68F8) = eax;
    PUSH32(esp, 0x001600E9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600E9: ;
    PUSH32(esp, 0x2376E8);
    MEM32(0x2E68FC) = eax;
    PUSH32(esp, 0x001600F8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600F8: ;
    PUSH32(esp, 0x2375E8);
    MEM32(0x2E6900) = eax;
    PUSH32(esp, 0x00160107u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160107: ;
    PUSH32(esp, 0x2375B8);
    MEM32(0x2E6904) = eax;
    PUSH32(esp, 0x00160116u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160116: ;
    PUSH32(esp, 0x237590);
    MEM32(0x2E6908) = eax;
    PUSH32(esp, 0x00160125u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160125: ;
    PUSH32(esp, 0x23758C);
    MEM32(0x2E690C) = eax;
    PUSH32(esp, 0x00160134u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160134: ;
    PUSH32(esp, 0x237570);
    MEM32(0x2E6910) = eax;
    PUSH32(esp, 0x00160143u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160143: ;
    PUSH32(esp, 0x237550);
    MEM32(0x2E6914) = eax;
    PUSH32(esp, 0x00160152u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160152: ;
    PUSH32(esp, 0x237460);
    MEM32(0x2E6918) = eax;
    PUSH32(esp, 0x00160161u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160161: ;
    PUSH32(esp, 0x2373A8);
    MEM32(0x2E691C) = eax;
    PUSH32(esp, 0x00160170u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160170: ;
    MEM32(0x2E6920) = eax;
    PUSH32(esp, 0x237318);
    PUSH32(esp, 0x0016017Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016017F: ;
    PUSH32(esp, 0x2372C8);
    MEM32(0x2E6924) = eax;
    PUSH32(esp, 0x0016018Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016018E: ;
    PUSH32(esp, 0x2371F8);
    MEM32(0x2E6928) = eax;
    PUSH32(esp, 0x0016019Du); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016019D: ;
    PUSH32(esp, 0x2371B0);
    MEM32(0x2E692C) = eax;
    PUSH32(esp, 0x001601ACu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601AC: ;
    PUSH32(esp, 0x237188);
    MEM32(0x2E6930) = eax;
    PUSH32(esp, 0x001601BBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601BB: ;
    PUSH32(esp, 0x237170);
    MEM32(0x2E6934) = eax;
    PUSH32(esp, 0x001601CAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601CA: ;
    PUSH32(esp, 0x23714C);
    MEM32(0x2E6938) = eax;
    PUSH32(esp, 0x001601D9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601D9: ;
    PUSH32(esp, 0x237114);
    MEM32(0x2E693C) = eax;
    PUSH32(esp, 0x001601E8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601E8: ;
    PUSH32(esp, 0x2370EC);
    MEM32(0x2E6940) = eax;
    PUSH32(esp, 0x001601F7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601F7: ;
    PUSH32(esp, 0x2370A8);
    MEM32(0x2E6944) = eax;
    PUSH32(esp, 0x00160206u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160206: ;
    PUSH32(esp, 0x237050);
    MEM32(0x2E6948) = eax;
    PUSH32(esp, 0x00160215u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160215: ;
    PUSH32(esp, 0x237024);
    MEM32(0x2E694C) = eax;
    PUSH32(esp, 0x00160224u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160224: ;
    PUSH32(esp, 0x236F98);
    MEM32(0x2E6950) = eax;
    PUSH32(esp, 0x00160233u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160233: ;
    PUSH32(esp, 0x236F88);
    MEM32(0x2E6954) = eax;
    PUSH32(esp, 0x00160242u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160242: ;
    PUSH32(esp, 0x236F40);
    MEM32(0x2E6958) = eax;
    PUSH32(esp, 0x00160251u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160251: ;
    PUSH32(esp, 0x236EF8);
    MEM32(0x2E695C) = eax;
    PUSH32(esp, 0x00160260u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160260: ;
    PUSH32(esp, 0x236EC8);
    MEM32(0x2E6960) = eax;
    PUSH32(esp, 0x0016026Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016026F: ;
    MEM32(0x2E6964) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016001C
 * Original: 0x0016001C - 0x00160275 (601 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016001C(void)
{

loc_0016001C: ;
    MEM32(0x2E68C4) = eax;
    PUSH32(esp, 0x00160026u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160026: ;
    PUSH32(esp, 0x238390);
    MEM32(0x2E68C8) = eax;
    PUSH32(esp, 0x00160035u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160035: ;
    PUSH32(esp, 0x238220);
    MEM32(0x2E68CC) = eax;
    PUSH32(esp, 0x00160044u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160044: ;
    PUSH32(esp, 0x2381C0);
    MEM32(0x2E68D0) = eax;
    PUSH32(esp, 0x00160053u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160053: ;
    PUSH32(esp, 0x2380E0);
    MEM32(0x2E68D4) = eax;
    PUSH32(esp, 0x00160062u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160062: ;
    PUSH32(esp, 0x237F70);
    MEM32(0x2E68D8) = eax;
    PUSH32(esp, 0x00160071u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160071: ;
    PUSH32(esp, 0x237E88);
    MEM32(0x2E68DC) = eax;
    PUSH32(esp, 0x00160080u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160080: ;
    PUSH32(esp, 0x237B60);
    MEM32(0x2E68E0) = eax;
    PUSH32(esp, 0x0016008Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016008F: ;
    PUSH32(esp, 0x237B08);
    MEM32(0x2E68E4) = eax;
    PUSH32(esp, 0x0016009Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016009E: ;
    PUSH32(esp, 0x237A18);
    MEM32(0x2E68E8) = eax;
    PUSH32(esp, 0x001600ADu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600AD: ;
    PUSH32(esp, 0x237948);
    MEM32(0x2E68EC) = eax;
    PUSH32(esp, 0x001600BCu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600BC: ;
    PUSH32(esp, 0x237868);
    MEM32(0x2E68F0) = eax;
    PUSH32(esp, 0x001600CBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600CB: ;
    PUSH32(esp, 0x2377B8);
    MEM32(0x2E68F4) = eax;
    PUSH32(esp, 0x001600DAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600DA: ;
    PUSH32(esp, 0x237778);
    MEM32(0x2E68F8) = eax;
    PUSH32(esp, 0x001600E9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600E9: ;
    PUSH32(esp, 0x2376E8);
    MEM32(0x2E68FC) = eax;
    PUSH32(esp, 0x001600F8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600F8: ;
    PUSH32(esp, 0x2375E8);
    MEM32(0x2E6900) = eax;
    PUSH32(esp, 0x00160107u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160107: ;
    PUSH32(esp, 0x2375B8);
    MEM32(0x2E6904) = eax;
    PUSH32(esp, 0x00160116u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160116: ;
    PUSH32(esp, 0x237590);
    MEM32(0x2E6908) = eax;
    PUSH32(esp, 0x00160125u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160125: ;
    PUSH32(esp, 0x23758C);
    MEM32(0x2E690C) = eax;
    PUSH32(esp, 0x00160134u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160134: ;
    PUSH32(esp, 0x237570);
    MEM32(0x2E6910) = eax;
    PUSH32(esp, 0x00160143u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160143: ;
    PUSH32(esp, 0x237550);
    MEM32(0x2E6914) = eax;
    PUSH32(esp, 0x00160152u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160152: ;
    PUSH32(esp, 0x237460);
    MEM32(0x2E6918) = eax;
    PUSH32(esp, 0x00160161u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160161: ;
    PUSH32(esp, 0x2373A8);
    MEM32(0x2E691C) = eax;
    PUSH32(esp, 0x00160170u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160170: ;
    MEM32(0x2E6920) = eax;
    PUSH32(esp, 0x237318);
    PUSH32(esp, 0x0016017Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016017F: ;
    PUSH32(esp, 0x2372C8);
    MEM32(0x2E6924) = eax;
    PUSH32(esp, 0x0016018Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016018E: ;
    PUSH32(esp, 0x2371F8);
    MEM32(0x2E6928) = eax;
    PUSH32(esp, 0x0016019Du); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016019D: ;
    PUSH32(esp, 0x2371B0);
    MEM32(0x2E692C) = eax;
    PUSH32(esp, 0x001601ACu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601AC: ;
    PUSH32(esp, 0x237188);
    MEM32(0x2E6930) = eax;
    PUSH32(esp, 0x001601BBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601BB: ;
    PUSH32(esp, 0x237170);
    MEM32(0x2E6934) = eax;
    PUSH32(esp, 0x001601CAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601CA: ;
    PUSH32(esp, 0x23714C);
    MEM32(0x2E6938) = eax;
    PUSH32(esp, 0x001601D9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601D9: ;
    PUSH32(esp, 0x237114);
    MEM32(0x2E693C) = eax;
    PUSH32(esp, 0x001601E8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601E8: ;
    PUSH32(esp, 0x2370EC);
    MEM32(0x2E6940) = eax;
    PUSH32(esp, 0x001601F7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601F7: ;
    PUSH32(esp, 0x2370A8);
    MEM32(0x2E6944) = eax;
    PUSH32(esp, 0x00160206u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160206: ;
    PUSH32(esp, 0x237050);
    MEM32(0x2E6948) = eax;
    PUSH32(esp, 0x00160215u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160215: ;
    PUSH32(esp, 0x237024);
    MEM32(0x2E694C) = eax;
    PUSH32(esp, 0x00160224u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160224: ;
    PUSH32(esp, 0x236F98);
    MEM32(0x2E6950) = eax;
    PUSH32(esp, 0x00160233u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160233: ;
    PUSH32(esp, 0x236F88);
    MEM32(0x2E6954) = eax;
    PUSH32(esp, 0x00160242u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160242: ;
    PUSH32(esp, 0x236F40);
    MEM32(0x2E6958) = eax;
    PUSH32(esp, 0x00160251u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160251: ;
    PUSH32(esp, 0x236EF8);
    MEM32(0x2E695C) = eax;
    PUSH32(esp, 0x00160260u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160260: ;
    PUSH32(esp, 0x236EC8);
    MEM32(0x2E6960) = eax;
    PUSH32(esp, 0x0016026Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016026F: ;
    MEM32(0x2E6964) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00160026
 * Original: 0x00160026 - 0x00160275 (591 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160026(void)
{

loc_00160026: ;
    PUSH32(esp, 0x238390);
    MEM32(0x2E68C8) = eax;
    PUSH32(esp, 0x00160035u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160035: ;
    PUSH32(esp, 0x238220);
    MEM32(0x2E68CC) = eax;
    PUSH32(esp, 0x00160044u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160044: ;
    PUSH32(esp, 0x2381C0);
    MEM32(0x2E68D0) = eax;
    PUSH32(esp, 0x00160053u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160053: ;
    PUSH32(esp, 0x2380E0);
    MEM32(0x2E68D4) = eax;
    PUSH32(esp, 0x00160062u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160062: ;
    PUSH32(esp, 0x237F70);
    MEM32(0x2E68D8) = eax;
    PUSH32(esp, 0x00160071u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160071: ;
    PUSH32(esp, 0x237E88);
    MEM32(0x2E68DC) = eax;
    PUSH32(esp, 0x00160080u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160080: ;
    PUSH32(esp, 0x237B60);
    MEM32(0x2E68E0) = eax;
    PUSH32(esp, 0x0016008Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016008F: ;
    PUSH32(esp, 0x237B08);
    MEM32(0x2E68E4) = eax;
    PUSH32(esp, 0x0016009Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016009E: ;
    PUSH32(esp, 0x237A18);
    MEM32(0x2E68E8) = eax;
    PUSH32(esp, 0x001600ADu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600AD: ;
    PUSH32(esp, 0x237948);
    MEM32(0x2E68EC) = eax;
    PUSH32(esp, 0x001600BCu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600BC: ;
    PUSH32(esp, 0x237868);
    MEM32(0x2E68F0) = eax;
    PUSH32(esp, 0x001600CBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600CB: ;
    PUSH32(esp, 0x2377B8);
    MEM32(0x2E68F4) = eax;
    PUSH32(esp, 0x001600DAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600DA: ;
    PUSH32(esp, 0x237778);
    MEM32(0x2E68F8) = eax;
    PUSH32(esp, 0x001600E9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600E9: ;
    PUSH32(esp, 0x2376E8);
    MEM32(0x2E68FC) = eax;
    PUSH32(esp, 0x001600F8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600F8: ;
    PUSH32(esp, 0x2375E8);
    MEM32(0x2E6900) = eax;
    PUSH32(esp, 0x00160107u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160107: ;
    PUSH32(esp, 0x2375B8);
    MEM32(0x2E6904) = eax;
    PUSH32(esp, 0x00160116u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160116: ;
    PUSH32(esp, 0x237590);
    MEM32(0x2E6908) = eax;
    PUSH32(esp, 0x00160125u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160125: ;
    PUSH32(esp, 0x23758C);
    MEM32(0x2E690C) = eax;
    PUSH32(esp, 0x00160134u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160134: ;
    PUSH32(esp, 0x237570);
    MEM32(0x2E6910) = eax;
    PUSH32(esp, 0x00160143u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160143: ;
    PUSH32(esp, 0x237550);
    MEM32(0x2E6914) = eax;
    PUSH32(esp, 0x00160152u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160152: ;
    PUSH32(esp, 0x237460);
    MEM32(0x2E6918) = eax;
    PUSH32(esp, 0x00160161u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160161: ;
    PUSH32(esp, 0x2373A8);
    MEM32(0x2E691C) = eax;
    PUSH32(esp, 0x00160170u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160170: ;
    MEM32(0x2E6920) = eax;
    PUSH32(esp, 0x237318);
    PUSH32(esp, 0x0016017Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016017F: ;
    PUSH32(esp, 0x2372C8);
    MEM32(0x2E6924) = eax;
    PUSH32(esp, 0x0016018Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016018E: ;
    PUSH32(esp, 0x2371F8);
    MEM32(0x2E6928) = eax;
    PUSH32(esp, 0x0016019Du); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016019D: ;
    PUSH32(esp, 0x2371B0);
    MEM32(0x2E692C) = eax;
    PUSH32(esp, 0x001601ACu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601AC: ;
    PUSH32(esp, 0x237188);
    MEM32(0x2E6930) = eax;
    PUSH32(esp, 0x001601BBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601BB: ;
    PUSH32(esp, 0x237170);
    MEM32(0x2E6934) = eax;
    PUSH32(esp, 0x001601CAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601CA: ;
    PUSH32(esp, 0x23714C);
    MEM32(0x2E6938) = eax;
    PUSH32(esp, 0x001601D9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601D9: ;
    PUSH32(esp, 0x237114);
    MEM32(0x2E693C) = eax;
    PUSH32(esp, 0x001601E8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601E8: ;
    PUSH32(esp, 0x2370EC);
    MEM32(0x2E6940) = eax;
    PUSH32(esp, 0x001601F7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601F7: ;
    PUSH32(esp, 0x2370A8);
    MEM32(0x2E6944) = eax;
    PUSH32(esp, 0x00160206u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160206: ;
    PUSH32(esp, 0x237050);
    MEM32(0x2E6948) = eax;
    PUSH32(esp, 0x00160215u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160215: ;
    PUSH32(esp, 0x237024);
    MEM32(0x2E694C) = eax;
    PUSH32(esp, 0x00160224u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160224: ;
    PUSH32(esp, 0x236F98);
    MEM32(0x2E6950) = eax;
    PUSH32(esp, 0x00160233u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160233: ;
    PUSH32(esp, 0x236F88);
    MEM32(0x2E6954) = eax;
    PUSH32(esp, 0x00160242u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160242: ;
    PUSH32(esp, 0x236F40);
    MEM32(0x2E6958) = eax;
    PUSH32(esp, 0x00160251u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160251: ;
    PUSH32(esp, 0x236EF8);
    MEM32(0x2E695C) = eax;
    PUSH32(esp, 0x00160260u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160260: ;
    PUSH32(esp, 0x236EC8);
    MEM32(0x2E6960) = eax;
    PUSH32(esp, 0x0016026Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016026F: ;
    MEM32(0x2E6964) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00160049
 * Original: 0x00160049 - 0x00160275 (556 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160049(void)
{

loc_00160049: ;
    MEM32(0x2E68D0) = eax;
    PUSH32(esp, 0x00160053u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160053: ;
    PUSH32(esp, 0x2380E0);
    MEM32(0x2E68D4) = eax;
    PUSH32(esp, 0x00160062u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160062: ;
    PUSH32(esp, 0x237F70);
    MEM32(0x2E68D8) = eax;
    PUSH32(esp, 0x00160071u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160071: ;
    PUSH32(esp, 0x237E88);
    MEM32(0x2E68DC) = eax;
    PUSH32(esp, 0x00160080u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160080: ;
    PUSH32(esp, 0x237B60);
    MEM32(0x2E68E0) = eax;
    PUSH32(esp, 0x0016008Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016008F: ;
    PUSH32(esp, 0x237B08);
    MEM32(0x2E68E4) = eax;
    PUSH32(esp, 0x0016009Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016009E: ;
    PUSH32(esp, 0x237A18);
    MEM32(0x2E68E8) = eax;
    PUSH32(esp, 0x001600ADu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600AD: ;
    PUSH32(esp, 0x237948);
    MEM32(0x2E68EC) = eax;
    PUSH32(esp, 0x001600BCu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600BC: ;
    PUSH32(esp, 0x237868);
    MEM32(0x2E68F0) = eax;
    PUSH32(esp, 0x001600CBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600CB: ;
    PUSH32(esp, 0x2377B8);
    MEM32(0x2E68F4) = eax;
    PUSH32(esp, 0x001600DAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600DA: ;
    PUSH32(esp, 0x237778);
    MEM32(0x2E68F8) = eax;
    PUSH32(esp, 0x001600E9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600E9: ;
    PUSH32(esp, 0x2376E8);
    MEM32(0x2E68FC) = eax;
    PUSH32(esp, 0x001600F8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001600F8: ;
    PUSH32(esp, 0x2375E8);
    MEM32(0x2E6900) = eax;
    PUSH32(esp, 0x00160107u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160107: ;
    PUSH32(esp, 0x2375B8);
    MEM32(0x2E6904) = eax;
    PUSH32(esp, 0x00160116u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160116: ;
    PUSH32(esp, 0x237590);
    MEM32(0x2E6908) = eax;
    PUSH32(esp, 0x00160125u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160125: ;
    PUSH32(esp, 0x23758C);
    MEM32(0x2E690C) = eax;
    PUSH32(esp, 0x00160134u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160134: ;
    PUSH32(esp, 0x237570);
    MEM32(0x2E6910) = eax;
    PUSH32(esp, 0x00160143u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160143: ;
    PUSH32(esp, 0x237550);
    MEM32(0x2E6914) = eax;
    PUSH32(esp, 0x00160152u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160152: ;
    PUSH32(esp, 0x237460);
    MEM32(0x2E6918) = eax;
    PUSH32(esp, 0x00160161u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160161: ;
    PUSH32(esp, 0x2373A8);
    MEM32(0x2E691C) = eax;
    PUSH32(esp, 0x00160170u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160170: ;
    MEM32(0x2E6920) = eax;
    PUSH32(esp, 0x237318);
    PUSH32(esp, 0x0016017Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016017F: ;
    PUSH32(esp, 0x2372C8);
    MEM32(0x2E6924) = eax;
    PUSH32(esp, 0x0016018Eu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016018E: ;
    PUSH32(esp, 0x2371F8);
    MEM32(0x2E6928) = eax;
    PUSH32(esp, 0x0016019Du); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016019D: ;
    PUSH32(esp, 0x2371B0);
    MEM32(0x2E692C) = eax;
    PUSH32(esp, 0x001601ACu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601AC: ;
    PUSH32(esp, 0x237188);
    MEM32(0x2E6930) = eax;
    PUSH32(esp, 0x001601BBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601BB: ;
    PUSH32(esp, 0x237170);
    MEM32(0x2E6934) = eax;
    PUSH32(esp, 0x001601CAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601CA: ;
    PUSH32(esp, 0x23714C);
    MEM32(0x2E6938) = eax;
    PUSH32(esp, 0x001601D9u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601D9: ;
    PUSH32(esp, 0x237114);
    MEM32(0x2E693C) = eax;
    PUSH32(esp, 0x001601E8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601E8: ;
    PUSH32(esp, 0x2370EC);
    MEM32(0x2E6940) = eax;
    PUSH32(esp, 0x001601F7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001601F7: ;
    PUSH32(esp, 0x2370A8);
    MEM32(0x2E6944) = eax;
    PUSH32(esp, 0x00160206u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160206: ;
    PUSH32(esp, 0x237050);
    MEM32(0x2E6948) = eax;
    PUSH32(esp, 0x00160215u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160215: ;
    PUSH32(esp, 0x237024);
    MEM32(0x2E694C) = eax;
    PUSH32(esp, 0x00160224u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160224: ;
    PUSH32(esp, 0x236F98);
    MEM32(0x2E6950) = eax;
    PUSH32(esp, 0x00160233u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160233: ;
    PUSH32(esp, 0x236F88);
    MEM32(0x2E6954) = eax;
    PUSH32(esp, 0x00160242u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160242: ;
    PUSH32(esp, 0x236F40);
    MEM32(0x2E6958) = eax;
    PUSH32(esp, 0x00160251u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160251: ;
    PUSH32(esp, 0x236EF8);
    MEM32(0x2E695C) = eax;
    PUSH32(esp, 0x00160260u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00160260: ;
    PUSH32(esp, 0x236EC8);
    MEM32(0x2E6960) = eax;
    PUSH32(esp, 0x0016026Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_0016026F: ;
    MEM32(0x2E6964) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00160280
 * Original: 0x00160280 - 0x0016029B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160280(void)
{

loc_00160280: ;
    PUSH32(esp, 0x1571);
    ecx = 0x935B60;
    PUSH32(esp, 0x0016028Fu); RECOMP_ABI_CALL(0x000A2CB0u, sub_000A2CB0); /* call 0x000A2CB0 */

loc_0016028F: ;
    PUSH32(esp, 0x160300);
    PUSH32(esp, 0x00160299u); RECOMP_ABI_CALL(0x001524A1u, sub_001524A1); /* call 0x001524A1 */

loc_00160299: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001602A0
 * Original: 0x001602A0 - 0x001602BE (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001602A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001602A0: ;
    ecx = 0x945758;
    PUSH32(esp, 0x001602AAu); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_001602AA: ;
    ecx = 0x94575C;
    PUSH32(esp, 0x001602B4u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_001602B4: ;
    ecx = 0x945761;
    g_seh_ebp = ebp; sub_000A3830(); return; /* tail jmp 0x000A3830 */

}

/**
 * sub_001602C0
 * Original: 0x001602C0 - 0x001602F3 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001602C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001602C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x9578A1;
    edi = 2;
    /* nop */

loc_001602D0: ;
    ecx = esi + -9;
    PUSH32(esp, 0x001602D8u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_001602D8: ;
    ecx = esi + -5;
    PUSH32(esp, 0x001602E0u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_001602E0: ;
    ecx = esi;
    PUSH32(esp, 0x001602E7u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_001602E7: ;
    _fb = (uint32_t)(0x12140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x12140;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001602D0; /* jne: not equal / not zero */

loc_001602F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00160300
 * Original: 0x00160300 - 0x0016030A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160300: ;
    ecx = 0x935B60;
    g_seh_ebp = ebp; sub_000A2A30(); return; /* tail jmp 0x000A2A30 */

}

/**
 * sub_00160320
 * Original: 0x00160320 - 0x00160339 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x24800000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160332u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00160332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160339(); return; } /* jne: not equal / not zero */

loc_00160336: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160339
 * Original: 0x00160339 - 0x00160354 (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160339(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160339: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x1010001;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160360
 * Original: 0x00160360 - 0x00160363 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160360(void)
{

loc_00160360: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160370
 * Original: 0x00160370 - 0x00160373 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160370(void)
{

loc_00160370: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160380
 * Original: 0x00160380 - 0x0016038C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160380: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160390
 * Original: 0x00160390 - 0x0016039C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160390: ;
    eax = MEM32(esp + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001603A0
 * Original: 0x001603A0 - 0x001603D3 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001603A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001603A0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001603AC; /* je: equal / zero */

loc_001603A5: ;
    eax = 3;
    goto loc_001603B8;

loc_001603AC: ;
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

loc_001603B8: ;
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
    PUSH32(esp, 0x001603D0u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_001603D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001603E0
 * Original: 0x001603E0 - 0x001603EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001603E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001603E0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001603F0
 * Original: 0x001603F0 - 0x001603F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001603F0(void)
{

loc_001603F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160400
 * Original: 0x00160400 - 0x0016040C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160400: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00160410
 * Original: 0x00160410 - 0x00160413 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160410(void)
{

loc_00160410: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00160420
 * Original: 0x00160420 - 0x0016042F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160420: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160430
 * Original: 0x00160430 - 0x0016043D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160430: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016043C; /* jb: below (unsigned <) */

loc_00160437: ;
    g_seh_ebp = ebp; sub_0016B760(); return; /* tail jmp 0x0016B760 */

loc_0016043C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160440
 * Original: 0x00160440 - 0x00160449 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160440(void)
{

loc_00160440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160450
 * Original: 0x00160450 - 0x00160487 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160450: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0016045Du); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016045D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160481; /* je: equal / zero */

loc_00160463: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160472u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00160472: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160487(); return; } /* jne: not equal / not zero */

loc_00160476: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00160481u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00160481: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160487
 * Original: 0x00160487 - 0x0016049B (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160487(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160487: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1000001;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001604A0
 * Original: 0x001604A0 - 0x001604EB (75 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001604A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001604A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001604CF; /* jne: not equal / not zero */

loc_001604AB: ;
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001604BD; /* jb: below (unsigned <) */

loc_001604B8: ;
    PUSH32(esp, 0x001604BDu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001604BD: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_001604CF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xA0 (8-bit) */
    esi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_001604DE; /* jne: not equal / not zero */

loc_001604D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001604DEu); RECOMP_ABI_CALL(0x0016B860u, sub_0016B860); /* call 0x0016B860 */

loc_001604DE: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001604F0
 * Original: 0x001604F0 - 0x0016050C (28 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001604F0(void)
{

loc_001604F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64;
    PUSH32(esp, 0x00160505u); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_00160505: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160510
 * Original: 0x00160510 - 0x00160524 (20 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160510(void)
{

loc_00160510: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x65;
    MEM32(eax + 4) = 7;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160530
 * Original: 0x00160530 - 0x00160547 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160530: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0016053Du); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016053D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160547(); return; } /* jne: not equal / not zero */

loc_00160543: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160547
 * Original: 0x00160547 - 0x00160574 (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160547(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160547: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi * 4 + 0x175CA0);
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016055Eu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016055E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160574(); return; } /* jne: not equal / not zero */

loc_00160562: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016056Du); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016056D: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160574
 * Original: 0x00160574 - 0x0016058E (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160574(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160574: ;
    esi = esi << 0x1E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | 0x1030001;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160590
 * Original: 0x00160590 - 0x001605AE (30 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160590: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 0xA0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_001605A2; /* jne: not equal / not zero */

loc_0016059C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001605A2u); RECOMP_ABI_CALL(0x0016B860u, sub_0016B860); /* call 0x0016B860 */

loc_001605A2: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001605B0
 * Original: 0x001605B0 - 0x001605BC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001605B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001605B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001605C0
 * Original: 0x001605C0 - 0x001605D6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001605C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001605C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x17FD80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x17FD80;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160606(); return; } /* je: equal / zero */

loc_001605D1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);

    g_seh_ebp = ebp; sub_001605D6(); return; /* fallthrough 0x001605D6 */

}

/**
 * sub_001605D6
 * Original: 0x001605D6 - 0x001605FD (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001605D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001605D6: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001605FD(); return; } /* jne: not equal / not zero */

loc_001605DB: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001605EE; /* je: equal / zero */

loc_001605E5: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001605EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001605EBu); } /* indirect call */
    }

loc_001605EE: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001605F9u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001605F9: ;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_00160601(); return; /* tail jmp 0x00160601 */

}

/**
 * sub_001605FD
 * Original: 0x001605FD - 0x00160601 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001605FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001605FD: ;
    edi = esi;
    esi = MEM32(esi);

    g_seh_ebp = ebp; sub_00160601(); return; /* fallthrough 0x00160601 */

}

/**
 * sub_00160601
 * Original: 0x00160601 - 0x00160606 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160601(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160601: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001605D6(); return; } /* jne: not equal / not zero */

loc_00160605: ;
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_00160606(); return; /* fallthrough 0x00160606 */

}

/**
 * sub_00160606
 * Original: 0x00160606 - 0x0016060B (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160606(void)
{

loc_00160606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160610
 * Original: 0x00160610 - 0x0016062B (27 bytes, 11 insns)
 * Category: crt
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160610: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160630
 * Original: 0x00160630 - 0x0016064B (27 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160630: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160650
 * Original: 0x00160650 - 0x00160655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160650: ;
    g_seh_ebp = ebp; sub_00162F90(); return; /* tail jmp 0x00162F90 */

}

/**
 * sub_00160660
 * Original: 0x00160660 - 0x00160663 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160660(void)
{

loc_00160660: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160670
 * Original: 0x00160670 - 0x0016067C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160670(void)
{

loc_00160670: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016067Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016067B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160680
 * Original: 0x00160680 - 0x00160698 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00160680: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x50000));
    eax = eax - 0x50000;
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
 * sub_001606A0
 * Original: 0x001606A0 - 0x001606BF (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001606A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001606A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001606BA; /* jne: not equal / not zero */

loc_001606B4: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

loc_001606BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001606C0
 * Original: 0x001606C0 - 0x001606CD (13 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001606C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001606C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001606D0
 * Original: 0x001606D0 - 0x001606D6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001606D0(void)
{

loc_001606D0: ;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001606E0
 * Original: 0x001606E0 - 0x001606EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001606E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001606E0: ;
    eax = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001606F0
 * Original: 0x001606F0 - 0x00160709 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001606F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001606F0: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax);
    eax = MEM32(ecx + 0x2C);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 4)));
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160710
 * Original: 0x00160710 - 0x00160746 (54 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00160710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160710: ;
    eax = MEM32(0x17FD80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160741; /* je: equal / zero */

loc_00160719: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00160724: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160724; /* jne: not equal / not zero */

loc_0016072A: ;
    ecx = 4;
    edi = edx;
    esi = eax + 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_00160724; /* jne: not equal / not zero */

loc_0016073A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00160741: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160750
 * Original: 0x00160750 - 0x00160795 (69 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = eax;
    esi = esi & 0x70000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016076C; /* jne: not equal / not zero */

loc_00160768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00160772; /* jns: not sign (positive) */

loc_0016076C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00160772u); RECOMP_ABI_CALL(0x0016B7E0u, sub_0016B7E0); /* call 0x0016B7E0 */

loc_00160772: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00160778u); RECOMP_ABI_CALL(0x001605C0u, sub_001605C0); /* call 0x001605C0 */

loc_00160778: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160795(); return; } /* jne: not equal / not zero */

loc_00160780: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) { g_seh_ebp = ebp; sub_001607D1(); return; } /* jns: not sign (positive) */

loc_00160785: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001607CC(); return; /* tail jmp 0x001607CC */

}

/**
 * sub_00160795
 * Original: 0x00160795 - 0x001607AD (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160795(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160795: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001607AD(); return; } /* jne: not equal / not zero */

loc_0016079D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) { g_seh_ebp = ebp; sub_001607D1(); return; } /* js: sign (negative) */

loc_001607A2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_001607CC(); return; /* tail jmp 0x001607CC */

}

/**
 * sub_001607AD
 * Original: 0x001607AD - 0x001607CC (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001607AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001607AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001607D1(); return; } /* je: equal / zero */

loc_001607B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x60000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001607D1(); return; } /* je: equal / zero */

loc_001607BD: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);

    g_seh_ebp = ebp; sub_001607CC(); return; /* fallthrough 0x001607CC */

}

/**
 * sub_001607CC
 * Original: 0x001607CC - 0x001607D1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001607CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001607CC: ;
    PUSH32(esp, 0x001607D1u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

    g_seh_ebp = ebp; sub_001607D1(); return; /* fallthrough 0x001607D1 */

}

/**
 * sub_001607D1
 * Original: 0x001607D1 - 0x001607E1 (16 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001607D1(void)
{

loc_001607D1: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001607DCu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_001607DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001607F0
 * Original: 0x001607F0 - 0x00160810 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001607F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001607F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160818(); return; } /* jne: not equal / not zero */

loc_001607FD: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160820(); return; } /* jne: not equal / not zero */

loc_00160809: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160820(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00160810(); return; /* fallthrough 0x00160810 */

}

/**
 * sub_00160810
 * Original: 0x00160810 - 0x00160818 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160810: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00160820(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00160818(); return; /* fallthrough 0x00160818 */

}

/**
 * sub_00160818
 * Original: 0x00160818 - 0x00160820 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160818(void)
{

loc_00160818: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160820
 * Original: 0x00160820 - 0x00160825 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00160820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160830
 * Original: 0x00160830 - 0x00160862 (50 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160859; /* jne: not equal / not zero */

loc_0016083E: ;
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160859; /* jne: not equal / not zero */

loc_0016084C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160859; /* je: equal / zero */

loc_00160853: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0x80000;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00160859: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160870
 * Original: 0x00160870 - 0x001608A7 (55 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160897; /* jne: not equal / not zero */

loc_0016087E: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160897; /* jne: not equal / not zero */

loc_0016088A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160897; /* je: equal / zero */

loc_00160891: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160897u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_00160897: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi) = edx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001608B0
 * Original: 0x001608B0 - 0x001608F2 (66 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001608B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001608B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001608F2(); return; } /* jne: not equal / not zero */

loc_001608C4: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001608DD; /* jne: not equal / not zero */

loc_001608D0: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001608DD; /* je: equal / zero */

loc_001608D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001608DDu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_001608DD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001608F2(); return; } /* jne: not equal / not zero */

loc_001608E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001608ECu); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_001608EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001608F2
 * Original: 0x001608F2 - 0x001608FE (12 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001608F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001608F2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160900
 * Original: 0x00160900 - 0x0016092A (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160900: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30000 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016093A(); return; } /* ja: above (unsigned >) */

loc_00160912: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160932(); return; } /* je: equal / zero */

loc_00160914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016092A(); return; } /* je: equal / zero */

loc_00160918: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016092A
 * Original: 0x0016092A - 0x00160932 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016092A(void)
{

loc_0016092A: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160932
 * Original: 0x00160932 - 0x0016093A (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160932(void)
{

loc_00160932: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016093A
 * Original: 0x0016093A - 0x00160950 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016093A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016093A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160965(); return; } /* je: equal / zero */

loc_00160941: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160950(); return; } /* je: equal / zero */

loc_00160948: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160950
 * Original: 0x00160950 - 0x00160965 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160950: ;
    edx = MEM32(ecx + 0xC);
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160965
 * Original: 0x00160965 - 0x00160974 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160965(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160965: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00160974(); return; } /* je: equal / zero */

loc_0016096C: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160974
 * Original: 0x00160974 - 0x0016098A (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160974(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00160974: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160990
 * Original: 0x00160990 - 0x00160A1A (138 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160990: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x180E48);
    if (CMP_NE(_fa, _fb)) goto loc_001609C9; /* jne: not equal / not zero */

loc_001609AD: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001609C9; /* je: equal / zero */

loc_001609B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160A08; /* jne: not equal / not zero */

loc_001609BB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001609C7; /* je: equal / zero */

loc_001609BF: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160A08; /* jne: not equal / not zero */

loc_001609C7: ;
    ecx = edx;

loc_001609C9: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160A08; /* jne: not equal / not zero */

loc_001609D2: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001609ED; /* jne: not equal / not zero */

loc_001609DE: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001609ED; /* je: equal / zero */

loc_001609E5: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00160A08; /* jne: not equal / not zero */

loc_001609ED: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160A11; /* je: equal / zero */

loc_001609F4: ;
    eax = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(edi + 0x2C);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00160A11; /* jae: above or equal (unsigned >=) */

loc_00160A08: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00160A11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160A20
 * Original: 0x00160A20 - 0x00160A34 (20 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160A20(void)
{

loc_00160A20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x180E48);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00160A31u); RECOMP_ABI_CALL(0x00162F90u, sub_00162F90); /* call 0x00162F90 */

loc_00160A31: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160A40
 * Original: 0x00160A40 - 0x00160A68 (40 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160A40: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160A62; /* je: equal / zero */

loc_00160A5D: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00160A62: ;
    MEM32(ecx + 4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160A70
 * Original: 0x00160A70 - 0x00160A75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160A70: ;
    g_seh_ebp = ebp; sub_0016B7E0(); return; /* tail jmp 0x0016B7E0 */

}

/**
 * sub_00160A80
 * Original: 0x00160A80 - 0x00160B28 (168 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00160A93u); RECOMP_ABI_CALL(0x00160710u, sub_00160710); /* call 0x00160710 */

loc_00160A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160A9E; /* je: equal / zero */

loc_00160A97: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00160A9Eu); RECOMP_ABI_CALL(0x00160BC0u, sub_00160BC0); /* call 0x00160BC0 */

loc_00160A9E: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0x64800000);
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160AB0u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_00160AB0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160AC2; /* jne: not equal / not zero */

loc_00160AB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_00160AC2: ;
    MEM32(ebx + 0x18) = edi;
    edx = MEM32(esi);
    ecx = ebx + 8;
    MEM32(ecx) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 4) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00160AFB; /* je: equal / zero */

loc_00160AEC: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00160AF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160AF6u); } /* indirect call */
    }

loc_00160AF9: ;
    goto loc_00160B12;

loc_00160AFB: ;
    esi = MEM32(esp + 0x1C);
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x20;
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

loc_00160B12: ;
    eax = MEM32(0x17FD80);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = eax;
    POP32(esp, ebp);
    MEM32(0x17FD80) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00160B30
 * Original: 0x00160B30 - 0x00160BB1 (129 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160B30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160B3Fu); RECOMP_ABI_CALL(0x00160710u, sub_00160710); /* call 0x00160710 */

loc_00160B3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160B4B; /* jne: not equal / not zero */

loc_00160B43: ;
    eax = 0x88760866u;
    esp += 20; return; /* ret 16 */

loc_00160B4B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160B63; /* jne: not equal / not zero */

loc_00160B54: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00160B63: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ecx (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00160B7B; /* jae: above or equal (unsigned >=) */

loc_00160B71: ;
    POP32(esp, esi);
    eax = 0x88760867u;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00160B7B: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160B96; /* je: equal / zero */

loc_00160B81: ;
    ecx = MEM32(eax + 0x20);
    MEM32(edi) = ecx;
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00160B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B8Cu); } /* indirect call */
    }

loc_00160B8F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00160B96: ;
    ecx = MEM32(eax + 0x18);
    esi = eax + 0x20;
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
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00160BC0
 * Original: 0x00160BC0 - 0x00160C24 (100 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160BC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x17FD80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = 0x17FD80;
    if (CMP_EQ(_fa, _fb)) goto loc_00160C20; /* je: equal / zero */

loc_00160BD0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00160BD7: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160BF0; /* jne: not equal / not zero */

loc_00160BE0: ;
    ecx = 4;
    edi = edx;
    esi = ebx + 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_00160BFF; /* je: equal / zero */

loc_00160BF0: ;
    eax = ebx;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160BD7; /* jne: not equal / not zero */

loc_00160BF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00160BFF: ;
    edx = MEM32(ebx);
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM8(ebx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160C12; /* je: equal / zero */

loc_00160C09: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00160C12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160C0Fu); } /* indirect call */
    }

loc_00160C12: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00160C1Du); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_00160C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00160C20: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160C30
 * Original: 0x00160C30 - 0x00160C51 (33 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160C30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00160C4E; /* jne: not equal / not zero */

loc_00160C48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160C4Eu); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_00160C4E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160C60
 * Original: 0x00160C60 - 0x00160CB7 (87 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160C60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x780000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160CB7(); return; } /* jne: not equal / not zero */

loc_00160C77: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160CA4; /* jne: not equal / not zero */

loc_00160C83: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CA4; /* je: equal / zero */

loc_00160C8A: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00160CA4; /* jne: not equal / not zero */

loc_00160C9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160CA4u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_00160CA4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00160CB7(); return; } /* jne: not equal / not zero */

loc_00160CAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00160CB3u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_00160CB3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160CB7
 * Original: 0x00160CB7 - 0x00160CC2 (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160CB7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160CB7: ;
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFF80000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160CD0
 * Original: 0x00160CD0 - 0x00160CF2 (34 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160CD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x180E48);
    MEM32(ecx + 0x790) = eax;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180DD0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160D00
 * Original: 0x00160D00 - 0x00160D1C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D00: ;
    eax = MEM32(0x180E50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x180E54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x180E54) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160D1C(); return; } /* jae: above or equal (unsigned >=) */

loc_00160D10: ;
    MEM32(0x180E50) = eax;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00160D1C
 * Original: 0x00160D1C - 0x00160D27 (11 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D1C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160D23u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00160D23: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    g_seh_ebp = ebp; sub_00160D00(); return; /* tail jmp 0x00160D00 */

}

/**
 * sub_00160D30
 * Original: 0x00160D30 - 0x00160D59 (41 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00160D59(); return; } /* jge: greater or equal (signed >=) */

loc_00160D3A: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x00160D4Du); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00160D4D: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160D59
 * Original: 0x00160D59 - 0x00160D7D (36 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D59: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00160D7D(); return; } /* jge: greater or equal (signed >=) */

loc_00160D61: ;
    eax = MEM32(esi * 4 + 0x22BCD8);
    MEM32(0x1809A8) = MEM32(0x1809A8) | eax;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    MEM32(esi * 4 + 0x180BB0) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160D7D
 * Original: 0x00160D7D - 0x00160D8D (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D7D(void)
{

loc_00160D7D: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi * 4 + 0x175AF0); PUSH32(esp, 0x00160D89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160D82u); } /* indirect call */
    }

loc_00160D89: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160D90
 * Original: 0x00160D90 - 0x00160D98 (8 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D90(void)
{

loc_00160D90: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160D97u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_00160D97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160DA0
 * Original: 0x00160DA0 - 0x00160EC2 (290 bytes, 72 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00160DA0(void)
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

loc_00160DA0: ;
    eax = MEM32(0x180E48);
    ecx = MEM32(eax + 0xEE0);
    fp_push((double)SMEM32(eax + 0xEE0)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00160DBE; /* jge: greater or equal (signed >=) */

loc_00160DB8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160DBE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    edx = MEM32(eax + 0xEE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEF8)); /* fadd dword ptr [eax + 0xef8] */
    fp_push((double)SMEM32(eax + 0xEE4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00160DE0; /* jge: greater or equal (signed >=) */

loc_00160DDA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160DE0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x960)); /* fmul dword ptr [eax + 0x960] */
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEFC)); /* fadd dword ptr [eax + 0xefc] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00160E0D; /* jns: not sign (positive) */

loc_00160DF5: ;
    _fa = (uint32_t)(MEM32(0x180E10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180E10), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E0D; /* je: equal / zero */

loc_00160DFD: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */

loc_00160E0D: ;
    edx = MEM32(eax + 0xEE8);
    fp_push((double)SMEM32(eax + 0xEE8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00160E23; /* jge: greater or equal (signed >=) */

loc_00160E1D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160E23: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    edx = MEM32(eax + 0xEEC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0xEEC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00160E48; /* jge: greater or equal (signed >=) */

loc_00160E42: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160E48: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x960)); /* fmul dword ptr [eax + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xEF0)); /* fsub dword ptr [eax + 0xef0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x948)); /* fmul dword ptr [eax + 0x948] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x948)); /* fmul dword ptr [eax + 0x948] */
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 8) = edx;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00160ED0
 * Original: 0x00160ED0 - 0x00160FA2 (210 bytes, 53 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00160ED0(void)
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

loc_00160ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x180E48);
    eax = MEM32(edx + 0xEE8);
    fp_push((double)SMEM32(edx + 0xEE8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00160EF6; /* jge: greater or equal (signed >=) */

loc_00160EF0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160EF6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x95C)); /* fmul dword ptr [edx + 0x95c] */
    ecx = MEM32(edx + 0xEEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(edx + 0xEEC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00160F1C; /* jge: greater or equal (signed >=) */

loc_00160F16: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00160F1C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x960)); /* fmul dword ptr [edx + 0x960] */
    eax = MEM32(0x180DEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xEF0)); /* fsub dword ptr [edx + 0xef0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x948)); /* fmul dword ptr [edx + 0x948] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x948)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xEF0)); /* fmul dword ptr [edx + 0xef0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00160FA2(); return; } /* jne: not equal / not zero */

loc_00160F62: ;
    fp_push(MEMF(edx + 0x944)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x948)); /* fmul dword ptr [edx + 0x948] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00160FAC(); return; /* tail jmp 0x00160FAC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00160FA2
 * Original: 0x00160FA2 - 0x00160FAC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160FA2(void)
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

loc_00160FA2: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */

    g_seh_ebp = ebp; sub_00160FAC(); return; /* fallthrough 0x00160FAC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00160FAC
 * Original: 0x00160FAC - 0x00161010 (100 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160FAC(void)
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

loc_00160FAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    ecx = 0x10;
    edi = esp + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = edx + 0xCA0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x980) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x980;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161001u); RECOMP_ABI_CALL(0x0016B900u, sub_0016B900); /* call 0x0016B900 */

loc_00161001: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
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
 * sub_00161060
 * Original: 0x00161060 - 0x00161067 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161060(void)
{

loc_00161060: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161070
 * Original: 0x00161070 - 0x00161077 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00161070: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00161080
 * Original: 0x00161080 - 0x00161096 (22 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00161080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00161080: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00161093u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00161093: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001610A0
 * Original: 0x001610A0 - 0x001610AD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001610A0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001610B0
 * Original: 0x001610B0 - 0x001610BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001610B0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001610C0
 * Original: 0x001610C0 - 0x001610D1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001610C0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x175CB0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001610E0
 * Original: 0x001610E0 - 0x001610EB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610E0(void)
{

loc_001610E0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xD));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001610F0
 * Original: 0x001610F0 - 0x00161100 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001610F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161110
 * Original: 0x00161110 - 0x00161126 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161110: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x175CB0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161130
 * Original: 0x00161130 - 0x00161140 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161130: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161160
 * Original: 0x00161160 - 0x00161187 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161160: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016117E; /* jne: not equal / not zero */

loc_0016116B: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

loc_0016117E: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161190
 * Original: 0x00161190 - 0x001611B8 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161190: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001611AC; /* jne: not equal / not zero */

loc_0016119B: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

loc_001611AC: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001611C0
 * Original: 0x001611C0 - 0x001611CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001611C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001611C0: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001611D0
 * Original: 0x001611D0 - 0x001611E5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001611D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001611D0: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001611F0
 * Original: 0x001611F0 - 0x0016120C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001611F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001611F0: ;
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
 * sub_00161210
 * Original: 0x00161210 - 0x00161229 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161210: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161230
 * Original: 0x00161230 - 0x00161257 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161230: ;
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
 * sub_00161260
 * Original: 0x00161260 - 0x0016126E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161260: ;
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
 * sub_00161270
 * Original: 0x00161270 - 0x00161271 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161270(void)
{

loc_00161270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161280
 * Original: 0x00161280 - 0x0016128C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161280: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00161290
 * Original: 0x00161290 - 0x001612A5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161290: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001612B0
 * Original: 0x001612B0 - 0x001612CC (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001612B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001612B0: ;
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
 * sub_001612D0
 * Original: 0x001612D0 - 0x001612E9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001612D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001612D0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001612F0
 * Original: 0x001612F0 - 0x00161317 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001612F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001612F0: ;
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
 * sub_00161320
 * Original: 0x00161320 - 0x0016132E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161320: ;
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
 * sub_00161330
 * Original: 0x00161330 - 0x00161354 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161330: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    eax = ZX8(LO8(eax));
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161360
 * Original: 0x00161360 - 0x00161560 (512 bytes, 163 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161360(void)
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

loc_00161360: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1A14) (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001614EC; /* jne: not equal / not zero */

loc_00161379: ;
    ecx = MEM32(0x180E18);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x970);
    ecx = MEM32(esi + 0x1A18);
    edx = MEM32(esi + 0x96C);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001613B4; /* jne: not equal / not zero */

loc_001613A2: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001613BA;

loc_001613B4: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001613BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001613CE; /* jge: greater or equal (signed >=) */

loc_001613C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001613CE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001613E1u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001613E1: ;
    ecx = MEM32(esi + 0x1A18);
    ebx = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161400; /* jne: not equal / not zero */

loc_001613F0: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00161409;

loc_00161400: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00161409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016141B; /* jge: greater or equal (signed >=) */

loc_00161415: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016141B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0016142Eu); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_0016142E: ;
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x20);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 0x1A14);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161461; /* jne: not equal / not zero */

loc_0016144F: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0016146A;

loc_00161461: ;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;

loc_0016146A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00161472; /* jae: above or equal (unsigned >=) */

loc_0016146E: ;
    edx = ebx;
    goto loc_00161492;

loc_00161472: ;
    edx = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016148B; /* jne: not equal / not zero */

loc_00161479: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00161492;

loc_0016148B: ;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00161492: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    esi = MEM32(esi + 0x1A14);
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001614B8; /* jne: not equal / not zero */

loc_001614A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0xF));
    edx = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001614C4;

loc_001614B8: ;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;

loc_001614C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161556; /* jb: below (unsigned <) */

loc_001614CC: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016154D; /* jne: not equal / not zero */

loc_001614D3: ;
    edx = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0xF));
    eax = 1;
    POP32(esp, esi);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    esp += 32; return; /* ret 28 */

loc_001614EC: ;
    ecx = MEM32(0x180E1C);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x3F800000;
    MEM32(ecx) = 0x3F800000;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161521; /* jne: not equal / not zero */

loc_0016150F: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00161527;

loc_00161521: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00161527: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016154D; /* jne: not equal / not zero */

loc_00161534: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    edx = MEM32(esp + 0x20);
    eax = 1;
    POP32(esp, esi);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    esp += 32; return; /* ret 28 */

loc_0016154D: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00161556: ;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00161560
 * Original: 0x00161560 - 0x00161592 (50 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161573; /* jb: below (unsigned <) */

loc_0016156E: ;
    PUSH32(esp, 0x00161573u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161573: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x80320;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180E0C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001615A0
 * Original: 0x001615A0 - 0x001615D5 (53 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001615A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001615A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001615B3; /* jb: below (unsigned <) */

loc_001615AE: ;
    PUSH32(esp, 0x001615B3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001615B3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E6C;
    edx = ecx + -512;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180E20) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001615E0
 * Original: 0x001615E0 - 0x0016162D (77 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001615E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001615E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001615F4; /* jb: below (unsigned <) */

loc_001615EF: ;
    PUSH32(esp, 0x001615F4u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001615F4: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX8(MEM8(esp + 0xE));
    edi = ecx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi & 0xFF00FF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x402A8;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEM32(0x180DD8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161630
 * Original: 0x00161630 - 0x00161663 (51 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161630: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161643; /* jb: below (unsigned <) */

loc_0016163E: ;
    PUSH32(esp, 0x00161643u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161643: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0x40308;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161663(); return; } /* jne: not equal / not zero */

loc_00161651: ;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180DFC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161663
 * Original: 0x00161663 - 0x00161698 (53 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161663(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161663: ;
    MEM32(eax + 4) = 1;
    PUSH32(esp, edi);
    edi = MEM32(0x180DF8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 8) = 0x4039C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x404;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = edx;
    MEM32(esi) = eax;
    MEM32(0x180DFC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001616A0
 * Original: 0x001616A0 - 0x001616DA (58 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001616A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001616A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001616B3; /* jb: below (unsigned <) */

loc_001616AE: ;
    PUSH32(esp, 0x001616B3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001616B3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x180DFC);
    MEM32(0x180DF8) = ecx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00161630(); return; /* tail jmp 0x00161630 */

}

/**
 * sub_001616E0
 * Original: 0x001616E0 - 0x00161719 (57 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001616E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001616E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001616F3; /* jb: below (unsigned <) */

loc_001616EE: ;
    PUSH32(esp, 0x001616F3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001616F3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A4;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180DE8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161720
 * Original: 0x00161720 - 0x00161764 (68 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161720: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161764(); return; } /* jne: not equal / not zero */

loc_00161731: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016173D; /* jb: below (unsigned <) */

loc_00161738: ;
    PUSH32(esp, 0x0016173Du); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016173D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x400A60;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x10;
    /* nop */

loc_00161750: ;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00161750; /* jne: not equal / not zero */

loc_00161758: ;
    MEM32(esi) = eax;
    MEM32(0x180E00) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161764
 * Original: 0x00161764 - 0x00161771 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161764(void)
{

loc_00161764: ;
    eax = MEM32(esp + 8);
    MEM32(0x180E00) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161780
 * Original: 0x00161780 - 0x001617E5 (101 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161780(void)
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

loc_00161780: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    MEM32(esp + 0xC) = ebx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x964)); /* fmul dword ptr [esi + 0x964] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001617B0u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001617B0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001617BF; /* jbe: below or equal (unsigned <=) */

loc_001617BA: ;
    edi = 0x1FF;

loc_001617BF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001617CB; /* jb: below (unsigned <) */

loc_001617C6: ;
    PUSH32(esp, 0x001617CBu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001617CB: ;
    MEM32(eax) = 0x40380;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    MEM32(0x180E24) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001617F0
 * Original: 0x001617F0 - 0x00161867 (119 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001617F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x180E48);
    eax = MEM32(edi + 0x1A04);
    ecx = ZX8(MEM8(eax + 0xD));
    SET_LO8(edx, MEM8(ecx + 0x175CB0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161819; /* jne: not equal / not zero */

loc_00161817: ;
    esi = ebx;

loc_00161819: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016185B; /* je: equal / zero */

loc_00161825: ;
    ecx = MEM32(edi + 4);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161839; /* jb: below (unsigned <) */

loc_00161834: ;
    PUSH32(esp, 0x00161839u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161839: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = 0x40100;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_0016185B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x180E2C) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161870
 * Original: 0x00161870 - 0x001618E4 (116 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161870(void)
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

loc_00161870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00161892; /* jge: greater or equal (signed >=) */

loc_0016188C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00161892: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x001618AEu); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001618AE: ;
    edx = MEM32(esp + 0x10);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4E);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x001618C0u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001618C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x001618C8u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001618C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x001618D0u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001618D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x001618D8u); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_001618D8: ;
    MEM32(0x180E04) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001618F0
 * Original: 0x001618F0 - 0x00161923 (51 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001618F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161903; /* jb: below (unsigned <) */

loc_001618FE: ;
    PUSH32(esp, 0x00161903u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161903: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161923(); return; } /* jne: not equal / not zero */

loc_0016190B: ;
    MEM32(eax) = 0x417BC;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180E08) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161923
 * Original: 0x00161923 - 0x00161942 (31 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161923(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161923: ;
    MEM32(eax) = 0x817BC;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180E08) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161950
 * Original: 0x00161950 - 0x00161994 (68 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161950: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161963; /* jb: below (unsigned <) */

loc_0016195E: ;
    PUSH32(esp, 0x00161963u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161963: ;
    ecx = MEM32(0x180DE4);
    edx = MEM32(0x180DE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00161979; /* jne: not equal / not zero */

loc_00161977: ;
    edx = ecx;

loc_00161979: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180DDC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001619A0
 * Original: 0x001619A0 - 0x001619F1 (81 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001619A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001619A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    MEM32(0x180DE0) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x180DDC);
    if (CMP_B(_fa, _fb)) goto loc_001619C3; /* jb: below (unsigned <) */

loc_001619BE: ;
    PUSH32(esp, 0x001619C3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001619C3: ;
    ecx = MEM32(0x180DE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x180DE0);
    if (CMP_NE(_fa, _fb)) goto loc_001619D5; /* jne: not equal / not zero */

loc_001619D3: ;
    ecx = edi;

loc_001619D5: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180DDC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161A00
 * Original: 0x00161A00 - 0x00161A80 (128 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161A00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00161A14; /* jb: below (unsigned <) */

loc_00161A0F: ;
    PUSH32(esp, 0x00161A14u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161A14: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x417C4;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00161A34; /* je: equal / zero */

loc_00161A2A: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x9000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00161A34: ;
    esi = MEM32(0x180E48);
    edi = MEM32(0x180DDC);
    MEM32(0x180DE4) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161A52; /* jb: below (unsigned <) */

loc_00161A4D: ;
    PUSH32(esp, 0x00161A52u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161A52: ;
    ecx = MEM32(0x180DE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x180DE0);
    if (CMP_NE(_fa, _fb)) goto loc_00161A64; /* jne: not equal / not zero */

loc_00161A62: ;
    ecx = edi;

loc_00161A64: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180DDC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161A80
 * Original: 0x00161A80 - 0x00161AC1 (65 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161A80: ;
    edx = MEM32(0x1809A8);
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    MEM32(0x1809A8) = edx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161AA5; /* jb: below (unsigned <) */

loc_00161AA0: ;
    PUSH32(esp, 0x00161AA5u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161AA5: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x40328;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x180DD4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161AD0
 * Original: 0x00161AD0 - 0x00161B48 (120 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161AD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x180A20) = ebx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00161B0B; /* jb: below (unsigned <) */

loc_00161B02: ;
    PUSH32(esp, 0x00161B07u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161B07: ;
    edx = MEM32(esp + 0x14);

loc_00161B0B: ;
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 1;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00161B67(); return; } /* je: equal / zero */

loc_00161B18: ;
    ebp = edi * 4 + 0x41964;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = 0xFF000000u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30000 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00161B62(); return; } /* ja: above (unsigned >) */

loc_00161B37: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00161B55(); return; } /* je: equal / zero */

loc_00161B39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00161B48(); return; } /* je: equal / zero */

loc_00161B41: ;
    ebp = 0x2400;
    g_seh_ebp = ebp; sub_00161B67(); return; /* tail jmp 0x00161B67 */

}

/**
 * sub_00161B48
 * Original: 0x00161B48 - 0x00161B55 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161B48: ;
    MEM32(esp + 0x14) = ecx;
    ebp = 0x8511;
    edx = ecx;
    g_seh_ebp = ebp; sub_00161B67(); return; /* tail jmp 0x00161B67 */

}

/**
 * sub_00161B55
 * Original: 0x00161B55 - 0x00161B62 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161B55: ;
    MEM32(esp + 0x14) = ecx;
    ebp = 0x8512;
    edx = ecx;
    g_seh_ebp = ebp; sub_00161B67(); return; /* tail jmp 0x00161B67 */

}

/**
 * sub_00161B62
 * Original: 0x00161B62 - 0x00161B67 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161B62: ;
    ebp = 0x2401;

    g_seh_ebp = ebp; sub_00161B67(); return; /* fallthrough 0x00161B67 */

}

/**
 * sub_00161B67
 * Original: 0x00161B67 - 0x00161BD5 (110 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161B67: ;
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 9);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 0x2F3EF1) = LO8(ebx);
    ebx = edi + 0xC03C;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x950);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161BA5; /* jne: not equal / not zero */

loc_00161B97: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161BA5; /* je: equal / zero */

loc_00161B9B: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00161BA5: ;
    ebx = MEM32(esi + 0x950);
    eax = ecx;
    ecx = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax = ~eax;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x950) = eax;
    eax = MEM32(0x1809A8);
    POP32(esp, esi);
    eax = eax | 0x47F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(0x1809A8) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161BE0
 * Original: 0x00161BE0 - 0x00161C43 (99 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x180E48);
    eax = MEM32(edi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00161BFD; /* jne: not equal / not zero */

loc_00161BFA: ;
    ebx = esi + 1;

loc_00161BFD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_00161C2C; /* je: equal / zero */

loc_00161C06: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161C12; /* jb: below (unsigned <) */

loc_00161C0D: ;
    PUSH32(esp, 0x00161C12u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161C12: ;
    ecx = MEM32(esp + 0x18);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx * 4 + 0x41AD0;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_00161C2C: ;
    eax = MEM32(esp + 0x18);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi * 4 + 0x1809B0) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161C50
 * Original: 0x00161C50 - 0x00161C8D (61 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161C50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161C63; /* jb: below (unsigned <) */

loc_00161C5E: ;
    PUSH32(esp, 0x00161C63u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161C63: ;
    ecx = MEM32(esp + 8);
    edx = ecx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x41B24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x180A24) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161C90
 * Original: 0x00161C90 - 0x00161CC9 (57 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161C90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00161CA3; /* jb: below (unsigned <) */

loc_00161C9E: ;
    PUSH32(esp, 0x00161CA3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00161CA3: ;
    ecx = MEM32(esp + 8);
    edx = ecx * 4 + 0x40AE0;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x180A28) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161CD0
 * Original: 0x00161CD0 - 0x00161CD5 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161CD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161CE0
 * Original: 0x00161CE0 - 0x00161D14 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161CE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00161D17(); return; } /* jge: greater or equal (signed >=) */

loc_00161CE9: ;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x1809A8);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    MEM32(0x1809A8) = esi;
    MEM32(ecx * 4 + 0x1809B0) = eax;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00161D14(); return; /* fallthrough 0x00161D14 */

}

/**
 * sub_00161D14
 * Original: 0x00161D14 - 0x00161D17 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D14(void)
{

loc_00161D14: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161D17
 * Original: 0x00161D17 - 0x00161D4C (53 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161D17: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00161D4C(); return; }

loc_00161D19: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x1809A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFBFF1u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x480F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x480F)) >> 32) & 1);
    ecx = ecx + 0x480F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = edx;
    edx = MEM32(esp + 4);
    if (7) _cf = (int)(((edx) >> (32 - (7))) & 1);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x1809E0) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161D4C
 * Original: 0x00161D4C - 0x00161D75 (41 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00161D75(); return; } /* jge: greater or equal (signed >=) */

loc_00161D51: ;
    ecx = MEM32(eax * 4 + 0x22BDF0);
    MEM32(0x1809A8) = MEM32(0x1809A8) | ecx;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 4);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x1809B0) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161D75
 * Original: 0x00161D75 - 0x00161D8C (23 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161D75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161D8C(); return; } /* jne: not equal / not zero */

loc_00161D7A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161D89u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_00161D89: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161D8C
 * Original: 0x00161D8C - 0x00161DA3 (23 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161D8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161DA3(); return; } /* jne: not equal / not zero */

loc_00161D91: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00161DA0u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_00161DA0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161DA3
 * Original: 0x00161DA3 - 0x00161DBA (23 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161DA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161DA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161DBA(); return; } /* jne: not equal / not zero */

loc_00161DA8: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00161DB7u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_00161DB7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161DBA
 * Original: 0x00161DBA - 0x00161DCC (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161DBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161DBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00161D14(); return; } /* jg: greater (signed >) */

loc_00161DC3: ;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_00161BE0(); return; /* tail jmp 0x00161BE0 */

}

/**
 * sub_00161DD0
 * Original: 0x00161DD0 - 0x00161E3A (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161DD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x784);
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x181B68;
    esi = edx;
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 4;
    _fb = (uint32_t)(0x180A08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x180A08;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00161DF6: ;
    MEM32(eax) = ecx;
    edi = esi;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ebp;
    edi = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x181BE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x181BE8 (32-bit) */
    MEM32(ebx + 0x14) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00161DF6; /* jbe: below or equal (unsigned <=) */

loc_00161E35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00161E40
 * Original: 0x00161E40 - 0x00161F04 (196 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00161E40(void)
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

loc_00161E40: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x12 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00161F2B(); return; } /* je: equal / zero */

loc_00161E59: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161E68u); RECOMP_ABI_CALL(0x00160DA0u, sub_00160DA0); /* call 0x00160DA0 */

loc_00161E68: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00161EB8; /* jne: not equal / not zero */

loc_00161E70: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edi) = 0x100A20;
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edi + 0x14) = 0x100AF0;
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x24) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00161EB8: ;
    SET_LO8(ecx, MEM8(esi + 0x1C18));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00161F1A(); return; } /* jne: not equal / not zero */

loc_00161EC7: ;
    _fa = (uint32_t)(MEM32(0x180DEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DEC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161F04(); return; } /* jne: not equal / not zero */

loc_00161ECF: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    edx = MEM32(esi + 0x948);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x93C)); /* fmul dword ptr [esi + 0x93c] */
    MEM32(esi + 0x1C14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    g_seh_ebp = ebp; sub_00162010(); return; /* tail jmp 0x00162010 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00161F04
 * Original: 0x00161F04 - 0x00161F1A (22 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161F04: ;
    eax = MEM32(esi + 0x948);
    MEM32(esi + 0x1C10) = 0;
    MEM32(esi + 0x1C14) = eax;

    g_seh_ebp = ebp; sub_00161F1A(); return; /* fallthrough 0x00161F1A */

}

/**
 * sub_00161F1A
 * Original: 0x00161F1A - 0x00161F2B (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F1A(void)
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

loc_00161F1A: ;
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    g_seh_ebp = ebp; sub_00162010(); return; /* tail jmp 0x00162010 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00161F2B
 * Original: 0x00161F2B - 0x00161FE0 (181 bytes, 43 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00161F2B(void)
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

loc_00161F2B: ;
    ecx = MEM32(esi + 0xEE0);
    fp_push((double)SMEM32(esi + 0xEE0)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00161F41; /* jge: greater or equal (signed >=) */

loc_00161F3B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00161F41: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x95C)); /* fmul dword ptr [esi + 0x95c] */
    edx = MEM32(esi + 0xEE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xEF8)); /* fadd dword ptr [esi + 0xef8] */
    fp_push((double)SMEM32(esi + 0xEE4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00161F63; /* jge: greater or equal (signed >=) */

loc_00161F5D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00161F63: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x960)); /* fmul dword ptr [esi + 0x960] */
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xEFC)); /* fadd dword ptr [esi + 0xefc] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00161F90; /* jns: not sign (positive) */

loc_00161F78: ;
    _fa = (uint32_t)(MEM32(0x180E10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180E10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161F90; /* je: equal / zero */

loc_00161F80: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */

loc_00161F90: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edi) = 0x100A20;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x1C18));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00162004(); return; } /* jne: not equal / not zero */

loc_00161FB1: ;
    _fa = (uint32_t)(MEM32(0x180DEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DEC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00161FE0(); return; } /* jne: not equal / not zero */

loc_00161FBA: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    eax = MEM32(esi + 0x948);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x93C)); /* fmul dword ptr [esi + 0x93c] */
    MEM32(esi + 0x1C0C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00162004(); return; /* tail jmp 0x00162004 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00161FE0
 * Original: 0x00161FE0 - 0x00162004 (36 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00161FE0(void)
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

loc_00161FE0: ;
    fp_push(MEMF(esi + 0xEF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C0C) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00162004(); return; /* fallthrough 0x00162004 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162004
 * Original: 0x00162004 - 0x00162010 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162004(void)
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

loc_00162004: ;
    fp_push(MEMF(esi + 0x1C0C)); /* fld float */
    fp_push(MEMF(esi + 0x1C08)); /* fld float */

    g_seh_ebp = ebp; sub_00162010(); return; /* fallthrough 0x00162010 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162010
 * Original: 0x00162010 - 0x00162025 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162010(void)
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

loc_00162010: ;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = 0x80394;
    eax = edi + 0xC;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00162030
 * Original: 0x00162030 - 0x00162089 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162030: ;
    eax = MEM32(0x180E30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x100001;
    if (CMP_EQ(_fa, _fb)) goto loc_00162044; /* je: equal / zero */

loc_0016203F: ;
    esi = 0x10100001;

loc_00162044: ;
    _fa = (uint32_t)(MEM32(0x180DEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DEC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00162053; /* jne: not equal / not zero */

loc_0016204D: ;
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162053: ;
    eax = MEM32(ecx + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016207B; /* je: equal / zero */

loc_0016205D: ;
    eax = ZX8(MEM8(eax + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162075; /* je: equal / zero */

loc_00162066: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162075; /* je: equal / zero */

loc_0016206B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162075; /* je: equal / zero */

loc_00162070: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016207B; /* jne: not equal / not zero */

loc_00162075: ;
    esi = esi | 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016207B: ;
    MEM32(edx) = 0x40290;
    MEM32(edx + 4) = esi;
    eax = edx + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162090
 * Original: 0x00162090 - 0x001620D5 (69 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162090: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E14);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x180E28);
    eax = MEM32(edi + 8);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001620B8; /* jns: not sign (positive) */

loc_001620AC: ;
    eax = MEM32(0x180E10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001620B8; /* je: equal / zero */

loc_001620B5: ;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001620B8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001620C4; /* jb: below (unsigned <) */

loc_001620BF: ;
    PUSH32(esp, 0x001620C4u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001620C4: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001620E0
 * Original: 0x001620E0 - 0x00162121 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001620E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001620E0: ;
    ecx = MEM32(0x180E38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001620F1; /* je: equal / zero */

loc_001620EC: ;
    eax = 2;

loc_001620F1: ;
    ecx = MEM32(0x180E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162114; /* je: equal / zero */

loc_001620FB: ;
    ecx = MEM32(0x180DF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162111; /* je: equal / zero */

loc_00162105: ;
    _fa = (uint32_t)(MEM32(0x180DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DF4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00162114; /* jne: not equal / not zero */

loc_00162111: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162114: ;
    MEM32(edx) = 0x41D84;
    MEM32(edx + 4) = eax;
    eax = edx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00162130
 * Original: 0x00162130 - 0x001621FE (206 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162130: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    edx = MEM32(esi + 0x2428);
    edx = edx & 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2428) = edx;
    ecx = MEM32(0x180E44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016215B; /* je: equal / zero */

loc_00162152: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2428) = eax;

loc_0016215B: ;
    edx = MEM32(esi + 0x242C);
    edx = edx & 0xE7EFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x242C) = edx;
    ecx = MEM32(0x180E3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00162184; /* je: equal / zero */

loc_00162179: ;
    eax = eax | 0x100000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x242C) = eax;

loc_00162184: ;
    eax = MEM32(0x180E40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162197; /* je: equal / zero */

loc_0016218D: ;
    MEM32(esi + 0x242C) = MEM32(esi + 0x242C) | 0x8000000;
    _fa = (uint32_t)(MEM32(esi + 0x242C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162197: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001621A3; /* jb: below (unsigned <) */

loc_0016219E: ;
    PUSH32(esp, 0x001621A3u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001621A3: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x2428);
    MEM32(eax + 8) = 0x81D8C;
    MEM32(eax + 0xC) = 0x400094;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x40100;
    edx = 9;
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x242C);
    MEM32(eax + 0x1C) = 0x81D8C;
    MEM32(eax + 0x20) = 0x400B80;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0x40100;
    MEM32(eax + 0x2C) = edx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162200
 * Original: 0x00162200 - 0x00162258 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162200: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x1A04);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x1A14) (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162368(); return; } /* jne: not equal / not zero */

loc_0016221F: ;
    ecx = MEM32(esi + 0x970);
    eax = MEM32(esi + 0x96C);
    ebp = MEM32(0x180E18);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x1A18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162258(); return; } /* jne: not equal / not zero */

loc_00162246: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016225E(); return; /* tail jmp 0x0016225E */

}

/**
 * sub_00162258
 * Original: 0x00162258 - 0x0016225E (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162258(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162258: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0016225E(); return; /* fallthrough 0x0016225E */

}

/**
 * sub_0016225E
 * Original: 0x0016225E - 0x001622A2 (68 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016225E(void)
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

loc_0016225E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00162270; /* jge: greater or equal (signed >=) */

loc_0016226A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00162270: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00162283u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00162283: ;
    ecx = MEM32(esi + 0x1A18);
    edi = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001622A2(); return; } /* jne: not equal / not zero */

loc_00162292: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_001622AB(); return; /* tail jmp 0x001622AB */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001622A2
 * Original: 0x001622A2 - 0x001622AB (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001622A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001622A2: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001622AB(); return; /* fallthrough 0x001622AB */

}

/**
 * sub_001622AB
 * Original: 0x001622AB - 0x001622FB (80 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001622AB(void)
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

loc_001622AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001622BD; /* jge: greater or equal (signed >=) */

loc_001622B7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001622BD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001622D0u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001622D0: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001622FB(); return; } /* jne: not equal / not zero */

loc_001622E9: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00162304(); return; /* tail jmp 0x00162304 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001622FB
 * Original: 0x001622FB - 0x00162304 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001622FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001622FB: ;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;

    g_seh_ebp = ebp; sub_00162304(); return; /* fallthrough 0x00162304 */

}

/**
 * sub_00162304
 * Original: 0x00162304 - 0x00162321 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162304(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162304: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00162328(); return; } /* jb: below (unsigned <) */

loc_00162308: ;
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162321(); return; } /* jne: not equal / not zero */

loc_0016230F: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00162328(); return; /* tail jmp 0x00162328 */

}

/**
 * sub_00162321
 * Original: 0x00162321 - 0x00162328 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162321(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162321: ;
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_00162328(); return; /* fallthrough 0x00162328 */

}

/**
 * sub_00162328
 * Original: 0x00162328 - 0x00162340 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162328(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162328: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162340(); return; } /* jne: not equal / not zero */

loc_0016232F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    ebx = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016234C(); return; /* tail jmp 0x0016234C */

}

/**
 * sub_00162340
 * Original: 0x00162340 - 0x0016234C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162340: ;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;

    g_seh_ebp = ebp; sub_0016234C(); return; /* fallthrough 0x0016234C */

}

/**
 * sub_0016234C
 * Original: 0x0016234C - 0x00162368 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016234C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016234C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001623BE(); return; } /* jb: below (unsigned <) */

loc_00162350: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001623B5(); return; } /* jne: not equal / not zero */

loc_00162357: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_001623BE(); return; /* tail jmp 0x001623BE */

}

/**
 * sub_00162368
 * Original: 0x00162368 - 0x00162395 (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162368(void)
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

loc_00162368: ;
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(0x180E1C);
    MEM32(esp + 0x10) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162395(); return; } /* jne: not equal / not zero */

loc_00162383: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016239E(); return; /* tail jmp 0x0016239E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162395
 * Original: 0x00162395 - 0x0016239E (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162395(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162395: ;
    edx = eax;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0016239E(); return; /* fallthrough 0x0016239E */

}

/**
 * sub_0016239E
 * Original: 0x0016239E - 0x001623B5 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016239E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016239E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001623B5(); return; } /* jne: not equal / not zero */

loc_001623A4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_001623BE(); return; /* tail jmp 0x001623BE */

}

/**
 * sub_001623B5
 * Original: 0x001623B5 - 0x001623BE (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001623B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001623B5: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001623BE(); return; /* fallthrough 0x001623BE */

}

/**
 * sub_001623BE
 * Original: 0x001623BE - 0x00162409 (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001623BE(void)
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

loc_001623BE: ;
    ebx = MEM32(esi + 0x1A0C);
    ecx = eax;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFF7FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016240F(); return; } /* je: equal / zero */

loc_001623D5: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016240F(); return; } /* jne: not equal / not zero */

loc_001623DA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00162409(); return; } /* jne: not equal / not zero */

loc_001623F8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0x2000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016240F(); return; /* tail jmp 0x0016240F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162409
 * Original: 0x00162409 - 0x0016240F (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162409: ;
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0016240F(); return; /* fallthrough 0x0016240F */

}

/**
 * sub_0016240F
 * Original: 0x0016240F - 0x00162444 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016240F(void)
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

loc_0016240F: ;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 0x960) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esi + 0x95C) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    MEM32(esi + 0x954) = edi;
    MEM32(esi + 0x958) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_00162444(); return; } /* jp: parity */

loc_00162438: ;
    ecx = MEM32(esp + 0x10);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00162448(); return; /* tail jmp 0x00162448 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162444
 * Original: 0x00162444 - 0x00162448 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00162444(void)
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

loc_00162444: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00162448(); return; /* fallthrough 0x00162448 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162448
 * Original: 0x00162448 - 0x00162555 (269 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162448(void)
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

loc_00162448: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00162454; /* jb: below (unsigned <) */

loc_0016244F: ;
    PUSH32(esp, 0x00162454u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00162454: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = ebx;
    fp_push(MEMF(esi + 0x964)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ebx = eax + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001624F0; /* jnp: not parity */

loc_00162473: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, ecx);
    MEM32(esi + 0x964) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00162492u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_00162492: ;
    eax = MEM32(eax * 4 + 0x175CF4);
    MEM32(esi + 0x968) = eax;
    ecx = MEM32(0x180E24);
    edi = MEM32(0x1809A8);
    MEM32(esp + 0x14) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    edi = edi | 0x10F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001624D8u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_001624D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001624E4; /* jbe: below or equal (unsigned <=) */

loc_001624DF: ;
    eax = 0x1FF;

loc_001624E4: ;
    MEM32(ebx) = 0x40380;
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001624F0: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = ebx;
    edi = MEM32(0x180E14);
    ecx = MEM32(0x180E28);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00162516; /* jns: not sign (positive) */

loc_0016250A: ;
    eax = MEM32(0x180E10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162516; /* je: equal / zero */

loc_00162513: ;
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162516: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    eax = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00162522; /* jb: below (unsigned <) */

loc_0016251D: ;
    PUSH32(esp, 0x00162522u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00162522: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0x794);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00162543; /* je: equal / zero */

loc_0016253C: ;
    ecx = esi;
    PUSH32(esp, 0x00162543u); RECOMP_ABI_CALL(0x00167AE0u, sub_00167AE0); /* call 0x00167AE0 */

loc_00162543: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016254Du); RECOMP_ABI_CALL(0x001645C0u, sub_001645C0); /* call 0x001645C0 */

loc_0016254D: ;
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
 * sub_00162560
 * Original: 0x00162560 - 0x001625EB (139 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162560: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    if (CMP_A(_fa, _fb)) goto loc_001625D0; /* ja: above (unsigned >) */

loc_00162571: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1625EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00162578u) goto loc_00162578;
    if (_jt == 0x00162597u) goto loc_00162597;
    if (_jt == 0x001625B6u) goto loc_001625B6;
    if (_jt == 0x001625C1u) goto loc_001625C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00162578: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x1C10) = eax;
    eax = MEM32(esi + 0x1C18);
    MEM32(esi + 0x1C14) = ecx;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001625CA;

loc_00162597: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM32(esi + 0x1C0C) = eax;
    eax = MEM32(esi + 0x1C18);
    MEM32(esi + 0x1C08) = edx;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001625CA;

loc_001625B6: ;
    eax = MEM32(esi + 0x1C18);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001625CA;

loc_001625C1: ;
    eax = MEM32(esi + 0x1C18);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001625CA: ;
    MEM32(esi + 0x1C18) = eax;

loc_001625D0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001625DC; /* jb: below (unsigned <) */

loc_001625D7: ;
    PUSH32(esp, 0x001625DCu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001625DC: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x001625E5u); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_001625E5: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00162600
 * Original: 0x00162600 - 0x0016262C (44 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162600: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00162613; /* jb: below (unsigned <) */

loc_0016260E: ;
    PUSH32(esp, 0x00162613u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00162613: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016262C(); return; } /* je: equal / zero */

loc_0016261B: ;
    ecx = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016262C(); return; } /* je: equal / zero */

loc_00162625: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0016262E(); return; /* tail jmp 0x0016262E */

}

/**
 * sub_0016262C
 * Original: 0x0016262C - 0x0016262E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016262C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016262C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0016262E(); return; /* fallthrough 0x0016262E */

}

/**
 * sub_0016262E
 * Original: 0x0016262E - 0x0016268F (97 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016262E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016262E: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x180CF8);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x180DEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x180DEC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00162661; /* je: equal / zero */

loc_0016265C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016268B; /* jne: not equal / not zero */

loc_00162661: ;
    PUSH32(esp, 0x00162666u); RECOMP_ABI_CALL(0x00160ED0u, sub_00160ED0); /* call 0x00160ED0 */

loc_00162666: ;
    ecx = esi;
    PUSH32(esp, 0x0016266Du); RECOMP_ABI_CALL(0x00167AE0u, sub_00167AE0); /* call 0x00167AE0 */

loc_0016266D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00162679; /* jb: below (unsigned <) */

loc_00162674: ;
    PUSH32(esp, 0x00162679u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_00162679: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x00162682u); RECOMP_ABI_CALL(0x00162030u, sub_00162030); /* call 0x00162030 */

loc_00162682: ;
    edx = eax;
    PUSH32(esp, 0x00162689u); RECOMP_ABI_CALL(0x00161E40u, sub_00161E40); /* call 0x00161E40 */

loc_00162689: ;
    MEM32(esi) = eax;

loc_0016268B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162690
 * Original: 0x00162690 - 0x00162712 (130 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162690: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(0x180DF0) = edi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001626AE; /* jb: below (unsigned <) */

loc_001626A9: ;
    PUSH32(esp, 0x001626AEu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001626AE: ;
    edx = MEM32(0x180E38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001626BF; /* je: equal / zero */

loc_001626BA: ;
    ecx = 2;

loc_001626BF: ;
    edx = MEM32(0x180E34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001626E2; /* je: equal / zero */

loc_001626C9: ;
    edx = MEM32(0x180DF0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001626DF; /* je: equal / zero */

loc_001626D3: ;
    _fa = (uint32_t)(MEM32(0x180DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DF4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001626E2; /* jne: not equal / not zero */

loc_001626DF: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001626E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00162712(); return; } /* je: equal / zero */

loc_001626EF: ;
    ecx = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00162712(); return; } /* je: equal / zero */

loc_001626F9: ;
    MEM32(eax + 8) = 0x4032C;
    ecx = 1;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162712
 * Original: 0x00162712 - 0x00162728 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162712(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162712: ;
    MEM32(eax + 8) = 0x4032C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162730
 * Original: 0x00162730 - 0x0016279F (111 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162730: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(0x180DF4) = edi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016274E; /* jb: below (unsigned <) */

loc_00162749: ;
    PUSH32(esp, 0x0016274Eu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016274E: ;
    edx = MEM32(0x180E38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016275F; /* je: equal / zero */

loc_0016275A: ;
    ecx = 2;

loc_0016275F: ;
    edx = MEM32(0x180E34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162782; /* je: equal / zero */

loc_00162769: ;
    edx = MEM32(0x180DF0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016277F; /* je: equal / zero */

loc_00162773: ;
    _fa = (uint32_t)(MEM32(0x180DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DF4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00162782; /* jne: not equal / not zero */

loc_0016277F: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162782: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x40370;
    MEM32(eax + 0xC) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001627A0
 * Original: 0x001627A0 - 0x001627CB (43 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001627A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001627A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    MEM32(0x180E30) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001627BC; /* jb: below (unsigned <) */

loc_001627B7: ;
    PUSH32(esp, 0x001627BCu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001627BC: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x001627C5u); RECOMP_ABI_CALL(0x00162030u, sub_00162030); /* call 0x00162030 */

loc_001627C5: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001627D0
 * Original: 0x001627D0 - 0x00162832 (98 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001627D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001627D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    MEM32(0x180E34) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001627EC; /* jb: below (unsigned <) */

loc_001627E7: ;
    PUSH32(esp, 0x001627ECu); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_001627EC: ;
    edx = MEM32(0x180E38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001627FD; /* je: equal / zero */

loc_001627F8: ;
    ecx = 2;

loc_001627FD: ;
    edx = MEM32(0x180E34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162820; /* je: equal / zero */

loc_00162807: ;
    edx = MEM32(0x180DF0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016281D; /* je: equal / zero */

loc_00162811: ;
    _fa = (uint32_t)(MEM32(0x180DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180DF4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00162820; /* jne: not equal / not zero */

loc_0016281D: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00162820: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
