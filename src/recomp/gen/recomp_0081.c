/**
 * DOAU1 - Recompiled code chunk 81
 * Functions: 250 (0x0020C001 - 0x002115E2)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0020C001
 * Original: 0x0020C001 - 0x0020C006 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C001(void)
{

loc_0020C001: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C006
 * Original: 0x0020C006 - 0x0020C0ED (231 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020C006: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x138));
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    edx = eax + 1;

loc_0020C019: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020C019; /* jne: not equal / not zero */

loc_0020C020: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020C02C; /* je: equal / zero */

loc_0020C024: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0020C03D; /* jne: not equal / not zero */

loc_0020C02C: ;
    eax = 0x80070057u;

loc_0020C031: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0020C037: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x5C (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C041; /* je: equal / zero */

loc_0020C03D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020C037; /* ja: above (unsigned >) */

loc_0020C041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C02C; /* je: equal / zero */

loc_0020C045: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    PUSH32(esp, esi);
    eax = ebp + -312;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C057u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_0020C057: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -312;
    PUSH32(esp, eax);
    MEM8(ebp + esi + -313) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C078u); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_0020C078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020C09D; /* jne: not equal / not zero */

loc_0020C07C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C081u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C081: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0020C08C; /* jg: greater (signed >) */

loc_0020C085: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C08Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C08A: ;
    goto loc_0020C031;

loc_0020C08C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C091u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C091: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020C031;

loc_0020C09D: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020C0E6; /* ja: above (unsigned >) */

loc_0020C0A7: ;
    if (CMP_B(_fa, _fb)) goto loc_0020C0B1; /* jb: below (unsigned <) */

loc_0020C0A9: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0020C0E6; /* jae: above or equal (unsigned >=) */

loc_0020C0B1: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C0BDu); RECOMP_ABI_CALL(0x000AE1FFu, sub_000AE1FF); /* call 0x000AE1FF */

loc_0020C0BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C0CD; /* je: equal / zero */

loc_0020C0C1: ;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -24);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -4)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_0020C0CD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020C0E6; /* ja: above (unsigned >) */

loc_0020C0D2: ;
    if (CMP_B(_fa, _fb)) goto loc_0020C0DC; /* jb: below (unsigned <) */

loc_0020C0D4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0020C0E6; /* jae: above or equal (unsigned >=) */

loc_0020C0DC: ;
    eax = 0x80070070u;
    goto loc_0020C031;

loc_0020C0E6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020C031;

}

/**
 * sub_0020C0ED
 * Original: 0x0020C0ED - 0x0020C1DB (238 bytes, 88 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C0ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C0ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = ecx;
    MEM32(ebp + 8) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0020C12A; /* jae: above or equal (unsigned >=) */

loc_0020C10A: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C11C; /* je: equal / zero */

loc_0020C110: ;
    MEM32(ebp + -4) = 0x80150012u;
    goto loc_0020C1B8;

loc_0020C11C: ;
    edx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + eax * 4); PUSH32(esp, 0x0020C125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C122u); } /* indirect call */
    }

loc_0020C125: ;
    MEM32(ebp + -4) = eax;
    goto loc_0020C136;

loc_0020C12A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C136; /* je: equal / zero */

loc_0020C12C: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0xC) = 0x80004001u;

loc_0020C136: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C16C; /* jne: not equal / not zero */

loc_0020C13D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C14Fu); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_0020C14F: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C168; /* jl: less (signed <) */

loc_0020C157: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C162; /* je: equal / zero */

loc_0020C15E: ;
    MEM32(eax) = ecx;
    goto loc_0020C168;

loc_0020C162: ;
    MEM32(eax) = 0x1500F0;

loc_0020C168: ;
    eax = MEM32(eax);
    goto loc_0020C1B5;

loc_0020C16C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C197; /* je: equal / zero */

loc_0020C171: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C176u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0020C176: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C197; /* je: equal / zero */

loc_0020C180: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C197; /* je: equal / zero */

loc_0020C187: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C197u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_0020C197: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C1B8; /* je: equal / zero */

loc_0020C19D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C1A2u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0020C1A2: ;
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020C1B8; /* jb: below (unsigned <) */

loc_0020C1AA: ;
    eax = 0x800705B4u;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0xC) = eax;

loc_0020C1B5: ;
    MEM32(ebp + -4) = eax;

loc_0020C1B8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C1CD; /* je: equal / zero */

loc_0020C1BF: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1B), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020C1CD; /* jne: not equal / not zero */

loc_0020C1C5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C1CBu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_0020C1CB: ;
    goto loc_0020C1D1;

loc_0020C1CD: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0020C1D1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020C1DB
 * Original: 0x0020C1DB - 0x0020C1E3 (8 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C1DB(void)
{

loc_0020C1DB: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020C1E3
 * Original: 0x0020C1E3 - 0x0020C1EB (8 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C1E3(void)
{

loc_0020C1E3: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020C1EB
 * Original: 0x0020C1EB - 0x0020C21B (48 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C1EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C1EB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(ecx) = 2;
    SET_LO16(eax, MEM16(esi + 8));
    SET_HI8(edx, LO8(eax));
    POP32(esp, edi);
    SET_LO8(edx, HI8(eax));
    MEM16(ecx + 2) = LO16(edx);
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C21B
 * Original: 0x0020C21B - 0x0020C260 (69 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C21B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C21B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ebx = ecx;
    edi = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C239u); RECOMP_ABI_CALL(0x0020C1EBu, sub_0020C1EB); /* call 0x0020C1EB */

loc_0020C239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020C2A4(); return; } /* jl: less (signed <) */

loc_0020C23D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C248u); RECOMP_ABI_CALL(0x001CEFCEu, sub_001CEFCE); /* call 0x001CEFCE */

loc_0020C248: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C271(); return; } /* jne: not equal / not zero */

loc_0020C250: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C255u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C255: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020C260(); return; } /* jg: greater (signed >) */

loc_0020C259: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C25Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C25E: ;
    g_seh_ebp = ebp; sub_0020C2A4(); return; /* tail jmp 0x0020C2A4 */

}

/**
 * sub_0020C260
 * Original: 0x0020C260 - 0x0020C271 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C260: ;
    PUSH32(esp, 0x0020C265u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020C265: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0020C2A4(); return; /* tail jmp 0x0020C2A4 */

}

/**
 * sub_0020C271
 * Original: 0x0020C271 - 0x0020C2A4 (51 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C271: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1B), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C28A; /* je: equal / zero */

loc_0020C277: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C28Au); RECOMP_ABI_CALL(0x001CEFFAu, sub_001CEFFA); /* call 0x001CEFFA */

loc_0020C28A: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020C298u); RECOMP_ABI_CALL(0x00211950u, sub_00211950); /* call 0x00211950 */

loc_0020C298: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0020C2A4u); RECOMP_ABI_CALL(0x002118C2u, sub_002118C2); /* call 0x002118C2 */

    g_seh_ebp = ebp; sub_0020C2A4(); return; /* fallthrough 0x0020C2A4 */

}

/**
 * sub_0020C2A4
 * Original: 0x0020C2A4 - 0x0020C2AB (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C2A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C2AB
 * Original: 0x0020C2AB - 0x0020C31C (113 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C2AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x0020C2C4u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_0020C2C4: ;
    edi = esi + 0x80;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C2DE; /* je: equal / zero */

loc_0020C2D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C2DE; /* je: equal / zero */

loc_0020C2D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C2DBu); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_0020C2DB: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020C2DE: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C2FA; /* je: equal / zero */

loc_0020C2E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C2FA; /* je: equal / zero */

loc_0020C2EA: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020C2FA; /* jne: not equal / not zero */

loc_0020C2F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C2F6u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020C2F6: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020C2FA: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) { g_seh_ebp = ebp; sub_0020C31C(); return; } /* jns: not sign (positive) */

loc_0020C301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C314; /* je: equal / zero */

loc_0020C308: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020C310u); RECOMP_ABI_CALL(0x001FE083u, sub_001FE083); /* call 0x001FE083 */

loc_0020C310: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0020C314: ;
    eax = MEM32(esi + 0x118);
    g_seh_ebp = ebp; sub_0020C335(); return; /* tail jmp 0x0020C335 */

}

/**
 * sub_0020C31C
 * Original: 0x0020C31C - 0x0020C335 (25 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C31C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C31C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C32F; /* je: equal / zero */

loc_0020C323: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020C32Bu); RECOMP_ABI_CALL(0x001FF236u, sub_001FF236); /* call 0x001FF236 */

loc_0020C32B: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0020C32F: ;
    eax = MEM32(esi + 0x110);

    g_seh_ebp = ebp; sub_0020C335(); return; /* fallthrough 0x0020C335 */

}

/**
 * sub_0020C335
 * Original: 0x0020C335 - 0x0020C35A (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C335(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C33E; /* je: equal / zero */

loc_0020C339: ;
    ecx = ebx;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0020C33Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C33Cu); } /* indirect call */
    }

loc_0020C33E: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C354; /* je: equal / zero */

loc_0020C344: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0020C34Cu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020C34C: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020C354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C35A
 * Original: 0x0020C35A - 0x0020C385 (43 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C35A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C35A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0020C368u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_0020C368: ;
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x128), 0 (32-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C37B; /* je: equal / zero */

loc_0020C374: ;
    PUSH32(esp, 0x0020C379u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020C379: ;
    goto loc_0020C380;

loc_0020C37B: ;
    PUSH32(esp, 0x0020C380u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020C380: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C385
 * Original: 0x0020C385 - 0x0020C39B (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C385(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C385: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x21880000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0020C398u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0020C398: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C39B
 * Original: 0x0020C39B - 0x0020C3B1 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C39B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C39B: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C3C0(); return; } /* je: equal / zero */

loc_0020C3A2: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C3B1(); return; } /* je: equal / zero */

loc_0020C3AA: ;
    eax = eax | 0x21880000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0020C3B6(); return; /* tail jmp 0x0020C3B6 */

}

/**
 * sub_0020C3B1
 * Original: 0x0020C3B1 - 0x0020C3B6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C3B1: ;
    eax = 0x21882000;

    g_seh_ebp = ebp; sub_0020C3B6(); return; /* fallthrough 0x0020C3B6 */

}

/**
 * sub_0020C3B6
 * Original: 0x0020C3B6 - 0x0020C3C0 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C3B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0020C3C0u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

    g_seh_ebp = ebp; sub_0020C3C0(); return; /* fallthrough 0x0020C3C0 */

}

/**
 * sub_0020C3C0
 * Original: 0x0020C3C0 - 0x0020C3C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3C0(void)
{

loc_0020C3C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C3C3
 * Original: 0x0020C3C3 - 0x0020C3C8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C3C3: ;
    g_seh_ebp = ebp; sub_0020C385(); return; /* tail jmp 0x0020C385 */

}

/**
 * sub_0020C3C8
 * Original: 0x0020C3C8 - 0x0020C3FA (50 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C3C8: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0020C3D5u); RECOMP_ABI_CALL(0x0020C385u, sub_0020C385); /* call 0x0020C385 */

loc_0020C3D5: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C3F5; /* je: equal / zero */

loc_0020C3DB: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0020C3F5: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C3FA
 * Original: 0x0020C3FA - 0x0020C3FF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C3FA: ;
    g_seh_ebp = ebp; sub_0020C39B(); return; /* tail jmp 0x0020C39B */

}

/**
 * sub_0020C3FF
 * Original: 0x0020C3FF - 0x0020C40D (14 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3FF(void)
{

loc_0020C3FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0020C40Au); RECOMP_ABI_CALL(0x0020C39Bu, sub_0020C39B); /* call 0x0020C39B */

loc_0020C40A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C40D
 * Original: 0x0020C40D - 0x0020C421 (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C40D(void)
{

loc_0020C40D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0x0020C41Eu); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_0020C41E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C421
 * Original: 0x0020C421 - 0x0020C435 (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C421(void)
{

loc_0020C421: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0x0020C432u); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_0020C432: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C435
 * Original: 0x0020C435 - 0x0020C450 (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C435(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C435: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C44D; /* je: equal / zero */

loc_0020C43C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0x0020C44Du); RECOMP_ABI_CALL(0x000B177Fu, sub_000B177F); /* call 0x000B177F */

loc_0020C44D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C450
 * Original: 0x0020C450 - 0x0020C478 (40 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C450: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020C470; /* jne: not equal / not zero */

loc_0020C45A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0020C463u); RECOMP_ABI_CALL(0x0021CB61u, sub_0021CB61); /* call 0x0021CB61 */

loc_0020C463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C46C; /* jne: not equal / not zero */

loc_0020C468: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020C475;

loc_0020C46C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C475; /* jl: less (signed <) */

loc_0020C470: ;
    eax = 0x1500F0;

loc_0020C475: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C478
 * Original: 0x0020C478 - 0x0020C47D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C478: ;
    g_seh_ebp = ebp; sub_001F648F(); return; /* tail jmp 0x001F648F */

}

/**
 * sub_0020C47D
 * Original: 0x0020C47D - 0x0020C4AE (49 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C47D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C47D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C496; /* je: equal / zero */

loc_0020C48C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C492u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020C492: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020C496: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C4A9; /* je: equal / zero */

loc_0020C49D: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020C4A5u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020C4A5: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020C4A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C4AE
 * Original: 0x0020C4AE - 0x0020C4DC (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C4AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C4AE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C4D4; /* je: equal / zero */

loc_0020C4BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x100) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C4D4; /* jne: not equal / not zero */

loc_0020C4C4: ;
    eax = MEM32(eax + 0xF8);
    _fa = (uint32_t)(MEM32(eax + 0x1A)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C4D4; /* jne: not equal / not zero */

loc_0020C4D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020C4D9;

loc_0020C4D4: ;
    eax = 0x8015C00Eu;

loc_0020C4D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C4DC
 * Original: 0x0020C4DC - 0x0020C573 (151 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C4DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C4DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C573(); return; } /* jb: below (unsigned <) */

loc_0020C4F2: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C573(); return; } /* ja: above (unsigned >) */

loc_0020C4F8: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_0020C4FE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C4FE; /* jne: not equal / not zero */

loc_0020C505: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C573(); return; } /* ja: above (unsigned >) */

loc_0020C50E: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebp + -292;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020C51A: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C51A; /* jne: not equal / not zero */

loc_0020C524: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C537; /* je: equal / zero */

loc_0020C529: ;
    eax = ebp + eax + -293;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C537; /* jne: not equal / not zero */

loc_0020C535: ;
    MEM8(eax) = LO8(ebx);

loc_0020C537: ;
    eax = ebp + -292;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C544u); RECOMP_ABI_CALL(0x000B13D8u, sub_000B13D8); /* call 0x000B13D8 */

loc_0020C544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C573(); return; } /* je: equal / zero */

loc_0020C548: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C54Eu); RECOMP_ABI_CALL(0x000B16FFu, sub_000B16FF); /* call 0x000B16FF */

loc_0020C54E: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -292;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C55Fu); RECOMP_ABI_CALL(0x000AE1FFu, sub_000AE1FF); /* call 0x000AE1FF */

loc_0020C55F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C573(); return; } /* je: equal / zero */

loc_0020C563: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    g_seh_ebp = ebp; sub_0020C57B(); return; /* tail jmp 0x0020C57B */

}

/**
 * sub_0020C573
 * Original: 0x0020C573 - 0x0020C57B (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C573(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C573: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;

    g_seh_ebp = ebp; sub_0020C57B(); return; /* fallthrough 0x0020C57B */

}

/**
 * sub_0020C57B
 * Original: 0x0020C57B - 0x0020C580 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C57B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C57B: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020C580
 * Original: 0x0020C580 - 0x0020C8BA (826 bytes, 285 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020C597; /* jne: not equal / not zero */

loc_0020C58D: ;
    eax = 0x80150005u;
    goto loc_0020C8B6;

loc_0020C597: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x204C);
    PUSH32(esp, 0x2A2FC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C5A9u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020C5A9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0020C5BC; /* jne: not equal / not zero */

loc_0020C5B2: ;
    edi = 0x8007000Eu;
    goto loc_0020C86D;

loc_0020C5BC: ;
    edi = MEM32(ebp + -8);
    esi = ebx + 0x29FC0;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C5CDu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020C5CD: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ecx;
    MEM32(esi) = 0x20C450;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, MEM32(edi + 0x1850));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C604u); RECOMP_ABI_CALL(0x001F72F9u, sub_001F72F9); /* call 0x001F72F9 */

loc_0020C604: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C86D; /* jl: less (signed <) */

loc_0020C60E: ;
    ecx = MEM32(ebp + -8);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    MEM32(ebx + 0x118) = 0x20C478;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C626u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_0020C626: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C86D; /* jl: less (signed <) */

loc_0020C630: ;
    edi = esi + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = edi;
    ebx = edi + 0x300;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C64Eu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020C64E: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C65Bu); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_0020C65B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C69D; /* je: equal / zero */

loc_0020C662: ;
    ecx = MEM32(ebp + -12);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(ecx + 0x2A0) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 0x2A4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C690; /* je: equal / zero */

loc_0020C67B: ;
    edx = eax + 1;
    MEM32(ebp + -4) = edx;

loc_0020C681: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C681; /* jne: not equal / not zero */

loc_0020C688: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = eax;
    goto loc_0020C693;

loc_0020C690: ;
    MEM32(ebp + -4) = esi;

loc_0020C693: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020C6A7; /* jb: below (unsigned <) */

loc_0020C69D: ;
    edi = 0x8015C008u;
    goto loc_0020C86A;

loc_0020C6A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6E4; /* je: equal / zero */

loc_0020C6AC: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6E4; /* je: equal / zero */

loc_0020C6B1: ;
    eax = MEM32(ebp + 0x14);
    edx = edi + 0x100;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = edx;

loc_0020C6BF: ;
    SET_LO8(edx, MEM8(eax));
    esi = MEM32(ebp + 0x14);
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C6BF; /* jne: not equal / not zero */

loc_0020C6CC: ;
    eax = MEM32(ebp + -4);
    esi = edi + 0x100;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C70B; /* je: equal / zero */

loc_0020C6DD: ;
    MEM16(eax) = 0x5C;
    goto loc_0020C70B;

loc_0020C6E4: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = edi + 0x100;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C6FEu); RECOMP_ABI_CALL(0x0021CAD2u, sub_0021CAD2); /* call 0x0021CAD2 */

loc_0020C6FE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C86A; /* jl: less (signed <) */

loc_0020C708: ;
    ecx = MEM32(ebp + -12);

loc_0020C70B: ;
    edx = ecx + 0x19C9C;
    MEM32(ebp + 0x14) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x5F4) = esi;
    eax = esi;

loc_0020C71F: ;
    SET_LO8(edx, MEM8(eax));
    esi = MEM32(ebp + 0x14);
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C71F; /* jne: not equal / not zero */

loc_0020C72C: ;
    edi = ecx + 0x19C9C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020C733: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C733; /* jne: not equal / not zero */

loc_0020C73B: ;
    eax = MEM32(ebp + -12);
    esi = 0xAA6D9C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x19C9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x19C9C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C752u); RECOMP_ABI_CALL(0x000AE317u, sub_000AE317); /* call 0x000AE317 */

loc_0020C752: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C767u); RECOMP_ABI_CALL(0x0020C4DCu, sub_0020C4DC); /* call 0x0020C4DC */

loc_0020C767: ;
    ecx = MEM32(ebp + -8);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C77Du); RECOMP_ABI_CALL(0x0021DE5Bu, sub_0021DE5B); /* call 0x0021DE5B */

loc_0020C77D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C86A; /* jl: less (signed <) */

loc_0020C787: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x19C9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x19C9C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    esi = 0x8200;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C7BDu); RECOMP_ABI_CALL(0x0021C8B5u, sub_0021C8B5); /* call 0x0021C8B5 */

loc_0020C7BD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C86A; /* jl: less (signed <) */

loc_0020C7C7: ;
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -16) = esi;
    esi = MEM32(ebp + -12);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    eax = eax + esi + 0x19C9C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C7F4u); RECOMP_ABI_CALL(0x0021CFC0u, sub_0021CFC0); /* call 0x0021CFC0 */

loc_0020C7F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C7FE; /* jl: less (signed <) */

loc_0020C7F8: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C7FE: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C807u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020C807: ;
    ecx = MEM32(ebp + 0x14);
    eax = 0x8200;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0x18) = edi;
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx) = 0x21CCC4;
    MEM32(ebx + 4) = 0x20C47D;
    MEM32(ebx + 0x14) = esi;
    eax = 0xAA7AA8;
    MEM32(ebx + 0x1C) = eax;
    edx = MEM32(ebp + -4);
    MEM32(ebx + 0x24) = edx;
    edx = MEM32(ebp + -16);
    MEM32(ebx + 0x28) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x29FB0) = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C864u); RECOMP_ABI_CALL(0x001FE0A4u, sub_001FE0A4); /* call 0x001FE0A4 */

loc_0020C864: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020C88B; /* jge: greater or equal (signed >=) */

loc_0020C86A: ;
    ebx = MEM32(ebp + -12);

loc_0020C86D: ;
    eax = MEM32(ebx + 0x29FB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C880; /* je: equal / zero */

loc_0020C877: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C880u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020C880: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C889u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020C889: ;
    goto loc_0020C8B1;

loc_0020C88B: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x14);
    MEM8(eax + 0x1A) = MEM8(eax + 0x1A) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(eax + 0xFC) = MEM32(eax + 0xFC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xFC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xF8) = ecx;
    ecx = MEM32(ebp + 0x20);
    MEM32(eax + 0x100) = 0x94;
    MEM32(ecx) = eax;

loc_0020C8B1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0020C8B6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0020C8BA
 * Original: 0x0020C8BA - 0x0020C8E3 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C8BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C8BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C8E3(); return; } /* jne: not equal / not zero */

loc_0020C8D9: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0020CA2D(); return; /* tail jmp 0x0020CA2D */

}

/**
 * sub_0020C8E3
 * Original: 0x0020C8E3 - 0x0020C919 (54 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C8E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C8E3: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    eax = ebx + 0x510;
    MEM32(ebp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C8F9; /* je: equal / zero */

loc_0020C8F5: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x54;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C8F9: ;
    PUSH32(esp, 0x20A9);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x0020C906u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020C906: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C919(); return; } /* jne: not equal / not zero */

