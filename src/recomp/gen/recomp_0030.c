/**
 * DOAU1 - Recompiled code chunk 30
 * Functions: 250 (0x00115F00 - 0x00119D60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00115F00
 * Original: 0x00115F00 - 0x00115F26 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115F24; /* je: equal / zero */

loc_00115F09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115F0Fu); RECOMP_ABI_CALL(0x00115DC0u, sub_00115DC0); /* call 0x00115DC0 */

loc_00115F0F: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115F24; /* jne: not equal / not zero */

loc_00115F18: ;
    PUSH32(esp, esi);
    MEM8(esi) = 0;
    PUSH32(esp, 0x00115F21u); RECOMP_ABI_CALL(0x00115B10u, sub_00115B10); /* call 0x00115B10 */

loc_00115F21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115F24: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115F30
 * Original: 0x00115F30 - 0x00115F7A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115F30: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM16(edx + 0x10) = LO16(ecx);
    ecx = MEM32(esp + 4);
    MEM16(eax + 2) = LO16(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0xC) = LO16(ecx);
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xAC44);
    MEM16(eax) = 1;
    MEM32(eax + 4) = 0xAC44;
    MEM16(eax + 0xE) = 0x10;
    MEM16(eax + 0x10) = 0;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00115F80
 * Original: 0x00115F80 - 0x0011604E (206 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00115F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00115F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115F9Bu); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_00115F9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00115FAC; /* je: equal / zero */

loc_00115F9F: ;
    PUSH32(esp, 0x2AC558);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115FA9u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00115FA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115FAC: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115FB6u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_00115FB6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115FC1u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_00115FC1: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00116047; /* jne: not equal / not zero */

loc_00115FC8: ;
    goto loc_00115FD0;

    /* nop */

loc_00115FD0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115FDAu); RECOMP_ABI_CALL(0x000ADB8Fu, sub_000ADB8F); /* call 0x000ADB8F */

loc_00115FDA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115FF0u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_00115FF0: ;
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116002u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_00116002: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x24);
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00116047; /* jg: greater (signed >) */

loc_00116020: ;
    if (CMP_L(_fas, _fbs)) goto loc_00116028; /* jl: less (signed <) */

loc_00116022: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00116047; /* ja: above (unsigned >) */

loc_00116028: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00116047; /* jl: less (signed <) */

loc_0011602C: ;
    if (CMP_G(_fas, _fbs)) goto loc_00116032; /* jg: greater (signed >) */

loc_0011602E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00116047; /* jbe: below or equal (unsigned <=) */

loc_00116032: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116040u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_00116040: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00115FD0; /* je: equal / zero */

loc_00116047: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00116050
 * Original: 0x00116050 - 0x0011611E (206 bytes, 77 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00116050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116065u); RECOMP_ABI_CALL(0x001AB303u, sub_001AB303); /* call 0x001AB303 */

loc_00116065: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011607D; /* je: equal / zero */

loc_00116069: ;
    PUSH32(esp, 0x2AC590);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116073u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116073: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011607D: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116087u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_00116087: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116092u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_00116092: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00116117; /* je: equal / zero */

loc_00116099: ;
    /* nop */

loc_001160A0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001160AAu); RECOMP_ABI_CALL(0x000ADB8Fu, sub_000ADB8F); /* call 0x000ADB8F */

loc_001160AA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001160C0u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_001160C0: ;
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001160D2u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_001160D2: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x24);
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00116117; /* jg: greater (signed >) */

loc_001160F0: ;
    if (CMP_L(_fas, _fbs)) goto loc_001160F8; /* jl: less (signed <) */

loc_001160F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00116117; /* ja: above (unsigned >) */

loc_001160F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00116117; /* jl: less (signed <) */

loc_001160FC: ;
    if (CMP_G(_fas, _fbs)) goto loc_00116102; /* jg: greater (signed >) */

loc_001160FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00116117; /* jbe: below or equal (unsigned <=) */

loc_00116102: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116110u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_00116110: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001160A0; /* jne: not equal / not zero */

loc_00116117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00116120
 * Original: 0x00116120 - 0x00116150 (48 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116120: ;
    eax = MEM32(esp + 4);
    MEM32(0x970F88) = eax;
    MEM32(0x970F8C) = 0x700;
    eax = 0x970A10;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00116140: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x970F90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x970F90 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116140; /* jl: less (signed <) */

loc_0011614F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116150
 * Original: 0x00116150 - 0x00116180 (48 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116150: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x970F88) = ecx;
    eax = 0x970A10;
    /* nop */

loc_00116160: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x970F90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x970F90 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116160; /* jl: less (signed <) */

loc_0011616F: ;
    MEM32(0x970F90) = ecx;
    MEM32(0x2F9728) = 0x8000;
    esp += 4; return; /* ret */

}

/**
 * sub_00116180
 * Original: 0x00116180 - 0x0011618A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116180(void)
{

loc_00116180: ;
    eax = MEM32(esp + 4);
    MEM32(0x970F90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00116190
 * Original: 0x00116190 - 0x001161BE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116190: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x970A0C;
    /* nop */

loc_001161A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001161B2; /* je: equal / zero */

loc_001161A5: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x970F8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x970F8C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001161A0; /* jl: less (signed <) */

loc_001161B1: ;
    esp += 4; return; /* ret */

loc_001161B2: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fb = (uint32_t)(0x970A08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x970A08;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001161C0
 * Original: 0x001161C0 - 0x001161D5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001161C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x16;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001161E0
 * Original: 0x001161E0 - 0x001162B1 (209 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001161E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x970F88);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0011620A; /* jne: not equal / not zero */

loc_001161F6: ;
    PUSH32(esp, 0x2AC600);
    PUSH32(esp, 0x00116200u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011620A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    ecx = esp + 0xC;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00116234u); RECOMP_ABI_CALL(0x00115F30u, sub_00115F30); /* call 0x00115F30 */

loc_00116234: ;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x970F90);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = esp + 0xC;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x20) = 0x18;
    MEM32(esp + 0x24) = 0x400A0;
    if (CMP_NE(_fa, _fb)) goto loc_0011626E; /* jne: not equal / not zero */

loc_00116261: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011626E; /* jne: not equal / not zero */

loc_00116266: ;
    MEM32(esp + 0x24) = 0x400B0;

loc_0011626E: ;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116280u); RECOMP_ABI_CALL(0x001AE5A9u, sub_001AE5A9); /* call 0x001AE5A9 */

loc_00116280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0011628D; /* jl: less (signed <) */

loc_00116285: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001162A0; /* jne: not equal / not zero */

loc_0011628D: ;
    PUSH32(esp, 0x2AC5C8);
    PUSH32(esp, 0x00116297u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116297: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;

loc_001162A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001162A8u); RECOMP_ABI_CALL(0x001AB283u, sub_001AB283); /* call 0x001AB283 */

loc_001162A8: ;
    eax = MEM32(esp + 4);
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001162C0
 * Original: 0x001162C0 - 0x001163DE (286 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001162C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001162C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001163CA; /* jl: less (signed <) */

loc_001162D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001163CA; /* jg: greater (signed >) */

loc_001162DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001162E0u); RECOMP_ABI_CALL(0x00116190u, sub_00116190); /* call 0x00116190 */

loc_001162E0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001162FB; /* jne: not equal / not zero */

loc_001162E6: ;
    PUSH32(esp, 0x2AC690);
    PUSH32(esp, 0x001162F0u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001162F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001162FB: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x16;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi) = 0x2F96C0;
    eax = MEM32(0x2F9728);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011631Cu); RECOMP_ABI_CALL(0x001161E0u, sub_001161E0); /* call 0x001161E0 */

loc_0011631C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00116335; /* jne: not equal / not zero */

loc_00116324: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011632Au); RECOMP_ABI_CALL(0x001161C0u, sub_001161C0); /* call 0x001161C0 */

loc_0011632A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116335: ;
    ecx = MEM32(0x970F90);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x0011634Cu); RECOMP_ABI_CALL(0x00115F30u, sub_00115F30); /* call 0x00115F30 */

loc_0011634C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = esi + 0x14;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x20));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(eax + 0xC) = edx;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x50) = 0;
    MEM32(esi + 0x54) = 0xFFFFFF81u;
    if (CMP_NE(_fa, _fb)) goto loc_001163A8; /* jne: not equal / not zero */

loc_0011638F: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x44) = 0;
    MEM32(esi + 0x48) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001163A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001163BB; /* jne: not equal / not zero */

loc_001163AD: ;
    MEM32(esi + 0x44) = 0xFFFFFFF1u;
    MEM32(esi + 0x48) = 0xF;

loc_001163BB: ;
    MEM32(esi + 4) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001163CA: ;
    PUSH32(esp, 0x2AC65C);
    PUSH32(esp, 0x001163D4u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001163D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001163E0
 * Original: 0x001163E0 - 0x00116455 (117 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001163E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001163E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116453; /* je: equal / zero */

loc_001163EC: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116401; /* jne: not equal / not zero */

loc_001163F3: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2AC740;
    g_seh_ebp = ebp; sub_0011A960(); return; /* tail jmp 0x0011A960 */

loc_00116401: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011640Bu); RECOMP_ABI_CALL(0x001AD0B3u, sub_001AD0B3); /* call 0x001AD0B3 */

loc_0011640B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011641D; /* je: equal / zero */

loc_0011640F: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2AC700;
    g_seh_ebp = ebp; sub_0011A960(); return; /* tail jmp 0x0011A960 */

loc_0011641D: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116446; /* jne: not equal / not zero */

loc_00116423: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011642Eu); RECOMP_ABI_CALL(0x001AB3DBu, sub_001AB3DB); /* call 0x001AB3DB */

loc_0011642E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011643F; /* je: equal / zero */

loc_00116432: ;
    PUSH32(esp, 0x2AC6C4);
    PUSH32(esp, 0x0011643Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011643C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011643F: ;
    MEM32(esi + 0x34) = 0;

loc_00116446: ;
    ecx = MEM32(esi + 8);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00115F80(); return; /* tail jmp 0x00115F80 */

loc_00116453: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116460
 * Original: 0x00116460 - 0x00116489 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116488; /* je: equal / zero */

loc_0011646B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011647F; /* jne: not equal / not zero */

loc_00116472: ;
    MEM32(esp + 4) = 0x2AC740;
    g_seh_ebp = ebp; sub_0011A960(); return; /* tail jmp 0x0011A960 */

loc_0011647F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00116050(); return; /* tail jmp 0x00116050 */

loc_00116488: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116490
 * Original: 0x00116490 - 0x0011650B (123 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001164BBu); RECOMP_ABI_CALL(0x001AB3F7u, sub_001AB3F7); /* call 0x001AB3F7 */

loc_001164BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001164D3; /* je: equal / zero */

loc_001164BF: ;
    PUSH32(esp, 0x2AC764);
    PUSH32(esp, 0x001164C9u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001164C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001164D3: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001164F0u); RECOMP_ABI_CALL(0x001A8E14u, sub_001A8E14); /* call 0x001A8E14 */

loc_001164F0: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX16(MEM16(esi + 0x22));
    eax = MEM32(0x2F9728);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116510
 * Original: 0x00116510 - 0x00116578 (104 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116534; /* je: equal / zero */

loc_00116520: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011653A; /* jne: not equal / not zero */

loc_00116527: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x00116531u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116531: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116534: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011653A: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116548; /* jne: not equal / not zero */

loc_00116540: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00116548: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116558u); RECOMP_ABI_CALL(0x001AB3BBu, sub_001AB3BB); /* call 0x001AB3BB */

loc_00116558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116572; /* jne: not equal / not zero */

loc_0011655C: ;
    ecx = ZX16(MEM16(esi + 0x22));
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x2C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x2C)); }
    edi = eax;

loc_00116572: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116580
 * Original: 0x00116580 - 0x001165C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116580: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001165C3; /* je: equal / zero */

loc_0011658B: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001165A0; /* jne: not equal / not zero */

loc_00116592: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011659Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011659C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001165A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2EDEF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001165B4; /* jle: less or equal (signed <=) */

loc_001165AB: ;
    eax = 0x2EDEF;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

loc_001165B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001165C0; /* jge: greater or equal (signed >=) */

loc_001165BB: ;
    eax = 0xBC;

loc_001165C0: ;
    MEM32(ecx + 0x18) = eax;

loc_001165C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001165D0
 * Original: 0x001165D0 - 0x001165F6 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001165D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001165D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001165EF; /* je: equal / zero */

loc_001165DB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001165F2; /* jne: not equal / not zero */

loc_001165E2: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001165ECu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001165EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001165EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001165F2: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00116600
 * Original: 0x00116600 - 0x0011662A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116600: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116629; /* je: equal / zero */

loc_0011660B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116620; /* jne: not equal / not zero */

loc_00116612: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011661Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011661C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116620: ;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM16(eax + 0x22) = LO16(ecx);

loc_00116629: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116630
 * Original: 0x00116630 - 0x00116657 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011664F; /* je: equal / zero */

loc_0011663B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116652; /* jne: not equal / not zero */

loc_00116642: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011664Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011664C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011664F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00116652: ;
    eax = ZX16(MEM16(eax + 0x22));
    esp += 4; return; /* ret */

}

/**
 * sub_00116660
 * Original: 0x00116660 - 0x001166D8 (120 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116660: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166D7; /* je: equal / zero */

loc_0011666B: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116680; /* jne: not equal / not zero */

loc_00116672: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011667Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011667C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116680: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x3C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00116699; /* jle: less or equal (signed <=) */

loc_00116690: ;
    MEM32(ecx + 0x3C) = 0;
    goto loc_001166A7;

loc_00116699: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001166A7; /* jge: greater or equal (signed >=) */

loc_001166A0: ;
    MEM32(ecx + 0x3C) = 0xFFFFD8F0u;

loc_001166A7: ;
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001166B5; /* jle: less or equal (signed <=) */

loc_001166B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001166C1;

loc_001166B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001166C1; /* jge: greater or equal (signed >=) */

loc_001166BC: ;
    eax = 0xFFFFD8F0u;

loc_001166C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001166C8u); RECOMP_ABI_CALL(0x001AB1F7u, sub_001AB1F7); /* call 0x001AB1F7 */

loc_001166C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166D7; /* je: equal / zero */

loc_001166CC: ;
    PUSH32(esp, 0x2AC790);
    PUSH32(esp, 0x001166D6u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001166D6: ;
    POP32(esp, ecx);

loc_001166D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001166CC
 * Original: 0x001166CC - 0x001166D8 (12 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166CC(void)
{

loc_001166CC: ;
    PUSH32(esp, 0x2AC790);
    PUSH32(esp, 0x001166D6u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001166D6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001166E0
 * Original: 0x001166E0 - 0x00116702 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001166E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001166E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166FF; /* je: equal / zero */

loc_001166EB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001166FF; /* jne: not equal / not zero */

loc_001166F2: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001166FCu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001166FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001166FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001166EE
 * Original: 0x001166EE - 0x00116702 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001166EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001166EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001166FF; /* jne: not equal / not zero */

loc_001166F2: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001166FCu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001166FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001166FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001166FF
 * Original: 0x001166FF - 0x00116702 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001166FF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001166FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116710
 * Original: 0x00116710 - 0x0011673D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116710: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116729; /* jne: not equal / not zero */

loc_0011671A: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

loc_00116729: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00116739; /* jne: not equal / not zero */

loc_00116732: ;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = edx;

loc_00116739: ;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00116740
 * Original: 0x00116740 - 0x00116741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116740(void)
{

loc_00116740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116750
 * Original: 0x00116750 - 0x00116772 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00116750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011676F; /* je: equal / zero */

loc_0011675B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011676F; /* jne: not equal / not zero */

loc_00116762: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011676Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011676C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011676F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116780
 * Original: 0x00116780 - 0x001167DC (92 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116780: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001167DB; /* je: equal / zero */

loc_0011678A: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001167DB; /* je: equal / zero */

loc_00116791: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001167A6; /* jne: not equal / not zero */

loc_00116798: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001167A2u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001167A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001167A6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001167C3; /* jge: greater or equal (signed >=) */

loc_001167AF: ;
    eax = 0xFFFFFFF1u;
    PUSH32(esp, 0x2AC7D0);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x001167C1u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001167C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001167C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001167CD; /* jle: less or equal (signed <=) */

loc_001167C8: ;
    eax = 0xF;

loc_001167CD: ;
    PUSH32(esp, 0x2AC7D0);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x001167DAu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001167DA: ;
    POP32(esp, ecx);

loc_001167DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001167E0
 * Original: 0x001167E0 - 0x00116806 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001167E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001167E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001167FF; /* je: equal / zero */

loc_001167EB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116802; /* jne: not equal / not zero */

loc_001167F2: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001167FCu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001167FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001167FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00116802: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00116810
 * Original: 0x00116810 - 0x00116863 (83 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116861; /* je: equal / zero */

loc_0011681C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116832; /* jne: not equal / not zero */

loc_00116823: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011682Du); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011682D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00116832: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011683Du); RECOMP_ABI_CALL(0x00116580u, sub_00116580); /* call 0x00116580 */

loc_0011683D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116843u); RECOMP_ABI_CALL(0x001165D0u, sub_001165D0); /* call 0x001165D0 */

loc_00116843: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00116850u); RECOMP_ABI_CALL(0x001AD0B3u, sub_001AD0B3); /* call 0x001AD0B3 */

loc_00116850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116861; /* je: equal / zero */

loc_00116854: ;
    PUSH32(esp, 0x2AC810);
    PUSH32(esp, 0x0011685Eu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011685E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116861: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116870
 * Original: 0x00116870 - 0x00116885 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116870(void)
{

loc_00116870: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00116890
 * Original: 0x00116890 - 0x001168AF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116890: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001168B0
 * Original: 0x001168B0 - 0x00116912 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001168B0(void)
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

loc_001168B0: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_0011690F; /* jle: less or equal (signed <=) */

loc_001168C9: ;
    PUSH32(esp, ebx);
    ebx = eax;
    /* nop */

loc_001168D0: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AC844)); /* fmul dword ptr [0x2ac844] */
    PUSH32(esp, 0x001168E6u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001168E6: ;
    MEM16(esi) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AC844)); /* fmul dword ptr [0x2ac844] */
    PUSH32(esp, 0x00116902u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116902: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001168D0; /* jne: not equal / not zero */

loc_0011690E: ;
    POP32(esp, ebx);

loc_0011690F: ;
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
 * sub_00116920
 * Original: 0x00116920 - 0x00116951 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116920: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0011694F; /* jle: less or equal (signed <=) */

loc_00116938: ;
    goto loc_00116940;

    /* nop */

loc_00116940: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(esi) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00116940; /* jne: not equal / not zero */

loc_0011694F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116960
 * Original: 0x00116960 - 0x001169F3 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116960(void)
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

loc_00116960: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_0011697F; /* jge: greater or equal (signed >=) */

loc_00116978: ;
    ecx = 0xFFFFFFF1u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0011697F: ;
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00116998; /* jge: greater or equal (signed >=) */

loc_00116991: ;
    ecx = 0xF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116998: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001169F0; /* jle: less or equal (signed <=) */

loc_001169B2: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_001169B5: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0x001169C9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001169C9: ;
    MEM16(esi) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x001169E3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001169E3: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001169B5; /* jne: not equal / not zero */

loc_001169EF: ;
    POP32(esp, ebx);

loc_001169F0: ;
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
 * sub_00116A00
 * Original: 0x00116A00 - 0x00116A93 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116A00(void)
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

loc_00116A00: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_00116A1F; /* jge: greater or equal (signed >=) */

loc_00116A18: ;
    ecx = 0xFFFFFFF1u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116A1F: ;
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00116A38; /* jge: greater or equal (signed >=) */

loc_00116A31: ;
    ecx = 0xF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116A38: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116A90; /* jle: less or equal (signed <=) */

loc_00116A52: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_00116A55: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0x00116A69u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116A69: ;
    MEM16(esi) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x00116A83u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116A83: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00116A55; /* jne: not equal / not zero */

loc_00116A8F: ;
    POP32(esp, ebx);

loc_00116A90: ;
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
 * sub_00116AA0
 * Original: 0x00116AA0 - 0x00116BB2 (274 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116AA0(void)
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

loc_00116AA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00116AC3; /* jge: greater or equal (signed >=) */

loc_00116ABC: ;
    ecx = 0xFFFFFFF1u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116AC3: ;
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00116ADC; /* jge: greater or equal (signed >=) */

loc_00116AD5: ;
    ecx = 0xF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116ADC: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(ecx * 4 + 0x2AC058)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116BAD; /* jle: less or equal (signed <=) */

loc_00116AFA: ;
    PUSH32(esp, ebp);
    ebp = eax;
    /* nop */

loc_00116B00: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x1C)); /* fiadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x20)); /* fiadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0x00116B46u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116B46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116B54; /* jle: less or equal (signed <=) */

loc_00116B4D: ;
    MEM16(esi) = 0x7FFF;
    goto loc_00116B6E;

loc_00116B54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116B62; /* jge: greater or equal (signed >=) */

loc_00116B5B: ;
    MEM16(esi) = 0x8000;
    goto loc_00116B6E;

loc_00116B62: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0x00116B6Bu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116B6B: ;
    MEM16(esi) = LO16(eax);

loc_00116B6E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00116B7Au); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116B7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116B88; /* jle: less or equal (signed <=) */

loc_00116B81: ;
    MEM16(esi) = 0x7FFF;
    goto loc_00116BA2;

loc_00116B88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116B96; /* jge: greater or equal (signed >=) */

loc_00116B8F: ;
    MEM16(esi) = 0x8000;
    goto loc_00116BA2;

loc_00116B96: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0x00116B9Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00116B9F: ;
    MEM16(esi) = LO16(eax);

loc_00116BA2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00116B00; /* jne: not equal / not zero */

loc_00116BAC: ;
    POP32(esp, ebp);

loc_00116BAD: ;
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
 * sub_00116BC0
 * Original: 0x00116BC0 - 0x00116D46 (390 bytes, 143 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116BC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116D41; /* je: equal / zero */

loc_00116BD3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116BEE; /* jne: not equal / not zero */

loc_00116BDB: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x00116BE5u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116BE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116BEE: ;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esi + 0x22));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116D3F; /* jl: less (signed <) */

loc_00116C0C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x28));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esp + 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00116C46u); RECOMP_ABI_CALL(0x001AB3F7u, sub_001AB3F7); /* call 0x001AB3F7 */

loc_00116C46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00116C58; /* je: equal / zero */

loc_00116C4B: ;
    PUSH32(esp, 0x2AC764);
    PUSH32(esp, 0x00116C55u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116C58: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116C7C; /* jne: not equal / not zero */

loc_00116C60: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116C74u); RECOMP_ABI_CALL(0x00116890u, sub_00116890); /* call 0x00116890 */

loc_00116C74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00116D14;

loc_00116C7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116D14; /* jne: not equal / not zero */

loc_00116C85: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    eax = MEM32(esi + 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_00116CB3; /* jne: not equal / not zero */

loc_00116C8E: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00116CAB; /* jne: not equal / not zero */

loc_00116CA1: ;
    PUSH32(esp, 0x00116CA6u); RECOMP_ABI_CALL(0x001168B0u, sub_001168B0); /* call 0x001168B0 */

loc_00116CA6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00116D14;

loc_00116CAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116CB1u); RECOMP_ABI_CALL(0x00116960u, sub_00116960); /* call 0x00116960 */

loc_00116CB1: ;
    goto loc_00116D11;

loc_00116CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116CED; /* jne: not equal / not zero */

loc_00116CB8: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116CED; /* jne: not equal / not zero */

loc_00116CBE: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00116CDF; /* jne: not equal / not zero */

loc_00116CD4: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116CDAu); RECOMP_ABI_CALL(0x00116920u, sub_00116920); /* call 0x00116920 */

loc_00116CDA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00116D14;

loc_00116CDF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116CE8u); RECOMP_ABI_CALL(0x00116920u, sub_00116920); /* call 0x00116920 */

loc_00116CE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00116D14;

loc_00116CED: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00116D0C; /* jne: not equal / not zero */

loc_00116D05: ;
    PUSH32(esp, 0x00116D0Au); RECOMP_ABI_CALL(0x00116A00u, sub_00116A00); /* call 0x00116A00 */

loc_00116D0A: ;
    goto loc_00116D11;

loc_00116D0C: ;
    PUSH32(esp, 0x00116D11u); RECOMP_ABI_CALL(0x00116AA0u, sub_00116AA0); /* call 0x00116AA0 */

loc_00116D11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116D14: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00116D2Eu); RECOMP_ABI_CALL(0x001A8E14u, sub_001A8E14); /* call 0x001A8E14 */

loc_00116D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116D3F; /* je: equal / zero */

loc_00116D32: ;
    PUSH32(esp, 0x2AC848);
    PUSH32(esp, 0x00116D3Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116D3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116D3F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_00116D41: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116D50
 * Original: 0x00116D50 - 0x00116D5C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D50(void)
{

loc_00116D50: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x34) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00116D60
 * Original: 0x00116D60 - 0x00116D66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D60(void)
{

loc_00116D60: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00116D70
 * Original: 0x00116D70 - 0x00116D7D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00116D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116D70: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116D80
 * Original: 0x00116D80 - 0x00116D83 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00116D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116D80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116D90
 * Original: 0x00116D90 - 0x00116D96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D90(void)
{

loc_00116D90: ;
    eax = 0x2F96A8;
    esp += 4; return; /* ret */

}

/**
 * sub_00116DA0
 * Original: 0x00116DA0 - 0x00116DAE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116DA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116DAD; /* jle: less or equal (signed <=) */

loc_00116DA8: ;
    MEM32(0x2F9728) = eax;

loc_00116DAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116DB0
 * Original: 0x00116DB0 - 0x00116DB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116DB0(void)
{

loc_00116DB0: ;
    eax = MEM32(0x2F9728);
    esp += 4; return; /* ret */

}

/**
 * sub_00116DC0
 * Original: 0x00116DC0 - 0x00116DE0 (32 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116DC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116DDE; /* je: equal / zero */

loc_00116DC9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00116DD7u); RECOMP_ABI_CALL(0x001AD0EBu, sub_001AD0EB); /* call 0x001AD0EB */

loc_00116DD7: ;
    MEM32(esi + 0x10) = 1;

loc_00116DDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116DE0
 * Original: 0x00116DE0 - 0x00116E14 (52 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116E12; /* je: equal / zero */

loc_00116DEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116DF2u); RECOMP_ABI_CALL(0x00116460u, sub_00116460); /* call 0x00116460 */

loc_00116DF2: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116E09; /* je: equal / zero */

loc_00116DFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116E02u); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_00116E02: ;
    MEM32(esi + 8) = 0;

loc_00116E09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116E0Fu); RECOMP_ABI_CALL(0x001161C0u, sub_001161C0); /* call 0x001161C0 */

loc_00116E0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116E12: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116E20
 * Original: 0x00116E20 - 0x00116EF6 (214 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116E20: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = ecx;
    eax = 1;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00116EF1; /* je: equal / zero */

loc_00116E5F: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x44), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116EF1; /* je: equal / zero */

loc_00116E6C: ;
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edx + 0x44) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00116E7D; /* jge: greater or equal (signed >=) */

loc_00116E76: ;
    ecx = 0xFFFFFFF1u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116E7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 4 + 0x2AC0D8);
    ecx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00116E8E; /* jge: greater or equal (signed >=) */

loc_00116E8C: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00116E8E: ;
    esi = MEM32(ecx * 4 + 0x2AC0D8);
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116EA3; /* jge: greater or equal (signed >=) */

loc_00116E9C: ;
    ecx = 0xF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116EA3: ;
    ecx = MEM32(ecx * 4 + 0x2AC0D8);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    POP32(esp, edi);
    MEM32(esp + 0x24) = esi;
    MEM32(edx + 0x4C) = ebx;
    MEM32(esp + 8) = 3;
    MEM32(esp + 0x1C) = ecx;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00116EE3; /* jne: not equal / not zero */

loc_00116ED0: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116EDBu); RECOMP_ABI_CALL(0x00116DC0u, sub_00116DC0); /* call 0x00116DC0 */

loc_00116EDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116EE3: ;
    ecx = MEM32(edx + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00116EF1u); RECOMP_ABI_CALL(0x001AB29Fu, sub_001AB29F); /* call 0x001AB29F */