loc_0020C90D: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020CA29(); return; /* tail jmp 0x0020CA29 */

}

/**
 * sub_0020C919
 * Original: 0x0020C919 - 0x0020C989 (112 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C919: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = eax + 0x150;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ebx;
    ecx = esi + 0x34;
    MEM32(ebp + 0x14) = ecx;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1F4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0020C948u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_0020C948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CA16(); return; } /* jl: less (signed <) */

loc_0020C953: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    eax = ebp + -276;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x0020C969u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020C969: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020C976u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_0020C976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020C989(); return; } /* jne: not equal / not zero */

loc_0020C97D: ;
    MEM32(ebp + -4) = 0x8015C008u;
    g_seh_ebp = ebp; sub_0020CA16(); return; /* tail jmp 0x0020CA16 */

}

/**
 * sub_0020C989
 * Original: 0x0020C989 - 0x0020CA16 (141 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C989(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C989: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    eax = ebp + -276;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + 0x18) = 0x198;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020C9B4u); RECOMP_ABI_CALL(0x0021C8B5u, sub_0021C8B5); /* call 0x0021C8B5 */

loc_0020C9B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CA16(); return; } /* jl: less (signed <) */

loc_0020C9BB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    eax = 0x198;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C9C8; /* je: equal / zero */

loc_0020C9C5: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C9C8: ;
    PUSH32(esp, 0x20C4AE);
    PUSH32(esp, 0x21CE3B);
    PUSH32(esp, 0x21CCC4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = MEM32(ebp + -16);
    PUSH32(esp, 0xEA60);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0xAA7AA8);
    PUSH32(esp, 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020CA0Fu); RECOMP_ABI_CALL(0x0021D253u, sub_0021D253); /* call 0x0021D253 */

loc_0020CA0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CA23(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0020CA16(); return; /* fallthrough 0x0020CA16 */

}

/**
 * sub_0020CA16
 * Original: 0x0020CA16 - 0x0020CA23 (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA16: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0020CA21u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020CA21: ;
    g_seh_ebp = ebp; sub_0020CA28(); return; /* tail jmp 0x0020CA28 */

}

/**
 * sub_0020CA23
 * Original: 0x0020CA23 - 0x0020CA28 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA23: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_0020CA28(); return; /* fallthrough 0x0020CA28 */

}

/**
 * sub_0020CA28
 * Original: 0x0020CA28 - 0x0020CA29 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA28: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0020CA29(); return; /* fallthrough 0x0020CA29 */

}

/**
 * sub_0020CA29
 * Original: 0x0020CA29 - 0x0020CA2D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA29: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020CA2D(); return; /* fallthrough 0x0020CA2D */

}

/**
 * sub_0020CA2D
 * Original: 0x0020CA2D - 0x0020CA32 (5 bytes, 3 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA2D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0020CA32
 * Original: 0x0020CA32 - 0x0020CA6F (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CA32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CA32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CB1E(); return; } /* jl: less (signed <) */

loc_0020CA4A: ;
    eax = MEM32(edx + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x100) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CA9B(); return; } /* jb: below (unsigned <) */

loc_0020CA59: ;
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(MEM32(ecx + 0x1A)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1A), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CA6F(); return; } /* je: equal / zero */

loc_0020CA65: ;
    eax = 0x8015C00Eu;
    g_seh_ebp = ebp; sub_0020CB1D(); return; /* tail jmp 0x0020CB1D */

}

/**
 * sub_0020CA6F
 * Original: 0x0020CA6F - 0x0020CA9B (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA6F: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CA81; /* je: equal / zero */

loc_0020CA76: ;
    edi = MEM32(ecx + 8);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edi;

loc_0020CA81: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CAB3(); return; } /* je: equal / zero */

loc_0020CA88: ;
    esi = MEM32(ecx + 0x86);
    MEM32(eax) = esi;
    ecx = MEM32(ecx + 0x8A);
    MEM32(eax + 4) = ecx;
    g_seh_ebp = ebp; sub_0020CAB3(); return; /* tail jmp 0x0020CAB3 */

}

/**
 * sub_0020CA9B
 * Original: 0x0020CA9B - 0x0020CB1D (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA9B: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CAA7; /* je: equal / zero */

loc_0020CAA2: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;

loc_0020CAA7: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CAB3; /* je: equal / zero */

loc_0020CAAE: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;

loc_0020CAB3: ;
    eax = MEM32(edx + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xD8);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(edx + 0x180);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020CACF; /* jbe: below or equal (unsigned <=) */

loc_0020CACD: ;
    ebx = eax;

loc_0020CACF: ;
    esi = MEM32(edx + 0xB0);
    edi = MEM32(edx + 0x17C);
    ecx = ebx;
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
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
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
    if (CMP_EQ(_fa, _fb)) goto loc_0020CAFA; /* je: equal / zero */

loc_0020CAF2: ;
    ecx = MEM32(edx + 0x17C);
    MEM32(eax) = ecx;

loc_0020CAFA: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB03; /* je: equal / zero */

loc_0020CB01: ;
    MEM32(eax) = ebx;

loc_0020CB03: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB0F; /* je: equal / zero */

loc_0020CB0A: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_0020CB0F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    POP32(esp, ebx);
    eax = 0x8007007Au;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CB1D(); return; } /* ja: above (unsigned >) */

loc_0020CB1A: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_0020CB1D(); return; /* fallthrough 0x0020CB1D */

}

/**
 * sub_0020CAB3
 * Original: 0x0020CAB3 - 0x0020CB1D (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CAB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CAB3: ;
    eax = MEM32(edx + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xD8);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(edx + 0x180);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020CACF; /* jbe: below or equal (unsigned <=) */

loc_0020CACD: ;
    ebx = eax;

loc_0020CACF: ;
    esi = MEM32(edx + 0xB0);
    edi = MEM32(edx + 0x17C);
    ecx = ebx;
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
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
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
    if (CMP_EQ(_fa, _fb)) goto loc_0020CAFA; /* je: equal / zero */

loc_0020CAF2: ;
    ecx = MEM32(edx + 0x17C);
    MEM32(eax) = ecx;

loc_0020CAFA: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB03; /* je: equal / zero */

loc_0020CB01: ;
    MEM32(eax) = ebx;

loc_0020CB03: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB0F; /* je: equal / zero */

loc_0020CB0A: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_0020CB0F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    POP32(esp, ebx);
    eax = 0x8007007Au;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CB1D(); return; } /* ja: above (unsigned >) */

loc_0020CB1A: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_0020CB1D(); return; /* fallthrough 0x0020CB1D */

}

/**
 * sub_0020CB1D
 * Original: 0x0020CB1D - 0x0020CB1E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CB1D: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0020CB1E(); return; /* fallthrough 0x0020CB1E */

}

/**
 * sub_0020CB1E
 * Original: 0x0020CB1E - 0x0020CB23 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CB1E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020CB23
 * Original: 0x0020CB23 - 0x0020CB64 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CB23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CB23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebx + 0xFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CB64(); return; } /* je: equal / zero */

loc_0020CB3C: ;
    eax = MEM32(ebx + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CB64(); return; } /* je: equal / zero */

loc_0020CB46: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x100) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CB5A; /* jne: not equal / not zero */

loc_0020CB4E: ;
    _fa = (uint32_t)(MEM32(eax + 0x1A)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CB5A; /* jne: not equal / not zero */

loc_0020CB54: ;
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CB64(); return; } /* je: equal / zero */

loc_0020CB5A: ;
    eax = 0x8015C00Eu;
    g_seh_ebp = ebp; sub_0020CBF8(); return; /* tail jmp 0x0020CBF8 */

}

/**
 * sub_0020CB64
 * Original: 0x0020CB64 - 0x0020CBF8 (148 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020CB64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CB64: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    edi = ebx + 0x21E9C;
    PUSH32(esp, 0x0020CB73u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020CB73: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x7C);
    PUSH32(esp, esi);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CB82u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020CB82: ;
    PUSH32(esp, edi);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CB8Cu); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020CB8C: ;
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x21E9C;
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x817D);
    eax = ebx + 0x21F14;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA7ABC);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0020CBD5u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_0020CBD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CBF8(); return; } /* jl: less (signed <) */

loc_0020CBD9: ;
    esi = MEM32(ebp + 0xC);
    eax = ebx + 0x608;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
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
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CBF2u); RECOMP_ABI_CALL(0x001F5480u, sub_001F5480); /* call 0x001F5480 */

loc_0020CBF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CBF8(); return; } /* jl: less (signed <) */

loc_0020CBF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020CBF8(); return; /* fallthrough 0x0020CBF8 */

}

/**
 * sub_0020CBF8
 * Original: 0x0020CBF8 - 0x0020CBFF (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CBF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CBF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020CBFF
 * Original: 0x0020CBFF - 0x0020CC0A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CBFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CBFF: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_00202668(); return; /* tail jmp 0x00202668 */

}

/**
 * sub_0020CC0A
 * Original: 0x0020CC0A - 0x0020CC34 (42 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CC30u); RECOMP_ABI_CALL(0x0021D0C8u, sub_0021D0C8); /* call 0x0021D0C8 */

loc_0020CC30: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0020CC34
 * Original: 0x0020CC34 - 0x0020CC43 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0020C580(); return; /* tail jmp 0x0020C580 */

}

/**
 * sub_0020CC43
 * Original: 0x0020CC43 - 0x0020CC52 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0020C8BA(); return; /* tail jmp 0x0020C8BA */

}

/**
 * sub_0020CC52
 * Original: 0x0020CC52 - 0x0020CC61 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0020CA32(); return; /* tail jmp 0x0020CA32 */

}

/**
 * sub_0020CC61
 * Original: 0x0020CC61 - 0x0020CC70 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0021D448(); return; /* tail jmp 0x0021D448 */

}

/**
 * sub_0020CC70
 * Original: 0x0020CC70 - 0x0020CC7F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020CC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0021D599(); return; /* tail jmp 0x0021D599 */

}

/**
 * sub_0020CC95
 * Original: 0x0020CC95 - 0x0020CD51 (188 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CC95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CC95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebp + -542) = MEM16(ebp + -542) & 0;
    _fa = (uint32_t)(MEM16(ebp + -542)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -540) = MEM16(ebp + -540) & 0;
    _fa = (uint32_t)(MEM16(ebp + -540)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ebp + -552) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -548) = eax;
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebp + -544) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x1C));
    MEM16(ebp + -538) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -536;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020CCE5: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CCE5; /* jne: not equal / not zero */

loc_0020CCEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ebp + -24;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esi + 0x22C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x228);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = eax + 1;

loc_0020CD16: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CD16; /* jne: not equal / not zero */

loc_0020CD1D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 0x11;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CD3Du); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0020CD3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CD62(); return; } /* jne: not equal / not zero */

loc_0020CD41: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CD46u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CD46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CD51(); return; } /* jg: greater (signed >) */

loc_0020CD4A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CD4Fu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CD4F: ;
    g_seh_ebp = ebp; sub_0020CD86(); return; /* tail jmp 0x0020CD86 */

}

/**
 * sub_0020CD51
 * Original: 0x0020CD51 - 0x0020CD62 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CD51: ;
    PUSH32(esp, 0x0020CD56u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CD56: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0020CD86(); return; /* tail jmp 0x0020CD86 */

}

/**
 * sub_0020CD62
 * Original: 0x0020CD62 - 0x0020CD86 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CD62: ;
    PUSH32(esp, edi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    eax = esi + 0x1518;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CD76u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020CD76: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x228)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(esi + 0x228) = MEM32(esi + 0x228) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x228)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x22C)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x22C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x22C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

    g_seh_ebp = ebp; sub_0020CD86(); return; /* fallthrough 0x0020CD86 */

}

/**
 * sub_0020CD86
 * Original: 0x0020CD86 - 0x0020CD8C (6 bytes, 4 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CD86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020CD8C
 * Original: 0x0020CD8C - 0x0020CE55 (201 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CD8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020CD8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x29C);
    _fb = (uint32_t)(MEM32(esi + 0x228)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(esi + 0x228)));
    ebx = ebx - MEM32(esi + 0x228);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0020CE40; /* je: equal / zero */

loc_0020CDAE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + 0x95F4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -24;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esi + 0x22C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x228);
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0x95F4;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CDFDu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0020CDFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020CE25; /* jne: not equal / not zero */

loc_0020CE01: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE06u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CE06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0020CE14; /* jg: greater (signed >) */

loc_0020CE0A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE0Fu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CE0F: ;
    MEM32(ebp + -4) = eax;
    goto loc_0020CE4B;

loc_0020CE14: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE19u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020CE19: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020CE0F;

loc_0020CE25: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x1518;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE33u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020CE33: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x228)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(esi + 0x228) = MEM32(esi + 0x228) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x228)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x22C)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x22C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x22C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_0020CE40: ;
    PUSH32(esp, MEM32(esi + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE4Bu); RECOMP_ABI_CALL(0x000AAD42u, sub_000AAD42); /* call 0x000AAD42 */

loc_0020CE4B: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020CE55
 * Original: 0x0020CE55 - 0x0020CEEC (151 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CE55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CE55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CE71u); RECOMP_ABI_CALL(0x0021C813u, sub_0021C813); /* call 0x0021C813 */

loc_0020CE71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020CF6F(); return; } /* jl: less (signed <) */

loc_0020CE7C: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0020CEA7; /* ja: above (unsigned >) */

loc_0020CE8C: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = eax;
    eax = MEM32(ebp + 8);
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
    _fb = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0020CEA7: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020CEAFu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_0020CEAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020CEE2; /* je: equal / zero */

loc_0020CEB6: ;
    ecx = MEM32(ebp + -12);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = esi;
    MEM32(ebp + 0x14) = ecx;

loc_0020CEC4: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + -20);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_0020CEDD; /* je: equal / zero */

loc_0020CED3: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020CEC4; /* jb: below (unsigned <) */

loc_0020CEDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CEEC(); return; } /* jne: not equal / not zero */

loc_0020CEE2: ;
    eax = 0x80150003u;
    g_seh_ebp = ebp; sub_0020CF7A(); return; /* tail jmp 0x0020CF7A */

}

/**
 * sub_0020CEEC
 * Original: 0x0020CEEC - 0x0020CF6F (131 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CEEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CEEC: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x90;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020CF5F; /* ja: above (unsigned >) */

loc_0020CEFD: ;
    esi = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = MEM32(esi + 0x14);
    MEM32(ebx) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 4) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(ebx + 9) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(ebx + 0xA) = ecx;
    ecx = MEM32(esi + 0x1E0);
    MEM32(ebx + 0x86) = ecx;
    ecx = MEM32(esi + 0x244);
    MEM32(ebx + 0x8C) = ecx;
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(eax + ecx + 9));
    MEM16(ebx + 0x8A) = MEM16(ebx + 0x8A) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 5);
    POP32(esp, ecx);
    MEM8(ebx + 8) = LO8(eax);
    _fb = (uint32_t)(0x119F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x119F4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0xE;
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
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x22;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0020CF5F: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020CF72(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020CF66: ;
    MEM32(ebp + -16) = 0x8007007Au;
    g_seh_ebp = ebp; sub_0020CF72(); return; /* tail jmp 0x0020CF72 */

}

/**
 * sub_0020CF6F
 * Original: 0x0020CF6F - 0x0020CF7A (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CF6F: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_0020CF7A(); return; /* fallthrough 0x0020CF7A */

}

/**
 * sub_0020CF72
 * Original: 0x0020CF72 - 0x0020CF7A (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CF72: ;
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_0020CF7A(); return; /* fallthrough 0x0020CF7A */

}

/**
 * sub_0020CF7A
 * Original: 0x0020CF7A - 0x0020CF81 (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CF7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020CF81
 * Original: 0x0020CF81 - 0x0020D0FF (382 bytes, 127 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020CF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CF81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM8(ebp + -20) = 0;
    edi = ebp + -19;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ebx = esi + -800;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebx;
    ecx = eax + 1;

loc_0020CFA8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CFA8; /* jne: not equal / not zero */

loc_0020CFAF: ;
    edi = MEM32(esi + -864);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + -4640);
    ecx = eax + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020CFD4; /* jb: below (unsigned <) */

loc_0020CFCA: ;
    eax = 0x80070044u;
    goto loc_0020D0F8;

loc_0020CFD4: ;
    ecx = MEM32(esi + -868);
    edx = eax + esi + 0x105D0;

loc_0020CFE1: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020CFE1; /* jne: not equal / not zero */

loc_0020CFEB: ;
    eax = MEM32(esi + -4640);
    _fb = (uint32_t)(MEM32(esi + -864)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + -864);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    ecx = eax + esi + 0x105D0;

loc_0020D000: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D000; /* jne: not equal / not zero */

loc_0020D00A: ;
    eax = esi + 0x205D0;
    edx = eax + 1;

loc_0020D013: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D013; /* jne: not equal / not zero */

loc_0020D01A: ;
    ecx = MEM32(esi + -4640);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + esi + 0x105D0;
    PUSH32(esp, 0x281800);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D036u); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_0020D036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D0F3; /* je: equal / zero */

loc_0020D040: ;
    PUSH32(esp, 0xAA7B20);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D04Bu); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_0020D04B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D0F3; /* je: equal / zero */

loc_0020D055: ;
    eax = MEM32(esi + -812);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + -4672) = MEM32(esi + -4672) + eax;
    _fa = (uint32_t)(MEM32(esi + -4672)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + -812);
    _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFC000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + -4676) = MEM32(esi + -4676) + eax;
    _fa = (uint32_t)(MEM32(esi + -4676)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + -812);
    ecx = eax + 0x7FFF;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + -4684) = MEM32(esi + -4684) + eax;
    _fa = (uint32_t)(MEM32(esi + -4684)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + -812);
    PUSH32(esp, eax);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D0ACu); RECOMP_ABI_CALL(0x00104CF2u, sub_00104CF2); /* call 0x00104CF2 */

loc_0020D0AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D0D1; /* jne: not equal / not zero */

loc_0020D0B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D0B5u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D0B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D0C0; /* jg: greater (signed >) */

loc_0020D0B9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D0BEu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D0BE: ;
    goto loc_0020D0F8;

loc_0020D0C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D0C5u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D0C5: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020D0F8;

loc_0020D0D1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + -4640) = MEM32(esi + -4640) + edi;
    _fa = (uint32_t)(MEM32(esi + -4640)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    ecx = eax + 1;

loc_0020D0DD: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D0DD; /* jne: not equal / not zero */

loc_0020D0E4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + -4632) = MEM32(esi + -4632) + eax;
    _fa = (uint32_t)(MEM32(esi + -4632)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -4656) = MEM32(esi + -4656) + 1;
    _fa = (uint32_t)(MEM32(esi + -4656)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020D0F3: ;
    eax = 0x1500F0;

loc_0020D0F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D0FF
 * Original: 0x0020D0FF - 0x0020D206 (263 bytes, 84 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D0FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D0FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = ebx + 0x10AC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D116u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D116: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D1FE; /* je: equal / zero */

loc_0020D120: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D1FE; /* jl: less (signed <) */

loc_0020D126: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1F4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D139; /* jne: not equal / not zero */

loc_0020D12F: ;
    esi = 0x8015C004u;
    goto loc_0020D1FE;

loc_0020D139: ;
    PUSH32(esp, edi);
    edi = ebx + 0x21BF4;
    eax = ebx + 0x219F4;
    edx = edi;
    MEM32(ebp + 8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020D14D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D14D; /* jne: not equal / not zero */

loc_0020D157: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020D158: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D158; /* jne: not equal / not zero */

loc_0020D160: ;
    esi = 0x281800;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D16Eu); RECOMP_ABI_CALL(0x00105397u, sub_00105397); /* call 0x00105397 */

loc_0020D16E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D1C3; /* je: equal / zero */

loc_0020D173: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D181u); RECOMP_ABI_CALL(0x000AE1FFu, sub_000AE1FF); /* call 0x000AE1FF */

loc_0020D181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D1C3; /* je: equal / zero */

loc_0020D185: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebx + 0x1D8);
    MEM32(ebx + 0x1E8) = eax;
    _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFC000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x1E0) = MEM32(ebx + 0x1E0) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x1E0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(ebx + 0x58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ebx + 0x6A)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + ebx + 0x6A) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020D1B5; /* jbe: below or equal (unsigned <=) */

loc_0020D1AE: ;
    esi = 0x8015C003u;
    goto loc_0020D1FE;

loc_0020D1B5: ;
    MEM32(ebx + 0x1D4) = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020D1F1;

loc_0020D1C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D1C8u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D1D5; /* jg: greater (signed >) */

loc_0020D1CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D1D1u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D1D1: ;
    esi = eax;
    goto loc_0020D1E8;

loc_0020D1D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D1DAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D1DA: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020D1E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D1F1; /* jl: less (signed <) */

loc_0020D1EC: ;
    esi = 0x80004005u;

loc_0020D1F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D1F6u); RECOMP_ABI_CALL(0x0010567Cu, sub_0010567C); /* call 0x0010567C */

loc_0020D1F6: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D1FEu); RECOMP_ABI_CALL(0x000AE317u, sub_000AE317); /* call 0x000AE317 */

loc_0020D1FE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D206
 * Original: 0x0020D206 - 0x0020D230 (42 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D206(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D206: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D222; /* je: equal / zero */

loc_0020D214: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D21Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D21A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D22C; /* je: equal / zero */

loc_0020D21E: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D22C; /* jl: less (signed <) */

loc_0020D220: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D222: ;
    MEM32(esi + 0x1D4) = 2;

loc_0020D22C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D230
 * Original: 0x0020D230 - 0x0020D272 (66 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x21F48));
    edi = ecx;
    PUSH32(esp, 0x0020D243u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D26D; /* je: equal / zero */

loc_0020D247: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D26D; /* jl: less (signed <) */

loc_0020D249: ;
    eax = esi + 0x21E28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x21F48));
    ecx = edi;
    PUSH32(esp, 0x0020D25Du); RECOMP_ABI_CALL(0x0021CC82u, sub_0021CC82); /* call 0x0021CC82 */

loc_0020D25D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D26D; /* jl: less (signed <) */