loc_00116EF1: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116F00
 * Original: 0x00116F00 - 0x00117078 (376 bytes, 118 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116F00: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = ecx;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    eax = 1;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = 5;
    MEM32(esp + 0x28) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00117073; /* je: equal / zero */

loc_00116F48: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117073; /* je: equal / zero */

loc_00116F51: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116F68; /* je: equal / zero */

loc_00116F56: ;
    PUSH32(esp, 0x2AC878);
    PUSH32(esp, 0x00116F60u); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_00116F60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116F68: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 0x7F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00116F7D; /* jge: greater or equal (signed >=) */

loc_00116F76: ;
    esi = 0xFFFFFF81u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116F7D: ;
    ecx = eax + -127;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116F8B; /* jge: greater or equal (signed >=) */

loc_00116F84: ;
    ecx = 0x7F;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116F8B: ;
    eax = MEM32(esp + 0x44);
    edx = eax + 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116F9D; /* jge: greater or equal (signed >=) */

loc_00116F96: ;
    edx = 0xFFFFFF81u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116F9D: ;
    edi = eax + -127;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116FAB; /* jge: greater or equal (signed >=) */

loc_00116FA4: ;
    edi = 0x7F;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00116FAB: ;
    eax = MEM32(esi * 4 + 0x2AC158);
    edx = MEM32(edx * 4 + 0x2AC158);
    ecx = MEM32(ecx * 4 + 0x2AC158);
    esi = edx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = edx + ecx;
    edx = MEM32(edi * 4 + 0x2AC158);
    edi = edx + eax;
    eax = edx + ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00116FDB; /* jle: less or equal (signed <=) */

loc_00116FD7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00116FE8;

loc_00116FDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116FE8; /* jge: greater or equal (signed >=) */

loc_00116FE3: ;
    esi = 0xFFFFD8F0u;

loc_00116FE8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116FF0; /* jle: less or equal (signed <=) */

loc_00116FEC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00116FFD;

loc_00116FF0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116FFD; /* jge: greater or equal (signed >=) */

loc_00116FF8: ;
    ebx = 0xFFFFD8F0u;

loc_00116FFD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117005; /* jle: less or equal (signed <=) */

loc_00117001: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00117012;

loc_00117005: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00117012; /* jge: greater or equal (signed >=) */

loc_0011700D: ;
    edi = 0xFFFFD8F0u;

loc_00117012: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011701A; /* jle: less or equal (signed <=) */

loc_00117016: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00117026;

loc_0011701A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00117026; /* jge: greater or equal (signed >=) */

loc_00117021: ;
    eax = 0xFFFFD8F0u;

loc_00117026: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    MEM32(esp + 0x2C) = edi;
    POP32(esp, edi);
    MEM32(esp + 0x18) = esi;
    edx = esp + 0x14;
    POP32(esp, esi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = edx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00117065; /* jne: not equal / not zero */

loc_00117052: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011705Du); RECOMP_ABI_CALL(0x00116DC0u, sub_00116DC0); /* call 0x00116DC0 */

loc_0011705D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00117065: ;
    eax = MEM32(eax + 8);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117073u); RECOMP_ABI_CALL(0x001AB29Fu, sub_001AB29F); /* call 0x001AB29F */

loc_00117073: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117080
 * Original: 0x00117080 - 0x001170B7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117080: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x30) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001170B5; /* je: equal / zero */

loc_00117098: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001170B5; /* jne: not equal / not zero */

loc_0011709D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001170B5; /* jne: not equal / not zero */

loc_001170A1: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001170B5; /* jne: not equal / not zero */

loc_001170A6: ;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001170B2u); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_001170B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001170B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001170C0
 * Original: 0x001170C0 - 0x0011710B (75 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001170C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001170C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001170DF; /* je: equal / zero */

loc_001170CB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001170E0; /* jne: not equal / not zero */

loc_001170D2: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x001170DCu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_001170DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001170DF: ;
    esp += 4; return; /* ret */

loc_001170E0: ;
    edx = MEM32(eax + 0xC);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001170DF; /* je: equal / zero */

loc_001170EC: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), ecx (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00117102; /* jne: not equal / not zero */

loc_001170F4: ;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117102; /* jne: not equal / not zero */

loc_001170F9: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00116E20(); return; /* tail jmp 0x00116E20 */

loc_00117102: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00116710(); return; /* tail jmp 0x00116710 */

}

/**
 * sub_00117110
 * Original: 0x00117110 - 0x00117147 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117110: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00117134; /* je: equal / zero */

loc_00117119: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117146; /* jne: not equal / not zero */

loc_0011711C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00117130u); RECOMP_ABI_CALL(0x00116F00u, sub_00116F00); /* call 0x00116F00 */

loc_00117130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00117134: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00117143u); RECOMP_ABI_CALL(0x00116810u, sub_00116810); /* call 0x00116810 */

loc_00117143: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117150
 * Original: 0x00117150 - 0x00117184 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117150: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011716F; /* je: equal / zero */

loc_0011715B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117170; /* jne: not equal / not zero */

loc_00117162: ;
    PUSH32(esp, 0x2AC740);
    PUSH32(esp, 0x0011716Cu); RECOMP_ABI_CALL(0x0011A960u, sub_0011A960); /* call 0x0011A960 */

loc_0011716C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011716F: ;
    esp += 4; return; /* ret */

loc_00117170: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00117080(); return; /* tail jmp 0x00117080 */

}

/**
 * sub_00117190
 * Original: 0x00117190 - 0x00117208 (120 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117190: ;
    PUSH32(esp, 0x00117195u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00117195: ;
    eax = MEM32(0x970F94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001171A3; /* je: equal / zero */

loc_0011719E: ;
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_001171A3: ;
    MEM32(0x970F94) = 1;
    PUSH32(esp, 0x001171B2u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_001171B2: ;
    MEM32(0x970F94) = 3;
    PUSH32(esp, 0x001171C1u); RECOMP_ABI_CALL(0x0010CCE0u, sub_0010CCE0); /* call 0x0010CCE0 */

loc_001171C1: ;
    MEM32(0x970F94) = 4;
    PUSH32(esp, 0x001171D0u); RECOMP_ABI_CALL(0x0010C3C0u, sub_0010C3C0); /* call 0x0010C3C0 */

loc_001171D0: ;
    MEM32(0x970F94) = 5;
    PUSH32(esp, 0x001171DFu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_001171DF: ;
    MEM32(0x970F94) = 6;
    PUSH32(esp, 0x001171EEu); RECOMP_ABI_CALL(0x0010C3C0u, sub_0010C3C0); /* call 0x0010C3C0 */

loc_001171EE: ;
    MEM32(0x970F94) = 7;
    PUSH32(esp, 0x001171FDu); RECOMP_ABI_CALL(0x0010CCE0u, sub_0010CCE0); /* call 0x0010CCE0 */

loc_001171FD: ;
    MEM32(0x970F94) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00117210
 * Original: 0x00117210 - 0x00117215 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117210: ;
    g_seh_ebp = ebp; sub_00117190(); return; /* tail jmp 0x00117190 */

}

/**
 * sub_00117220
 * Original: 0x00117220 - 0x0011722C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00117220: ;
    eax = MEM32(0x970F94);
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
 * sub_00117230
 * Original: 0x00117230 - 0x0011723C (12 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117230(void)
{

loc_00117230: ;
    PUSH32(esp, 0x2AC8B4);
    PUSH32(esp, 0x0011723Au); RECOMP_ABI_CALL(0x00118420u, sub_00118420); /* call 0x00118420 */

loc_0011723A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117240
 * Original: 0x00117240 - 0x00117260 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117240: ;
    eax = MEM32(0x970F98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117259; /* jne: not equal / not zero */

loc_00117249: ;
    PUSH32(esp, edi);
    ecx = 0x300;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x99AAC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00117259: ;
    MEM32(0x970F98) = MEM32(0x970F98) + 1;
    _fa = (uint32_t)(MEM32(0x970F98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00117260
 * Original: 0x00117260 - 0x00117279 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117260: ;
    MEM32(0x970F98) = MEM32(0x970F98) - 1;
    _fa = (uint32_t)(MEM32(0x970F98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117278; /* jne: not equal / not zero */

loc_00117268: ;
    PUSH32(esp, edi);
    ecx = 0x300;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x99AAC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00117278: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117280
 * Original: 0x00117280 - 0x00117299 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117280: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117298; /* je: equal / zero */

loc_00117288: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx + 4) = LO8(eax);
    POP32(esp, edi);

loc_00117298: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001172A0
 * Original: 0x001172A0 - 0x001172A8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001172A0(void)
{

loc_001172A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001172B0
 * Original: 0x001172B0 - 0x001172C3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001172B0(void)
{

loc_001172B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001172D0
 * Original: 0x001172D0 - 0x00117325 (85 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001172D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001172D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00117308; /* jle: less or equal (signed <=) */

loc_001172E8: ;
    eax = edi + 8;
    PUSH32(esp, ebx);
    /* nop */

loc_001172F0: ;
    ebx = eax + 8;
    MEM32(eax + -8) = ebx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    ebx = MEM32(ecx + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001172F0; /* jl: less (signed <) */

loc_00117307: ;
    POP32(esp, ebx);

loc_00117308: ;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + edi;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117330
 * Original: 0x00117330 - 0x00117375 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00117330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117330: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011735C; /* jl: less (signed <) */

loc_00117338: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011735C; /* jge: greater or equal (signed >=) */

loc_0011733D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + ecx * 4 + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117374; /* je: equal / zero */

loc_0011734B: ;
    goto loc_00117350;

    /* nop */

loc_00117350: ;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117350; /* jne: not equal / not zero */

loc_0011735B: ;
    esp += 4; return; /* ret */

loc_0011735C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117372; /* je: equal / zero */

loc_00117367: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011736Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011736Du); } /* indirect call */
    }

loc_0011736F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117372: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00117374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117380
 * Original: 0x00117380 - 0x00117489 (265 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117380: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011745D; /* jl: less (signed <) */

loc_00117390: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011745D; /* jge: greater or equal (signed >=) */

loc_00117399: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011739Fu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0011739F: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + edi * 4 + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001173BF; /* jne: not equal / not zero */

loc_001173AB: ;
    eax = MEM32(esp + 0x28);
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    PUSH32(esp, 0x001173B9u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_001173B9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001173BF: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    MEM32(esp + 0xC) = ebx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_001173F9; /* jg: greater (signed >) */

loc_001173D6: ;
    edx = MEM32(esp + 0x2C);
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi);
    MEM32(eax + edi * 4 + 0x18) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi) = edx;
    POP32(esp, ebx);
    MEM32(eax + 0x14) = esi;
    PUSH32(esp, 0x001173F3u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_001173F3: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001173F9: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117440; /* jne: not equal / not zero */

loc_001173FF: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00117412u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00117412: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x3C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebx);
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x0011743Au); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_0011743A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00117440: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, ebx);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    PUSH32(esp, 0x00117457u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00117457: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011745D: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117473; /* je: equal / zero */

loc_00117468: ;
    edx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117470u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011746Eu); } /* indirect call */
    }

loc_00117470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117473: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117490
 * Original: 0x00117490 - 0x00117567 (215 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011754C; /* jl: less (signed <) */

loc_0011749D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011754C; /* jge: greater or equal (signed >=) */

loc_001174A6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117564; /* jle: less or equal (signed <=) */

loc_001174B6: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117564; /* je: equal / zero */

loc_001174BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001174C5u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001174C5: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + ebx * 4 + 0x18);
    ecx = esi + ebx * 4 + 0x18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001174E1; /* je: equal / zero */

loc_001174D7: ;
    ecx = eax;
    edx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001174D7; /* jne: not equal / not zero */

loc_001174E1: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011750B; /* jne: not equal / not zero */

loc_001174E7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011750B; /* je: equal / zero */

loc_001174EB: ;
    eax = MEM32(edx + 0xC);
    ebx = MEM32(edx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0011750B; /* jne: not equal / not zero */

loc_001174FB: ;
    ecx = MEM32(edi + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0011750B: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011752C; /* jne: not equal / not zero */

loc_00117512: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117544; /* je: equal / zero */

loc_00117519: ;
    edx = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117521u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011751Fu); } /* indirect call */
    }

loc_00117521: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0011752C: ;
    edx = MEM32(eax);
    MEM32(esi + 0x14) = edx;
    MEM32(eax) = 0;
    edx = MEM32(edi);
    MEM32(eax + 8) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx) = eax;

loc_00117544: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0011754C: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117565; /* je: equal / zero */

loc_00117557: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011755Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011755Du); } /* indirect call */
    }

loc_0011755F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00117564: ;
    POP32(esp, edi);

loc_00117565: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117570
 * Original: 0x00117570 - 0x0011763F (207 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117570: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117624; /* jl: less (signed <) */

loc_0011757D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00117624; /* jge: greater or equal (signed >=) */

loc_00117586: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011763C; /* jle: less or equal (signed <=) */

loc_00117596: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011763C; /* je: equal / zero */

loc_0011759F: ;
    PUSH32(esp, 0x001175A4u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001175A4: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), 1 (8-bit) */
    eax = MEM32(ecx + edi * 4 + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_001175DD; /* jne: not equal / not zero */

loc_001175B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001175DD; /* je: equal / zero */

loc_001175B6: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001175DD; /* jne: not equal / not zero */

loc_001175C8: ;
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001175DD: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001175FD; /* jne: not equal / not zero */

loc_001175E4: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011761D; /* je: equal / zero */

loc_001175EB: ;
    edx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001175F3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001175F1u); } /* indirect call */
    }

loc_001175F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001175FD: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    MEM32(eax) = 0;
    edx = MEM32(esi);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + edi * 4 + 0x18);
    MEM32(eax) = edx;
    MEM32(ecx + edi * 4 + 0x18) = eax;

loc_0011761D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00117624: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011763D; /* je: equal / zero */

loc_0011762F: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117637u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117635u); } /* indirect call */
    }

loc_00117637: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0011763C: ;
    POP32(esp, esi);

loc_0011763D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117640
 * Original: 0x00117640 - 0x001176B8 (120 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117640: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0011769C; /* jl: less (signed <) */

loc_00117655: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011769C; /* jge: greater or equal (signed >=) */

loc_0011765A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001176B2; /* je: equal / zero */

loc_00117666: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(edx) = eax;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), 1 (8-bit) */
    MEM32(esp + 4) = esi;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0011768B; /* jne: not equal / not zero */

loc_0011767A: ;
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011768B: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011769C: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001176B2; /* je: equal / zero */

loc_001176A7: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001176AFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001176ADu); } /* indirect call */
    }

loc_001176AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001176B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001176C0
 * Original: 0x001176C0 - 0x001176DA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001176C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001176C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001176D9; /* je: equal / zero */

loc_001176D2: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001176D2; /* jne: not equal / not zero */

loc_001176D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001176E0
 * Original: 0x001176E0 - 0x001176F8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001176E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001176E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001176F7; /* je: equal / zero */

loc_001176ED: ;
    /* nop */

loc_001176F0: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001176F0; /* jne: not equal / not zero */