loc_0020D261: ;
    MEM32(esi + 0x1D4) = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D26D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D272
 * Original: 0x0020D272 - 0x0020D29F (45 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D272(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D272: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x21F4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D291; /* je: equal / zero */

loc_0020D283: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D289u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D29B; /* je: equal / zero */

loc_0020D28D: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D29B; /* jl: less (signed <) */

loc_0020D28F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D291: ;
    MEM32(esi + 0x1D4) = 4;

loc_0020D29B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D29F
 * Original: 0x0020D29F - 0x0020D34D (174 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D29F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D29F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = ebx + 0x21BF4;
    ecx = ebx + 0x219F4;
    MEM32(ebp + 8) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);

loc_0020D2C1: ;
    SET_LO8(edx, MEM8(eax));
    esi = MEM32(ebp + 8);
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D2C1; /* jne: not equal / not zero */

loc_0020D2CE: ;
    edi = ebx + 0x21BF4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020D2D5: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D2D5; /* jne: not equal / not zero */

loc_0020D2DD: ;
    esi = 0x281800;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, ecx);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D2F3u); RECOMP_ABI_CALL(0x00104F9Cu, sub_00104F9C); /* call 0x00104F9C */

loc_0020D2F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D323; /* je: equal / zero */

loc_0020D2F9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D313u); RECOMP_ABI_CALL(0x00104FE6u, sub_00104FE6); /* call 0x00104FE6 */

loc_0020D313: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D323; /* je: equal / zero */

loc_0020D317: ;
    MEM32(ebx + 0x1D4) = 6;
    goto loc_0020D345;

loc_0020D323: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D328u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D333; /* jg: greater (signed >) */

loc_0020D32C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D331u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D331: ;
    goto loc_0020D342;

loc_0020D333: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D338u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D338: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020D342: ;
    MEM32(ebp + -4) = eax;

loc_0020D345: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D34D
 * Original: 0x0020D34D - 0x0020D4D9 (396 bytes, 116 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D34D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020D34D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebx + 0x158C;
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D366u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D366: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D4D3; /* je: equal / zero */

loc_0020D36E: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D4D3; /* jl: less (signed <) */

loc_0020D374: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D385u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_0020D385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020D4D3; /* jl: less (signed <) */

loc_0020D38D: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebx + 0x1430;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D3A0u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020D3A0: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x210)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x210) = MEM32(ebx + 0x210) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x210)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x21C);
    eax = ebx + eax + 0x95F4;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + 4) = LO16(ecx);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + -4);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 8;
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
    _cf = 0; /* logical op clears CF */
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
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x220)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebx + 0x220) = MEM32(ebx + 0x220) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x220)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x1FC);
    ecx = ecx + ecx * 8;
    { uint64_t _t = (uint64_t)(MEM32(ebx + 0x224)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx + 0x224) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx + 0x224)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(8)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + ecx * 4 + 0x2A0;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = ebx + 0x14A4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D417u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020D417: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x21C)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x21C) = MEM32(ebx + 0x21C) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x21C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x21C);
    edi = MEM32(ebp + -8);
    esi = ebx + 0x15C0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebx + 0x234));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x230));
    PUSH32(esp, eax);
    eax = ebx + 0x95F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x15DC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D459u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020D459: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D463u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020D463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020D4D2; /* jl: less (signed <) */

loc_0020D467: ;
    edx = MEM32(ebx + 0x224);
    eax = MEM32(ebx + 0x218);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020D4C2; /* ja: above (unsigned >) */

loc_0020D479: ;
    if (CMP_B(_fa, _fb)) goto loc_0020D485; /* jb: below (unsigned <) */

loc_0020D47B: ;
    ecx = MEM32(ebx + 0x220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0020D4C2; /* jae: above or equal (unsigned >=) */

loc_0020D485: ;
    esi = ebx + 0x158C;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x15F4;
    PUSH32(esp, MEM32(ebx + 0x224));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x220));
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x15A8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D4B4u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020D4B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D4BEu); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020D4BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020D4D2; /* jl: less (signed <) */

loc_0020D4C2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x1B) = MEM8(ebx + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x1D4) = 8;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D4D2: ;
    POP32(esp, edi);

loc_0020D4D3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D4D9
 * Original: 0x0020D4D9 - 0x0020D58F (182 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D4D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020D4D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D4F1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D4F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D588; /* je: equal / zero */

loc_0020D4F9: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D588; /* jl: less (signed <) */

loc_0020D4FF: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D50Fu); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_0020D50F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020D588; /* jl: less (signed <) */

loc_0020D513: ;
    ecx = MEM32(ebp + 8);
    eax = esi + 0x21C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(eax)) < (uint32_t)(ecx));
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(eax));
    eax = ecx + esi + 0x95F4;
    PUSH32(esp, eax);
    eax = esi + 0x95F4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D534u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_0020D534: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x224);
    eax = esi + 0x230;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x1D8)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 0x1D8) = MEM32(esi + 0x1D8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x1DC)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 0x1DC) = MEM32(esi + 0x1DC) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x218);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020D57C; /* jb: below (unsigned <) */

loc_0020D564: ;
    if (CMP_A(_fa, _fb)) goto loc_0020D570; /* ja: above (unsigned >) */

loc_0020D566: ;
    ecx = MEM32(esi + 0x220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020D57C; /* jb: below (unsigned <) */

loc_0020D570: ;
    MEM32(esi + 0x1D4) = 9;
    goto loc_0020D586;

loc_0020D57C: ;
    MEM32(esi + 0x1D4) = 7;

loc_0020D586: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D588: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D58F
 * Original: 0x0020D58F - 0x0020D65A (203 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D58F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D58F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15A8;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D5ACu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020D5AC: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = esi + 0x1430;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D5BFu); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020D5BF: ;
    eax = MEM32(esi + 0x204);
    ecx = esi + eax + 0x119F4;
    eax = ecx;
    edi = eax + 1;

loc_0020D5D1: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D5D1; /* jne: not equal / not zero */

loc_0020D5D8: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    eax = esi + 0x219F4;
    edi = eax + 1;

loc_0020D5E5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D5E5; /* jne: not equal / not zero */

loc_0020D5EC: ;
    edx = MEM32(esi + 0x218);
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + 0x15F4;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D611u); RECOMP_ABI_CALL(0x00104CF2u, sub_00104CF2); /* call 0x00104CF2 */

loc_0020D611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D639; /* jne: not equal / not zero */

loc_0020D615: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D61Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D61A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D628; /* jg: greater (signed >) */

loc_0020D61E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D623u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D623: ;
    MEM32(ebp + -4) = eax;
    goto loc_0020D650;

loc_0020D628: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D62Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D62D: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020D623;

loc_0020D639: ;
    MEM32(esi + 0x200) = MEM32(esi + 0x200) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x204) = MEM32(esi + 0x204) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x204)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1D4) = 6;

loc_0020D650: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D65A
 * Original: 0x0020D65A - 0x0020D6BD (99 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D65A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020D65A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D672u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020D672: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6B6; /* je: equal / zero */

loc_0020D676: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D6B6; /* jl: less (signed <) */

loc_0020D678: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D688u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_0020D688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020D6B6; /* jl: less (signed <) */

loc_0020D68C: ;
    ecx = MEM32(esi + 0x21C);
    eax = esi + 0x230;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1D4) = 0xB;
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x1D8)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 0x1D8) = MEM32(esi + 0x1D8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x1DC)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 0x1DC) = MEM32(esi + 0x1DC) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D6B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D6BD
 * Original: 0x0020D6BD - 0x0020D85D (416 bytes, 143 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D6BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D6BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D6E0u); RECOMP_ABI_CALL(0x000AA2D6u, sub_000AA2D6); /* call 0x000AA2D6 */

loc_0020D6E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D6FD; /* jne: not equal / not zero */

loc_0020D6E4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D6E9u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D6E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D7E1; /* jg: greater (signed >) */

loc_0020D6F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D6F6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D6F6: ;
    esi = eax;
    goto loc_0020D847;

loc_0020D6FD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D702u); RECOMP_ABI_CALL(0x00105397u, sub_00105397); /* call 0x00105397 */

loc_0020D702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6E4; /* je: equal / zero */

loc_0020D706: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D712u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_0020D712: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6E4; /* je: equal / zero */

loc_0020D716: ;
    esi = MEM32(ebp + 8);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D725u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020D725: ;
    eax = MEM32(esi + 0x29C);
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, edi);

loc_0020D732: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000);
    eax = esi + 0x95FC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D761u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0020D761: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D7F6; /* je: equal / zero */

loc_0020D769: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x95F4;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx + 4) = LO16(eax);
    MEM16(ebx + 6) = LO16(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D794u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020D794: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = MEM32(ebp + -12);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -32) = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D7BFu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0020D7BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D7F6; /* je: equal / zero */

loc_0020D7C3: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0020D81D; /* jg: greater (signed >) */

loc_0020D7D0: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020D7DA; /* jl: less (signed <) */

loc_0020D7D2: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D81D; /* jae: above or equal (unsigned >=) */

loc_0020D7DA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020D732;

loc_0020D7E1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D7E6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D7E6: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020D847;

loc_0020D7F6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D7FBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D7FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D808; /* jg: greater (signed >) */

loc_0020D7FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D804u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D804: ;
    esi = eax;
    goto loc_0020D846;

loc_0020D808: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D80Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D80D: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020D846;

loc_0020D81D: ;
    eax = esi + 0x2A4;
    PUSH32(esp, eax);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D830u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020D830: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x2B8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0x1D4) = 0xC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D846: ;
    POP32(esp, edi);

loc_0020D847: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D855; /* je: equal / zero */

loc_0020D84D: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D855u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020D855: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D85D
 * Original: 0x0020D85D - 0x0020DA2F (466 bytes, 145 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020D85D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D85D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x1D8);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ecx;
    MEM32(ebx + 0x244) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D87Cu); RECOMP_ABI_CALL(0x0020CD8Cu, sub_0020CD8C); /* call 0x0020CD8C */

loc_0020D87C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DA2A; /* jl: less (signed <) */

loc_0020D884: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x280;
    PUSH32(esp, eax);
    esi = ebx + 0x1518;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D899u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020D899: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x294;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, esi);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D8A9u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020D8A9: ;
    eax = MEM32(ebx + 0x1F0);
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ebx + 0x29C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D8C3u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020D8C3: ;
    eax = ebx + 0x264;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D8D0u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020D8D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x278;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebx + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D8F8u); RECOMP_ABI_CALL(0x000AAAC9u, sub_000AAAC9); /* call 0x000AAAC9 */

loc_0020D8F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D9C7; /* je: equal / zero */

loc_0020D900: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    edx = ebx + 0x95F4;
    edi = edx;
    PUSH32(esp, 0x20);
    esi = ebx + 0x23C;
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
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    edi = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    MEM32(ebp + 8) = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D931u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_0020D931: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D9C7; /* je: equal / zero */

loc_0020D93C: ;
    PUSH32(esp, 0x7C);
    edi = ebx + 0x95F4;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D94Bu); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_0020D94B: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D954u); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_0020D954: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D95Bu); RECOMP_ABI_CALL(0x000ABDD8u, sub_000ABDD8); /* call 0x000ABDD8 */

loc_0020D95B: ;
    esi = ebx + 0x1518;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D96Au); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020D96A: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D976u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_0020D976: ;
    eax = ebx + 0x119F4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D983u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020D983: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x180);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D99Au); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0020D99A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D9C7; /* je: equal / zero */

loc_0020D99E: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x1F0);
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebx + 0x29C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D9C3u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0020D9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D9E8; /* jne: not equal / not zero */

loc_0020D9C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D9CCu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D9CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020D9D7; /* jg: greater (signed >) */

loc_0020D9D0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D9D5u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D9D5: ;
    goto loc_0020DA28;

loc_0020D9D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D9DCu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020D9DC: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020DA28;

loc_0020D9E8: ;
    PUSH32(esp, MEM32(ebx + 0x238));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020D9F3u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020D9F3: ;
    PUSH32(esp, MEM32(ebx + 0x1D8));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebx + 0x15DC));
    MEM32(ebx + 0x238) = MEM32(ebx + 0x238) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x238)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DA0Eu); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_0020DA0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DA28; /* jl: less (signed <) */

loc_0020DA12: ;
    ecx = MEM32(ebx + 0x2C0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x1DC) = MEM32(ebx + 0x1DC) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x1DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1D4) = 0xD;

loc_0020DA28: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0020DA2A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DA2F
 * Original: 0x0020DA2F - 0x0020DBB8 (393 bytes, 117 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DA2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DA2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x21DF8;
    eax = edi + 0x95F4;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = 0x8400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DA5Fu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020DA5F: ;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = MEM32(edi + 0x15DC);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(edi + 0x244);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xE8) = eax;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 0xE8));
    MEM32(esi + 0xEC) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0x1C) = 0xEA60;
    MEM32(esi + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DABDu); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_0020DABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DBB1; /* jl: less (signed <) */

loc_0020DAC5: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = 0xEA60;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020DAD6; /* jbe: below or equal (unsigned <=) */

loc_0020DAD3: ;
    MEM32(esi + 0x28) = eax;

loc_0020DAD6: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DAE5u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020DAE5: ;
    ecx = esi + 0x140;
    MEM32(ecx) = 0x1FF4F5;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x148) = eax;
    eax = esi + 0x104;
    MEM32(esi + 0x14C) = ebx;
    MEM32(eax + 0x14) = ecx;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x1FF3C6;
    MEM32(eax + 4) = 0x1FF3F2;
    MEM32(eax + 8) = 0x1FFEAC;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = 0x8000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DB43u); RECOMP_ABI_CALL(0x0020CE55u, sub_0020CE55); /* call 0x0020CE55 */

loc_0020DB43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DBB1; /* jl: less (signed <) */

loc_0020DB47: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 3 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0020DB87; /* jne: not equal / not zero */

loc_0020DB50: ;
    ecx = 0x8000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ecx;
    ecx = edi + 0x21F4C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax + edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DB7Du); RECOMP_ABI_CALL(0x0021CFC0u, sub_0021CFC0); /* call 0x0021CFC0 */

loc_0020DB7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DBB1; /* jl: less (signed <) */

loc_0020DB81: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DB87: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7B28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DB9Fu); RECOMP_ABI_CALL(0x001FF257u, sub_001FF257); /* call 0x001FF257 */

loc_0020DB9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DBB1; /* jl: less (signed <) */

loc_0020DBA3: ;
    MEM8(edi + 0x1B) = MEM8(edi + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(edi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 0x1D4) = 0xE;

loc_0020DBB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DBB8
 * Original: 0x0020DBB8 - 0x0020DBE5 (45 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DBB8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x21DF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DBC9u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020DBC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DBDD; /* je: equal / zero */

loc_0020DBCD: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020DBE1; /* jl: less (signed <) */

loc_0020DBCF: ;
    MEM32(esi + 0x1D4) = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020DBE1;

loc_0020DBDD: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0020DBE1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DBE5
 * Original: 0x0020DBE5 - 0x0020DC0F (42 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DBE5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC01; /* je: equal / zero */

loc_0020DBF3: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020DBF9u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020DBF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC0B; /* je: equal / zero */

loc_0020DBFD: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020DC0B; /* jl: less (signed <) */

loc_0020DBFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020DC01: ;
    MEM32(esi + 0x1D4) = 0x10;

loc_0020DC0B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DC0F
 * Original: 0x0020DC0F - 0x0020DD58 (329 bytes, 121 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DC0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DC0F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x21DF8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC28u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_0020DC28: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC2Du); RECOMP_ABI_CALL(0x0010567Cu, sub_0010567C); /* call 0x0010567C */

loc_0020DC2D: ;
    esi = ebx + 0x15A8;
    eax = MEM32(esi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC48; /* je: equal / zero */

loc_0020DC3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC48; /* je: equal / zero */

loc_0020DC40: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC46u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020DC46: ;
    MEM32(esi) = edi;

loc_0020DC48: ;
    esi = ebx + 0x15DC;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC60; /* je: equal / zero */

loc_0020DC54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC60; /* je: equal / zero */

loc_0020DC58: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC5Eu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020DC5E: ;
    MEM32(esi) = edi;

loc_0020DC60: ;
    esi = ebx + 0x238;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC78; /* je: equal / zero */

loc_0020DC6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC78; /* je: equal / zero */

loc_0020DC70: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC76u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020DC76: ;
    MEM32(esi) = edi;

loc_0020DC78: ;
    ecx = ebx + 0x21BF4;
    eax = ebx + 0x219F4;
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = edx;

loc_0020DC8B: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DC8B; /* jne: not equal / not zero */

loc_0020DC95: ;
    edi = ebx + 0x21BF4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020DC9C: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DC9C; /* jne: not equal / not zero */

loc_0020DCA4: ;
    esi = 0x281800;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DCB9u); RECOMP_ABI_CALL(0x000AE317u, sub_000AE317); /* call 0x000AE317 */

loc_0020DCB9: ;
    eax = ebx + 0x219F4;

loc_0020DCBF: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(ebp + 8);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DCBF; /* jne: not equal / not zero */

loc_0020DCCC: ;
    edi = ebx + 0x21BF4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020DCD3: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DCD3; /* jne: not equal / not zero */

loc_0020DCDB: ;
    esi = 0xAA7B20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DCEFu); RECOMP_ABI_CALL(0x000AE317u, sub_000AE317); /* call 0x000AE317 */

loc_0020DCEF: ;
    eax = MEM32(ebx + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DD04; /* je: equal / zero */

loc_0020DCF8: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DD01u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020DD01: ;
    MEM32(ebx + 0x24) = edi;

loc_0020DD04: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DD17; /* je: equal / zero */

loc_0020DD0B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DD14u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020DD14: ;
    MEM32(ebx + 0x28) = edi;

loc_0020DD17: ;
    esi = ebx + 0x21F48;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DD2E; /* je: equal / zero */

loc_0020DD23: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DD2Cu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020DD2C: ;
    MEM32(esi) = edi;

loc_0020DD2E: ;
    esi = ebx + 0x21F4C;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DD45; /* je: equal / zero */

loc_0020DD3A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DD43u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020DD43: ;
    MEM32(esi) = edi;

loc_0020DD45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x1D4) = 0x11;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DD58
 * Original: 0x0020DD58 - 0x0020DDD4 (124 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DD58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DD58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0020DD7A; /* jge: greater or equal (signed >=) */

loc_0020DD6E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0xAA7AD8); PUSH32(esp, 0x0020DD76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020DD6Fu); } /* indirect call */
    }

loc_0020DD76: ;
    edi = eax;
    goto loc_0020DD84;

loc_0020DD7A: ;
    edi = 0x80004005u;
    if (CMP_NE(_fa, _fb)) goto loc_0020DD84; /* jne: not equal / not zero */

loc_0020DD81: ;
    edi = MEM32(ebp + 8);

loc_0020DD84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020DD9D; /* jge: greater or equal (signed >=) */

loc_0020DD88: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DD90u); RECOMP_ABI_CALL(0x0020DC0Fu, sub_0020DC0F); /* call 0x0020DC0F */

loc_0020DD90: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1D4) = 0x11;

loc_0020DD9D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DDB2; /* je: equal / zero */

loc_0020DDA4: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1B), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020DDB2; /* jne: not equal / not zero */

loc_0020DDAA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DDB0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_0020DDB0: ;
    goto loc_0020DDB6;

loc_0020DDB2: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0020DDB6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D4), 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DDCB; /* jne: not equal / not zero */

loc_0020DDBF: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020DDCB; /* jl: less (signed <) */

loc_0020DDC6: ;
    edi = 0x1500F0;

loc_0020DDCB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DDD4
 * Original: 0x0020DDD4 - 0x0020DE06 (50 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DDD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DDD4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0020DDE2u); RECOMP_ABI_CALL(0x0020DC0Fu, sub_0020DC0F); /* call 0x0020DC0F */

loc_0020DDE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x21F20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x21F20), 0 (32-bit) */
    MEM32(esi + 0xC) = 5;
    ecx = edi;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020DDFC; /* je: equal / zero */

loc_0020DDF5: ;
    PUSH32(esp, 0x0020DDFAu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020DDFA: ;
    goto loc_0020DE01;

loc_0020DDFC: ;
    PUSH32(esp, 0x0020DE01u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020DE01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DE06
 * Original: 0x0020DE06 - 0x0020DEA7 (161 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DE06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DE06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_0020DE17: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DE17; /* jne: not equal / not zero */

loc_0020DE1E: ;
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x87D6;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE39u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020DE39: ;
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 0x1D4) = MEM32(ebx + 0x1D4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x238) = MEM32(ebx + 0x238) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x238)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 0x18) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi;
    MEM32(ebx) = 0x20DD58;
    MEM32(ebx + 4) = 0x20DDD4;
    MEM32(ebx + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE80u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_0020DE80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020DF93(); return; } /* jl: less (signed <) */

loc_0020DE8B: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE97u); RECOMP_ABI_CALL(0x0021C89Bu, sub_0021C89B); /* call 0x0021C89B */

loc_0020DE97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020DEA7(); return; } /* jge: greater or equal (signed >=) */

loc_0020DE9B: ;
    MEM32(ebp + 8) = 0x8015C009u;
    g_seh_ebp = ebp; sub_0020DF93(); return; /* tail jmp 0x0020DF93 */

}

/**
 * sub_0020DEA7
 * Original: 0x0020DEA7 - 0x0020DF04 (93 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DEA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DEA7: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020DEB1u); RECOMP_ABI_CALL(0x0021C878u, sub_0021C878); /* call 0x0021C878 */

loc_0020DEB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020DF93(); return; } /* jl: less (signed <) */

loc_0020DEBC: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x14);
    eax = ecx;
    esi = edi;
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
    eax = MEM32(edx + 0xC);
    edi = ebx + 0x21F58;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x30) = edi;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF08(); return; } /* je: equal / zero */

loc_0020DEEA: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF04(); return; } /* je: equal / zero */

loc_0020DEF1: ;
    ecx = MEM32(edx + 0xC);
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
    g_seh_ebp = ebp; sub_0020DF08(); return; /* tail jmp 0x0020DF08 */

}

/**
 * sub_0020DF04
 * Original: 0x0020DF04 - 0x0020DF08 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF04: ;
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0020DF08(); return; /* fallthrough 0x0020DF08 */

}