loc_001176F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117700
 * Original: 0x00117700 - 0x00117798 (152 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117700: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x99AAF4;

loc_00117707: ;
    SET_LO8(edx, MEM8(eax + -48));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011773D; /* je: equal / zero */

loc_0011770E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117732; /* je: equal / zero */

loc_00117713: ;
    SET_LO8(edx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117735; /* je: equal / zero */

loc_0011771A: ;
    SET_LO8(edx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011773A; /* je: equal / zero */

loc_00117721: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99B6F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99B6F4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117707; /* jl: less (signed <) */

loc_00117730: ;
    goto loc_0011773D;

loc_00117732: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011773D;

loc_00117735: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011773D;

loc_0011773A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011773D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117745; /* jne: not equal / not zero */

loc_00117742: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00117745: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx + ecx * 2;
    ecx = MEM32(esp + 0xC);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x99AAC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x99AAC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 5) = LO8(eax);
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    MEM8(esi + 4) = 1;
    MEM32(esi) = 0x2F972C;
    MEM32(esi + 8) = 0x2AC8A4;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x28) = 0x117230;
    MEM32(esi + 0x2C) = esi;
    PUSH32(esp, 0x00117791u); RECOMP_ABI_CALL(0x001172D0u, sub_001172D0); /* call 0x001172D0 */

loc_00117791: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117733
 * Original: 0x00117733 - 0x00117798 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117733(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117733: ;
    goto loc_0011773D;

    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011773D;

    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011773D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117745; /* jne: not equal / not zero */

loc_00117742: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00117745: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx + ecx * 2;
    ecx = MEM32(esp + 0xC);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x99AAC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x99AAC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 5) = LO8(eax);
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    MEM8(esi + 4) = 1;
    MEM32(esi) = 0x2F972C;
    MEM32(esi + 8) = 0x2AC8A4;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x28) = 0x117230;
    MEM32(esi + 0x2C) = esi;
    PUSH32(esp, 0x00117791u); RECOMP_ABI_CALL(0x001172D0u, sub_001172D0); /* call 0x001172D0 */

loc_00117791: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117744
 * Original: 0x00117744 - 0x00117798 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117744(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117744: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001177A0
 * Original: 0x001177A0 - 0x001177AC (12 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001177A0(void)
{

loc_001177A0: ;
    PUSH32(esp, 0x2AC8D0);
    PUSH32(esp, 0x001177AAu); RECOMP_ABI_CALL(0x00118420u, sub_00118420); /* call 0x00118420 */

loc_001177AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001177B0
 * Original: 0x001177B0 - 0x001177D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001177B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001177B0: ;
    eax = MEM32(0x970F9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001177C9; /* jne: not equal / not zero */

loc_001177B9: ;
    PUSH32(esp, edi);
    ecx = 0x120;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x99A640;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001177C9: ;
    MEM32(0x970F9C) = MEM32(0x970F9C) + 1;
    _fa = (uint32_t)(MEM32(0x970F9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001177D0
 * Original: 0x001177D0 - 0x001177E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001177D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001177D0: ;
    MEM32(0x970F9C) = MEM32(0x970F9C) - 1;
    _fa = (uint32_t)(MEM32(0x970F9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001177E8; /* jne: not equal / not zero */

loc_001177D8: ;
    PUSH32(esp, edi);
    ecx = 0x120;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x99A640;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001177E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001177F0
 * Original: 0x001177F0 - 0x0011781A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001177F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001177F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117819; /* je: equal / zero */

loc_001177F8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM32(eax + 4) = ecx;

loc_00117819: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117820
 * Original: 0x00117820 - 0x00117828 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117820(void)
{

loc_00117820: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00117830
 * Original: 0x00117830 - 0x00117843 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117830(void)
{

loc_00117830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117850
 * Original: 0x00117850 - 0x00117862 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117850(void)
{

loc_00117850: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00117870
 * Original: 0x00117870 - 0x0011789E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00117870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117870: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117881; /* jne: not equal / not zero */

loc_00117879: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_00117881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011789B; /* je: equal / zero */

loc_00117885: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011789B; /* je: equal / zero */

loc_00117890: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117898u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117896u); } /* indirect call */
    }

loc_00117898: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011789B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001178A0
 * Original: 0x001178A0 - 0x0011791B (123 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001178A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001178A0: ;
    PUSH32(esp, 0x001178A5u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001178A5: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001178BD; /* jne: not equal / not zero */

loc_001178AF: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001178BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001178F7; /* jne: not equal / not zero */

loc_001178C2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001178D3; /* jl: less (signed <) */

loc_001178D1: ;
    ecx = edx;

loc_001178D3: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(edx + 4) = ecx;
    esi = MEM32(eax + 0x14);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001178F7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117916; /* je: equal / zero */

loc_0011790B: ;
    edx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117913u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117911u); } /* indirect call */
    }

loc_00117913: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117916: ;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_00117920
 * Original: 0x00117920 - 0x0011796E (78 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011796C; /* jle: less or equal (signed <=) */

loc_0011792C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011796C; /* je: equal / zero */

loc_00117931: ;
    PUSH32(esp, 0x00117936u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00117936: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117966; /* je: equal / zero */

loc_0011793E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117966; /* je: equal / zero */

loc_00117943: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117966; /* je: equal / zero */

loc_0011795B: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117963u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117961u); } /* indirect call */
    }

loc_00117963: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117966: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0011796C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117970
 * Original: 0x00117970 - 0x00117A18 (168 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117A16; /* jle: less or equal (signed <=) */

loc_00117980: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117A16; /* je: equal / zero */

loc_00117989: ;
    PUSH32(esp, 0x0011798Eu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0011798E: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001179FA; /* je: equal / zero */

loc_00117996: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001179ED; /* jne: not equal / not zero */

loc_0011799B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x10) = ecx;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001179C6; /* jge: greater or equal (signed >=) */

loc_001179C4: ;
    edx = edi;

loc_001179C6: ;
    edi = MEM32(eax + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00117A10; /* je: equal / zero */

loc_001179D5: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117A10; /* je: equal / zero */

loc_001179DC: ;
    eax = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x001179E4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001179E2u); } /* indirect call */
    }

loc_001179E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001179ED: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;

loc_001179FA: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117A10; /* je: equal / zero */

loc_00117A05: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117A0Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117A0Bu); } /* indirect call */
    }

loc_00117A0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117A10: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00117A16: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117A20
 * Original: 0x00117A20 - 0x00117A9E (126 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00117A27u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00117A27: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00117A4A; /* jne: not equal / not zero */

loc_00117A33: ;
    edx = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = esi;
    PUSH32(esp, 0x00117A40u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00117A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00117A4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117A71; /* jne: not equal / not zero */

loc_00117A4F: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117A89; /* jl: less (signed <) */

loc_00117A5A: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x00117A67u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00117A67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00117A71: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117A89; /* je: equal / zero */

loc_00117A7E: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117A86u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117A84u); } /* indirect call */
    }

loc_00117A86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117A89: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = esi;
    PUSH32(esp, 0x00117A94u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00117A94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117AA0
 * Original: 0x00117AA0 - 0x00117AA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117AA0(void)
{

loc_00117AA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00117AB0
 * Original: 0x00117AB0 - 0x00117AB8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117AB0(void)
{

loc_00117AB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00117AC0
 * Original: 0x00117AC0 - 0x00117B47 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117AC0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x99A668;

loc_00117AC7: ;
    edx = MEM32(eax + -36);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AFD; /* je: equal / zero */

loc_00117ACE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AF2; /* je: equal / zero */

loc_00117AD3: ;
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AF5; /* je: equal / zero */

loc_00117ADA: ;
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AFA; /* je: equal / zero */

loc_00117AE1: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99AAE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99AAE8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117AC7; /* jl: less (signed <) */

loc_00117AF0: ;
    goto loc_00117AFD;

loc_00117AF2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00117AFD;

loc_00117AF5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00117AFD;

loc_00117AFA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117AFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117B05; /* jne: not equal / not zero */

loc_00117B02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00117B05: ;
    eax = MEM32(esp + 4);
    edx = ecx + ecx * 8;
    ecx = MEM32(esp + 8);
    edx = edx * 4 + 0x99A640;
    PUSH32(esp, edx);
    MEM32(edx + 4) = 1;
    MEM32(edx) = 0x2F975C;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 8) = 0x2AC8C0;
    MEM32(edx + 0x1C) = 0x1177A0;
    MEM32(edx + 0x20) = edx;
    PUSH32(esp, 0x00117B41u); RECOMP_ABI_CALL(0x00117850u, sub_00117850); /* call 0x00117850 */

loc_00117B41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117B50
 * Original: 0x00117B50 - 0x00117B84 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117B50: ;
    eax = MEM32(0x970FA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117B83; /* je: equal / zero */

loc_00117B59: ;
    ecx = MEM32(0x970FA8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117B62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00117B60u); } /* indirect call */
    }

loc_00117B62: ;
    eax = MEM32(0x9711A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117B78; /* jne: not equal / not zero */

loc_00117B6E: ;
    edx = MEM32(esp + 4);
    MEM32(0x9711A8) = edx;

loc_00117B78: ;
    eax = MEM32(0x9711A4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9711A4) = eax;

loc_00117B83: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117B90
 * Original: 0x00117B90 - 0x00117B99 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117B90(void)
{

loc_00117B90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00117B97u); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117B97: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BA0
 * Original: 0x00117BA0 - 0x00117BA9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BA0(void)
{

loc_00117BA0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00117BA7u); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117BA7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BB0
 * Original: 0x00117BB0 - 0x00117BB9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BB0(void)
{

loc_00117BB0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00117BB7u); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117BB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BC0
 * Original: 0x00117BC0 - 0x00117BC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BC0(void)
{

loc_00117BC0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00117BC7u); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117BC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BD0
 * Original: 0x00117BD0 - 0x00117BD9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BD0(void)
{

loc_00117BD0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00117BD7u); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117BD7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BE0
 * Original: 0x00117BE0 - 0x00117BEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BE0(void)
{

loc_00117BE0: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x00117BEAu); RECOMP_ABI_CALL(0x00117B50u, sub_00117B50); /* call 0x00117B50 */

loc_00117BEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BF0
 * Original: 0x00117BF0 - 0x00117BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BF0(void)
{

loc_00117BF0: ;
    eax = MEM32(0x9711A8);
    esp += 4; return; /* ret */

}

/**
 * sub_00117C00
 * Original: 0x00117C00 - 0x00117C42 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117C00: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x20;
    edi = 0x99A5A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, 0x00117C23u); RECOMP_ABI_CALL(0x001527A9u, sub_001527A9); /* call 0x001527A9 */

loc_00117C23: ;
    eax = MEM32(0x971138);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00117C41; /* je: equal / zero */

loc_00117C30: ;
    edx = MEM32(0x97113C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117C3Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117C3Cu); } /* indirect call */
    }

loc_00117C3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117C41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117C50
 * Original: 0x00117C50 - 0x00117C7F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117C50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, 0x00117C61u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_00117C61: ;
    eax = MEM32(0x971138);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117C7E; /* je: equal / zero */

loc_00117C6D: ;
    ecx = MEM32(0x97113C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117C7Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117C79u); } /* indirect call */
    }

loc_00117C7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117C7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117C80
 * Original: 0x00117C80 - 0x00117CC3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, 0x00117C91u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_00117C91: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x99A5A0);
    PUSH32(esp, 0x00117CA2u); RECOMP_ABI_CALL(0x00154170u, sub_00154170); /* call 0x00154170 */

loc_00117CA2: ;
    eax = MEM32(0x971138);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117CC2; /* je: equal / zero */

loc_00117CAE: ;
    edx = MEM32(0x97113C);
    MEM32(esp + 8) = 0x99A5A0;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00117CC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117CD0
 * Original: 0x00117CD0 - 0x00117D37 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117CD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00117CE0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + esi) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00117CF7; /* je: equal / zero */

loc_00117CEF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117CE0; /* jl: less (signed <) */

loc_00117CF5: ;
    goto loc_00117CFB;

loc_00117CF7: ;
    MEM8(ecx + esi) = 0;

loc_00117CFB: ;
    eax = 0x971180;
    edx = eax + 1;

loc_00117D03: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D03; /* jne: not equal / not zero */

loc_00117D0A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117D19; /* jl: less (signed <) */

loc_00117D17: ;
    ecx = eax;

loc_00117D19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117D30; /* jle: less or equal (signed <=) */

loc_00117D1F: ;
    edi = ecx + 0x97117F;

loc_00117D25: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax + esi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117D25; /* jl: less (signed <) */

loc_00117D30: ;
    POP32(esp, edi);
    MEM8(eax + esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117D40
 * Original: 0x00117D40 - 0x00117DB4 (116 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117D56u); RECOMP_ABI_CALL(0x00117CD0u, sub_00117CD0); /* call 0x00117CD0 */

loc_00117D56: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    edi = edi;

loc_00117D60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D60; /* jne: not equal / not zero */

loc_00117D67: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA8098);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00117D78u); RECOMP_ABI_CALL(0x00154170u, sub_00154170); /* call 0x00154170 */

loc_00117D78: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_00117D80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D80; /* jne: not equal / not zero */

loc_00117D87: ;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;
    edi = edi;

loc_00117D90: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D90; /* jne: not equal / not zero */

loc_00117D97: ;
    edx = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117DAEu); RECOMP_ABI_CALL(0x00117CD0u, sub_00117CD0); /* call 0x00117CD0 */

loc_00117DAE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117DC0
 * Original: 0x00117DC0 - 0x00117DDD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117DC0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 8 + 0x971140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117DDC; /* je: equal / zero */

loc_00117DCF: ;
    ecx = MEM32(ecx * 8 + 0x971144);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00117DDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117DE0
 * Original: 0x00117DE0 - 0x00117DF4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117DE0(void)
{

loc_00117DE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x970FA4) = eax;
    MEM32(0x970FA8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117E00
 * Original: 0x00117E00 - 0x00117E14 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117E00(void)
{

loc_00117E00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x970FAC) = eax;
    MEM32(0x970FB0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117E20
 * Original: 0x00117E20 - 0x00117E8A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + edi * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x970FB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x970FB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 6;
    /* nop */

loc_00117E40: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117E67; /* je: equal / zero */

loc_00117E46: ;
    ecx = MEM32(esi + 4);
    MEM32(edi * 4 + 0x99A580) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00117E57u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117E55u); } /* indirect call */
    }

loc_00117E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi * 4 + 0x99A580) = 0;

loc_00117E67: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00117E40; /* jne: not equal / not zero */

loc_00117E75: ;
    edx = MEM32(edi * 4 + 0x99A620);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi * 4 + 0x99A620) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117E90
 * Original: 0x00117E90 - 0x00117EF3 (99 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117EA1; /* jl: less (signed <) */

loc_00117E9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117EAE; /* jl: less (signed <) */

loc_00117EA1: ;
    PUSH32(esp, 0x2AC93C);
    PUSH32(esp, 0x00117EABu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00117EAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117EAE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117EBC; /* jl: less (signed <) */

loc_00117EB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117EC9; /* jl: less (signed <) */

loc_00117EBC: ;
    PUSH32(esp, 0x2AC910);
    PUSH32(esp, 0x00117EC6u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00117EC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117EC9: ;
    eax = esi + esi * 2;
    eax = edi + eax * 2;
    ecx = MEM32(eax * 8 + 0x970FB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax * 8 + 0x970FB8;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00117EEE; /* je: equal / zero */

loc_00117EE2: ;
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00117EE8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00117EE6u); } /* indirect call */
    }

loc_00117EE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00117EEE: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117F00
 * Original: 0x00117F00 - 0x00117F0B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117F07u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F10
 * Original: 0x00117F10 - 0x00117F1B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00117F17u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F20
 * Original: 0x00117F20 - 0x00117F2B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F20: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00117F27u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F30
 * Original: 0x00117F30 - 0x00117F3B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F30: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00117F37u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F40
 * Original: 0x00117F40 - 0x00117F4B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F40: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00117F47u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F50
 * Original: 0x00117F50 - 0x00117F5B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F50: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00117F57u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F60
 * Original: 0x00117F60 - 0x00117F6B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F60: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00117F67u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F70
 * Original: 0x00117F70 - 0x00117F7B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F70: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00117F77u); RECOMP_ABI_CALL(0x00117E20u, sub_00117E20); /* call 0x00117E20 */

loc_00117F77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117F80
 * Original: 0x00117F80 - 0x00117F98 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00117F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117F80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00117F95; /* jg: greater (signed >) */

loc_00117F89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117F95; /* jl: less (signed <) */

loc_00117F8D: ;
    eax = MEM32(eax * 4 + 0x99A620);
    esp += 4; return; /* ret */

loc_00117F95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117FA0
 * Original: 0x00117FA0 - 0x00118000 (96 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117FA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x99A580) = eax;
    MEM32(0x99A584) = eax;
    MEM32(0x99A588) = eax;
    MEM32(0x99A58C) = eax;
    MEM32(0x99A590) = eax;
    MEM32(0x99A594) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x99A598) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x970FA4) = ecx;
    MEM32(0x970FAC) = edx;
    MEM32(0x99A59C) = eax;
    MEM32(0x970FA8) = ecx;
    MEM32(0x970FB0) = edx;
    eax = 0x99A620;
    goto loc_00117FF0;

    /* nop */

loc_00117FF0: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99A638) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99A638 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117FF0; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00118000(); return; /* fallthrough 0x00118000 */

}

/**
 * sub_00118000
 * Original: 0x00118000 - 0x0011800B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118000(void)
{

loc_00118000: ;
    MEM32(0x970FA0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00118010
 * Original: 0x00118010 - 0x0011802A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118010: ;
    eax = MEM32(0x9711A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011801E; /* jne: not equal / not zero */

loc_00118019: ;
    PUSH32(esp, 0x0011801Eu); RECOMP_ABI_CALL(0x00117FA0u, sub_00117FA0); /* call 0x00117FA0 */

loc_0011801E: ;
    eax = MEM32(0x9711A0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9711A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00118030
 * Original: 0x00118030 - 0x00118051 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118030: ;
    eax = MEM32(0x9711A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x9711A0) = eax;
    if ((_fa != 0)) goto loc_00118050; /* jne: not equal / not zero */

loc_0011803D: ;
    PUSH32(esp, 0x00118042u); RECOMP_ABI_CALL(0x00117FA0u, sub_00117FA0); /* call 0x00117FA0 */

loc_00118042: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x971138) = ecx;
    MEM32(0x97113C) = ecx;

loc_00118050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118060
 * Original: 0x00118060 - 0x0011807B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118060: ;
    eax = MEM32(0x970FA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011806C; /* je: equal / zero */

loc_00118069: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011806C: ;
    eax = MEM32(esp + 4);
    MEM32(0x970FA0) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00118080
 * Original: 0x00118080 - 0x00118089 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118080(void)
{

loc_00118080: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00118087u); RECOMP_ABI_CALL(0x00118060u, sub_00118060); /* call 0x00118060 */

loc_00118087: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00118090
 * Original: 0x00118090 - 0x001180DE (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118090: ;
    ecx = MEM32(0x970FAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001180DD; /* je: equal / zero */

loc_0011809A: ;
    ecx = MEM32(0x9711A4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x9711A4) = ecx;
    if ((_fa != 0)) goto loc_001180D0; /* jne: not equal / not zero */

loc_001180A9: ;
    _fa = (uint32_t)(MEM32(0x9711A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9711A8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001180C6; /* je: equal / zero */

loc_001180B1: ;
    edx = MEM32(0x9711A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AC968);
    PUSH32(esp, 0x001180C3u); RECOMP_ABI_CALL(0x00117C00u, sub_00117C00); /* call 0x00117C00 */

loc_001180C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001180C6: ;
    MEM32(0x9711A8) = 0;

loc_001180D0: ;
    eax = MEM32(0x970FB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x970FAC); PUSH32(esp, 0x001180DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001180D6u); } /* indirect call */
    }

loc_001180DC: ;
    POP32(esp, ecx);

loc_001180DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001180E0
 * Original: 0x001180E0 - 0x001180EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001180E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001180E0: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_001180F0
 * Original: 0x001180F0 - 0x001180FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001180F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001180F0: ;
    eax = 2;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_00118100
 * Original: 0x00118100 - 0x0011810A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118100: ;
    eax = 3;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_00118110
 * Original: 0x00118110 - 0x0011811A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118110: ;
    eax = 4;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_00118120
 * Original: 0x00118120 - 0x0011812A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118120: ;
    eax = 5;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_00118130
 * Original: 0x00118130 - 0x0011813A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118130: ;
    eax = 0x3E8;
    g_seh_ebp = ebp; sub_00118090(); return; /* tail jmp 0x00118090 */

}

/**
 * sub_00118140
 * Original: 0x00118140 - 0x00118199 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118140: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00118146u); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_00118146: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x970FB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x970FB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118157: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118167; /* je: equal / zero */

loc_0011815C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118157; /* jl: less (signed <) */

loc_00118165: ;
    goto loc_00118174;

loc_00118167: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;

loc_00118174: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118186; /* jne: not equal / not zero */

loc_00118179: ;
    PUSH32(esp, 0x2AC9B0);
    PUSH32(esp, 0x00118183u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00118183: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118186: ;
    PUSH32(esp, 0x0011818Bu); RECOMP_ABI_CALL(0x001180E0u, sub_001180E0); /* call 0x001180E0 */

loc_0011818B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118195; /* jne: not equal / not zero */

loc_00118190: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00118195: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001181A0
 * Original: 0x001181A0 - 0x001181E7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001181A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001181AE; /* jl: less (signed <) */

loc_001181A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001181BB; /* jl: less (signed <) */

loc_001181AE: ;
    PUSH32(esp, 0x2AC9E0);
    PUSH32(esp, 0x001181B8u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_001181B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001181BB: ;
    PUSH32(esp, 0x001181C0u); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_001181C0: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = esi + eax * 2;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x970FB8) = 0;
    MEM32(eax + 0x970FBC) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_001181F0
 * Original: 0x001181F0 - 0x00118264 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001181F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001181FF; /* jl: less (signed <) */

loc_001181FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011820C; /* jl: less (signed <) */

loc_001181FF: ;
    PUSH32(esp, 0x2ACA60);
    PUSH32(esp, 0x00118209u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00118209: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011820C: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118219; /* jl: less (signed <) */

loc_00118214: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118226; /* jl: less (signed <) */

loc_00118219: ;
    PUSH32(esp, 0x2ACA38);
    PUSH32(esp, 0x00118223u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00118223: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118226: ;
    PUSH32(esp, 0x0011822Bu); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_0011822B: ;
    eax = esi + esi * 2;
    esi = edi + eax * 2;
    eax = MEM32(esi * 8 + 0x970FB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = esi * 8 + 0x970FB8;
    if (CMP_EQ(_fa, _fb)) goto loc_00118250; /* je: equal / zero */

loc_00118243: ;
    PUSH32(esp, 0x2ACA00);
    PUSH32(esp, 0x0011824Du); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_0011824D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118250: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_00118270
 * Original: 0x00118270 - 0x00118294 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118270: ;
    PUSH32(esp, 0x00118275u); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_00118275: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax * 8 + 0x971140) = ecx;
    MEM32(eax * 8 + 0x971144) = edx;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_001182A0
 * Original: 0x001182A0 - 0x001182BD (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001182A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001182A0: ;
    PUSH32(esp, 0x001182A5u); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_001182A5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x971138) = eax;
    MEM32(0x97113C) = ecx;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_001182C0
 * Original: 0x001182C0 - 0x001182F0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001182C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001182C0: ;
    eax = MEM32(0x970FA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001182CB; /* je: equal / zero */

loc_001182C9: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_001182CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001182D1u); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_001182D1: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax) = 1;
    esi = edx;
    PUSH32(esp, 0x001182ECu); RECOMP_ABI_CALL(0x001180E0u, sub_001180E0); /* call 0x001180E0 */

loc_001182EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118300
 * Original: 0x00118300 - 0x00118301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118300(void)
{

loc_00118300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118310
 * Original: 0x00118310 - 0x00118358 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118310: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x2ACA84);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011831Fu); RECOMP_ABI_CALL(0x0011A6A0u, sub_0011A6A0); /* call 0x0011A6A0 */

loc_0011831F: ;
    eax = MEM32(0x9711AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118345; /* jne: not equal / not zero */

loc_0011832B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x11C0;
    edi = 0x995E80;
    PUSH32(esp, eax);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00118341u); RECOMP_ABI_CALL(0x001183B0u, sub_001183B0); /* call 0x001183B0 */

loc_00118341: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00118345: ;
    MEM32(0x9711AC) = MEM32(0x9711AC) + 1;
    _fa = (uint32_t)(MEM32(0x9711AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00118354u); RECOMP_ABI_CALL(0x0011A6B0u, sub_0011A6B0); /* call 0x0011A6B0 */

loc_00118354: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00118360
 * Original: 0x00118360 - 0x001183A7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118360: ;
    MEM32(0x9711AC) = MEM32(0x9711AC) - 1;
    _fa = (uint32_t)(MEM32(0x9711AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001183A6; /* jne: not equal / not zero */

loc_00118368: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x995E80;
    /* nop */

loc_00118370: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011837E; /* jne: not equal / not zero */

loc_00118375: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011837Bu); RECOMP_ABI_CALL(0x00110B30u, sub_00110B30); /* call 0x00110B30 */

loc_0011837B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011837E: ;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99A580) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99A580 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118370; /* jl: less (signed <) */

loc_0011838C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x11C0;
    edi = 0x995E80;
    PUSH32(esp, eax);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x001183A1u); RECOMP_ABI_CALL(0x001183B0u, sub_001183B0); /* call 0x001183B0 */

loc_001183A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001183A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001183B0
 * Original: 0x001183B0 - 0x001183D6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001183B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001183B0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001183C7; /* jne: not equal / not zero */

loc_001183BA: ;
    MEM32(0x9711B0) = ecx;
    MEM32(0x9711B4) = ecx;
    esp += 4; return; /* ret */

loc_001183C7: ;
    MEM32(0x9711B0) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x9711B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001183E0
 * Original: 0x001183E0 - 0x00118412 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001183E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001183E0: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x995D80);
    PUSH32(esp, 0x001183F4u); RECOMP_ABI_CALL(0x001527A9u, sub_001527A9); /* call 0x001527A9 */

loc_001183F4: ;
    eax = MEM32(0x9711B0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118411; /* je: equal / zero */

loc_00118400: ;
    edx = MEM32(0x9711B4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x995D80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011840Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011840Cu); } /* indirect call */
    }

loc_0011840E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118411: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118420
 * Original: 0x00118420 - 0x00118425 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118420: ;
    g_seh_ebp = ebp; sub_00117C50(); return; /* tail jmp 0x00117C50 */

}

/**
 * sub_00118430
 * Original: 0x00118430 - 0x0011843B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118430(void)
{

loc_00118430: ;
    MEM32(0x9711B8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00118440
 * Original: 0x00118440 - 0x00118445 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118440: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_00118450
 * Original: 0x00118450 - 0x00118455 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118450: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_00118460
 * Original: 0x00118460 - 0x00118465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118460: ;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

}

/**
 * sub_00118470
 * Original: 0x00118470 - 0x00118475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118470: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_00118480
 * Original: 0x00118480 - 0x00118485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118480: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_00118490
 * Original: 0x00118490 - 0x001184B9 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118490: ;
    PUSH32(esp, 0x00118495u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_00118495: ;
    eax = MEM32(0x9711C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001184AE; /* jne: not equal / not zero */