/**
 * sub_0020DF08
 * Original: 0x0020DF08 - 0x0020DF3C (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF08: ;
    MEM32(ebx + 0x34) = ebx;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DF2E; /* je: equal / zero */

loc_0020DF12: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF3C(); return; } /* je: equal / zero */

loc_0020DF19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF3C(); return; } /* jb: below (unsigned <) */

loc_0020DF1D: ;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF3C(); return; } /* jae: above or equal (unsigned >=) */

loc_0020DF26: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x24) = ecx;

loc_0020DF2E: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF5A(); return; } /* je: equal / zero */

loc_0020DF35: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF45(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0020DF3C(); return; /* fallthrough 0x0020DF3C */

}

/**
 * sub_0020DF3C
 * Original: 0x0020DF3C - 0x0020DF45 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF3C: ;
    MEM32(ebp + 8) = 0x8015C005u;
    g_seh_ebp = ebp; sub_0020DF93(); return; /* tail jmp 0x0020DF93 */

}

/**
 * sub_0020DF45
 * Original: 0x0020DF45 - 0x0020DF5A (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF45: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF3C(); return; } /* jb: below (unsigned <) */

loc_0020DF49: ;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020DF3C(); return; } /* jae: above or equal (unsigned >=) */

loc_0020DF52: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x28) = ecx;

    g_seh_ebp = ebp; sub_0020DF5A(); return; /* fallthrough 0x0020DF5A */

}

/**
 * sub_0020DF5A
 * Original: 0x0020DF5A - 0x0020DF93 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF5A: ;
    eax = MEM32(ebp + 0x18);
    esi = ebx + 0x219F4;
    edi = esi;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020DF69: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DF69; /* jne: not equal / not zero */

loc_0020DF73: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(ecx + eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DF8F; /* je: equal / zero */

loc_0020DF7D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020DF7E: ;
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DF7E; /* jne: not equal / not zero */

loc_0020DF86: ;
    edi = esi;
    esi = 0xAA7B40;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_0020DF8F: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0020DF93(); return; /* fallthrough 0x0020DF93 */

}

/**
 * sub_0020DF93
 * Original: 0x0020DF93 - 0x0020DF9D (10 bytes, 6 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DF93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DF93: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0020DF9D
 * Original: 0x0020DF9D - 0x0020E1B3 (534 bytes, 178 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DF9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DF9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x608) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x608;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0020DFBA; /* jne: not equal / not zero */

loc_0020DFB0: ;
    eax = 0x80150005u;
    goto loc_0020E1AE;

loc_0020DFBA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DFC4u); RECOMP_ABI_CALL(0x0021C813u, sub_0021C813); /* call 0x0021C813 */

loc_0020DFC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020E1AA; /* jl: less (signed <) */

loc_0020DFCF: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x204B);
    _fb = (uint32_t)(0x21F58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x21F58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DFE5u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_0020DFE5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DFF7; /* jne: not equal / not zero */

loc_0020DFEB: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0020E18B;

loc_0020DFF7: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(edi + 0x1850));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E011u); RECOMP_ABI_CALL(0x0020DE06u, sub_0020DE06); /* call 0x0020DE06 */

loc_0020E011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020E18B; /* jl: less (signed <) */

loc_0020E01C: ;
    esi = ebx + 0x1424;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E02Au); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020E02A: ;
    eax = MEM32(ebp + 0x14);
    MEM32(ebx + 0x1428) = MEM32(ebx + 0x1428) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1428)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x142C) = eax;
    eax = ebx + 0x219F4;
    edx = ebx + 0x21BF4;
    MEM32(esi) = 0x20CF81;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020E04E: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E04E; /* jne: not equal / not zero */

loc_0020E058: ;
    eax = ebx + 0x10AC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    esi = 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E07Cu); RECOMP_ABI_CALL(0x00217125u, sub_00217125); /* call 0x00217125 */

loc_0020E07C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020E18B; /* jl: less (signed <) */

loc_0020E087: ;
    PUSH32(esp, esi);
    eax = ebp + -1544;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0x38));
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFDE9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E0A8u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0020E0A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E0C9; /* jne: not equal / not zero */

loc_0020E0AC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E0B1u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E0B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020E0BF; /* jg: greater (signed >) */

loc_0020E0B5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E0BAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E0BA: ;
    goto loc_0020E188;

loc_0020E0BF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E0C4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E0C4: ;
    goto loc_0020E17E;

loc_0020E0C9: ;
    MEM16(ebp + eax * 2 + -1544) = LO16(esi);
    eax = ebx + 0x21F48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -1544;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E0ECu); RECOMP_ABI_CALL(0x0021DE5Bu, sub_0021DE5B); /* call 0x0021DE5B */

loc_0020E0EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020E18B; /* jl: less (signed <) */

loc_0020E0F7: ;
    eax = MEM32(ebp + 0xC);
    edx = ebp + -520;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020E102: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E102; /* jne: not equal / not zero */

loc_0020E10C: ;
    edi = ebp + -520;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020E113: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E113; /* jne: not equal / not zero */

loc_0020E11B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = 0xAA7B44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -520;
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E134u); RECOMP_ABI_CALL(0x00104F9Cu, sub_00104F9C); /* call 0x00104F9C */

loc_0020E134: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E163; /* je: equal / zero */

loc_0020E138: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebp + -520;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    PUSH32(esp, MEM32(eax + 0x1850));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E158u); RECOMP_ABI_CALL(0x00104FE6u, sub_00104FE6); /* call 0x00104FE6 */

loc_0020E158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E163; /* je: equal / zero */

loc_0020E15C: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ebx;
    goto loc_0020E1A9;

loc_0020E163: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E168u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020E176; /* jg: greater (signed >) */

loc_0020E16C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E171u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E171: ;
    edi = MEM32(ebp + -8);
    goto loc_0020E188;

loc_0020E176: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E17Bu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E17B: ;
    edi = MEM32(ebp + -8);

loc_0020E17E: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020E188: ;
    MEM32(ebp + -4) = eax;

loc_0020E18B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E1A9; /* je: equal / zero */

loc_0020E18F: ;
    eax = MEM32(ebx + 0x21F48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E1A1; /* je: equal / zero */

loc_0020E199: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E1A1u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020E1A1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E1A9u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020E1A9: ;
    POP32(esp, ebx);

loc_0020E1AA: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);

loc_0020E1AE: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020E1B3
 * Original: 0x0020E1B3 - 0x0020E1D3 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E1B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E1B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x310;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E1D3(); return; } /* jne: not equal / not zero */

loc_0020E1C9: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0020E49E(); return; /* tail jmp 0x0020E49E */

}

/**
 * sub_0020E1D3
 * Original: 0x0020E1D3 - 0x0020E205 (50 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E1D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E1D3: ;
    ecx = ebx;
    PUSH32(esp, 0x0020E1DAu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_0020E1DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E499(); return; } /* je: equal / zero */

loc_0020E1E2: ;
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = MEM32(ecx + eax);
    edx = edx | MEM32(ecx + eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0020E499(); return; } /* je: equal / zero */

loc_0020E1F5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E205(); return; } /* jb: below (unsigned <) */

loc_0020E1FB: ;
    eax = 0x80151006u;
    g_seh_ebp = ebp; sub_0020E49E(); return; /* tail jmp 0x0020E49E */

}

/**
 * sub_0020E205
 * Original: 0x0020E205 - 0x0020E23B (54 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E205: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    esi = esi >> 0x1E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -12) = 0x2210C;
    if (CMP_NE(_fa, _fb)) goto loc_0020E226; /* jne: not equal / not zero */

loc_0020E21F: ;
    MEM32(ebp + -12) = 0x22160;

loc_0020E226: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    PUSH32(esp, 0x20AC);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E23B(); return; } /* je: equal / zero */

loc_0020E234: ;
    PUSH32(esp, 0x0020E239u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_0020E239: ;
    g_seh_ebp = ebp; sub_0020E240(); return; /* tail jmp 0x0020E240 */

}

/**
 * sub_0020E23B
 * Original: 0x0020E23B - 0x0020E240 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E23B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E23B: ;
    PUSH32(esp, 0x0020E240u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

    g_seh_ebp = ebp; sub_0020E240(); return; /* fallthrough 0x0020E240 */

}

/**
 * sub_0020E240
 * Original: 0x0020E240 - 0x0020E252 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E240: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E252(); return; } /* jne: not equal / not zero */

loc_0020E246: ;
    MEM32(ebp + -8) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020E493(); return; /* tail jmp 0x0020E493 */

}

/**
 * sub_0020E252
 * Original: 0x0020E252 - 0x0020E28E (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E252(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E252: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    eax = ebp + -272;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebx + 0x21F20) = esi;
    PUSH32(esp, 0x0020E26Eu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020E26E: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020E27Bu); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_0020E27B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E28E(); return; } /* jne: not equal / not zero */

loc_0020E282: ;
    MEM32(ebp + -8) = 0x8015C008u;
    g_seh_ebp = ebp; sub_0020E46C(); return; /* tail jmp 0x0020E46C */

}

/**
 * sub_0020E28E
 * Original: 0x0020E28E - 0x0020E445 (439 bytes, 144 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E28E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E28E: ;
    ecx = MEM32(ebp + -4);
    esi = ebx + 0x21F58;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    MEM32(eax) = 0x198;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + -272;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020E2C2u); RECOMP_ABI_CALL(0x0021C8B5u, sub_0021C8B5); /* call 0x0021C8B5 */

loc_0020E2C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E469(); return; } /* jl: less (signed <) */

loc_0020E2CD: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    _fb = (uint32_t)(0xFFFFFF70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFF70u;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, MEM32(ecx + 0x1850));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020E304u); RECOMP_ABI_CALL(0x0020DE06u, sub_0020DE06); /* call 0x0020DE06 */

loc_0020E304: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E469(); return; } /* jl: less (signed <) */

loc_0020E30F: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    esi = ebx + 0x1424;
    PUSH32(esp, esi);
    MEM32(ebx + 0x21F20) = eax;
    PUSH32(esp, 0x0020E327u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020E327: ;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0x142C) = eax;
    eax = ebx + 0x219F4;
    ecx = ebx + 0x21BF4;
    MEM32(esi) = 0x20CF81;
    MEM32(ebx + 0x1428) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020E34A: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E34A; /* jne: not equal / not zero */

loc_0020E354: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x10AC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebx + 0x21BF4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x200);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E376u); RECOMP_ABI_CALL(0x00217125u, sub_00217125); /* call 0x00217125 */

loc_0020E376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E469(); return; } /* jl: less (signed <) */

loc_0020E381: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x21F48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x0020E399u); RECOMP_ABI_CALL(0x0021DE5Bu, sub_0021DE5B); /* call 0x0021DE5B */

loc_0020E399: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E469(); return; } /* jl: less (signed <) */

loc_0020E3A4: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x21F4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebx + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -12) = 0x8000;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020E3CEu); RECOMP_ABI_CALL(0x0021CFC0u, sub_0021CFC0); /* call 0x0021CFC0 */

loc_0020E3CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E469(); return; } /* jl: less (signed <) */

loc_0020E3D9: ;
    eax = MEM32(ebp + 0x1C);
    edx = ebp + -784;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020E3E4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E3E4; /* jne: not equal / not zero */

loc_0020E3EE: ;
    edi = ebp + -784;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020E3F5: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E3F5; /* jne: not equal / not zero */

loc_0020E3FD: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = 0xAA7B44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -784;
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0020E416u); RECOMP_ABI_CALL(0x00104F9Cu, sub_00104F9C); /* call 0x00104F9C */

loc_0020E416: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E445(); return; } /* je: equal / zero */

loc_0020E41A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebp + -784;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(eax + 0x1850));
    PUSH32(esp, 0x0020E43Au); RECOMP_ABI_CALL(0x00104FE6u, sub_00104FE6); /* call 0x00104FE6 */

loc_0020E43A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E445(); return; } /* je: equal / zero */

loc_0020E43E: ;
    eax = MEM32(ebp + 0x28);
    MEM32(eax) = ebx;
    g_seh_ebp = ebp; sub_0020E493(); return; /* tail jmp 0x0020E493 */

}

/**
 * sub_0020E445
 * Original: 0x0020E445 - 0x0020E455 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E445(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E445: ;
    PUSH32(esp, 0x0020E44Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E44A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E455(); return; } /* jg: greater (signed >) */

loc_0020E44E: ;
    PUSH32(esp, 0x0020E453u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E453: ;
    g_seh_ebp = ebp; sub_0020E464(); return; /* tail jmp 0x0020E464 */

}

/**
 * sub_0020E455
 * Original: 0x0020E455 - 0x0020E464 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E455: ;
    PUSH32(esp, 0x0020E45Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020E45A: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0020E464(); return; /* fallthrough 0x0020E464 */

}

/**
 * sub_0020E464
 * Original: 0x0020E464 - 0x0020E469 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E464: ;
    MEM32(ebp + -8) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0020E469(); return; /* fallthrough 0x0020E469 */

}

/**
 * sub_0020E469
 * Original: 0x0020E469 - 0x0020E46C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E469(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E469: ;
    esi = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_0020E46C(); return; /* fallthrough 0x0020E46C */

}

/**
 * sub_0020E46C
 * Original: 0x0020E46C - 0x0020E48E (34 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E46C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E46C: ;
    eax = MEM32(ebx + 0x21F48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E47F; /* je: equal / zero */

loc_0020E476: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E47Fu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020E47F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E48E(); return; } /* je: equal / zero */

loc_0020E487: ;
    PUSH32(esp, 0x0020E48Cu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020E48C: ;
    g_seh_ebp = ebp; sub_0020E493(); return; /* tail jmp 0x0020E493 */

}

/**
 * sub_0020E48E
 * Original: 0x0020E48E - 0x0020E493 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E48E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E48E: ;
    PUSH32(esp, 0x0020E493u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

    g_seh_ebp = ebp; sub_0020E493(); return; /* fallthrough 0x0020E493 */

}

/**
 * sub_0020E493
 * Original: 0x0020E493 - 0x0020E499 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E493(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E493: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0020E49E(); return; /* tail jmp 0x0020E49E */

}

/**
 * sub_0020E499
 * Original: 0x0020E499 - 0x0020E49E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E499: ;
    eax = 0x80150003u;

    g_seh_ebp = ebp; sub_0020E49E(); return; /* fallthrough 0x0020E49E */

}

/**
 * sub_0020E49E
 * Original: 0x0020E49E - 0x0020E4A4 (6 bytes, 4 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E49E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E49E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0020E4A4
 * Original: 0x0020E4A4 - 0x0020E4CD (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E4A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E4A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E4CD(); return; } /* jne: not equal / not zero */

loc_0020E4C3: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0020E666(); return; /* tail jmp 0x0020E666 */

}

/**
 * sub_0020E4CD
 * Original: 0x0020E4CD - 0x0020E504 (55 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E4CD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x24);
    ebx = ebx >> 0x1E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -4) = 0x1314;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E4EF; /* je: equal / zero */

loc_0020E4E8: ;
    MEM32(ebp + -4) = 0x1368;

loc_0020E4EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, 0x20A8);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E504(); return; } /* je: equal / zero */

loc_0020E4FD: ;
    PUSH32(esp, 0x0020E502u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_0020E502: ;
    g_seh_ebp = ebp; sub_0020E509(); return; /* tail jmp 0x0020E509 */

}

/**
 * sub_0020E504
 * Original: 0x0020E504 - 0x0020E509 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E504(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E504: ;
    PUSH32(esp, 0x0020E509u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

    g_seh_ebp = ebp; sub_0020E509(); return; /* fallthrough 0x0020E509 */

}

/**
 * sub_0020E509
 * Original: 0x0020E509 - 0x0020E571 (104 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E509(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E509: ;
    esi = eax;
    eax = esi + 0x17C;
    MEM32(ebp + -24) = eax;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = eax;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = edi;
    MEM32(esi + 0x128) = ebx;
    PUSH32(esp, 0x0020E52Fu); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_0020E52F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E64E(); return; } /* jl: less (signed <) */

loc_0020E539: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = ebp + -300;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x0020E551u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020E551: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020E560u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_0020E560: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E571(); return; } /* jne: not equal / not zero */

loc_0020E567: ;
    edi = 0x8015C008u;
    g_seh_ebp = ebp; sub_0020E64E(); return; /* tail jmp 0x0020E64E */

}

/**
 * sub_0020E571
 * Original: 0x0020E571 - 0x0020E644 (211 bytes, 77 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E571(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E571: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -44;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 4);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x0020E582u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_0020E582: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E644(); return; } /* je: equal / zero */

loc_0020E58D: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020E599u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_0020E599: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020E5A3u); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_0020E5A3: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + -300;
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = 0x198;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020E5DBu); RECOMP_ABI_CALL(0x0021C8B5u, sub_0021C8B5); /* call 0x0021C8B5 */

loc_0020E5DB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E64B(); return; } /* jl: less (signed <) */

loc_0020E5E1: ;
    ecx = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E5ED; /* je: equal / zero */

loc_0020E5EA: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E5ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x21CE3B);
    PUSH32(esp, 0x21CCC4);
    eax = esi + 0x150;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0xEA60);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0x1000);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0xAA7B28);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0020E637u); RECOMP_ABI_CALL(0x0021D253u, sub_0021D253); /* call 0x0021D253 */

loc_0020E637: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020E64B(); return; } /* jl: less (signed <) */

loc_0020E63D: ;
    eax = MEM32(ebp + 0x2C);
    MEM32(eax) = esi;
    g_seh_ebp = ebp; sub_0020E662(); return; /* tail jmp 0x0020E662 */

}

/**
 * sub_0020E644
 * Original: 0x0020E644 - 0x0020E64B (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E644(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E644: ;
    edi = 0x80004005u;
    g_seh_ebp = ebp; sub_0020E64E(); return; /* tail jmp 0x0020E64E */

}

/**
 * sub_0020E64B
 * Original: 0x0020E64B - 0x0020E64E (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E64B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E64B: ;
    ebx = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_0020E64E(); return; /* fallthrough 0x0020E64E */

}

/**
 * sub_0020E64E
 * Original: 0x0020E64E - 0x0020E65D (15 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E64E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E64E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E65D(); return; } /* je: equal / zero */

loc_0020E656: ;
    PUSH32(esp, 0x0020E65Bu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_0020E65B: ;
    g_seh_ebp = ebp; sub_0020E662(); return; /* tail jmp 0x0020E662 */

}

/**
 * sub_0020E65D
 * Original: 0x0020E65D - 0x0020E666 (9 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E65D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E65D: ;
    PUSH32(esp, 0x0020E662u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_0020E662: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020E666(); return; /* fallthrough 0x0020E666 */

}

/**
 * sub_0020E662
 * Original: 0x0020E662 - 0x0020E666 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E662(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E662: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020E666(); return; /* fallthrough 0x0020E666 */

}

/**
 * sub_0020E666
 * Original: 0x0020E666 - 0x0020E66B (5 bytes, 3 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E666(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E666: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0020E66B
 * Original: 0x0020E66B - 0x0020E7BF (340 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E66B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020E66B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020E67F; /* jne: not equal / not zero */

loc_0020E675: ;
    eax = 0x80150005u;
    goto loc_0020E7BB;

loc_0020E67F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FE070) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FE070 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0020E6AD; /* jne: not equal / not zero */

loc_0020E68E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E69Fu); RECOMP_ABI_CALL(0x001FE520u, sub_001FE520); /* call 0x001FE520 */

loc_0020E69F: ;
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -16);
    MEM32(ebp + 0xC) = eax;
    goto loc_0020E78E;

loc_0020E6AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20DD58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20DD58 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0020E722; /* jne: not equal / not zero */

loc_0020E6B4: ;
    edi = MEM32(ebp + 0xC);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi + 0x21DF8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E6CCu); RECOMP_ABI_CALL(0x001FF53Cu, sub_001FF53C); /* call 0x001FF53C */

loc_0020E6CC: ;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi + 0x1DC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x244);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = eax;
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E78E; /* je: equal / zero */

loc_0020E6F1: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0020E6FD; /* jne: not equal / not zero */

loc_0020E6F5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0020E78E;

loc_0020E6FD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E70Cu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0020E70C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E715u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_0020E715: ;
    PUSH32(esp, 0x64);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0020E78E; /* jbe: below or equal (unsigned <=) */

loc_0020E71E: ;
    MEM32(edi) = ecx;
    goto loc_0020E78E;

loc_0020E722: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF223) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF223 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0020E7AE; /* jne: not equal / not zero */

loc_0020E72D: ;
    edi = MEM32(ebp + 0xC);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E73Fu); RECOMP_ABI_CALL(0x001FF53Cu, sub_001FF53C); /* call 0x001FF53C */

loc_0020E73F: ;
    ebx = MEM32(ebp + -16);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi + 0xD8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xDC);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(esi + 0xD0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xD4);
    esi = MEM32(ebp + -12);
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E78E; /* je: equal / zero */

loc_0020E76E: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0020E6F5; /* je: equal / zero */

loc_0020E774: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E783u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0020E783: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E78Cu); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_0020E78C: ;
    MEM32(edi) = eax;

loc_0020E78E: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E7A0; /* je: equal / zero */

loc_0020E795: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_0020E7A0: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E7B5; /* je: equal / zero */

loc_0020E7A7: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = esi;
    goto loc_0020E7B5;

loc_0020E7AE: ;
    MEM32(ebp + 0xC) = 0x80070057u;

loc_0020E7B5: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0020E7BB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020E7BF
 * Original: 0x0020E7BF - 0x0020E88C (205 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E7BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E7BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = 0x198;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E7DEu); RECOMP_ABI_CALL(0x0021C7B3u, sub_0021C7B3); /* call 0x0021C7B3 */

loc_0020E7DE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 0x5BC;
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
    ebx = eax + 0x188;
    ecx = edx;
    MEM32(eax + 0x5B8) = ecx;
    ecx = MEM32(ebp + -8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(eax + 0x5A0) = 1;
    MEM32(eax + 0x5B0) = ebx;
    MEM32(eax + 0x5AC) = 0x418;
    MEM32(eax + 0x5A4) = edi;
    MEM32(eax + 0x5A8) = ebx;
    MEM32(eax + 0x5B4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E83Du); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020E83D: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0x203B9D;
    MEM32(ebx + 4) = 0x203C3A;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(ebx + 0xC) = edi;
    ecx = MEM32(ecx + 4);
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = edi;
    MEM32(ebx + 0x20) = edi;
    SET_LO16(ecx, MEM16(eax + 0x5D8));
    MEM16(ebx + 0x24) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x14 (16-bit) */
    MEM16(ebx + 0x26) = LO16(ecx);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E88C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020E885: ;
    eax = 0x8015C005u;
    g_seh_ebp = ebp; sub_0020E8E5(); return; /* tail jmp 0x0020E8E5 */

}

/**
 * sub_0020E88C
 * Original: 0x0020E88C - 0x0020E89B (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E88C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E88C: ;
    _fa = (uint32_t)(MEM16(ebx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x24), 0x100 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020E89B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020E894: ;
    eax = 0x8015C008u;
    g_seh_ebp = ebp; sub_0020E8E5(); return; /* tail jmp 0x0020E8E5 */

}

/**
 * sub_0020E89B
 * Original: 0x0020E89B - 0x0020E8E5 (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E89B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E89B: ;
    _fb = (uint32_t)(0x5DA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5DA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + 0x28;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020E8A5: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E8A5; /* jne: not equal / not zero */

loc_0020E8AF: ;
    eax = ZX16(MEM16(ebx + 0x26));
    ecx = eax + eax * 2;
    eax = ZX16(MEM16(ebx + 0x24));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = ecx;
    edi = eax + ebx + 0x28;
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
    eax = ZX16(MEM16(ebx + 0x24));
    ecx = MEM32(ebp + -4);
    eax = eax + ecx + 0x10;
    MEM32(ebx + 0x14) = eax;
    eax = 0x159203;

    g_seh_ebp = ebp; sub_0020E8E5(); return; /* fallthrough 0x0020E8E5 */

}

/**
 * sub_0020E8E5
 * Original: 0x0020E8E5 - 0x0020E8EC (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E8E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E8E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020E8EC
 * Original: 0x0020E8EC - 0x0020E8FB (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E8EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020E8EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0020DF9D(); return; /* tail jmp 0x0020DF9D */

}

/**
 * sub_0020E8FB
 * Original: 0x0020E8FB - 0x0020E928 (45 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E8FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020E8FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E924u); RECOMP_ABI_CALL(0x0020E1B3u, sub_0020E1B3); /* call 0x0020E1B3 */

loc_0020E924: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0020E928
 * Original: 0x0020E928 - 0x0020E958 (48 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E928(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020E928: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E954u); RECOMP_ABI_CALL(0x0020E4A4u, sub_0020E4A4); /* call 0x0020E4A4 */

loc_0020E954: ;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0020E958
 * Original: 0x0020E958 - 0x0020E963 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E958(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E958: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_0020E66B(); return; /* tail jmp 0x0020E66B */

}

/**
 * sub_0020E963
 * Original: 0x0020E963 - 0x0020EC43 (736 bytes, 191 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E963(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E963: ;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x1F4) = MEM32(ebx + 0x1F4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x1F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x1F0) = 2;
    MEM32(ebx + 0x23C) = 0x4643534D;
    MEM32(ebx + 0x240) = ecx;
    MEM32(ebx + 0x248) = ecx;
    eax = MEM32(ebx + 0x1F0);
    MEM32(ebx + 0x250) = ecx;
    MEM16(ebx + 0x254) = 0x103;
    eax = eax + eax * 8;
    eax = eax * 4 + 0x180;
    MEM32(ebx + 0x24C) = eax;
    SET_LO16(eax, MEM16(ebx + 0x1F0));
    MEM16(ebx + 0x256) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x1F4));
    MEM16(ebx + 0x258) = LO16(eax);
    MEM16(ebx + 0x25A) = 4;
    MEM16(ebx + 0x25C) = LO16(ecx);
    MEM16(ebx + 0x25E) = LO16(ecx);
    MEM16(ebx + 0x260) = 0x158;
    MEM8(ebx + 0x262) = 0x1C;
    MEM8(ebx + 0x263) = LO8(ecx);
    eax = MEM32(ebx + 0x1F4);
    edx = MEM32(ebx + 0x20C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x24C);
    eax = edx + eax + 0x20F;
    edx = MEM32(ebx + 0x1E8);
    edi = 0xFFFFFE00u;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x230) = eax;
    eax = edx + 0x7FFF;
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + eax * 8;
    MEM16(ebx + 0x2A0) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx + 0x1FF;
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebx + 0x230);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1FC) = eax;
    MEM32(ebx + 0x200) = eax;
    eax = MEM32(ebx + 0x230);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1EC) = edx;
    MEM32(ebx + 0x29C) = edi;
    edx = ebx + 0x1D8;
    edi = MEM32(edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x2C0;
    MEM32(eax) = esi;
    MEM32(ebx + 0x230) = esi;
    MEM32(ebx + 0x234) = ecx;
    MEM16(ebx + 0x2A2) = LO16(ecx);
    MEM32(ebx + 0x210) = ecx;
    MEM32(ebx + 0x21C) = ecx;
    MEM16(ebx + 0x2C4) = LO16(ecx);
    MEM16(ebx + 0x2C6) = LO16(ecx);
    MEM32(ebx + 0x244) = edi;
    eax = MEM32(eax);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x24C);
    MEM32(ebx + 0x228) = eax;
    eax = ebx + 0x204;
    edx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = ebx + 0x21BF4;
    esi = ebx + 0x219F4;
    edi = eax;
    MEM32(ebx + 0x22C) = ecx;
    MEM32(ebx + 0x208) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0020EAF9: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020EAF9; /* jne: not equal / not zero */

loc_0020EB03: ;
    edi = ebx + 0x21BF4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020EB0A: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020EB0A; /* jne: not equal / not zero */

loc_0020EB12: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    esi = 0xAA7B20;
    PUSH32(esp, 3);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0xC0000000u);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EB36u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0020EB36: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0020EB6D; /* jne: not equal / not zero */

loc_0020EB40: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EB45u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EB45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020EB55; /* jg: greater (signed >) */

loc_0020EB49: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EB4Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EB4E: ;
    esi = eax;
    goto loc_0020EC3A;

loc_0020EB55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EB5Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EB5A: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020EC3A;

loc_0020EB6D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40000000);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EB87u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0020EB87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x238) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020EBA9; /* je: equal / zero */

loc_0020EB92: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2811E8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EBA5u); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_0020EBA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020EBD0; /* jne: not equal / not zero */

loc_0020EBA9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EBAEu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EBAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020EBBB; /* jg: greater (signed >) */

loc_0020EBB2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EBB7u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EBB7: ;
    esi = eax;
    goto loc_0020EC26;

loc_0020EBBB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EBC0u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020EBC0: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020EC26;

loc_0020EBD0: ;
    eax = MEM32(ebx + 0x244);
    ecx = MEM32(ebp + -4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020EBEE; /* ja: above (unsigned >) */

loc_0020EBDE: ;
    if (CMP_B(_fa, _fb)) goto loc_0020EBE7; /* jb: below (unsigned <) */

loc_0020EBE0: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020EBEE; /* jae: above or equal (unsigned >=) */

loc_0020EBE7: ;
    esi = 0x80070070u;
    goto loc_0020EC26;

loc_0020EBEE: ;
    eax = ebx + 0x14A4;
    PUSH32(esp, eax);
    MEM32(ebx + 0x15DC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EC00u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020EC00: ;
    eax = ebx + 0x1518;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EC0Cu); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020EC0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x1E8));
    PUSH32(esp, 0x281800);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EC20u); RECOMP_ABI_CALL(0x0020CC95u, sub_0020CC95); /* call 0x0020CC95 */

loc_0020EC20: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020EC30; /* jge: greater or equal (signed >=) */

loc_0020EC26: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EC2Eu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020EC2E: ;
    goto loc_0020EC3A;

loc_0020EC30: ;
    MEM32(ebx + 0x1D4) = 5;

loc_0020EC3A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EC43
 * Original: 0x0020EC43 - 0x0020EE9F (604 bytes, 165 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020EC43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EC43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x200);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1F4) (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0020EDE4; /* jae: above or equal (unsigned >=) */

loc_0020EC6C: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x208)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x208) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020EDE4; /* jae: above or equal (unsigned >=) */

loc_0020EC7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = eax + esi + 0x119F4;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EC9Bu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0020EC9B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0020ECD2; /* jne: not equal / not zero */

loc_0020ECA5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECAAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020ECBA; /* jg: greater (signed >) */

loc_0020ECAE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECB3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECB3: ;
    ebx = eax;
    goto loc_0020EE96;

loc_0020ECBA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECBFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECBF: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x80070000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020EE96;

loc_0020ECD2: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECDCu); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_0020ECDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020ED0D; /* jne: not equal / not zero */

loc_0020ECE0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECE5u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020ECF5; /* jg: greater (signed >) */

loc_0020ECE9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECEEu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECEE: ;
    ebx = eax;
    goto loc_0020EE6C;

loc_0020ECF5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ECFAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020ECFA: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x80070000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020EE6C;

loc_0020ED0D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020ED1C; /* jbe: below or equal (unsigned <=) */

loc_0020ED12: ;
    ebx = 0x800703EEu;
    goto loc_0020EE6C;

loc_0020ED1C: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x218) = eax;
    eax = esi + 0x1430;
    PUSH32(esp, eax);
    MEM32(esi + 0x220) = edi;
    MEM32(esi + 0x224) = edi;
    MEM32(esi + 0x15A8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ED43u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_0020ED43: ;
    eax = esi + 0x219F4;
    ecx = eax + 1;

loc_0020ED4C: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020ED4C; /* jne: not equal / not zero */

loc_0020ED53: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x1FC));
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x218));
    ecx = MEM32(esi + 0x204);
    eax = eax + ecx + 0x119F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x210));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020ED82u); RECOMP_ABI_CALL(0x0020CC95u, sub_0020CC95); /* call 0x0020CC95 */

loc_0020ED82: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020EE6C; /* jl: less (signed <) */

loc_0020ED8C: ;
    ecx = MEM32(ebp + -4);
    ebx = esi + 0x158C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x15F4;
    PUSH32(esp, MEM32(esi + 0x224));
    PUSH32(esp, MEM32(esi + 0x220));
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x15A8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EDBCu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020EDBC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EDC7u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020EDC7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020EE6C; /* jl: less (signed <) */

loc_0020EDD1: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x1D4) = 7;
    goto loc_0020EE96;

loc_0020EDE4: ;
    eax = MEM32(esi + 0x1FC);
    eax = eax + eax * 8;
    eax = esi + eax * 4 + 0x2A4;
    PUSH32(esp, eax);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EE01u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_0020EE01: ;
    ecx = MEM32(esi + 0x1FC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx + ecx * 8;
    edi = esi + ecx * 4 + 0x2B8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esi + 0x21C);
    MEM32(esi + 0x1FC) = MEM32(esi + 0x1FC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EE8C; /* je: equal / zero */

loc_0020EE25: ;
    ecx = MEM32(ebp + -4);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x234));
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi + 0x230));
    PUSH32(esp, eax);
    eax = esi + 0x95F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x15DC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EE5Bu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_0020EE5B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EE66u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_0020EE66: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020EE7C; /* jge: greater or equal (signed >=) */

loc_0020EE6C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EE96; /* je: equal / zero */

loc_0020EE72: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EE7Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0020EE7A: ;
    goto loc_0020EE96;

loc_0020EE7C: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x1D4) = 0xA;
    goto loc_0020EE96;

loc_0020EE8C: ;
    MEM32(esi + 0x1D4) = 0xC;

loc_0020EE96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EF03
 * Original: 0x0020EF03 - 0x0020EF35 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF03: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x408) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x408 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020EF46(); return; } /* jl: less (signed <) */

loc_0020EF0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x409) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x409 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020EF41(); return; } /* jle: less or equal (signed <=) */

loc_0020EF15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40E (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020EF3D(); return; } /* jle: less or equal (signed <=) */

loc_0020EF1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020EF39(); return; } /* je: equal / zero */

loc_0020EF23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x410 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020EF35(); return; } /* je: equal / zero */

loc_0020EF2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x411) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x411 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020EF46(); return; } /* jne: not equal / not zero */

loc_0020EF31: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_0020EF48(); return; /* tail jmp 0x0020EF48 */

}

/**
 * sub_0020EF35
 * Original: 0x0020EF35 - 0x0020EF39 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF35: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0020EF48(); return; /* tail jmp 0x0020EF48 */

}

/**
 * sub_0020EF39
 * Original: 0x0020EF39 - 0x0020EF3D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF39: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_0020EF48(); return; /* tail jmp 0x0020EF48 */

}

/**
 * sub_0020EF3D
 * Original: 0x0020EF3D - 0x0020EF41 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0020EF49(); return; /* tail jmp 0x0020EF49 */

}

/**
 * sub_0020EF41
 * Original: 0x0020EF41 - 0x0020EF46 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0020EF49(); return; /* tail jmp 0x0020EF49 */

}

/**
 * sub_0020EF46
 * Original: 0x0020EF46 - 0x0020EF48 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EF46: ;
    PUSH32(esp, 5);

    g_seh_ebp = ebp; sub_0020EF48(); return; /* fallthrough 0x0020EF48 */

}

/**
 * sub_0020EF48
 * Original: 0x0020EF48 - 0x0020EF4C (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF48(void)
{

loc_0020EF48: ;
    POP32(esp, eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EF49
 * Original: 0x0020EF49 - 0x0020EF4C (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EF49(void)
{

loc_0020EF49: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EF4C
 * Original: 0x0020EF4C - 0x0020EFF0 (164 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020EF4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EF4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020EF5D; /* jne: not equal / not zero */

loc_0020EF53: ;
    eax = 0x80150005u;
    goto loc_0020EFEC;

loc_0020EF5D: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020EF7A; /* je: equal / zero */

loc_0020EF6C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020EF87; /* jne: not equal / not zero */

loc_0020EF6F: ;
    eax = MEM32(esi + 0x168);
    MEM32(ebp + 8) = eax;
    goto loc_0020EF81;

loc_0020EF7A: ;
    MEM32(ebp + 8) = 0x8015000Au;

loc_0020EF81: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020EFE8; /* jl: less (signed <) */

loc_0020EF87: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1A8;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020EFE6; /* jl: less (signed <) */

loc_0020EFA6: ;
    eax = ebx + 0x696;
    PUSH32(esp, eax);
    eax = esi + 0x1CC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EFB9u); RECOMP_ABI_CALL(0x000A9BEEu, sub_000A9BEE); /* call 0x000A9BEE */

loc_0020EFB9: ;
    eax = MEM32(esi + 0x1C4);
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0x1C8);
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2D4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = eax;
    edi = ebx + 0xC;
    ecx = 0x1A1;
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
    MEM32(ebx + 0x69E) = 1;

loc_0020EFE6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0020EFE8: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);

loc_0020EFEC: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020EFF0
 * Original: 0x0020EFF0 - 0x0020F158 (360 bytes, 129 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020EFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020F007; /* jne: not equal / not zero */

loc_0020EFFD: ;
    eax = 0x80150005u;
    goto loc_0020F154;

loc_0020F007: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020F150; /* jl: less (signed <) */

loc_0020F01C: ;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020F0BE; /* jl: less (signed <) */

loc_0020F031: ;
    ebx = MEM32(esi + 0x1C4);
    edi = MEM32(ebp + 0x10);
    ecx = ebx + ebx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    edi = esi + 0x4148;
    edx = esi + 0x1C8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_BE(_fa, _fb)) goto loc_0020F0BE; /* jbe: below or equal (unsigned <=) */

loc_0020F067: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x4154;
    MEM32(ebp + -4) = ebx;

loc_0020F076: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    ecx = MEM32(edx);
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + -8) = ecx;
    MEM32(eax) = edx;
    edi = ZX16(MEM16(edx + 0x12));
    ecx = ZX16(MEM16(edx + 0x14));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(edx + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(edx + 0xE));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(edx + 0xC));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + ecx + 0x1E;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ecx;
    if ((_fa != 0)) goto loc_0020F076; /* jne: not equal / not zero */

loc_0020F0BE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0020F14E; /* jbe: below or equal (unsigned <=) */

loc_0020F0CB: ;
    eax = MEM32(esi + 0x16C);
    eax = MEM32(eax + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F0E9u); RECOMP_ABI_CALL(0x001E66C2u, sub_001E66C2); /* call 0x001E66C2 */

loc_0020F0E9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F14E; /* jbe: below or equal (unsigned <=) */

loc_0020F0EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F14E; /* jbe: below or equal (unsigned <=) */

loc_0020F0F3: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x4150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020F0FC: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F145; /* jbe: below or equal (unsigned <=) */

loc_0020F103: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020F109: ;
    edx = ZX8(MEM8(eax + 0x1C));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F128; /* je: equal / zero */

loc_0020F112: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F13F; /* jne: not equal / not zero */

loc_0020F115: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F13F; /* jne: not equal / not zero */

loc_0020F11B: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F13F; /* jne: not equal / not zero */

loc_0020F123: ;
    MEM32(esi) = MEM32(esi) | 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020F13F;

loc_0020F128: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020F13F; /* je: equal / zero */

loc_0020F12E: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F13F; /* jne: not equal / not zero */

loc_0020F134: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F13F; /* jne: not equal / not zero */

loc_0020F13C: ;
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020F13F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F109; /* jne: not equal / not zero */

loc_0020F145: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F0FC; /* jne: not equal / not zero */

loc_0020F14E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0020F150: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);

loc_0020F154: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F158
 * Original: 0x0020F158 - 0x0020F2A0 (328 bytes, 119 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F158(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F158: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0020F16F; /* jne: not equal / not zero */

loc_0020F165: ;
    eax = 0x80150005u;
    goto loc_0020F29C;

loc_0020F16F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020F298; /* jl: less (signed <) */

loc_0020F184: ;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020F213; /* jl: less (signed <) */

loc_0020F195: ;
    ebx = ZX16(MEM16(esi + 0x1CC));
    edi = MEM32(ebp + 0x10);
    ecx = ebx + ebx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = 0x190;
    edi = esi + 0x3D68;
    edx = esi + 0x1CE;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_BE(_fa, _fb)) goto loc_0020F213; /* jbe: below or equal (unsigned <=) */

loc_0020F1CE: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x3D74;
    MEM32(ebp + -4) = ebx;

loc_0020F1DD: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    ecx = MEM32(edx);
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + -8) = ecx;
    MEM32(eax) = edx;
    edi = ZX8(MEM8(edx + 8));
    ecx = ZX16(MEM16(edx + 0x11));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + ecx + 0x1B;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ecx;
    if ((_fa != 0)) goto loc_0020F1DD; /* jne: not equal / not zero */

loc_0020F213: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0020F296; /* jbe: below or equal (unsigned <=) */

loc_0020F21C: ;
    eax = MEM32(esi + 0x16C);
    eax = MEM32(eax + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F23Au); RECOMP_ABI_CALL(0x001E66C2u, sub_001E66C2); /* call 0x001E66C2 */

loc_0020F23A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F296; /* jbe: below or equal (unsigned <=) */

loc_0020F240: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F296; /* jbe: below or equal (unsigned <=) */

loc_0020F244: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x3D70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3D70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020F24D: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F28D; /* jbe: below or equal (unsigned <=) */

loc_0020F254: ;
    eax = MEM32(ebp + 0xC);

loc_0020F257: ;
    edx = ZX8(MEM8(eax + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F276; /* je: equal / zero */

loc_0020F260: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F287; /* jne: not equal / not zero */

loc_0020F263: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F287; /* jne: not equal / not zero */

loc_0020F269: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F287; /* jne: not equal / not zero */

loc_0020F271: ;
    MEM32(esi) = MEM32(esi) | 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020F287;

loc_0020F276: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F287; /* jne: not equal / not zero */

loc_0020F27C: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F287; /* jne: not equal / not zero */

loc_0020F284: ;
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020F287: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F257; /* jne: not equal / not zero */

loc_0020F28D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F24D; /* jne: not equal / not zero */

loc_0020F296: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0020F298: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);

loc_0020F29C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F2A0
 * Original: 0x0020F2A0 - 0x0020F2C7 (39 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F2A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020F2ABu); RECOMP_ABI_CALL(0x00210FDDu, sub_00210FDD); /* call 0x00210FDD */

loc_0020F2AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F2C3; /* je: equal / zero */

loc_0020F2AF: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020F2C3; /* jl: less (signed <) */

loc_0020F2B1: ;
    eax = MEM32(esi + 0x174);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F2C3; /* jne: not equal / not zero */

loc_0020F2BE: ;
    eax = 0x1500F0;

loc_0020F2C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F2C7
 * Original: 0x0020F2C7 - 0x0020F2EA (35 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F2C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F2C7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x16C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F2E6; /* je: equal / zero */

loc_0020F2D8: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F2E3u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020F2E3: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020F2E6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F2EA
 * Original: 0x0020F2EA - 0x0020F328 (62 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F2EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F2EA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F303; /* je: equal / zero */

loc_0020F2F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F2FFu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020F2FF: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020F303: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F316; /* je: equal / zero */

loc_0020F30A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020F312u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_0020F312: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020F316: ;
    PUSH32(esp, 0x808D);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020F323u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020F323: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F328
 * Original: 0x0020F328 - 0x0020F3CA (162 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F328(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F328: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F368; /* je: equal / zero */

loc_0020F33E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020F3BB; /* jne: not equal / not zero */

loc_0020F341: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F34Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020F34B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F3BB; /* je: equal / zero */

loc_0020F34F: ;
    if (CMP_L(_fas, _fbs)) goto loc_0020F3BB; /* jl: less (signed <) */

loc_0020F351: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 0x174);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F3BB; /* jne: not equal / not zero */

loc_0020F361: ;
    eax = 0x1500F0;
    goto loc_0020F3BB;

loc_0020F368: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F372u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020F372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020F37F; /* jge: greater or equal (signed >=) */

loc_0020F376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80157102u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80157102u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F3BB; /* jne: not equal / not zero */

loc_0020F37D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_0020F37F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F3BB; /* je: equal / zero */

loc_0020F381: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F391u); RECOMP_ABI_CALL(0x001E95D3u, sub_001E95D3); /* call 0x001E95D3 */

loc_0020F391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F3A5; /* jne: not equal / not zero */

loc_0020F396: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F398: ;
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -16), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F3C1; /* jl: less (signed <) */

loc_0020F39F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020F398; /* jb: below (unsigned <) */

loc_0020F3A5: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F3AFu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_0020F3AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = 1;

loc_0020F3BB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_0020F3C1: ;
    eax = MEM32(eax * 4 + 0x2F92D0);
    goto loc_0020F3BB;

}

/**
 * sub_0020F3CA
 * Original: 0x0020F3CA - 0x0020F44F (133 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F3CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F3CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020F442; /* je: equal / zero */

loc_0020F3D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020F3DDu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F3DD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    POP32(esp, ecx);
    if (CMP_A(_fa, _fb)) goto loc_0020F442; /* ja: above (unsigned >) */

loc_0020F3E4: ;
    eax = esi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F442; /* je: equal / zero */

loc_0020F3EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F3F1u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F3F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_A(_fa, _fb)) goto loc_0020F442; /* ja: above (unsigned >) */