loc_0011849E: ;
    PUSH32(esp, edi);
    ecx = 0x195C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98F800;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001184AE: ;
    MEM32(0x9711C0) = MEM32(0x9711C0) + 1;
    _fa = (uint32_t)(MEM32(0x9711C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_001184C0
 * Original: 0x001184C0 - 0x001184E2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001184C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001184C0: ;
    PUSH32(esp, 0x001184C5u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_001184C5: ;
    MEM32(0x9711C0) = MEM32(0x9711C0) - 1;
    _fa = (uint32_t)(MEM32(0x9711C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001184DD; /* jne: not equal / not zero */

loc_001184CD: ;
    PUSH32(esp, edi);
    ecx = 0x195C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98F800;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001184DD: ;
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_001184F0
 * Original: 0x001184F0 - 0x00118552 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001184F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001184F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x98F800;

loc_001184F7: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011850B; /* je: equal / zero */

loc_001184FC: ;
    _fb = (uint32_t)(0x195C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x195C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x995D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x995D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001184F7; /* jl: less (signed <) */

loc_0011850B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118513; /* jne: not equal / not zero */

loc_00118510: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00118513: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x195C);
    _fb = (uint32_t)(0x98F800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x98F800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(eax + 1) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00118543; /* jle: less or equal (signed <=) */

loc_0011852F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + 0x20;

loc_00118534: ;
    ebp = MEM32(edi + ecx * 4);
    MEM32(esi) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118534; /* jl: less (signed <) */

loc_00118541: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00118543: ;
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 0;
    MEM8(eax + 4) = 0;
    MEM8(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00118560
 * Original: 0x00118560 - 0x00118578 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118560: ;
    PUSH32(esp, 0x00118565u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_00118565: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118573; /* je: equal / zero */

loc_0011856D: ;
    MEM32(eax) = 0;

loc_00118573: ;
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_00118580
 * Original: 0x00118580 - 0x00118589 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118580(void)
{

loc_00118580: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00118590
 * Original: 0x00118590 - 0x001185AD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118590: ;
    PUSH32(esp, 0x00118595u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_00118595: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 1) = 1;
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_001185B0
 * Original: 0x001185B0 - 0x001185B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001185B0(void)
{

loc_001185B0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001185C0
 * Original: 0x001185C0 - 0x001185CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001185C0(void)
{

loc_001185C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001185D0
 * Original: 0x001185D0 - 0x001185D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001185D0(void)
{

loc_001185D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001185E0
 * Original: 0x001185E0 - 0x001185EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001185E0(void)
{

loc_001185E0: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 3) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001185F0
 * Original: 0x001185F0 - 0x001185FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001185F0(void)
{

loc_001185F0: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00118600
 * Original: 0x00118600 - 0x0011860C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118600(void)
{

loc_00118600: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_00118610
 * Original: 0x00118610 - 0x00118623 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118610: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0xB4);
    esp += 4; return; /* ret */

}

/**
 * sub_00118630
 * Original: 0x00118630 - 0x00118643 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118630: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00118650
 * Original: 0x00118650 - 0x0011865B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118650(void)
{

loc_00118650: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2B0);
    esp += 4; return; /* ret */

}

/**
 * sub_00118660
 * Original: 0x00118660 - 0x00118698 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118660: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00118680; /* je: equal / zero */

loc_00118670: ;
    PUSH32(esp, esi);
    esi = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(esi + ecx + 0x2BC);
    MEM32(eax) = esi;
    POP32(esp, esi);

loc_00118680: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118697; /* je: equal / zero */

loc_00118688: ;
    _fb = (uint32_t)(0x22) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x22;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx + 0xA0);
    MEM32(eax) = ecx;

loc_00118697: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001186A0
 * Original: 0x001186A0 - 0x001186D5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001186A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001186A0: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001186C0; /* je: equal / zero */

loc_001186B0: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(esi + edx + 0x2B4);
    MEM32(ecx) = esi;
    POP32(esp, esi);

loc_001186C0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001186D4; /* je: equal / zero */

loc_001186C8: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 0x2B8);
    MEM32(ecx) = eax;

loc_001186D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001186E0
 * Original: 0x001186E0 - 0x001186EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001186E0(void)
{

loc_001186E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1934);
    esp += 4; return; /* ret */

}

/**
 * sub_001186F0
 * Original: 0x001186F0 - 0x00118743 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001186F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001186F0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011870B; /* je: equal / zero */

loc_00118701: ;
    esi = ZX16(MEM16(eax + ecx * 8 + 0x1938));
    MEM32(edx) = esi;

loc_0011870B: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011871D; /* je: equal / zero */

loc_00118713: ;
    esi = ZX16(MEM16(eax + ecx * 8 + 0x193A));
    MEM32(edx) = esi;

loc_0011871D: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011872F; /* je: equal / zero */

loc_00118725: ;
    esi = ZX16(MEM16(eax + ecx * 8 + 0x193C));
    MEM32(edx) = esi;

loc_0011872F: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00118742; /* je: equal / zero */

loc_00118738: ;
    eax = ZX16(MEM16(eax + ecx * 8 + 0x193E));
    MEM32(edx) = eax;

loc_00118742: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118750
 * Original: 0x00118750 - 0x0011876F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118750: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2B0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011876E; /* jle: less or equal (signed <=) */

loc_00118760: ;
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2BC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118766: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00118766; /* jne: not equal / not zero */

loc_0011876E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118770
 * Original: 0x00118770 - 0x0011877B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118770(void)
{

loc_00118770: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1958);
    esp += 4; return; /* ret */

}

/**
 * sub_00118780
 * Original: 0x00118780 - 0x001187C0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118780: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x62E;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x210) = eax;
    MEM32(edx + 0x1894) = eax;
    MEM16(edx + 0x1898) = LO16(ecx);
    MEM16(edx + 0x189A) = LO16(eax);
    MEM16(edx + 0x189C) = LO16(ecx);
    MEM16(edx + 0x189E) = LO16(ecx);
    MEM8(edx + 0xC) = LO8(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001187C0
 * Original: 0x001187C0 - 0x00118861 (161 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001187C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001187C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001187C8; /* jae: above or equal (unsigned >=) */

loc_001187C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001187C8: ;
    edx = ZX8(MEM8(esi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi));
    PUSH32(esp, edi);
    SET_LO8(eax, MEM8(esi + 1));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(esi + 3));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    SET_HI8(edx, MEM8(esi + 4));
    edi = ZX8(MEM8(esi + 6));
    eax = esi + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + -3));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 9) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + -1));
    MEM16(ecx + 0xA) = LO16(edx);
    edi = ZX8(MEM8(eax + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ZX8(MEM8(eax + 3));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ecx + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011885B; /* je: equal / zero */

loc_0011884A: ;
    PUSH32(esp, 0x2ACAC0);
    PUSH32(esp, 0x00118854u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_00118854: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0011885B: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00118870
 * Original: 0x00118870 - 0x001188AB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00118870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFDu;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118A5B(); return; } /* jle: less or equal (signed <=) */

loc_001188A9: ;
    g_seh_ebp = ebp; sub_001188B0(); return; /* tail jmp 0x001188B0 */

}

/**
 * sub_001188AB
 * Original: 0x001188AB - 0x00118A5B (432 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001188AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001188AB: ;
    ebx = MEM32(ebp + 8);
    edi = edi;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001188C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001188BFu); } /* indirect call */
    }

loc_001188C2: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00118A4B; /* jb: below (unsigned <) */

loc_001188D2: ;
    esi = MEM32(esp + 0x20);
    ecx = esp + 0x38;
    PUSH32(esp, 0x001188DFu); RECOMP_ABI_CALL(0x001187C0u, sub_001187C0); /* call 0x001187C0 */

loc_001188DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00118A66(); return; } /* je: equal / zero */

loc_001188E7: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x24);
    eax = ecx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B03(); return; } /* jl: less (signed <) */

loc_001188FE: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41495845) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0x41495845 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00118A81(); return; } /* je: equal / zero */

loc_0011890C: ;
    eax = ZX8(MEM8(esp + 0x40));
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118ADA(); return; } /* jge: greater or equal (signed >=) */

loc_0011891D: ;
    eax = MEM32(ebx + eax * 4 + 0x20);
    ecx = MEM32(eax);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x42);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0011892Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011892Bu); } /* indirect call */
    }

loc_0011892E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B03(); return; } /* jl: less (signed <) */

loc_00118939: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x44);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00118958u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118958: ;
    eax = MEM32(edi);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00118965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118962u); } /* indirect call */
    }

loc_00118965: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00118979u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118979: ;
    edx = MEM32(edi);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00118986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118983u); } /* indirect call */
    }

loc_00118986: ;
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B1E(); return; } /* jl: less (signed <) */

loc_00118995: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118A09; /* jle: less or equal (signed <=) */

loc_0011899B: ;
    goto loc_001189A1;

loc_0011899D: ;
    eax = MEM32(esp + 0x2C);

loc_001189A1: ;
    ecx = ZX8(MEM8(esp + 0x40));
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + ecx * 4 + 0x20);
    edx = MEM32(ecx);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001189BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001189BAu); } /* indirect call */
    }

loc_001189BD: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x40);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ebx;
    eax = ZX8(MEM8(esp + 0x50));
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
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + eax * 4 + 0x20);
    edx = MEM32(eax);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001189F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001189F0u); } /* indirect call */
    }

loc_001189F3: ;
    edx = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x5E);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011899D; /* jl: less (signed <) */

loc_00118A05: ;
    edi = MEM32(esp + 0x18);

loc_00118A09: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00118A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118A13u); } /* indirect call */
    }

loc_00118A16: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001188AB; /* jl: less (signed <) */

loc_00118A40: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00118A4B: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00118A58u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00118A55u); } /* indirect call */
    }

loc_00118A58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00118A5B(); return; /* fallthrough 0x00118A5B */

}

/**
 * sub_001188B0
 * Original: 0x001188B0 - 0x00118A5B (427 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001188B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001188B0: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001188C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001188BFu); } /* indirect call */
    }

loc_001188C2: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00118A4B; /* jb: below (unsigned <) */

loc_001188D2: ;
    esi = MEM32(esp + 0x20);
    ecx = esp + 0x38;
    PUSH32(esp, 0x001188DFu); RECOMP_ABI_CALL(0x001187C0u, sub_001187C0); /* call 0x001187C0 */

loc_001188DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00118A66(); return; } /* je: equal / zero */

loc_001188E7: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x24);
    eax = ecx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B03(); return; } /* jl: less (signed <) */

loc_001188FE: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41495845) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0x41495845 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00118A81(); return; } /* je: equal / zero */

loc_0011890C: ;
    eax = ZX8(MEM8(esp + 0x40));
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118ADA(); return; } /* jge: greater or equal (signed >=) */

loc_0011891D: ;
    eax = MEM32(ebx + eax * 4 + 0x20);
    ecx = MEM32(eax);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x42);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0011892Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011892Bu); } /* indirect call */
    }

loc_0011892E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B03(); return; } /* jl: less (signed <) */

loc_00118939: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x44);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00118958u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118958: ;
    eax = MEM32(edi);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00118965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118962u); } /* indirect call */
    }

loc_00118965: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00118979u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118979: ;
    edx = MEM32(edi);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00118986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118983u); } /* indirect call */
    }

loc_00118986: ;
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00118B1E(); return; } /* jl: less (signed <) */

loc_00118995: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118A09; /* jle: less or equal (signed <=) */

loc_0011899B: ;
    goto loc_001189A1;

loc_0011899D: ;
    eax = MEM32(esp + 0x2C);

loc_001189A1: ;
    ecx = ZX8(MEM8(esp + 0x40));
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + ecx * 4 + 0x20);
    edx = MEM32(ecx);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001189BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001189BAu); } /* indirect call */
    }

loc_001189BD: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x40);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ebx;
    eax = ZX8(MEM8(esp + 0x50));
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
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + eax * 4 + 0x20);
    edx = MEM32(eax);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001189F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001189F0u); } /* indirect call */
    }

loc_001189F3: ;
    edx = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x5E);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011899D; /* jl: less (signed <) */

loc_00118A05: ;
    edi = MEM32(esp + 0x18);

loc_00118A09: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00118A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118A13u); } /* indirect call */
    }

loc_00118A16: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001188AB(); return; } /* jl: less (signed <) */

loc_00118A40: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00118A4B: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00118A58u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00118A55u); } /* indirect call */
    }

loc_00118A58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00118A5B(); return; /* fallthrough 0x00118A5B */

}

/**
 * sub_00118A5B
 * Original: 0x00118A5B - 0x00118A66 (11 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118A5B: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118A66
 * Original: 0x00118A66 - 0x00118A81 (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118A66: ;
    ecx = MEM32(edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00118A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118A70u); } /* indirect call */
    }

loc_00118A73: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118A81
 * Original: 0x00118A81 - 0x00118ADA (89 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118A81: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00118A97u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118A97: ;
    edx = MEM32(edi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00118AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118AA1u); } /* indirect call */
    }

loc_00118AA4: ;
    ecx = MEM32(edi);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00118AB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118AAEu); } /* indirect call */
    }

loc_00118AB1: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00118AB9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00118AB6u); } /* indirect call */
    }

loc_00118AB9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118AC4; /* jg: greater (signed >) */

loc_00118AC0: ;
    MEM8(ebx + 4) = 0;

loc_00118AC4: ;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00118A5B(); return; } /* jne: not equal / not zero */

loc_00118ACB: ;
    MEM8(ebx + 1) = 3;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118ADA
 * Original: 0x00118ADA - 0x00118B03 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118ADA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118ADA: ;
    PUSH32(esp, 0x2ACB10);
    PUSH32(esp, 0x00118AE4u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_00118AE4: ;
    ecx = MEM32(edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00118AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118AEEu); } /* indirect call */
    }

loc_00118AF1: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + 1) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118B03
 * Original: 0x00118B03 - 0x00118B1E (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118B03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118B03: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00118B10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118B0Du); } /* indirect call */
    }

loc_00118B10: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118B1E
 * Original: 0x00118B1E - 0x00118B60 (66 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118B1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118B1E: ;
    PUSH32(esp, 0x2ACAEC);
    PUSH32(esp, 0x00118B28u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_00118B28: ;
    edx = MEM32(edi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00118B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118B32u); } /* indirect call */
    }

loc_00118B35: ;
    ecx = MEM32(edi);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00118B42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118B3Fu); } /* indirect call */
    }

loc_00118B42: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(eax + 1) = 4;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00118B60
 * Original: 0x00118B60 - 0x00118C0A (170 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118B60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = MEM32(ebp + 0x1C);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00118B80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118B7Du); } /* indirect call */
    }

loc_00118B80: ;
    eax = MEM32(ebp + 0x20);
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00118B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118B92u); } /* indirect call */
    }

loc_00118B95: ;
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x38);
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
    edx = esp + 0x38;
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
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00118BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118BBCu); } /* indirect call */
    }

loc_00118BBF: ;
    edx = MEM32(esp + 0x48);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118BD6u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118BD6: ;
    ecx = MEM32(ebx);
    edx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00118BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118BE0u); } /* indirect call */
    }

loc_00118BE3: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00118BF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118BF0u); } /* indirect call */
    }

loc_00118BF3: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00118C10
 * Original: 0x00118C10 - 0x00118C38 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00118C17u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_00118C17: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118C29u); RECOMP_ABI_CALL(0x001184F0u, sub_001184F0); /* call 0x001184F0 */

loc_00118C29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00118C33u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_00118C33: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118C40
 * Original: 0x00118C40 - 0x00118E65 (549 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118C40(void)
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

loc_00118C40: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1800 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00118C51; /* jge: greater or equal (signed >=) */

loc_00118C4B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00118C51: ;
    ecx = ZX8(MEM8(esi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 3));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41495846) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41495846 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118C7B; /* je: equal / zero */

loc_00118C71: ;
    PUSH32(esp, 0x00118C76u); RECOMP_ABI_CALL(0x00118780u, sub_00118780); /* call 0x00118780 */

loc_00118C76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00118C7B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 4));
    eax = esi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 2));
    SET_LO8(ecx, MEM8(eax + 1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ZX8(MEM8(eax + -1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ecx;
    ecx = 3;
    edi = 0x2ACAB8;
    esi = esi + ebp + 2;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags != 0)) goto loc_00118CBE; /* je: equal / zero */

loc_00118CB5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00118CBE: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(edx + 1) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(ecx, MEM8(eax + 1));
    esi = ZX8(MEM8(eax + 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_HI8(ecx, MEM8(eax + -20));
    esi = ZX8(MEM8(eax + -18));
    SET_LO8(ecx, MEM8(eax + -19));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ZX8(MEM8(eax + -17));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -8));
    SET_LO8(ecx, MEM8(eax + -7));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx + 0x210) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00118DB5; /* jle: less or equal (signed <=) */

loc_00118D1E: ;
    esi = edx + 0x218;

loc_00118D24: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    ebx = ZX8(MEM8(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + -11));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -13));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -20) = ecx;
    ebx = ZX8(MEM8(eax + -10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -12));
    SET_LO8(ecx, MEM8(eax + -11));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -9));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -16) = ecx;
    ebx = ZX8(MEM8(eax + -6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -8));
    SET_LO8(ecx, MEM8(eax + -7));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -12) = ecx;
    ebx = ZX8(MEM8(eax + -2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -4));
    SET_LO8(ecx, MEM8(eax + -3));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -8) = ecx;
    ecx = MEM32(edx + 0x210);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118D24; /* jl: less (signed <) */