loc_0020F3FC: ;
    eax = esi + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F442; /* je: equal / zero */

loc_0020F406: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F40Cu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F40C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_A(_fa, _fb)) goto loc_0020F442; /* ja: above (unsigned >) */

loc_0020F412: ;
    eax = esi + 0x420;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F442; /* je: equal / zero */

loc_0020F41C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F422u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F422: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_A(_fa, _fb)) goto loc_0020F442; /* ja: above (unsigned >) */

loc_0020F428: ;
    SET_LO16(eax, MEM16(esi + 0x620));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020F442; /* ja: above (unsigned >) */

loc_0020F435: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020F447; /* jbe: below or equal (unsigned <=) */

loc_0020F43A: ;
    _fb = (uint32_t)(0x622) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x622;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0020F447; /* jne: not equal / not zero */

loc_0020F442: ;
    ebx = 0x80070057u;

loc_0020F447: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F44F
 * Original: 0x0020F44F - 0x0020F541 (242 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F44F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F44F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    ecx = 0x1A8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(ebx);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edx + 4) = eax;
    ecx = ZX16(MEM16(ebx + 0xC));
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x1E;
    MEM32(ebp + 8) = esi;
    edi = edx + 0xC;
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
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = ZX16(MEM16(ebx + 0xE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x2C;
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
    eax = ZX16(MEM16(ebx + 0xE));
    ecx = ZX16(MEM16(ebx + 0x10));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x22C;
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
    eax = ZX16(MEM16(ebx + 0x10));
    ecx = ZX16(MEM16(ebx + 0x12));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x42C;
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
    eax = ZX16(MEM16(ebx + 0x12));
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebx + 0x14));
    MEM16(edx + 0x62C) = LO16(eax);
    ecx = ZX16(MEM16(ebx + 0x14));
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x62E;
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
    _fb = (uint32_t)(0x696) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x696;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = ebx + 0x16;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0020F52Cu); RECOMP_ABI_CALL(0x000A9BEEu, sub_000A9BEE); /* call 0x000A9BEE */

loc_0020F52C: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebp + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0x69E) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F541
 * Original: 0x0020F541 - 0x0020F5C4 (131 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F541(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F541: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = ZX8(MEM8(eax + 8));
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + 0x1B;
    MEM32(ebp + 0xC) = esi;
    edi = edx + 0xC;
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
    ecx = ZX8(MEM8(eax + 8));
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xD);
    MEM32(edx + 0x1C) = ecx;
    SET_LO16(ecx, MEM16(eax + 0x11));
    MEM16(edx + 0x20) = LO16(ecx);
    ecx = ZX16(MEM16(eax + 0x11));
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x22;
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
    ecx = MEM32(eax + 0x13);
    POP32(esp, edi);
    MEM32(edx + 0x8A) = ecx;
    eax = MEM32(eax + 0x17);
    POP32(esp, esi);
    MEM32(edx + 0x8E) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F5C4
 * Original: 0x0020F5C4 - 0x0020F5DC (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F5C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F5C4: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 8 + 0x13E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F5D9; /* je: equal / zero */

loc_0020F5D6: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020F5D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F5DC
 * Original: 0x0020F5DC - 0x0020F620 (68 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F5DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F5DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 8 + 0x13E4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F60D; /* je: equal / zero */

loc_0020F5F2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F60D; /* je: equal / zero */

loc_0020F5F6: ;
    edx = eax + 8;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = edx;
    eax = ZX16(MEM16(eax + 4));
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    goto loc_0020F61C;

loc_0020F60D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = 0x80152102u;

loc_0020F61C: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F620
 * Original: 0x0020F620 - 0x0020F65C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx + 0x1854;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020F645; /* jne: not equal / not zero */

loc_0020F640: ;
    esi = MEM32(edx + 4);
    MEM32(ecx) = esi;

loc_0020F645: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 6);
    POP32(esp, edi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F65C(); return; } /* jae: above or equal (unsigned >=) */

loc_0020F64F: ;
    esi = MEM32(ebp + -20);
    eax = 0x80150001u;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0020F674(); return; /* tail jmp 0x0020F674 */

}

/**
 * sub_0020F65C
 * Original: 0x0020F65C - 0x0020F674 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F65C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F65C: ;
    MEM16(ebx + 4) = MEM16(ebx + 4) & 0;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = ebx;
    MEM16(ebx) = 1;
    MEM16(ebx + 2) = 2;
    MEM32(ebp + -20) = esi;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0020F674(); return; /* fallthrough 0x0020F674 */

}

/**
 * sub_0020F674
 * Original: 0x0020F674 - 0x0020F687 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F674(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F674: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x13E4;
    MEM32(ebp + -8) = ecx;
    g_seh_ebp = ebp; sub_0020F68A(); return; /* tail jmp 0x0020F68A */

}

/**
 * sub_0020F687
 * Original: 0x0020F687 - 0x0020F68A (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F687: ;
    edx = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_0020F68A(); return; /* fallthrough 0x0020F68A */

}

/**
 * sub_0020F68A
 * Original: 0x0020F68A - 0x0020F6D4 (74 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F68A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F68A: ;
    ecx = MEM32(edx + 0xD0);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edx = edx | MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0020F6EB(); return; } /* je: equal / zero */

loc_0020F69C: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F6EB(); return; } /* jne: not equal / not zero */

loc_0020F6A2: ;
    ecx = MEM32(ebp + -16);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F6EB(); return; } /* je: equal / zero */

loc_0020F6AF: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F70B(); return; } /* jne: not equal / not zero */

loc_0020F6B8: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0x80A6);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x0020F6C7u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020F6C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F7BC(); return; } /* je: equal / zero */

loc_0020F6CF: ;
    ecx = MEM32(ebp + -8);
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_0020F6D4(); return; /* fallthrough 0x0020F6D4 */

}

/**
 * sub_0020F6D4
 * Original: 0x0020F6D4 - 0x0020F70B (55 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F6D4: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x54)) >> 32) & 1);
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFDEFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80152102u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80152102u)) >> 32) & 1);
    eax = eax + 0x80152102u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(0x70)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(0x48)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1C0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F687(); return; } /* jb: below (unsigned <) */

loc_0020F6FF: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F6E8
 * Original: 0x0020F6E8 - 0x0020F70B (35 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F6E8: ;
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1C0 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F687(); return; } /* jb: below (unsigned <) */

loc_0020F6FF: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F6EB
 * Original: 0x0020F6EB - 0x0020F70B (32 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F6EB: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1C0 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F687(); return; } /* jb: below (unsigned <) */

loc_0020F6FF: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F704
 * Original: 0x0020F704 - 0x0020F70B (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F704(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F704: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F70B
 * Original: 0x0020F70B - 0x0020F73D (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F70B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F70B: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F6D4(); return; } /* je: equal / zero */

loc_0020F710: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F6EB(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020F71B: ;
    eax = ecx;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM16(edx + 0x48)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x48));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(LO16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020F73D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0020F736: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_0020F6E8(); return; /* tail jmp 0x0020F6E8 */

}

/**
 * sub_0020F73D
 * Original: 0x0020F73D - 0x0020F7BC (127 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F73D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F73D: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 2) = MEM16(esi + 2) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 4) = MEM16(esi + 4) + 1;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0xD0);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + ecx);
    MEM32(ebx) = esi;
    eax = MEM32(eax + ecx + 4);
    MEM32(ebx + 4) = eax;
    SET_LO16(eax, MEM16(edx + 4));
    MEM16(ebx + 8) = LO16(eax);
    SET_LO16(eax, MEM16(edx + 0x48));
    MEM16(ebx + 0xA) = LO16(eax);
    ecx = ZX16(MEM16(edx + 4));
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    esi = edx + 8;
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
    eax = ZX16(MEM16(edx + 4));
    ecx = ZX16(MEM16(edx + 0x48));
    ebx = ebx + eax * 8;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx;
    esi = edx + 0x4A;
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
    eax = ZX16(MEM16(edx + 0x48));
    edi = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    g_seh_ebp = ebp; sub_0020F6EB(); return; /* tail jmp 0x0020F6EB */

}

/**
 * sub_0020F7BC
 * Original: 0x0020F7BC - 0x0020F7C6 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F7BC: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0020F704(); return; /* tail jmp 0x0020F704 */

}

/**
 * sub_0020F7C6
 * Original: 0x0020F7C6 - 0x0020F7DC (22 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F7C6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x24), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F7D9; /* jne: not equal / not zero */

loc_0020F7D0: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0020F7D9u); RECOMP_ABI_CALL(0x0020F5C4u, sub_0020F5C4); /* call 0x0020F5C4 */

loc_0020F7D9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F7DC
 * Original: 0x0020F7DC - 0x0020F817 (59 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F7DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x160), 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F805; /* je: equal / zero */

loc_0020F7ED: ;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020F7F7u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_0020F7F7: ;
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x160) = MEM32(esi + 0x160) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

loc_0020F805: ;
    PUSH32(esp, 0xA5);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020F812u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020F812: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F838
 * Original: 0x0020F838 - 0x0020FC5F (1063 bytes, 322 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F838(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F838: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0020F852; /* jne: not equal / not zero */

loc_0020F848: ;
    eax = 0x80150005u;
    goto loc_0020F9E7;

loc_0020F852: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = 0xAA7B6C;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F864u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_0020F864: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F9E3; /* jl: less (signed <) */

loc_0020F86E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F875u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_0020F875: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 1 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0020F890; /* je: equal / zero */

loc_0020F886: ;
    edi = 0x80154005u;
    goto loc_0020F9E3;

loc_0020F890: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F8A1; /* jne: not equal / not zero */

loc_0020F897: ;
    edi = 0x80070057u;
    goto loc_0020F9E3;

loc_0020F8A1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F8ABu); RECOMP_ABI_CALL(0x0020F3CAu, sub_0020F3CA); /* call 0x0020F3CA */

loc_0020F8AB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F9E3; /* jl: less (signed <) */

loc_0020F8B5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x808D);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F8C4u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020F8C4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F9CD; /* je: equal / zero */

loc_0020F8D1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F8DAu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020F8DA: ;
    ecx = MEM32(ebp + -4);
    ebx = 0x8086;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x960);
    MEM32(edi) = 0x20F328;
    MEM32(edi + 4) = 0x20F2EA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F8FAu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020F8FA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F9CD; /* je: equal / zero */

loc_0020F907: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F918u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_0020F918: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F92Eu); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F92E: ;
    ebx = eax + eax + 2;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F941u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F941: ;
    eax = eax + eax + 2;
    MEM32(ebp + -44) = eax;
    eax = esi + 0x220;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F957u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F957: ;
    eax = eax + eax + 2;
    MEM32(ebp + -48) = eax;
    eax = esi + 0x420;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F96Du); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020F96D: ;
    ecx = ZX16(MEM16(ebp + -48));
    edx = ZX16(MEM16(esi + 0x620));
    MEM32(ebp + -24) = ecx;
    ecx = ZX16(MEM16(ebp + -44));
    MEM32(ebp + -20) = ecx;
    ecx = ZX16(LO16(ebx));
    ebx = MEM32(ebp + 0x10);
    ebx = ZX16(MEM16(ebx + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax + 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -60) = eax;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -52) = eax;
    eax = ebx + eax + 0x3C;
    PUSH32(esp, 0x84);
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM32(edi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F9C1u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020F9C1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x16C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0020F9EC; /* jne: not equal / not zero */

loc_0020F9CD: ;
    edi = 0x8007000Eu;

loc_0020F9D2: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F9E3; /* je: equal / zero */

loc_0020F9D8: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F9E3u); RECOMP_ABI_CALL(0x0020F2EAu, sub_0020F2EA); /* call 0x0020F2EA */

loc_0020F9E3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0020F9E7: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_0020F9EC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F9FAu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_0020F9FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FA06; /* je: equal / zero */

loc_0020F9FF: ;
    edi = 0x80004005u;
    goto loc_0020F9D2;

loc_0020FA06: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx) = 0x40A;
    MEM32(ebx + 4) = 0x1C;
    ecx = MEM32(eax);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ebx + 0x24) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020FA3A; /* jne: not equal / not zero */

loc_0020FA35: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_0020FA3A: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(ebx));
    MEM32(ebx + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FA46u); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_0020FA46: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FA4Du); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_0020FA4D: ;
    SET_LO16(eax, MEM16(ebp + -56));
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebx + 0x30) = LO16(eax);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x3C;
    MEM32(ebp + -8) = edi;
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
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2D4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0020FA80u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_0020FA80: ;
    SET_LO16(eax, MEM16(ebp + -44));
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -28);
    PUSH32(esp, MEM32(ebp + -28));
    MEM16(ebx + 0x32) = LO16(eax);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = edi;
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
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0020FAB9u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_0020FAB9: ;
    SET_LO16(eax, MEM16(ebp + -48));
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -32);
    PUSH32(esp, MEM32(ebp + -32));
    MEM16(ebx + 0x34) = LO16(eax);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = edi;
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
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x4F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0020FAF2u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_0020FAF2: ;
    SET_LO16(eax, MEM16(ebp + -60));
    ecx = MEM32(ebp + -52);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -36);
    PUSH32(esp, MEM32(ebp + -36));
    MEM16(ebx + 0x36) = LO16(eax);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = edi;
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
    eax = esi + 0x6F4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FB2Cu); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_0020FB2C: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -52);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax + 0x620));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x8F4) = LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x620)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x620), 0 (16-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0020FBB6; /* jbe: below or equal (unsigned <=) */

loc_0020FB53: ;
    SET_LO16(ecx, MEM16(eax + 0x620));
    MEM16(ebx + 0x38) = LO16(ecx);
    ecx = ZX16(MEM16(eax + 0x620));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(eax + 0x620));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + 0x622;
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
    ecx = ZX16(MEM16(eax + 0x620));
    edi = MEM32(ebp + -12);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x8F6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x8F6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 0x622;
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
    ecx = ZX16(MEM16(eax + 0x620));
    edi = MEM32(ebp + -8);
    esi = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020FBB6: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    MEM32(ebx + 0x2C) = ecx;
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020FBED; /* jbe: below or equal (unsigned <=) */

loc_0020FBC6: ;
    SET_LO16(ecx, MEM16(edx + 4));
    MEM16(ebx + 0x3A) = LO16(ecx);
    ecx = ZX16(MEM16(edx + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(edx + 4));
    esi = edx + 6;
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
    esi = MEM32(ebp + -12);

loc_0020FBED: ;
    MEM32(esi + 0x178) = 0x134;
    ecx = esi + 0x1A0;
    MEM32(esi + 0x174) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = esi;
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -64) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FC2Eu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0020FC2E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FC3Du); RECOMP_ABI_CALL(0x001E9A3Bu, sub_001E9A3B); /* call 0x001E9A3B */

loc_0020FC3D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F9D2; /* jl: less (signed <) */

loc_0020FC47: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FC52u); RECOMP_ABI_CALL(0x0020F5C4u, sub_0020F5C4); /* call 0x0020F5C4 */

loc_0020FC52: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    goto loc_0020F9E3;

}

/**
 * sub_0020FC5F
 * Original: 0x0020FC5F - 0x0020FC79 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020FC5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FC5F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FC79(); return; } /* jne: not equal / not zero */

loc_0020FC6F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0020FE16(); return; /* tail jmp 0x0020FE16 */

}

/**
 * sub_0020FC79
 * Original: 0x0020FC79 - 0x0020FCB7 (62 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FC79: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = 0xAA7B80;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020FC8Bu); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_0020FC8B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020FE12(); return; } /* jl: less (signed <) */

loc_0020FC95: ;
    ecx = esi;
    PUSH32(esp, 0x0020FC9Cu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_0020FC9C: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 1 (8-bit) */
    MEM32(ebp + -56) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FCB7(); return; } /* je: equal / zero */

loc_0020FCAD: ;
    edi = 0x80154005u;
    g_seh_ebp = ebp; sub_0020FE12(); return; /* tail jmp 0x0020FE12 */

}

/**
 * sub_0020FCB7
 * Original: 0x0020FCB7 - 0x0020FE12 (347 bytes, 101 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FCB7: ;
    esi = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020FCC4u); RECOMP_ABI_CALL(0x0020F3CAu, sub_0020F3CA); /* call 0x0020F3CA */

loc_0020FCC4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020FE12(); return; } /* jl: less (signed <) */

loc_0020FCCE: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x808D);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0020FCDDu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020FCDD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FDFC; /* je: equal / zero */

loc_0020FCEA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020FCF3u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_0020FCF3: ;
    ecx = MEM32(ebp + -4);
    ebx = 0x8087;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C8);
    MEM32(edi) = 0x20F328;
    MEM32(edi + 4) = 0x20F2EA;
    PUSH32(esp, 0x0020FD13u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020FD13: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FDFC; /* je: equal / zero */

loc_0020FD20: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020FD31u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_0020FD31: ;
    PUSH32(esp, esi);
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = ebx;
    PUSH32(esp, 0x0020FD4Du); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020FD4D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax + eax + 2;
    eax = esi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -60) = ebx;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FD71; /* je: equal / zero */

loc_0020FD63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FD69u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020FD69: ;
    eax = eax + eax + 2;
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;

loc_0020FD71: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FD90; /* je: equal / zero */

loc_0020FD82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FD88u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020FD88: ;
    eax = eax + eax + 2;
    POP32(esp, ecx);
    MEM32(ebp + -24) = eax;

loc_0020FD90: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x420;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -52) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FDAF; /* je: equal / zero */

loc_0020FDA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FDA7u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_0020FDA7: ;
    eax = eax + eax + 2;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;

loc_0020FDAF: ;
    edx = ZX16(MEM16(ebp + -16));
    ecx = ZX16(MEM16(ebp + -24));
    eax = ZX16(MEM16(ebp + -28));
    MEM32(ebp + -20) = edx;
    edx = ZX16(LO16(ebx));
    ebx = ZX16(MEM16(esi + 0x620));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + eax + 0x3E;
    PUSH32(esp, 0x84);
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM32(ebp + -32) = edx;
    MEM32(edi + 0x170) = eax;
    PUSH32(esp, 0x0020FDF0u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020FDF0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x16C) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FE1B(); return; } /* jne: not equal / not zero */

loc_0020FDFC: ;
    edi = 0x8007000Eu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FE12(); return; } /* je: equal / zero */

loc_0020FE07: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x0020FE12u); RECOMP_ABI_CALL(0x0020F2EAu, sub_0020F2EA); /* call 0x0020F2EA */

    g_seh_ebp = ebp; sub_0020FE12(); return; /* fallthrough 0x0020FE12 */

}

/**
 * sub_0020FE01
 * Original: 0x0020FE01 - 0x0020FE12 (17 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FE01: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FE12(); return; } /* je: equal / zero */

loc_0020FE07: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x0020FE12u); RECOMP_ABI_CALL(0x0020F2EAu, sub_0020F2EA); /* call 0x0020F2EA */

    g_seh_ebp = ebp; sub_0020FE12(); return; /* fallthrough 0x0020FE12 */

}

/**
 * sub_0020FE12
 * Original: 0x0020FE12 - 0x0020FE16 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FE12: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0020FE16(); return; /* fallthrough 0x0020FE16 */

}

/**
 * sub_0020FE16
 * Original: 0x0020FE16 - 0x0020FE1B (5 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FE16: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0020FE1B
 * Original: 0x0020FE1B - 0x0020FE35 (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FE1B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FE29u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_0020FE29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0020FE35(); return; } /* je: equal / zero */

loc_0020FE2E: ;
    edi = 0x80004005u;
    g_seh_ebp = ebp; sub_0020FE01(); return; /* tail jmp 0x0020FE01 */

}

/**
 * sub_0020FE35
 * Original: 0x0020FE35 - 0x0020FFE5 (432 bytes, 141 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FE35: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + -56);
    MEM32(ebx) = 0x40D;
    MEM32(ebx + 4) = 0x1E;
    ecx = MEM32(eax);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x30) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020FE75; /* jne: not equal / not zero */

loc_0020FE70: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_0020FE75: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(ebx));
    MEM32(ebx + 0x28) = eax;
    PUSH32(esp, 0x0020FE81u); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_0020FE81: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020FE88u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_0020FE88: ;
    ecx = MEM32(ebp + -60);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    eax = ebx + 0x3E;
    if (CMP_BE(_fa, _fb)) goto loc_0020FEB5; /* jbe: below or equal (unsigned <=) */

loc_0020FE93: ;
    MEM16(ebx + 0x34) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020FEB5: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020FEE2; /* jbe: below or equal (unsigned <=) */

loc_0020FEBD: ;
    esi = MEM32(ebp + -44);
    MEM16(ebx + 0x36) = LO16(ecx);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020FEE2: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020FF0F; /* jbe: below or equal (unsigned <=) */

loc_0020FEEA: ;
    esi = MEM32(ebp + -48);
    MEM16(ebx + 0x38) = LO16(ecx);
    ecx = MEM32(ebp + -36);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020FF0F: ;
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020FF3C; /* jbe: below or equal (unsigned <=) */

loc_0020FF17: ;
    esi = MEM32(ebp + -52);
    MEM16(ebx + 0x3A) = LO16(ecx);
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020FF3C: ;
    _fa = (uint32_t)(MEM16(esi + 0x620)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x620), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020FF7E; /* jbe: below or equal (unsigned <=) */

loc_0020FF46: ;
    SET_LO16(ecx, MEM16(esi + 0x620));
    MEM16(ebx + 0x3C) = LO16(ecx);
    ecx = ZX16(MEM16(esi + 0x620));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(esi + 0x620));
    edi = eax;
    eax = ecx;
    _fb = (uint32_t)(0x622) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x622;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + -8);

loc_0020FF7E: ;
    ecx = MEM32(ebp + -44);
    MEM32(edi + 0x178) = 0x124;
    eax = edi + 0x1A0;
    MEM32(edi + 0x174) = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x14) = edi;
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(ebp + -48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -68) = ecx;
    ecx = MEM32(ebp + -52);
    MEM32(ebp + -76) = esi;
    MEM32(ebp + -64) = ecx;
    PUSH32(esp, 0x0020FFBFu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0020FFBF: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020FFCEu); RECOMP_ABI_CALL(0x001E9A3Bu, sub_001E9A3B); /* call 0x001E9A3B */

loc_0020FFCE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020FE01(); return; } /* jl: less (signed <) */

loc_0020FFD8: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_0020FE12(); return; /* tail jmp 0x0020FE12 */

}

/**
 * sub_0020FFE5
 * Original: 0x0020FFE5 - 0x00210000 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020FFE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FFE5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020FFFB; /* jne: not equal / not zero */

loc_0020FFF1: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00210099(); return; /* tail jmp 0x00210099 */

loc_0020FFFB: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;

    g_seh_ebp = ebp; sub_00210000(); return; /* fallthrough 0x00210000 */

}

/**
 * sub_00210000
 * Original: 0x00210000 - 0x0021009E (158 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210000: ;
    PUSH32(esp, 0xAA7B9C);
    PUSH32(esp, 0x0021000Au); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_0021000A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00210096; /* jl: less (signed <) */

loc_00210015: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021001Eu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_0021001E: ;
    esi = 0x8088;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C8);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x00210033u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00210033: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210081; /* je: equal / zero */

loc_00210039: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ebx;
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210049u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00210049: ;
    PUSH32(esp, 0x34);
    POP32(esp, eax);
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = esi;
    MEM32(edi + 0x170) = eax;
    PUSH32(esp, 0x00210075u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00210075: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x16C) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0021009E(); return; } /* jne: not equal / not zero */

loc_00210081: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210094; /* je: equal / zero */

loc_0021008C: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00210094u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_00210094: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00210096: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210088
 * Original: 0x00210088 - 0x0021009E (22 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210088: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210094; /* je: equal / zero */

loc_0021008C: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00210094u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_00210094: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210094
 * Original: 0x00210094 - 0x0021009E (10 bytes, 6 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210094(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210094: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210099
 * Original: 0x00210099 - 0x0021009E (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210099(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210099: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0021009E
 * Original: 0x0021009E - 0x002100B9 (27 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021009E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021009E: ;
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002100ABu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_002100AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002100B9(); return; } /* je: equal / zero */

loc_002100B0: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_00210088(); return; /* tail jmp 0x00210088 */

}

/**
 * sub_002100B9
 * Original: 0x002100B9 - 0x0021013C (131 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002100B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002100B9: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi) = 0x40B;
    MEM32(esi + 4) = 0x14;
    edx = MEM32(ecx + eax);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ecx + eax + 4);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x30) = eax;
    eax = ebx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002100FD; /* jne: not equal / not zero */

loc_002100F8: ;
    ecx = MEM32(ebx + 4);
    MEM32(eax) = ecx;

loc_002100FD: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00210109u); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_00210109: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00210112u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_00210112: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = edi + 0x1A0;
    ecx = ebx;
    MEM32(edi + 0x174) = eax;
    MEM32(edi + 0x178) = 0x124;
    PUSH32(esp, 0x00210132u); RECOMP_ABI_CALL(0x0020F5C4u, sub_0020F5C4); /* call 0x0020F5C4 */

loc_00210132: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = edi;
    g_seh_ebp = ebp; sub_00210094(); return; /* tail jmp 0x00210094 */

}

/**
 * sub_0021013C
 * Original: 0x0021013C - 0x002102D6 (410 bytes, 127 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021013C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021013C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00210155; /* jne: not equal / not zero */

loc_0021014B: ;
    eax = 0x80150005u;
    goto loc_002101FE;

loc_00210155: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA7BB0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210166u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_00210166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002101FA; /* jl: less (signed <) */

loc_00210171: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210179u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00210179: ;
    edi = 0x8089;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C8);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021018Eu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0021018E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002101E5; /* je: equal / zero */

loc_00210194: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002101A5u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_002101A5: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -4);
    MEM32(ebx) = 0x20F2A0;
    MEM32(ebx + 0x198) = 0x20F2C7;
    MEM32(ebx + 0x180) = edi;
    eax = ZX16(MEM16(eax + 4));
    _fb = (uint32_t)(0x42) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x42;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    MEM32(ebx + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002101D9u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_002101D9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 0x16C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00210203; /* jne: not equal / not zero */

loc_002101E5: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_002101EC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002101F9; /* je: equal / zero */

loc_002101F0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002101F9u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_002101F9: ;
    POP32(esp, edi);

loc_002101FA: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);

loc_002101FE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

loc_00210203: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210211u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_00210211: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021021F; /* je: equal / zero */

loc_00210216: ;
    MEM32(ebp + 8) = 0x80004005u;
    goto loc_002101EC;

loc_0021021F: ;
    eax = MEM32(ebp + -8);
    MEM32(edi + 8) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    MEM32(edi) = 0x40E;
    MEM32(edi + 4) = 0x22;
    ecx = MEM32(esi + eax);
    MEM32(edi + 0x20) = ecx;
    eax = MEM32(esi + eax + 4);
    esi = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -4);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x34) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(edi + 0x38) = eax;
    eax = MEM32(esi);
    MEM32(edi + 0x3C) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210275; /* jne: not equal / not zero */

loc_00210270: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_00210275: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(edi));
    MEM32(edi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210281u); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_00210281: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210288u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_00210288: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002102B6; /* jbe: below or equal (unsigned <=) */

loc_0021028F: ;
    SET_LO16(eax, MEM16(esi + 4));
    MEM16(edi + 0x40) = LO16(eax);
    eax = ZX16(MEM16(esi + 4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 4) = MEM32(edi + 4) + eax;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(esi + 4));
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x42) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x42;
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

loc_002102B6: ;
    eax = ebx + 0x1A0;
    MEM32(ebx + 0x174) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(ebx + 0x178) = 0x124;
    MEM32(eax) = ebx;
    goto loc_002101F9;

}

/**
 * sub_002102D6
 * Original: 0x002102D6 - 0x0021046A (404 bytes, 129 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002102D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002102D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002102EF; /* jne: not equal / not zero */

loc_002102E5: ;
    eax = 0x80150005u;
    goto loc_00210391;

loc_002102EF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7BD0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210300u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_00210300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0021038D; /* jl: less (signed <) */

loc_0021030B: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210313u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00210313: ;
    esi = 0x808A;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C8);
    ecx = edi;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210328u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00210328: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210378; /* je: equal / zero */

loc_0021032E: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021033Fu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_0021033F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x3C);
    POP32(esp, eax);
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = esi;
    MEM32(edi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021036Cu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0021036C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x16C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00210396; /* jne: not equal / not zero */

loc_00210378: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_0021037F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021038C; /* je: equal / zero */

loc_00210383: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021038Cu); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_0021038C: ;
    POP32(esp, esi);

loc_0021038D: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

loc_00210391: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

loc_00210396: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002103A4u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_002103A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002103B2; /* je: equal / zero */

loc_002103A9: ;
    MEM32(ebp + 8) = 0x80004005u;
    goto loc_0021037F;

loc_002103B2: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 8) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    MEM32(esi) = 0x40C;
    MEM32(esi + 4) = 0x1C;
    ecx = MEM32(ebx + eax);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax + 4);
    ebx = MEM32(ebp + -4);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x38) = eax;
    eax = ebx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210400; /* jne: not equal / not zero */

loc_002103FB: ;
    ecx = MEM32(ebx + 4);
    MEM32(eax) = ecx;

loc_00210400: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    MEM32(esi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021040Cu); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_0021040C: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210415u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_00210415: ;
    eax = edi + 0x1A0;
    MEM32(edi + 0x174) = eax;
    MEM32(edi + 0x178) = 0x124;
    eax = MEM32(ebx + 0xD0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00210433: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021044D; /* jne: not equal / not zero */

loc_0021043A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021044D; /* jne: not equal / not zero */

loc_00210442: ;
    ecx = MEM32(eax + 8);
    ecx = ecx ^ MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00210458; /* je: equal / zero */

loc_0021044D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00210433; /* jb: below (unsigned <) */

loc_00210456: ;
    goto loc_00210460;

loc_00210458: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210460u); RECOMP_ABI_CALL(0x0020F5C4u, sub_0020F5C4); /* call 0x0020F5C4 */

loc_00210460: ;
    eax = MEM32(ebp + 0x28);
    MEM32(eax) = edi;
    goto loc_0021038C;

}

/**
 * sub_0021046A
 * Original: 0x0021046A - 0x002105E0 (374 bytes, 116 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021046A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021046A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00210483; /* jne: not equal / not zero */

loc_00210479: ;
    eax = 0x80150005u;
    goto loc_0021052C;

loc_00210483: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7BE8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210494u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_00210494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00210528; /* jl: less (signed <) */

loc_0021049F: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002104A7u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_002104A7: ;
    esi = 0x808B;
    PUSH32(esp, esi);
    PUSH32(esp, 0x41C8);
    ecx = edi;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002104BCu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_002104BC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210513; /* je: equal / zero */

loc_002104C2: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002104D3u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_002104D3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    eax = eax * 8 + 0x30;
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = esi;
    MEM32(edi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210507u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00210507: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x16C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00210531; /* jne: not equal / not zero */

loc_00210513: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_0021051A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210527; /* je: equal / zero */

loc_0021051E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210527u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_00210527: ;
    POP32(esp, esi);

loc_00210528: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

loc_0021052C: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_00210531: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021053Fu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_0021053F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021054D; /* je: equal / zero */

loc_00210544: ;
    MEM32(ebp + 8) = 0x80004005u;
    goto loc_0021051A;

loc_0021054D: ;
    edx = MEM32(ebp + 0xC);
    MEM32(esi + 8) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    eax = edx * 8 + 0x10;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi) = 0x408;
    ecx = MEM32(ebx + eax);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x24) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210589; /* jne: not equal / not zero */

loc_00210584: ;
    ebx = MEM32(ecx + 4);
    MEM32(eax) = ebx;

loc_00210589: ;
    eax = MEM32(eax);
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x2C) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_002105B2; /* jbe: below or equal (unsigned <=) */

loc_00210597: ;
    ebx = MEM32(ebp + 0x10);

loc_0021059A: ;
    ecx = MEM32(ebx);
    MEM32(esi + eax * 8 + 0x30) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esi + eax * 8 + 0x34) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021059A; /* jb: below (unsigned <) */

loc_002105AF: ;
    ecx = MEM32(ebp + -4);

loc_002105B2: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002105B9u); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_002105B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002105C0u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_002105C0: ;
    eax = edi + 0x1A0;
    MEM32(edi + 0x174) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x178) = 0x3FA8;
    MEM32(eax) = edi;
    goto loc_00210527;

}

/**
 * sub_002105E0
 * Original: 0x002105E0 - 0x002105F6 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002105E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002105E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002105F6(); return; } /* jne: not equal / not zero */

loc_002105EF: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0021066B(); return; /* tail jmp 0x0021066B */

}

/**
 * sub_002105F6
 * Original: 0x002105F6 - 0x0021066B (117 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002105F6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7C00);
    ecx = edi;
    PUSH32(esp, 0x00210607u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_00210607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00210667; /* jl: less (signed <) */

loc_0021060E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00210616u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00210616: ;
    esi = 0x808B;
    PUSH32(esp, esi);
    PUSH32(esp, 0x41C8);
    ecx = edi;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x0021062Bu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0021062B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210652; /* je: equal / zero */

loc_00210631: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x38);
    POP32(esp, eax);
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    MEM32(edi + 0x170) = eax;
    PUSH32(esp, 0x00210648u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00210648: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x16C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00210670(); return; } /* jne: not equal / not zero */

loc_00210652: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210666; /* je: equal / zero */

loc_0021065D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210666u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_00210666: ;
    POP32(esp, esi);

loc_00210667: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0021066B(); return; /* fallthrough 0x0021066B */

}

/**
 * sub_00210659
 * Original: 0x00210659 - 0x0021066B (18 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210659: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210666; /* je: equal / zero */

loc_0021065D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210666u); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_00210666: ;
    POP32(esp, esi);
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0021066B(); return; /* fallthrough 0x0021066B */

}

/**
 * sub_00210666
 * Original: 0x00210666 - 0x0021066B (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210666(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210666: ;
    POP32(esp, esi);
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0021066B(); return; /* fallthrough 0x0021066B */

}

/**
 * sub_0021066B
 * Original: 0x0021066B - 0x00210670 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021066B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021066B: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210670
 * Original: 0x00210670 - 0x002106B9 (73 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210670: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210681u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00210681: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi + 0x180) = esi;
    esi = MEM32(edi + 0x16C);
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    PUSH32(esp, 0x002106ABu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_002106AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002106B9(); return; } /* je: equal / zero */

loc_002106B0: ;
    MEM32(ebp + 8) = 0x80004005u;
    g_seh_ebp = ebp; sub_00210659(); return; /* tail jmp 0x00210659 */

}

/**
 * sub_002106B9
 * Original: 0x002106B9 - 0x00210735 (124 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002106B9: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 8) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    MEM32(esi) = 0x408;
    MEM32(esi + 4) = 0x18;
    ecx = MEM32(ebx + eax);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x24) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002106EF; /* jne: not equal / not zero */

loc_002106EA: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_002106EF: ;
    eax = MEM32(eax);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = 1;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0021070Eu); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_0021070E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210715u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_00210715: ;
    eax = edi + 0x1A0;
    MEM32(edi + 0x174) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(edi + 0x178) = 0x3FA8;
    MEM32(eax) = edi;
    g_seh_ebp = ebp; sub_00210666(); return; /* tail jmp 0x00210666 */

}

/**
 * sub_00210735
 * Original: 0x00210735 - 0x002107B8 (131 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210735(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210735: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00210747; /* jne: not equal / not zero */

loc_00210740: ;
    eax = 0x80150005u;
    goto loc_002107B4;

loc_00210747: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002107B3; /* jl: less (signed <) */

loc_00210755: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = 0x80004005u;
    if (CMP_BE(_fa, _fb)) goto loc_002107B1; /* jbe: below or equal (unsigned <=) */

loc_00210768: ;
    edx = esi + 0x4148;

loc_0021076E: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021077D; /* jne: not equal / not zero */

loc_00210775: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210787; /* je: equal / zero */

loc_0021077D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021076E; /* jb: below (unsigned <) */

loc_00210785: ;
    goto loc_002107B1;

loc_00210787: ;
    ebx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -4);
    eax = edi;
    PUSH32(esp, ebx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(eax + esi + 0x4154));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021079Fu); RECOMP_ABI_CALL(0x0020F44Fu, sub_0020F44F); /* call 0x0020F44F */

loc_0021079F: ;
    _fb = (uint32_t)(0x415) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x415;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + esi);
    MEM32(ebx + 0x692) = ecx;

loc_002107B1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002107B3: ;
    POP32(esp, esi);

loc_002107B4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002107B8
 * Original: 0x002107B8 - 0x00210912 (346 bytes, 107 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002107B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002107B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002107D1; /* jne: not equal / not zero */

loc_002107C7: ;
    eax = 0x80150005u;
    goto loc_00210873;

loc_002107D1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA7C20);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002107E2u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_002107E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0021086F; /* jl: less (signed <) */

loc_002107ED: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002107F5u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_002107F5: ;
    esi = 0x808C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x43A8);
    ecx = edi;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021080Au); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0021080A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021085A; /* je: equal / zero */

loc_00210810: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA7B58);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210821u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00210821: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x38);
    POP32(esp, eax);
    PUSH32(esp, 0x84);
    PUSH32(esp, eax);
    MEM32(edi) = 0x20F2A0;
    MEM32(edi + 0x198) = 0x20F2C7;
    MEM32(edi + 0x180) = esi;
    MEM32(edi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021084Eu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0021084E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x16C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00210878; /* jne: not equal / not zero */

loc_0021085A: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_00210861: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021086E; /* je: equal / zero */

loc_00210865: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021086Eu); RECOMP_ABI_CALL(0x0020F2C7u, sub_0020F2C7); /* call 0x0020F2C7 */

loc_0021086E: ;
    POP32(esp, esi);

loc_0021086F: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);

loc_00210873: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

loc_00210878: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210886u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_00210886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210894; /* je: equal / zero */

loc_0021088B: ;
    MEM32(ebp + 8) = 0x80004005u;
    goto loc_00210861;

loc_00210894: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 8) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi) = 0x409;
    MEM32(esi + 4) = 0x18;
    ecx = MEM32(ebx + eax);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x24) = eax;
    eax = ecx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002108D6; /* jne: not equal / not zero */

loc_002108D1: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_002108D6: ;
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002108EBu); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

loc_002108EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002108F2u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_002108F2: ;
    eax = edi + 0x1A0;
    MEM32(edi + 0x174) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(edi + 0x178) = 0x3BC6;
    MEM32(eax) = edi;
    goto loc_0021086E;

}

/**
 * sub_00210912
 * Original: 0x00210912 - 0x002109AC (154 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210912(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210912: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00210927; /* jne: not equal / not zero */

loc_0021091D: ;
    eax = 0x80150005u;
    goto loc_002109A8;

loc_00210927: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002109A7; /* jl: less (signed <) */

loc_00210935: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edi + 0x1CC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 0x80004005u;
    if (CMP_BE(_fa, _fb)) goto loc_002109A5; /* jbe: below or equal (unsigned <=) */

loc_00210949: ;
    edx = edi + 0x3D68;

loc_0021094F: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021095E; /* jne: not equal / not zero */

loc_00210956: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210968; /* je: equal / zero */

loc_0021095E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021094F; /* jb: below (unsigned <) */

loc_00210966: ;
    goto loc_002109A5;

loc_00210968: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edi + 0x3D74;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210981u); RECOMP_ABI_CALL(0x0020F541u, sub_0020F541); /* call 0x0020F541 */

loc_00210981: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x3D7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3D7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ebx + edi);
    _fb = (uint32_t)(0x86) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x86;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx + 9)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 9), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002109A5; /* jne: not equal / not zero */

loc_002109A0: ;
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edi;

loc_002109A5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002109A7: ;
    POP32(esp, edi);

loc_002109A8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002109F9
 * Original: 0x002109F9 - 0x00210D46 (845 bytes, 261 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002109F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002109F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x160), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00210B76; /* je: equal / zero */

loc_00210A1A: ;
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210A23u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00210A23: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210D3F; /* je: equal / zero */

loc_00210A2D: ;
    if (CMP_L(_fas, _fbs)) goto loc_00210D3F; /* jl: less (signed <) */

loc_00210A33: ;
    PUSH32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210A4Au); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_00210A4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210D3F; /* jl: less (signed <) */

loc_00210A52: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210C24; /* je: equal / zero */

loc_00210A5D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210C24; /* jne: not equal / not zero */

loc_00210A6A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00210C24; /* jb: below (unsigned <) */

loc_00210A74: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 0x30;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x45C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210C24; /* jne: not equal / not zero */

loc_00210A84: ;
    eax = edx + 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00210C24; /* ja: above (unsigned >) */

loc_00210A93: ;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210D3F; /* jl: less (signed <) */

loc_00210A9E: ;
    ecx = edx + 0x2C;
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00210C24; /* ja: above (unsigned >) */

loc_00210AB1: ;
    eax = ZX16(LO16(eax));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210C24; /* ja: above (unsigned >) */

loc_00210AC0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + 0x2E;
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210C24; /* ja: above (unsigned >) */

loc_00210AD6: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210C24; /* ja: above (unsigned >) */

loc_00210AE2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = edx;
    SET_LO16(edx, MEM16(ecx));
    eax = MEM32(eax);
    eax = eax + eax * 8;
    eax = MEM32(edi + eax * 8 + 0x13E4);
    MEM16(eax + 4) = LO16(edx);
    ecx = ZX16(MEM16(ecx));
    esi = MEM32(ebp + -8);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 8;
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
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -20);
    ecx = ZX16(MEM16(ecx));
    ecx = edx + ecx * 8;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax + 0x48) = LO16(edx);
    ecx = ZX16(MEM16(ecx));
    esi = MEM32(ebp + -8);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 0x4A;
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
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -12);
    edi = ebx + 0x10;
    PUSH32(esp, edi);
    MEM32(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210B66u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_00210B66: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebx + 0x160) = MEM32(ebx + 0x160) & eax;
    _fa = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -12);

loc_00210B76: ;
    eax = MEM32(edi + 0xD0);
    ecx = edi + 0x13E4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ecx;

loc_00210B87: ;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00210BAE; /* je: equal / zero */

loc_00210B8E: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00210BAE; /* jne: not equal / not zero */

loc_00210B94: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0xC), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00210BAE; /* je: equal / zero */

loc_00210BA0: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210C2E; /* je: equal / zero */

loc_00210BAE: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00210B87; /* jb: below (unsigned <) */

loc_00210BBB: ;
    esi = MEM32(ebx + 0x164);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210D3A; /* je: equal / zero */

loc_00210BC9: ;
    edi = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x4C);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(ebp + -4) = 0x156;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210BE8u); RECOMP_ABI_CALL(0x0020F620u, sub_0020F620); /* call 0x0020F620 */

loc_00210BE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210D3F; /* jl: less (signed <) */

loc_00210BF0: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xB4);
    ebx = MEM32(esi + 0xB0);
    MEM32(esi + 0xEC) = MEM32(esi + 0xEC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xEC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0xE8) = edi;
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    edx = ebp + -280;
    eax = ebx;
    goto loc_00210CE3;

loc_00210C24: ;
    eax = 0x8015000Au;
    goto loc_00210D3F;