loc_00118DB5: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx + 0x1894) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00118E17; /* jle: less or equal (signed <=) */

loc_00118DC7: ;
    esi = edx + 0x189A;
    /* nop */

loc_00118DD0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + -7));
    MEM16(esi + -10) = LO16(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -6));
    SET_LO8(ecx, MEM8(eax + -5));
    MEM16(esi + -8) = LO16(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -4));
    SET_LO8(ecx, MEM8(eax + -3));
    MEM16(esi + -6) = LO16(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + -2));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax + -1));
    MEM16(esi + -4) = LO16(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1894)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x1894) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118DD0; /* jl: less (signed <) */

loc_00118E17: ;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(edx + 0xC) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00118E5C; /* jle: less or equal (signed <=) */

loc_00118E25: ;
    esi = edx + 0x10;

loc_00118E28: ;
    ebx = ZX8(MEM8(eax + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + -7));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -12) = ecx;
    SET_LO8(ecx, MEM8(eax + -4));
    MEM8(esi + -16) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E28; /* jl: less (signed <) */

loc_00118E5C: ;
    POP32(esp, edi);
    eax = ebp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00118E70
 * Original: 0x00118E70 - 0x00118F43 (211 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118E70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    eax = MEM32(esi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1800);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00118E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118E87u); } /* indirect call */
    }

loc_00118E8A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + 0xA0;
    PUSH32(esp, 0x00118EA0u); RECOMP_ABI_CALL(0x00118C40u, sub_00118C40); /* call 0x00118C40 */

loc_00118EA0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118EBD; /* jne: not equal / not zero */

loc_00118EA7: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00118EB4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00118EB1u); } /* indirect call */
    }

loc_00118EB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00118EBD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118ECD; /* jne: not equal / not zero */

loc_00118EC1: ;
    MEM32(edi + 0x1958) = 1;
    goto loc_00118F01;

loc_00118ECD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118EF7; /* je: equal / zero */

loc_00118ED3: ;
    PUSH32(esp, 0x2ACB34);
    PUSH32(esp, 0x00118EDDu); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_00118EDD: ;
    ecx = MEM32(esi);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00118EEAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00118EE7u); } /* indirect call */
    }

loc_00118EEA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(edi + 1) = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00118EF7: ;
    MEM32(edi + 0x1958) = 0;

loc_00118F01: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00118F14u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00118F14: ;
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00118F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118F1Eu); } /* indirect call */
    }

loc_00118F21: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00118F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00118F2Bu); } /* indirect call */
    }

loc_00118F2E: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM8(edi + 1) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00118F50
 * Original: 0x00118F50 - 0x00118FA3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118F50: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118FA1; /* jne: not equal / not zero */

loc_00118F58: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118F66; /* jne: not equal / not zero */

loc_00118F5F: ;
    PUSH32(esp, 0x00118F64u); RECOMP_ABI_CALL(0x00118E70u, sub_00118E70); /* call 0x00118E70 */

loc_00118F64: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00118F66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118FA1; /* jne: not equal / not zero */

loc_00118F6A: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118FA1; /* jne: not equal / not zero */

loc_00118F71: ;
    eax = MEM32(edi + 0x1958);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00118F8A; /* je: equal / zero */

loc_00118F7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00118FA1; /* jne: not equal / not zero */

loc_00118F7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00118F85u); RECOMP_ABI_CALL(0x00118B60u, sub_00118B60); /* call 0x00118B60 */

loc_00118F85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00118F8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00118F90u); RECOMP_ABI_CALL(0x00118870u, sub_00118870); /* call 0x00118870 */

loc_00118F90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118FA1; /* jne: not equal / not zero */

loc_00118F98: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00118F9Eu); RECOMP_ABI_CALL(0x00118870u, sub_00118870); /* call 0x00118870 */

loc_00118F9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118FA1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118FB0
 * Original: 0x00118FB0 - 0x00118FDE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118FB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118FCD; /* je: equal / zero */

loc_00118FB8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118FCD; /* jle: less or equal (signed <=) */

loc_00118FC0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118FCD; /* je: equal / zero */

loc_00118FC8: ;
    g_seh_ebp = ebp; sub_00118C40(); return; /* tail jmp 0x00118C40 */

loc_00118FCD: ;
    PUSH32(esp, 0x2ACB58);
    PUSH32(esp, 0x00118FD7u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_00118FD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00118FE0
 * Original: 0x00118FE0 - 0x00118FF3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118FE0: ;
    PUSH32(esp, 0x00118FE5u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_00118FE5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x00118FEEu); RECOMP_ABI_CALL(0x00118F50u, sub_00118F50); /* call 0x00118F50 */

loc_00118FEE: ;
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_00119000
 * Original: 0x00119000 - 0x0011901F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119000: ;
    PUSH32(esp, esi);
    esi = 0x98F800;

loc_00119006: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011900Cu); RECOMP_ABI_CALL(0x00118FE0u, sub_00118FE0); /* call 0x00118FE0 */

loc_0011900C: ;
    _fb = (uint32_t)(0x195C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x195C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x995D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x995D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119006; /* jl: less (signed <) */

loc_0011901D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119020
 * Original: 0x00119020 - 0x001190D0 (176 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119020: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    eax = 1;
    if (CMP_A(_fa, _fb)) goto loc_001190CF; /* ja: above (unsigned >) */

loc_0011902E: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x1190D0); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00119035u) goto loc_00119035;
    if (_jt == 0x0011903Du) goto loc_0011903D;
    if (_jt == 0x0011904Bu) goto loc_0011904B;
    if (_jt == 0x00119059u) goto loc_00119059;
    if (_jt == 0x00119067u) goto loc_00119067;
    if (_jt == 0x00119075u) goto loc_00119075;
    if (_jt == 0x00119083u) goto loc_00119083;
    if (_jt == 0x0011909Au) goto loc_0011909A;
    if (_jt == 0x001190B5u) goto loc_001190B5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00119035: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0011903D: ;
    MEM32(ecx) = 1;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0011904B: ;
    MEM32(ecx) = 4;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_00119059: ;
    MEM32(ecx) = 5;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_00119067: ;
    MEM32(ecx) = 2;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_00119075: ;
    MEM32(ecx) = 3;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_00119083: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = 1;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0011909A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 4;
    MEM32(ecx + 8) = 5;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_001190B5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 2;
    MEM32(ecx + 8) = 3;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;

loc_001190CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119100
 * Original: 0x00119100 - 0x0011912B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119100: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x50);
    ecx = esp + 8;
    PUSH32(esp, 0x00119110u); RECOMP_ABI_CALL(0x00119020u, sub_00119020); /* call 0x00119020 */

loc_00119110: ;
    edx = MEM32(esp + 0x4C);
    MEM32(esp) = eax;
    eax = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119127u); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_00119127: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119130
 * Original: 0x00119130 - 0x00119183 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119130: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0xC;
    PUSH32(esp, 0x0011914Eu); RECOMP_ABI_CALL(0x00119020u, sub_00119020); /* call 0x00119020 */

loc_0011914E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00119169; /* jle: less or equal (signed <=) */

loc_00119159: ;
    edx = MEM32(esp + 0x54);
    /* nop */

loc_00119160: ;
    MEM32(esp + ecx * 8 + 0xC) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119160; /* jl: less (signed <) */

loc_00119169: ;
    edx = MEM32(esp + 0x4C);
    ecx = esp;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0011917Fu); RECOMP_ABI_CALL(0x00108FD0u, sub_00108FD0); /* call 0x00108FD0 */

loc_0011917F: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119190
 * Original: 0x00119190 - 0x00119191 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119190(void)
{

loc_00119190: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001191A0
 * Original: 0x001191A0 - 0x001191A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001191A0: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_001191B0
 * Original: 0x001191B0 - 0x001191B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001191B0: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_001191C0
 * Original: 0x001191C0 - 0x001191C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001191C0: ;
    g_seh_ebp = ebp; sub_001182C0(); return; /* tail jmp 0x001182C0 */

}

/**
 * sub_001191D0
 * Original: 0x001191D0 - 0x001191D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191D0(void)
{

loc_001191D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001191E0
 * Original: 0x001191E0 - 0x001191F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001191E0: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x001191E7u); RECOMP_ABI_CALL(0x000ACFD3u, sub_000ACFD3); /* call 0x000ACFD3 */

loc_001191E7: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xF));
    eax = eax - 0xF;
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
 * sub_001191F0
 * Original: 0x001191F0 - 0x00119223 (51 bytes, 18 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001191F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001191F8u); RECOMP_ABI_CALL(0x001191E0u, sub_001191E0); /* call 0x001191E0 */

loc_001191F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011921F; /* jne: not equal / not zero */

loc_001191FD: ;
    /* nop */

loc_00119200: ;
    PUSH32(esp, 0x00119205u); RECOMP_ABI_CALL(0x001191B0u, sub_001191B0); /* call 0x001191B0 */

loc_00119205: ;
    PUSH32(esp, 0x2ACB88);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00119212u); RECOMP_ABI_CALL(0x00114BB0u, sub_00114BB0); /* call 0x00114BB0 */

loc_00119212: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011921Au); RECOMP_ABI_CALL(0x001191E0u, sub_001191E0); /* call 0x001191E0 */

loc_0011921A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119200; /* je: equal / zero */

loc_0011921F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119230
 * Original: 0x00119230 - 0x0011924A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119248; /* jle: less or equal (signed <=) */

loc_00119239: ;
    /* nop */

loc_00119240: ;
    PUSH32(esp, 0x00119245u); RECOMP_ABI_CALL(0x001191A0u, sub_001191A0); /* call 0x001191A0 */

loc_00119245: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00119240; /* jne: not equal / not zero */

loc_00119248: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119250
 * Original: 0x00119250 - 0x00119266 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00119250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119250: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x9711C4) = eax;
    MEM32(0x9711C8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119270
 * Original: 0x00119270 - 0x00119399 (297 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119270: ;
    _fb = (uint32_t)(0x358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x358;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x364);
    PUSH32(esp, edi);
    eax = esp + 0x260;
    PUSH32(esp, 0x2ACBA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119292u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_00119292: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x260;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001192A7u); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_001192A7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001192B9; /* jne: not equal / not zero */

loc_001192AE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x358;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001192B9: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x36C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x374);
    /* nop */

loc_001192D0: ;
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x20), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00119319; /* je: equal / zero */

loc_001192D7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119373; /* je: equal / zero */

loc_001192DF: ;
    _fa = (uint32_t)(MEM8(esp + 0x4C)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x4C), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119373; /* je: equal / zero */

loc_001192EA: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x168;
    PUSH32(esp, 0xAA8404);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00119302u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_00119302: ;
    PUSH32(esp, esi);
    edx = ebp + -1;
    PUSH32(esp, edx);
    eax = esp + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119314u); RECOMP_ABI_CALL(0x00119270u, sub_00119270); /* call 0x00119270 */

loc_00119314: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011936F;

loc_00119319: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x168;
    PUSH32(esp, 0xAA8404);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119331u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_00119331: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esp + 0x160;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00119355; /* je: equal / zero */

loc_00119353: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119355: ;
    eax = MEM32(0x9711C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119373; /* je: equal / zero */

loc_0011935E: ;
    ecx = MEM32(0x9711C8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011936Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011936Au); } /* indirect call */
    }

loc_0011936C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011936F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011938E; /* jl: less (signed <) */

loc_00119373: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011937Eu); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_0011937E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001192D0; /* jne: not equal / not zero */

loc_00119386: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011938Cu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0011938C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011938E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x358;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001193A0
 * Original: 0x001193A0 - 0x0011941C (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001193A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001193A0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001193B8; /* je: equal / zero */

loc_001193B2: ;
    MEM32(esi) = 0;

loc_001193B8: ;
    eax = MEM32(esp + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001193CE; /* jne: not equal / not zero */

loc_001193C3: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001193CE: ;
    edx = esp + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001193D4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001193D4; /* jne: not equal / not zero */

loc_001193DE: ;
    eax = esp + 4;
    edx = eax + 1;

loc_001193E5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001193E5; /* jne: not equal / not zero */

loc_001193EC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esp + eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    eax = esp + eax + 3;
    if (CMP_NE(_fa, _fb)) goto loc_001193FE; /* jne: not equal / not zero */

loc_001193FB: ;
    MEM8(eax) = 0;

loc_001193FE: ;
    eax = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00119411u); RECOMP_ABI_CALL(0x00119270u, sub_00119270); /* call 0x00119270 */

loc_00119411: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119420
 * Original: 0x00119420 - 0x00119456 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119420: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x8C);
    ecx = MEM32(eax + 0x40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x88);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00119460
 * Original: 0x00119460 - 0x00119475 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x8C) = MEM32(eax + 0x8C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x88) = MEM32(eax + 0x88) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119480
 * Original: 0x00119480 - 0x001194AE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001194AC; /* je: equal / zero */

loc_00119489: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0011949Au); RECOMP_ABI_CALL(0x0011AEF0u, sub_0011AEF0); /* call 0x0011AEF0 */

loc_0011949A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(esi) = LO16(eax);
    POP32(esp, edi);

loc_001194AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001194B0
 * Original: 0x001194B0 - 0x001194B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001194B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001194B0: ;
    MEM32(0x9711CC) = MEM32(0x9711CC) + 1;
    _fa = (uint32_t)(MEM32(0x9711CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001194C0
 * Original: 0x001194C0 - 0x001194C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001194C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001194C0: ;
    MEM32(0x9711CC) = MEM32(0x9711CC) - 1;
    _fa = (uint32_t)(MEM32(0x9711CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001194D0
 * Original: 0x001194D0 - 0x001195ED (285 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001194D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001194D0: ;
    eax = MEM32(0x9711CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001194DE; /* jne: not equal / not zero */

loc_001194D9: ;
    PUSH32(esp, 0x001194DEu); RECOMP_ABI_CALL(0x001194B0u, sub_001194B0); /* call 0x001194B0 */

loc_001194DE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(eax) = 0;
    eax = MEM32(esp + 0xC);
    MEM16(ecx) = 0;
    MEM16(edx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0011950E; /* jne: not equal / not zero */

loc_00119506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001195E9; /* jle: less or equal (signed <=) */

loc_0011950E: ;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    ebx = 0x4A1D;
    if (CMP_LE(_fas, _fbs)) goto loc_00119551; /* jle: less or equal (signed <=) */

loc_0011951B: ;
    goto loc_00119520;

    /* nop */

loc_00119520: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x2ACCB0);
    edi = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00119542; /* jns: not sign (positive) */

loc_0011953A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119542: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119520; /* jl: less (signed <) */

loc_00119551: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x53FF;
    if (CMP_LE(_fas, _fbs)) goto loc_00119591; /* jle: less or equal (signed <=) */

loc_0011955C: ;
    /* nop */

loc_00119560: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x2ACCB0);
    edi = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00119582; /* jns: not sign (positive) */

loc_0011957A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119582: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(edx * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119560; /* jl: less (signed <) */

loc_00119591: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 0x5DC1;
    if (CMP_LE(_fas, _fbs)) goto loc_001195D2; /* jle: less or equal (signed <=) */

loc_0011959C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_001195A0: ;
    ebp = (uint32_t)(int32_t)SMEM8(ecx + esi);
    ebp = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x2ACCB0);
    edx = SX16(LO16(edx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    ebp = ebp & 0x800003FFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001195C2; /* jns: not sign (positive) */

loc_001195BA: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFC00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001195C2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp * 2 + 0x2ACBB0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001195A0; /* jl: less (signed <) */

loc_001195D1: ;
    POP32(esp, ebp);

loc_001195D2: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM16(eax) = LO16(ebx);
    eax = MEM32(esp + 0x20);
    MEM16(ecx) = LO16(edi);
    POP32(esp, edi);
    MEM16(eax) = LO16(edx);
    POP32(esp, ebx);

loc_001195E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001195F0
 * Original: 0x001195F0 - 0x001195FE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001195F0(void)
{

loc_001195F0: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x9A) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00119600
 * Original: 0x00119600 - 0x00119689 (137 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119600: ;
    eax = MEM32(esp + 4);
    ecx = 0x400;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x58) = ecx;
    ecx = MEM32(eax + 0x3C);
    edx = 0x7F;
    MEM32(eax + 0x5C) = ecx;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x9A));
    MEM8(eax + 0xF) = LO8(edx);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(eax + 0x64) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 0x98) = LO16(esi);
    MEM16(eax + 2) = 1;
    MEM32(eax + 0x14) = 0xBB80;
    MEM8(eax + 0xE) = 2;
    MEM8(eax + 0xD) = 0x10;
    MEM32(eax + 0x18) = 0x7FFFFFFF;
    MEM32(eax + 0x50) = 2;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x8C) = ecx;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x24) = LO16(ecx);
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x88) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119690
 * Original: 0x00119690 - 0x001196A3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119690(void)
{

loc_00119690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001196B0
 * Original: 0x001196B0 - 0x001196C9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001196B0(void)
{

loc_001196B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001196D0
 * Original: 0x001196D0 - 0x001196D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001196D0(void)
{

loc_001196D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_001196E0
 * Original: 0x001196E0 - 0x001196EC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001196E0(void)
{

loc_001196E0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_001196F0
 * Original: 0x001196F0 - 0x001196F8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001196F0(void)
{

loc_001196F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00119700
 * Original: 0x00119700 - 0x00119709 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119700(void)
{

loc_00119700: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xE);
    esp += 4; return; /* ret */

}

/**
 * sub_00119710
 * Original: 0x00119710 - 0x00119719 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119710(void)
{

loc_00119710: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esp += 4; return; /* ret */

}

/**
 * sub_00119720
 * Original: 0x00119720 - 0x0011977D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119720: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119777; /* je: equal / zero */

loc_00119730: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011975C; /* jne: not equal / not zero */

loc_00119736: ;
    SET_LO16(eax, MEM16(ecx + 0x9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119749; /* jne: not equal / not zero */

loc_00119743: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00119749: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx * 8 + 8;
    eax = ecx;
    esp += 4; return; /* ret */

loc_0011975C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119777; /* jne: not equal / not zero */

loc_00119762: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x9C)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x9C), 2 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00119777: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00119780
 * Original: 0x00119780 - 0x00119788 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119780(void)
{

loc_00119780: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00119790
 * Original: 0x00119790 - 0x00119799 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119790(void)
{

loc_00119790: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xF);
    esp += 4; return; /* ret */

}

/**
 * sub_001197A0
 * Original: 0x001197A0 - 0x001197A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197A0(void)
{

loc_001197A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001197B0
 * Original: 0x001197B0 - 0x001197B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197B0(void)
{

loc_001197B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001197C0
 * Original: 0x001197C0 - 0x001197C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197C0(void)
{

loc_001197C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001197D0
 * Original: 0x001197D0 - 0x001197D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197D0(void)
{

loc_001197D0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_001197E0
 * Original: 0x001197E0 - 0x001197E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197E0(void)
{

loc_001197E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_001197F0
 * Original: 0x001197F0 - 0x001197FD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001197F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001197F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001197F9; /* jne: not equal / not zero */

loc_001197F8: ;
    esp += 4; return; /* ret */

loc_001197F9: ;
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00119800
 * Original: 0x00119800 - 0x00119808 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119800(void)
{

loc_00119800: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00119810
 * Original: 0x00119810 - 0x00119818 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119810(void)
{

loc_00119810: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00119820
 * Original: 0x00119820 - 0x0011982B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119820(void)
{

loc_00119820: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_00119830
 * Original: 0x00119830 - 0x0011983C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119830(void)
{

loc_00119830: ;
    eax = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + 0xE0));
    esp += 4; return; /* ret */

}

/**
 * sub_00119840
 * Original: 0x00119840 - 0x00119851 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119840(void)
{

loc_00119840: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0xE2));
    esp += 4; return; /* ret */

}

/**
 * sub_00119860
 * Original: 0x00119860 - 0x0011986A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119860: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119870
 * Original: 0x00119870 - 0x001198AF (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 8);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011988Cu); RECOMP_ABI_CALL(0x0011AE70u, sub_0011AE70); /* call 0x0011AE70 */

loc_0011988C: ;
    eax = esi + 0xAA;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = esi + 0xA8;
    PUSH32(esp, ecx);
    edx = esi + 0xA6;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001198AAu); RECOMP_ABI_CALL(0x0011AEC0u, sub_0011AEC0); /* call 0x0011AEC0 */

loc_001198AA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001198B0
 * Original: 0x001198B0 - 0x001198F8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001198B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001198B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 8);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001198CCu); RECOMP_ABI_CALL(0x0011AE40u, sub_0011AE40); /* call 0x0011AE40 */

loc_001198CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xAA));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xA8));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0xA6));
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001198F3u); RECOMP_ABI_CALL(0x0011AEA0u, sub_0011AEA0); /* call 0x0011AEA0 */

loc_001198F3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119900
 * Original: 0x00119900 - 0x0011995F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119900: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00119910: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119910; /* jne: not equal / not zero */

loc_00119917: ;
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
    PUSH32(esp, 0x0011992Fu); RECOMP_ABI_CALL(0x001194D0u, sub_001194D0); /* call 0x001194D0 */

loc_0011992F: ;
    eax = MEM32(esp + 0x28);
    SET_LO16(edx, MEM16(esp + 0x18));
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0xA0) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x20));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0xA2) = LO16(ecx);
    MEM16(eax + 0xA4) = LO16(edx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119960
 * Original: 0x00119960 - 0x00119994 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119960: ;
    edx = MEM32(esp + 4);
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00119970: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119970; /* jne: not equal / not zero */

loc_00119977: ;
    PUSH32(esp, 0x9711E4);
    PUSH32(esp, 0x9711E0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x9711DC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011998Fu); RECOMP_ABI_CALL(0x001194D0u, sub_001194D0); /* call 0x001194D0 */

loc_0011998F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001199A0
 * Original: 0x001199A0 - 0x00119A6B (203 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001199A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001199A0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00119A56; /* jb: below (unsigned <) */

loc_001199B4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001199E5; /* jb: below (unsigned <) */

loc_001199B9: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x2AD3E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001199CDu); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_001199CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001199DCu); RECOMP_ABI_CALL(0x001194D0u, sub_001194D0); /* call 0x001194D0 */

loc_001199DC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001199E5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00119A56; /* jb: below (unsigned <) */

loc_001199EA: ;
    _fa = (uint32_t)(MEM16(eax + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA0), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119A32; /* jne: not equal / not zero */

loc_001199F4: ;
    _fa = (uint32_t)(MEM16(eax + 0xA2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119A32; /* jne: not equal / not zero */

loc_001199FE: ;
    _fa = (uint32_t)(MEM16(eax + 0xA4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119A32; /* jne: not equal / not zero */

loc_00119A08: ;
    SET_LO16(ecx, MEM16(0x9711DC));
    MEM16(eax + 0xA0) = LO16(ecx);
    SET_LO16(edx, MEM16(0x9711E0));
    MEM16(eax + 0xA2) = LO16(edx);
    SET_LO16(ecx, MEM16(0x9711E4));
    MEM16(eax + 0xA4) = LO16(ecx);

loc_00119A32: ;
    SET_LO16(edx, MEM16(eax + 0xA0));
    MEM16(ebx) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0xA2));
    MEM16(edi) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0xA4));
    MEM16(esi) = LO16(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00119A56: ;
    MEM16(ebx) = 0;
    MEM16(edi) = 0;
    MEM16(esi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119A70
 * Original: 0x00119A70 - 0x00119A78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119A70(void)
{

loc_00119A70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00119A80
 * Original: 0x00119A80 - 0x00119AE3 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119A80: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x98)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x98), LO16(esi) (16-bit) */
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00119AA1; /* jne: not equal / not zero */

loc_00119A94: ;
    eax = MEM32(esp + 0x10);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0xF);
    MEM32(ecx + 0x48) = eax;
    goto loc_00119ABE;

loc_00119AA1: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    MEM32(ecx + 0x48) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xE);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);

loc_00119ABE: ;
    eax = MEM32(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(ecx + 0x90) = esi;
    MEM32(ecx + 0x94) = esi;
    MEM32(ecx + 0xEC) = esi;
    MEM32(ecx + 0xE8) = esi;
    POP32(esp, esi);
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00119AF0
 * Original: 0x00119AF0 - 0x00119B03 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119AF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119B02; /* jne: not equal / not zero */

loc_00119AFB: ;
    MEM32(eax + 4) = 1;

loc_00119B02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119B10
 * Original: 0x00119B10 - 0x00119B2A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119B1Eu); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_00119B1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119B30
 * Original: 0x00119B30 - 0x00119B54 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119B52; /* jne: not equal / not zero */

loc_00119B3B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119B44u); RECOMP_ABI_CALL(0x0011B030u, sub_0011B030); /* call 0x0011B030 */

loc_00119B44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 4) = eax;

loc_00119B52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119B60
 * Original: 0x00119B60 - 0x00119B6B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B60(void)
{

loc_00119B60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x94);
    esp += 4; return; /* ret */

}

/**
 * sub_00119B70
 * Original: 0x00119B70 - 0x00119B7B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B70(void)
{

loc_00119B70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_00119B80
 * Original: 0x00119B80 - 0x00119B99 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B80(void)
{

loc_00119B80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0xF4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00119BA0
 * Original: 0x00119BA0 - 0x00119BA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119BA0(void)
{

loc_00119BA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00119BB0
 * Original: 0x00119BB0 - 0x00119BDE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119BB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x5C);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, 0);
    ecx = edx + ecx * 2;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119BD3u); RECOMP_ABI_CALL(0x0011AF30u, sub_0011AF30); /* call 0x0011AF30 */

loc_00119BD3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119BD9u); RECOMP_ABI_CALL(0x0011AFF0u, sub_0011AFF0); /* call 0x0011AFF0 */

loc_00119BD9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119BE0
 * Original: 0x00119BE0 - 0x00119C16 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119BE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x5C);
    ecx = MEM32(eax + 0x68);
    ecx = edx + ecx * 2;
    edx = MEM32(eax + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0x48);
    edx = ecx + edx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = ecx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119C0Bu); RECOMP_ABI_CALL(0x0011AF70u, sub_0011AF70); /* call 0x0011AF70 */

loc_00119C0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119C11u); RECOMP_ABI_CALL(0x0011AFF0u, sub_0011AFF0); /* call 0x0011AFF0 */

loc_00119C11: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119C20
 * Original: 0x00119C20 - 0x00119C53 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119C20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x5C);
    ecx = MEM32(eax + 0x68);
    ecx = edx + ecx * 2;
    edx = MEM32(eax + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    edx = ecx + edx * 2;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119C48u); RECOMP_ABI_CALL(0x0011AFB0u, sub_0011AFB0); /* call 0x0011AFB0 */

loc_00119C48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119C4Eu); RECOMP_ABI_CALL(0x0011AFF0u, sub_0011AFF0); /* call 0x0011AFF0 */

loc_00119C4E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119C60
 * Original: 0x00119C60 - 0x00119D26 (198 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119C60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x50);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x58);
    ebp = MEM32(esi + 0x60);
    ebx = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x6C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x70);
    eax = eax + ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    edx = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x10);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00119CC4; /* jge: greater or equal (signed >=) */

loc_00119CB2: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119CC4; /* jge: greater or equal (signed >=) */

loc_00119CBF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00119CC4: ;
    edx = MEM32(esi + 0x70);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119CD1; /* jge: greater or equal (signed >=) */

loc_00119CCF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119CD1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119CE2; /* jle: less or equal (signed <=) */

loc_00119CDC: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00119CE2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119CF0; /* jle: less or equal (signed <=) */

loc_00119CEA: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00119CF0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119CFE; /* jle: less or equal (signed <=) */

loc_00119CF8: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00119CFE: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 2 (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00119D16; /* jne: not equal / not zero */

loc_00119D06: ;
    PUSH32(esp, 0x00119D0Bu); RECOMP_ABI_CALL(0x00119BE0u, sub_00119BE0); /* call 0x00119BE0 */

loc_00119D0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00119D16: ;
    PUSH32(esp, 0x00119D1Bu); RECOMP_ABI_CALL(0x00119BB0u, sub_00119BB0); /* call 0x00119BB0 */

loc_00119D1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00119D30
 * Original: 0x00119D30 - 0x00119D52 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D30: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119D51; /* jle: less or equal (signed <=) */

loc_00119D38: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);

loc_00119D41: ;
    SET_LO16(esi, MEM16(ecx));
    MEM16(eax) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00119D41; /* jne: not equal / not zero */

loc_00119D50: ;
    POP32(esp, esi);

loc_00119D51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119D60
 * Original: 0x00119D60 - 0x00119D95 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    eax = esi + ebx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119D7Au); RECOMP_ABI_CALL(0x00119D30u, sub_00119D30); /* call 0x00119D30 */

loc_00119D7A: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi + ebx * 2;
    PUSH32(esp, ecx);
    edx = esi + eax * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119D8Eu); RECOMP_ABI_CALL(0x00119D30u, sub_00119D30); /* call 0x00119D30 */

loc_00119D8E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