loc_00210C2E: ;
    PUSH32(esp, 0);
    eax = ebx + 0x174;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebx + 0x168) = 0x411;
    MEM32(ebx + 0x16C) = 0xC;
    MEM32(ebx + 0x170) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210C58u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_00210C58: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = MEM32(edi + 0xD0);
    ecx = MEM32(esi + eax);
    MEM32(ebx + 0x188) = ecx;
    eax = MEM32(esi + eax + 4);
    MEM32(ebx + 0x18C) = eax;
    eax = edi + 0x1854;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210C85; /* jne: not equal / not zero */

loc_00210C80: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = ecx;

loc_00210C85: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ebx + 0x190) = eax;
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x168;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x178);
    eax = ebx + 0x194;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6804);
    PUSH32(esp, 4);
    PUSH32(esp, 0x13);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210CC2u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_00210CC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210D3F; /* jl: less (signed <) */

loc_00210CC6: ;
    MEM32(ebx + 0x160) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00210D3F;

loc_00210CD4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210CD8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210CDD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210CE2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00210CE3: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210CD4; /* jne: not equal / not zero */

loc_00210CEA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00210D06;

loc_00210CED: ;
    eax = 0x80150007u;
    goto loc_00210D3F;

loc_00210CF4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210CF8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210CFD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CED; /* je: equal / zero */

loc_00210D02: ;
    MEM8(edx) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00210D06: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210CF4; /* jne: not equal / not zero */

loc_00210D0D: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(esi + 0xEC));
    eax = ebp + -280;
    PUSH32(esp, MEM32(esi + 0xE8));
    MEM8(edx) = 0;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D3Au); RECOMP_ABI_CALL(0x0020B746u, sub_0020B746); /* call 0x0020B746 */

loc_00210D3A: ;
    eax = 0x1500F0;

loc_00210D3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210D46
 * Original: 0x00210D46 - 0x00210D55 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210D46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00210D46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0020F838(); return; /* tail jmp 0x0020F838 */

}

/**
 * sub_00210D55
 * Original: 0x00210D55 - 0x00210D82 (45 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210D55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210D55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D7Cu); RECOMP_ABI_CALL(0x0020FC5Fu, sub_0020FC5F); /* call 0x0020FC5F */

loc_00210D7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00210D82
 * Original: 0x00210D82 - 0x00210DAC (42 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210D82(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210D82: ;
    PUSH32(esp, esi);
    ecx = MEM32(0x9701A4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x20));
    esi = esp + 0x14;
    PUSH32(esp, MEM32(esp + 0x20));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x20));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x00210DA7u); RECOMP_ABI_CALL(0x0020FFE5u, sub_0020FFE5); /* call 0x0020FFE5 */

loc_00210DA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210DAC
 * Original: 0x00210DAC - 0x00210DE4 (56 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210DAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210DAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x28));
    esi = ebp + 0x18;
    PUSH32(esp, MEM32(ebp + 0x24));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210DDEu); RECOMP_ABI_CALL(0x0021013Cu, sub_0021013C); /* call 0x0021013C */

loc_00210DDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00210DE4
 * Original: 0x00210DE4 - 0x00210E19 (53 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210DE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210DE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = ebp + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210E13u); RECOMP_ABI_CALL(0x002102D6u, sub_002102D6); /* call 0x002102D6 */

loc_00210E13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00210E19
 * Original: 0x00210E19 - 0x00210E28 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210E19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00210E19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0021046A(); return; /* tail jmp 0x0021046A */

}

/**
 * sub_00210E78
 * Original: 0x00210E78 - 0x00210EA5 (45 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210E78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210E9Fu); RECOMP_ABI_CALL(0x002107B8u, sub_002107B8); /* call 0x002107B8 */

loc_00210E9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00210ED6
 * Original: 0x00210ED6 - 0x00210EF9 (35 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210ED6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA5);
    PUSH32(esp, 0x310);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00210EECu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_00210EEC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00210EF9(); return; } /* jne: not equal / not zero */

loc_00210EF2: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00210F3C(); return; /* tail jmp 0x00210F3C */

}

/**
 * sub_00210EF9
 * Original: 0x00210EF9 - 0x00210F3C (67 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210EF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210EF9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00210F01u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_00210F01: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2109F9;
    MEM32(esi + 4) = 0x20F7DC;
    POP32(esp, ecx);
    edi = esi + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x164) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x160) = ebx;
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_00210F3C(); return; /* fallthrough 0x00210F3C */

}

/**
 * sub_00210F3C
 * Original: 0x00210F3C - 0x00210F44 (8 bytes, 5 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210F3C(void)
{

loc_00210F3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210F44
 * Original: 0x00210F44 - 0x00210F89 (69 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210F44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210F44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210F5Du); RECOMP_ABI_CALL(0x0020F620u, sub_0020F620); /* call 0x0020F620 */

loc_00210F5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00210F82; /* jge: greater or equal (signed >=) */

loc_00210F61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80152102u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80152102u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210F82; /* jne: not equal / not zero */

loc_00210F68: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210F82u); RECOMP_ABI_CALL(0x00210ED6u, sub_00210ED6); /* call 0x00210ED6 */

loc_00210F82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00210F89
 * Original: 0x00210F89 - 0x00210F97 (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210F89(void)
{

loc_00210F89: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210F97
 * Original: 0x00210F97 - 0x00210FDD (70 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210F97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210F97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = eax;
    eax = esi + 0x17C;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x16C);
    _fb = (uint32_t)(MEM32(esi + 0x170)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210FCBu); RECOMP_ABI_CALL(0x00210F44u, sub_00210F44); /* call 0x00210F44 */

loc_00210FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210FD8; /* jl: less (signed <) */

loc_00210FCF: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x170) = MEM32(esi + 0x170) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x170)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00210FD8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00210FDD
 * Original: 0x00210FDD - 0x002110A8 (203 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210FDD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210FDD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x164);
    PUSH32(esp, edi);
    edi = MEM32(esi + edx * 4 + 0x184);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210FFE; /* je: equal / zero */

loc_00210FF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00210FF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210FF7u); } /* indirect call */
    }

loc_00210FF9: ;
    goto loc_0021109D;

loc_00210FFE: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00211049; /* je: equal / zero */

loc_00211003: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0021102C; /* je: equal / zero */

loc_00211006: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00211011; /* je: equal / zero */

loc_00211009: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0021101B; /* je: equal / zero */

loc_0021100C: ;
    goto loc_0021109D;

loc_00211011: ;
    MEM32(esi + 0x164) = 3;

loc_0021101B: ;
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021109D; /* jl: less (signed <) */

loc_00211025: ;
    eax = 0x1500F0;
    goto loc_0021109D;

loc_0021102C: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00211035u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00211035: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021109D; /* je: equal / zero */

loc_00211039: ;
    MEM32(esi + 0x164) = 2;
    if (CMP_L(_fas, _fbs)) goto loc_0021109D; /* jl: less (signed <) */

loc_00211045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0021109D;

loc_00211049: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(esi + 0x160);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x2BF20);
    PUSH32(esp, MEM32(esi + 0x170));
    PUSH32(esp, MEM32(esi + 0x16C));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(esi + 0x178));
    PUSH32(esp, MEM32(esi + 0x174));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0021108Fu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_0021108F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00211093; /* jne: not equal / not zero */

loc_00211093: ;
    MEM32(esi + 0x164) = 1;

loc_0021109D: ;
    POP32(esp, edi);
    MEM32(esi + 0x168) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002110A8
 * Original: 0x002110A8 - 0x002110E2 (58 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002110A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002110A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002110E9(); return; } /* je: equal / zero */

loc_002110B4: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x180);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002110C4u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_002110C4: ;
    eax = MEM32(esi + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002110D3; /* je: equal / zero */

loc_002110CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002110D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002110D1u); } /* indirect call */
    }

loc_002110D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002110E2(); return; } /* je: equal / zero */

loc_002110D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002110E0u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_002110E0: ;
    g_seh_ebp = ebp; sub_002110E8(); return; /* tail jmp 0x002110E8 */

}

/**
 * sub_002110E2
 * Original: 0x002110E2 - 0x002110E8 (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002110E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002110E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002110E8u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

    g_seh_ebp = ebp; sub_002110E8(); return; /* fallthrough 0x002110E8 */

}

/**
 * sub_002110E8
 * Original: 0x002110E8 - 0x002110E9 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002110E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002110E8: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_002110E9(); return; /* fallthrough 0x002110E9 */

}

/**
 * sub_002110E9
 * Original: 0x002110E9 - 0x002110EE (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002110E9(void)
{

loc_002110E9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021111D
 * Original: 0x0021111D - 0x00211168 (75 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021111D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021111D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211128u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_00211128: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x164) = MEM32(esi + 0x164) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x17C) = MEM32(esi + 0x17C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x17C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x210FDD;
    MEM32(esi + 4) = 0x2110A8;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x160) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00211165; /* je: equal / zero */

loc_0021115F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00211165u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_00211165: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00211168
 * Original: 0x00211168 - 0x002111E6 (126 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211168(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211168: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    ebx = esi + 0xC;
    MEM32(ebx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x2C);
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(ebp + 0x20);
    edx = ebp + -24;
    MEM32(esi + 0x90) = eax;
    eax = edi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002111BAu); RECOMP_ABI_CALL(0x0020C1EBu, sub_0020C1EB); /* call 0x0020C1EB */

loc_002111BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211203(); return; } /* jne: not equal / not zero */

loc_002111C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002111CAu); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_002111CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002111FE(); return; } /* jne: not equal / not zero */

loc_002111D1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002111D6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002111D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_002111E6(); return; } /* jg: greater (signed >) */

loc_002111DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002111DFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002111DF: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00211346(); return; /* tail jmp 0x00211346 */

}

/**
 * sub_002111E6
 * Original: 0x002111E6 - 0x002111FE (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002111E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002111E6: ;
    PUSH32(esp, 0x002111EBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002111EB: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00211346(); return; /* tail jmp 0x00211346 */

}

/**
 * sub_002111FE
 * Original: 0x002111FE - 0x00211203 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002111FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002111FE: ;
    MEM32(ebp + 0x24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00211203(); return; /* fallthrough 0x00211203 */

}

/**
 * sub_00211203
 * Original: 0x00211203 - 0x00211216 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211203(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211203: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211216(); return; } /* je: equal / zero */

loc_0021120A: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211216(); return; } /* je: equal / zero */

loc_00211211: ;
    MEM32(ebp + 0x28) = eax;
    g_seh_ebp = ebp; sub_0021126A(); return; /* tail jmp 0x0021126A */

}

/**
 * sub_00211216
 * Original: 0x00211216 - 0x00211229 (19 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211216(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211216: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00211221u); RECOMP_ABI_CALL(0x001CEFCEu, sub_001CEFCE); /* call 0x001CEFCE */

loc_00211221: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211243(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00211229(); return; /* fallthrough 0x00211229 */

}

/**
 * sub_00211229
 * Original: 0x00211229 - 0x00211243 (26 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211229(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211229: ;
    PUSH32(esp, 0x0021122Eu); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_0021122E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021123C; /* jle: less or equal (signed <=) */

loc_00211232: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021123C: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00211332(); return; /* tail jmp 0x00211332 */

}

/**
 * sub_00211243
 * Original: 0x00211243 - 0x0021126A (39 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211243: ;
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 3), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021125E; /* je: equal / zero */

loc_00211249: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021125Eu); RECOMP_ABI_CALL(0x001CEFFAu, sub_001CEFFA); /* call 0x001CEFFA */

loc_0021125E: ;
    eax = MEM32(ebp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0021126A(); return; } /* je: equal / zero */

loc_00211265: ;
    ecx = MEM32(ebp + 0x28);
    MEM32(eax) = ecx;

    g_seh_ebp = ebp; sub_0021126A(); return; /* fallthrough 0x0021126A */

}

/**
 * sub_0021126A
 * Original: 0x0021126A - 0x00211314 (170 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021126A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021126A: ;
    PUSH32(esp, 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x00211278u); RECOMP_ABI_CALL(0x001CF039u, sub_001CF039); /* call 0x001CF039 */

loc_00211278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211229(); return; } /* jne: not equal / not zero */

loc_0021127C: ;
    ecx = MEM32(ebp + -8);
    edi = esi + 0x54;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x00211295u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_00211295: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebx;
    PUSH32(esp, 0x002112AEu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_002112AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002112B8u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_002112B8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00211332(); return; } /* jl: less (signed <) */

loc_002112BE: ;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax);
    ecx = esi + 0xB4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 0xAC) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xAC));
    ecx = ebx;
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0x002112F2u); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_002112F2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00211332(); return; } /* jl: less (signed <) */

loc_002112F8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211314(); return; } /* jbe: below or equal (unsigned <=) */

loc_002112FE: ;
    PUSH32(esp, 0x00211303u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00211303: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 1;
    MEM32(esi + 0x94) = eax;
    g_seh_ebp = ebp; sub_00211367(); return; /* tail jmp 0x00211367 */

}

/**
 * sub_00211314
 * Original: 0x00211314 - 0x00211332 (30 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211314(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211314: ;
    PUSH32(esp, 0x00211319u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00211319: ;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 1);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021132Cu); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_0021132C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00211358(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_00211332(); return; /* fallthrough 0x00211332 */

}

/**
 * sub_00211332
 * Original: 0x00211332 - 0x00211346 (20 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211332(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211332: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211346(); return; } /* je: equal / zero */

loc_00211338: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211346(); return; } /* jne: not equal / not zero */

loc_0021133E: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x00211346u); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

    g_seh_ebp = ebp; sub_00211346(); return; /* fallthrough 0x00211346 */

}

/**
 * sub_00211346
 * Original: 0x00211346 - 0x00211358 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211346: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211354; /* je: equal / zero */

loc_0021134C: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00211354u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00211354: ;
    eax = edi;
    g_seh_ebp = ebp; sub_00211389(); return; /* tail jmp 0x00211389 */

}

/**
 * sub_00211358
 * Original: 0x00211358 - 0x00211367 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211358: ;
    eax = MEM32(esi + 0x90);
    MEM32(esi) = 2;
    MEM32(ebp + 0xC) = eax;

    g_seh_ebp = ebp; sub_00211367(); return; /* fallthrough 0x00211367 */

}

/**
 * sub_00211367
 * Original: 0x00211367 - 0x00211389 (34 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00211367(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211367: ;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 0x48));
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00211387u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_00211387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00211389(); return; /* fallthrough 0x00211389 */

}

/**
 * sub_00211389
 * Original: 0x00211389 - 0x00211390 (7 bytes, 5 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211389(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211389: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_00211390
 * Original: 0x00211390 - 0x00211401 (113 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002113E7; /* je: equal / zero */

loc_002113A1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xB4));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + 0xB0));
    PUSH32(esp, MEM32(esi + 0xAC));
    PUSH32(esp, 0x002113C4u); RECOMP_ABI_CALL(0x0020B987u, sub_0020B987); /* call 0x0020B987 */

loc_002113C4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002113D4; /* je: equal / zero */

loc_002113CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002113D1u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_002113D1: ;
    MEM32(esi + 4) = edi;

loc_002113D4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002113E5u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_002113E5: ;
    MEM32(esi) = edi;

loc_002113E7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211406(); return; } /* je: equal / zero */

loc_002113EF: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211401(); return; } /* je: equal / zero */

loc_002113F6: ;
    PUSH32(esp, 0x002113FBu); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_002113FB: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00211406(); return; /* tail jmp 0x00211406 */

}

/**
 * sub_00211401
 * Original: 0x00211401 - 0x00211406 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211401(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211401: ;
    PUSH32(esp, 0x00211406u); RECOMP_ABI_CALL(0x001CF078u, sub_001CF078); /* call 0x001CF078 */

    g_seh_ebp = ebp; sub_00211406(); return; /* fallthrough 0x00211406 */

}

/**
 * sub_00211406
 * Original: 0x00211406 - 0x0021140C (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211406(void)
{

loc_00211406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021140C
 * Original: 0x0021140C - 0x0021143D (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021140C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021140C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0021157C(); return; } /* je: equal / zero */

loc_0021142A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00211448(); return; } /* je: equal / zero */

loc_0021142D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00211463(); return; } /* je: equal / zero */

loc_00211430: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0021143D(); return; } /* je: equal / zero */

loc_00211433: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002115DB(); return; /* tail jmp 0x002115DB */

}

/**
 * sub_0021143D
 * Original: 0x0021143D - 0x00211448 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021143D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021143D: ;
    eax = MEM32(esi + 0x8C);
    g_seh_ebp = ebp; sub_002115DB(); return; /* tail jmp 0x002115DB */

}

/**
 * sub_00211448
 * Original: 0x00211448 - 0x00211463 (27 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211448(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211448: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00211453u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00211453: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211463(); return; } /* je: equal / zero */

loc_00211457: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_0021145D: ;
    MEM32(esi) = 3;

    g_seh_ebp = ebp; sub_00211463(); return; /* fallthrough 0x00211463 */

}

/**
 * sub_00211463
 * Original: 0x00211463 - 0x002114B1 (78 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211463(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211463: ;
    edi = esi + 0x54;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021146Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0021146E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0021152B(); return; } /* je: equal / zero */

loc_00211476: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_0021147C: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00211490u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_00211490: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_00211498: ;
    _fa = (uint32_t)(MEM32(esi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002114B1(); return; } /* je: equal / zero */

loc_002114A1: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = 0x1500F0;
    g_seh_ebp = ebp; sub_002115A5(); return; /* tail jmp 0x002115A5 */

}

/**
 * sub_002114A7
 * Original: 0x002114A7 - 0x002114B1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002114A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002114A7: ;
    eax = 0x1500F0;
    g_seh_ebp = ebp; sub_002115A5(); return; /* tail jmp 0x002115A5 */

}

/**
 * sub_002114B1
 * Original: 0x002114B1 - 0x00211516 (101 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002114B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002114B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x50);
    POP32(esp, ecx);
    edi = ebp + -336;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    MEM32(ebp + -160) = eax;
    eax = MEM32(esi + 0xAC);
    MEM32(ebp + -288) = eax;
    eax = MEM32(esi + 0xB0);
    MEM32(ebp + -300) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -336;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -92) = 1;
    PUSH32(esp, 0x002114FEu); RECOMP_ABI_CALL(0x0020BD99u, sub_0020BD99); /* call 0x0020BD99 */

loc_002114FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_00211506: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211516(); return; } /* jne: not equal / not zero */

loc_0021150C: ;
    eax = 0x8015000Au;
    g_seh_ebp = ebp; sub_002115A5(); return; /* tail jmp 0x002115A5 */

}

/**
 * sub_00211516
 * Original: 0x00211516 - 0x0021152B (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211516(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211516: ;
    eax = MEM32(ebp + -96);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_00211526: ;
    g_seh_ebp = ebp; sub_002114A7(); return; /* tail jmp 0x002114A7 */

}

/**
 * sub_0021152B
 * Original: 0x0021152B - 0x00211555 (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021152B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021152B: ;
    PUSH32(esp, 0x00211530u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00211530: ;
    _fb = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_002115D9(); return; } /* jbe: below or equal (unsigned <=) */

loc_00211542: ;
    eax = esi + 0x8C;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00211555(); return; } /* jne: not equal / not zero */

loc_0021154E: ;
    eax = 0x8007274Cu;
    g_seh_ebp = ebp; sub_002115A5(); return; /* tail jmp 0x002115A5 */

}

/**
 * sub_00211555
 * Original: 0x00211555 - 0x0021157C (39 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211555(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211555: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0021155Du); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0021155D: ;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 1);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00211570u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_00211570: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115A5(); return; } /* jl: less (signed <) */

loc_00211574: ;
    PUSH32(esp, MEM32(esi + 0x90));
    g_seh_ebp = ebp; sub_002115C2(); return; /* tail jmp 0x002115C2 */

}

/**
 * sub_0021157C
 * Original: 0x0021157C - 0x002115BC (64 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021157C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021157C: ;
    edi = esi + 0x94;
    PUSH32(esp, 0x00211587u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00211587: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115D9(); return; } /* jle: less or equal (signed <=) */

loc_0021158D: ;
    PUSH32(esp, 0x00211592u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00211592: ;
    MEM32(edi) = eax;
    PUSH32(esp, 1);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002115A1u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_002115A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_002115BC(); return; } /* jge: greater or equal (signed >=) */

loc_002115A5: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi) = 4;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = ecx;
    g_seh_ebp = ebp; sub_002115DB(); return; /* tail jmp 0x002115DB */

}

/**
 * sub_002115A5
 * Original: 0x002115A5 - 0x002115BC (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115A5: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi) = 4;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = ecx;
    g_seh_ebp = ebp; sub_002115DB(); return; /* tail jmp 0x002115DB */

}

/**
 * sub_002115BC
 * Original: 0x002115BC - 0x002115D9 (29 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115BC: ;
    PUSH32(esp, MEM32(esi + 0x90));
    PUSH32(esp, MEM32(esi + 0x48));
    eax = esi + 0x98;
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002115D3u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_002115D3: ;
    MEM32(esi) = 2;

    g_seh_ebp = ebp; sub_002115D9(); return; /* fallthrough 0x002115D9 */

}

/**
 * sub_002115C2
 * Original: 0x002115C2 - 0x002115D9 (23 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115C2: ;
    PUSH32(esp, MEM32(esi + 0x48));
    eax = esi + 0x98;
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002115D3u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_002115D3: ;
    MEM32(esi) = 2;

    g_seh_ebp = ebp; sub_002115D9(); return; /* fallthrough 0x002115D9 */

}

/**
 * sub_002115D9
 * Original: 0x002115D9 - 0x002115DB (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002115D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_002115DB(); return; /* fallthrough 0x002115DB */

}

/**
 * sub_002115DB
 * Original: 0x002115DB - 0x002115E2 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002115E2
 * Original: 0x002115E2 - 0x00211627 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x002115F9u); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_002115F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0021162F(); return; } /* jne: not equal / not zero */

loc_002115FD: ;
    PUSH32(esp, 0x00211602u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00211602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211627(); return; } /* je: equal / zero */

loc_00211609: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00211627(); return; } /* je: equal / zero */

loc_00211610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021161E; /* jle: less or equal (signed <=) */

loc_00211614: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021161E: ;
    ecx = eax;
    eax = esi + 0xC;
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_00211638(); return; /* tail jmp 0x00211638 */

}
