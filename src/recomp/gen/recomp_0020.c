/**
 * DOAU1 - Recompiled code chunk 20
 * Functions: 250 (0x000B4380 - 0x000B9D10)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000B4380
 * Original: 0x000B4380 - 0x000B43A5 (37 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4380: ;
    esp = MEM32(ebp + -24);
    MEM8(ebp + -25) = 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -44);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B4397u); RECOMP_ABI_CALL(0x000B43A5u, sub_000B43A5); /* call 0x000B43A5 */

loc_000B4397: ;
    SET_LO8(eax, MEM8(ebp + -25));
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B439Fu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B439F: ;
    esp += 16; return; /* ret 12 */

    g_seh_ebp = ebp; sub_000B43A5(); return; /* fallthrough 0x000B43A5 */

}

/**
 * sub_000B43A5
 * Original: 0x000B43A5 - 0x000B43B8 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B43A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B43A5: ;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B43B7; /* je: equal / zero */

loc_000B43AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x000B43B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B43B1u); } /* indirect call */
    }

loc_000B43B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B43B8
 * Original: 0x000B43B8 - 0x000B4AD0 (1816 bytes, 566 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B43B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B43B8: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0x281B68);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B43C7u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B43C7: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = eax;
    MEM8(ebp + -29) = 0;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B43EC; /* je: equal / zero */

loc_000B43D8: ;
    MEM32(ebp + -116) = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B43F3; /* jbe: below or equal (unsigned <=) */

loc_000B43EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B4AC8;

loc_000B43F3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B43F8; /* jne: not equal / not zero */

loc_000B43F7: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B43F8: ;
    ecx = MEM32(eax + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C000100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0x3C000100 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B441B; /* jne: not equal / not zero */

loc_000B440C: ;
    _fa = (uint32_t)(MEM32(eax + 0x17C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x17C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B441B; /* jne: not equal / not zero */

loc_000B4415: ;
    _fa = (uint32_t)(MEM8(esi + -11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -11), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4421; /* je: equal / zero */

loc_000B441B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ecx;

loc_000B4421: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B443F; /* jne: not equal / not zero */

loc_000B442B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x000B4437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4431u); } /* indirect call */
    }

loc_000B4437: ;
    MEM8(ebp + -29) = 1;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) ^ 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B443F: ;
    MEM32(ebp + -4) = 1;
    ebx = esi + -16;
    MEM32(ebp + -100) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4A4F; /* je: equal / zero */

loc_000B4457: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000B4493; /* je: equal / zero */

loc_000B445E: ;
    edx = ebx + -32;
    MEM32(ebp + -240) = edx;
    eax = ZX16(MEM16(ebx));
    esi = MEM32(edx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -48) = esi;
    edx = eax + esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -80) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -28);
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFFF000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = edi;
    goto loc_000B44A9;

loc_000B4493: ;
    eax = ZX16(MEM16(ebx));
    edx = eax;
    MEM32(ebp + -80) = edx;
    edi = ZX8(MEM8(ebx + 6));
    esi = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -48) = esi;

loc_000B44A9: ;
    edi = MEM32(ebp + -28);
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -56) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B489C; /* ja: above (unsigned >) */

loc_000B44BA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B44C6; /* jne: not equal / not zero */

loc_000B44BF: ;
    MEM32(ebp + -56) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B44C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B44D5; /* je: equal / zero */

loc_000B44CA: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebx) = LO16(eax);
    goto loc_000B4501;

loc_000B44D5: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B44F8; /* je: equal / zero */

loc_000B44DB: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + -16;
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -56);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + ebx + -16;
    MEM32(ebp + -108) = edi;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_000B44F8: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebx + 6) = LO8(eax);

loc_000B4501: ;
    esi = MEM32(ebp + -48);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B4528; /* jbe: below or equal (unsigned <=) */

loc_000B450B: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4528; /* je: equal / zero */

loc_000B4511: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_000B4528: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49EE; /* je: equal / zero */

loc_000B4533: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 5));
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -57) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4588; /* je: equal / zero */

loc_000B4542: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -152) = ebx;
    eax = MEM32(ebp + -28);
    ecx = ebx + eax;
    MEM32(ebp + -40) = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB10); PUSH32(esp, 0x000B456Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4569u); } /* indirect call */
    }

loc_000B456F: ;
    MEM32(ebp + -248) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B49EE; /* jl: less (signed <) */

loc_000B457D: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000B49EE;

loc_000B4588: ;
    esi = ecx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -244) = esi;
    MEM8(esi + 5) = LO8(eax);
    MEM16(esi + 2) = LO16(ecx);
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(esi + 4) = LO8(edx);
    edi = ZX16(MEM16(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -120) = edi;
    MEM16(ebx) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 5));
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 5) = LO8(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4661; /* je: equal / zero */

loc_000B45BE: ;
    ecx = ZX8(MEM8(esi + 4));
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x60);
    MEM32(ebp + -164) = ecx;
    MEM32(ecx + 0x40) = esi;
    MEM16(esi) = LO16(edi);
    SET_LO8(ecx, MEM8(esi + 5));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B4626; /* jae: above or equal (unsigned >=) */

loc_000B45E5: ;
    ecx = ZX16(LO16(edi));
    eax = eax + ecx * 8 + 0x180;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B464D; /* jne: not equal / not zero */

loc_000B45F6: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -212) = edx;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -172) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx));
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    goto loc_000B464D;

loc_000B4626: ;
    edx = eax + 0x180;
    MEM32(ebp + -64) = edx;
    eax = MEM32(edx);

loc_000B4631: ;
    MEM32(ebp + -88) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B464A; /* je: equal / zero */

loc_000B4638: ;
    ecx = eax + -8;
    MEM32(ebp + -236) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B464A; /* jbe: below or equal (unsigned <=) */

loc_000B4646: ;
    eax = MEM32(eax);
    goto loc_000B4631;

loc_000B464A: ;
    MEM32(ebp + -64) = eax;

loc_000B464D: ;
    MEM32(ebp + -180) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -220) = edx;
    goto loc_000B4875;

loc_000B4661: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax + esi;
    MEM32(ebp + -188) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4712; /* je: equal / zero */

loc_000B467A: ;
    MEM16(esi) = LO16(edi);
    MEM16(ebx + 2) = LO16(edi);
    SET_LO8(eax, MEM8(esi + 5));
    SET_LO8(eax, LO8(eax) & 0xF8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B46D4; /* jae: above or equal (unsigned >=) */

loc_000B4690: ;
    eax = ZX16(LO16(edi));
    ecx = MEM32(ebp + 8);
    eax = ecx + eax * 8 + 0x180;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B46FE; /* jne: not equal / not zero */

loc_000B46A4: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -252) = edx;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -196) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx));
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    goto loc_000B46FE;

loc_000B46D4: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -72) = edx;
    eax = MEM32(edx);

loc_000B46E2: ;
    MEM32(ebp + -112) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B46FB; /* je: equal / zero */

loc_000B46E9: ;
    ecx = eax + -8;
    MEM32(ebp + -228) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B46FB; /* jbe: below or equal (unsigned <=) */

loc_000B46F7: ;
    eax = MEM32(eax);
    goto loc_000B46E2;

loc_000B46FB: ;
    MEM32(ebp + -72) = eax;

loc_000B46FE: ;
    MEM32(ebp + -204) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -156) = edx;
    goto loc_000B4875;

loc_000B4712: ;
    MEM8(esi + 5) = LO8(eax);
    eax = MEM32(ebx + 8);
    MEM32(ebp + -160) = eax;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + -168) = ecx;
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4772; /* jne: not equal / not zero */

loc_000B4730: ;
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B4772; /* jae: above or equal (unsigned >=) */

loc_000B4739: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -176) = eax;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -96) = edx;
    edx = MEM32(ebp + 8);
    eax = eax + edx + 0x160;
    MEM32(ebp + -136) = eax;
    eax = ZX8(MEM8(eax));
    eax = eax ^ MEM32(ebp + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -136);
    MEM8(ecx) = LO8(eax);
    goto loc_000B4775;

loc_000B4772: ;
    edx = MEM32(ebp + 8);

loc_000B4775: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B47B2; /* je: equal / zero */

loc_000B477D: ;
    eax = ZX16(MEM16(ebx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4799; /* je: equal / zero */

loc_000B478E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B4799; /* jbe: below or equal (unsigned <=) */

loc_000B4793: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;

loc_000B4799: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD04); PUSH32(esp, 0x000B47A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47A3u); } /* indirect call */
    }

loc_000B47A9: ;
    MEM32(ebp + -184) = eax;
    edx = MEM32(ebp + 8);

loc_000B47B2: ;
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edx + 0x30) = MEM32(edx + 0x30) - eax;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -120) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B488D; /* ja: above (unsigned >) */

loc_000B47CC: ;
    MEM16(esi) = LO16(edi);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B47E1; /* jne: not equal / not zero */

loc_000B47D5: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + esi + 2) = LO16(edi);
    goto loc_000B47F2;

loc_000B47E1: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(edx + eax * 4 + 0x60);
    MEM32(ebp + -192) = eax;
    MEM32(eax + 0x40) = esi;

loc_000B47F2: ;
    SET_LO8(eax, MEM8(esi + 5));
    SET_LO8(eax, LO8(eax) & 0xF8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B483F; /* jae: above or equal (unsigned >=) */

loc_000B4801: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 8 + 0x180;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4866; /* jne: not equal / not zero */

loc_000B4812: ;
    ecx = ZX16(MEM16(esi));
    ebx = ecx;
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -84) = ebx;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -200) = ebx;
    ecx = MEM32(ebp + -84);
    edx = ecx + edx + 0x160;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx) = LO8(ecx);
    goto loc_000B4866;

loc_000B483F: ;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -68) = edx;
    eax = MEM32(edx);

loc_000B484A: ;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4863; /* je: equal / zero */

loc_000B4851: ;
    ecx = eax + -8;
    MEM32(ebp + -208) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B4863; /* jbe: below or equal (unsigned <=) */

loc_000B485F: ;
    eax = MEM32(eax);
    goto loc_000B484A;

loc_000B4863: ;
    MEM32(ebp + -68) = eax;

loc_000B4866: ;
    MEM32(ebp + -216) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -224) = edx;

loc_000B4875: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -44);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + edi;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B49EE;

loc_000B488D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4897u); RECOMP_ABI_CALL(0x000B207Fu, sub_000B207F); /* call 0x000B207F */

loc_000B4897: ;
    goto loc_000B49EE;

loc_000B489C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48BB; /* jne: not equal / not zero */

loc_000B48A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B48B0u); RECOMP_ABI_CALL(0x000B226Cu, sub_000B226C); /* call 0x000B226C */

loc_000B48B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B49EE; /* jne: not equal / not zero */

loc_000B48B8: ;
    esi = MEM32(ebp + -48);

loc_000B48BB: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B48CA; /* je: equal / zero */

loc_000B48C1: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000B49EE;

loc_000B48CA: ;
    MEM16(ebp + 0xE) = MEM16(ebp + 0xE) & 0xC003;
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4938; /* je: equal / zero */

loc_000B48D9: ;
    MEM8(ebp + 0xD) = MEM8(ebp + 0xD) & 0xF1;
    _fa = (uint32_t)(MEM8(ebp + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax & 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B48F1u); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B48F1: ;
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -4) = 2;
    SET_LO16(eax, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4911; /* je: equal / zero */

loc_000B4904: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000B4911; /* js: sign (negative) */

loc_000B4908: ;
    eax = ZX16(LO16(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4911: ;
    MEM32(ebp + -4) = 1;
    goto loc_000B4948;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000B4938: ;
    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4948; /* je: equal / zero */

loc_000B493F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4948: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B495Au); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_000B495A: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49EB; /* je: equal / zero */

loc_000B4965: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B499C; /* je: equal / zero */

loc_000B4974: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B497Au); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B497A: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4996; /* je: equal / zero */

loc_000B4985: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B498Bu); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B498B: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_000B499C;

loc_000B4996: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_000B499C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B49A5; /* jb: below (unsigned <) */

loc_000B49A3: ;
    eax = esi;

loc_000B49A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B49B1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000B49B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B49DA; /* jbe: below or equal (unsigned <=) */

loc_000B49B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B49DA; /* je: equal / zero */

loc_000B49BF: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_000B49DA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B49E8u); RECOMP_ABI_CALL(0x000B4001u, sub_000B4001); /* call 0x000B4001 */

loc_000B49E8: ;
    eax = MEM32(ebp + -52);

loc_000B49EB: ;
    MEM32(ebp + 0x10) = eax;

loc_000B49EE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A4F; /* jne: not equal / not zero */

loc_000B49F4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4A4F; /* je: equal / zero */

loc_000B49FA: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBDC); PUSH32(esp, 0x000B4A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A2Cu); } /* indirect call */
    }

loc_000B4A32: ;
    goto loc_000B4A4F;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B4A4F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4A5Cu); RECOMP_ABI_CALL(0x000B4AD0u, sub_000B4AD0); /* call 0x000B4AD0 */

loc_000B4A5C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;

loc_000B4AC8: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B477D
 * Original: 0x000B477D - 0x000B4AD0 (851 bytes, 264 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B477D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B477D: ;
    eax = ZX16(MEM16(ebx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4799; /* je: equal / zero */

loc_000B478E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B4799; /* jbe: below or equal (unsigned <=) */

loc_000B4793: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;

loc_000B4799: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD04); PUSH32(esp, 0x000B47A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47A3u); } /* indirect call */
    }

loc_000B47A9: ;
    MEM32(ebp + -184) = eax;
    edx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edx + 0x30) = MEM32(edx + 0x30) - eax;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -120) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B488D; /* ja: above (unsigned >) */

loc_000B47CC: ;
    MEM16(esi) = LO16(edi);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B47E1; /* jne: not equal / not zero */

loc_000B47D5: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + esi + 2) = LO16(edi);
    goto loc_000B47F2;

loc_000B47E1: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(edx + eax * 4 + 0x60);
    MEM32(ebp + -192) = eax;
    MEM32(eax + 0x40) = esi;

loc_000B47F2: ;
    SET_LO8(eax, MEM8(esi + 5));
    SET_LO8(eax, LO8(eax) & 0xF8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B483F; /* jae: above or equal (unsigned >=) */

loc_000B4801: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 8 + 0x180;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4866; /* jne: not equal / not zero */

loc_000B4812: ;
    ecx = ZX16(MEM16(esi));
    ebx = ecx;
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -84) = ebx;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -200) = ebx;
    ecx = MEM32(ebp + -84);
    edx = ecx + edx + 0x160;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx) = LO8(ecx);
    goto loc_000B4866;

loc_000B483F: ;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -68) = edx;
    eax = MEM32(edx);

loc_000B484A: ;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4863; /* je: equal / zero */

loc_000B4851: ;
    ecx = eax + -8;
    MEM32(ebp + -208) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B4863; /* jbe: below or equal (unsigned <=) */

loc_000B485F: ;
    eax = MEM32(eax);
    goto loc_000B484A;

loc_000B4863: ;
    MEM32(ebp + -68) = eax;

loc_000B4866: ;
    MEM32(ebp + -216) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -224) = edx;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -44);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + edi;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B49EE;

loc_000B488D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B4897u); RECOMP_ABI_CALL(0x000B207Fu, sub_000B207F); /* call 0x000B207F */

loc_000B4897: ;
    goto loc_000B49EE;

    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48BB; /* jne: not equal / not zero */

loc_000B48A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B48B0u); RECOMP_ABI_CALL(0x000B226Cu, sub_000B226C); /* call 0x000B226C */

loc_000B48B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B49EE; /* jne: not equal / not zero */

loc_000B48B8: ;
    esi = MEM32(ebp + -48);

loc_000B48BB: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B48CA; /* je: equal / zero */

loc_000B48C1: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000B49EE;

loc_000B48CA: ;
    MEM16(ebp + 0xE) = MEM16(ebp + 0xE) & 0xC003;
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4938; /* je: equal / zero */

loc_000B48D9: ;
    MEM8(ebp + 0xD) = MEM8(ebp + 0xD) & 0xF1;
    _fa = (uint32_t)(MEM8(ebp + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax & 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B48F1u); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B48F1: ;
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -4) = 2;
    SET_LO16(eax, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4911; /* je: equal / zero */

loc_000B4904: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000B4911; /* js: sign (negative) */

loc_000B4908: ;
    eax = ZX16(LO16(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4911: ;
    MEM32(ebp + -4) = 1;
    goto loc_000B4948;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000B4938: ;
    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4948; /* je: equal / zero */

loc_000B493F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4948: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B495Au); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_000B495A: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49EB; /* je: equal / zero */

loc_000B4965: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B499C; /* je: equal / zero */

loc_000B4974: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B497Au); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B497A: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4996; /* je: equal / zero */

loc_000B4985: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B498Bu); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B498B: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_000B499C;

loc_000B4996: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_000B499C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B49A5; /* jb: below (unsigned <) */

loc_000B49A3: ;
    eax = esi;

loc_000B49A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, 0x000B49B1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000B49B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B49DA; /* jbe: below or equal (unsigned <=) */

loc_000B49B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B49DA; /* je: equal / zero */

loc_000B49BF: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_000B49DA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B49E8u); RECOMP_ABI_CALL(0x000B4001u, sub_000B4001); /* call 0x000B4001 */

loc_000B49E8: ;
    eax = MEM32(ebp + -52);

loc_000B49EB: ;
    MEM32(ebp + 0x10) = eax;

loc_000B49EE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A4F; /* jne: not equal / not zero */

loc_000B49F4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4A4F; /* je: equal / zero */

loc_000B49FA: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBDC); PUSH32(esp, 0x000B4A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A2Cu); } /* indirect call */
    }

loc_000B4A32: ;
    goto loc_000B4A4F;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B4A4F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B4A5Cu); RECOMP_ABI_CALL(0x000B4AD0u, sub_000B4AD0); /* call 0x000B4AD0 */

loc_000B4A5C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B491A
 * Original: 0x000B491A - 0x000B4AD0 (438 bytes, 135 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B491A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B491A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4948; /* je: equal / zero */

loc_000B493F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4948: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B495Au); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_000B495A: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49EB; /* je: equal / zero */

loc_000B4965: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B499C; /* je: equal / zero */

loc_000B4974: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B497Au); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B497A: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4996; /* je: equal / zero */

loc_000B4985: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B498Bu); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B498B: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_000B499C;

loc_000B4996: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_000B499C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B49A5; /* jb: below (unsigned <) */

loc_000B49A3: ;
    eax = esi;

loc_000B49A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, 0x000B49B1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000B49B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B49DA; /* jbe: below or equal (unsigned <=) */

loc_000B49B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B49DA; /* je: equal / zero */

loc_000B49BF: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_000B49DA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B49E8u); RECOMP_ABI_CALL(0x000B4001u, sub_000B4001); /* call 0x000B4001 */

loc_000B49E8: ;
    eax = MEM32(ebp + -52);

loc_000B49EB: ;
    MEM32(ebp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A4F; /* jne: not equal / not zero */

loc_000B49F4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4A4F; /* je: equal / zero */

loc_000B49FA: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBDC); PUSH32(esp, 0x000B4A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A2Cu); } /* indirect call */
    }

loc_000B4A32: ;
    goto loc_000B4A4F;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B4A4F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B4A5Cu); RECOMP_ABI_CALL(0x000B4AD0u, sub_000B4AD0); /* call 0x000B4AD0 */

loc_000B4A5C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B491E
 * Original: 0x000B491E - 0x000B4AD0 (434 bytes, 132 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B491E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B491E: ;
    esp = MEM32(ebp + -24);
    ebx = MEM32(ebp + -100);
    SET_LO8(eax, MEM8(ebx + 5));
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 5) = LO8(eax);
    MEM32(ebp + -4) = 1;
    esi = MEM32(ebp + -48);
    goto loc_000B4948;

    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4948; /* je: equal / zero */

loc_000B493F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B4948: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B495Au); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_000B495A: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49EB; /* je: equal / zero */

loc_000B4965: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B499C; /* je: equal / zero */

loc_000B4974: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B497Au); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B497A: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4996; /* je: equal / zero */

loc_000B4985: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B498Bu); RECOMP_ABI_CALL(0x000B2179u, sub_000B2179); /* call 0x000B2179 */

loc_000B498B: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_000B499C;

loc_000B4996: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_000B499C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B49A5; /* jb: below (unsigned <) */

loc_000B49A3: ;
    eax = esi;

loc_000B49A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, 0x000B49B1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000B49B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B49DA; /* jbe: below or equal (unsigned <=) */

loc_000B49B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B49DA; /* je: equal / zero */

loc_000B49BF: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_000B49DA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000B49E8u); RECOMP_ABI_CALL(0x000B4001u, sub_000B4001); /* call 0x000B4001 */

loc_000B49E8: ;
    eax = MEM32(ebp + -52);

loc_000B49EB: ;
    MEM32(ebp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A4F; /* jne: not equal / not zero */

loc_000B49F4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4A4F; /* je: equal / zero */

loc_000B49FA: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBDC); PUSH32(esp, 0x000B4A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A2Cu); } /* indirect call */
    }

loc_000B4A32: ;
    goto loc_000B4A4F;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B4A4F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B4A5Cu); RECOMP_ABI_CALL(0x000B4AD0u, sub_000B4AD0); /* call 0x000B4AD0 */

loc_000B4A5C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4A34
 * Original: 0x000B4A34 - 0x000B4AD0 (156 bytes, 44 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4A34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4A34: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4A48
 * Original: 0x000B4A48 - 0x000B4AD0 (136 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4A48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4A48: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B4A5Cu); RECOMP_ABI_CALL(0x000B4AD0u, sub_000B4AD0); /* call 0x000B4AD0 */

loc_000B4A5C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4AC6; /* jne: not equal / not zero */

loc_000B4A64: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A97; /* je: equal / zero */

loc_000B4A88: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A91u); } /* indirect call */
    }

loc_000B4A94: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4A97: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AC6; /* je: equal / zero */

loc_000B4AB7: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B4AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AC0u); } /* indirect call */
    }

loc_000B4AC3: ;
    ecx = MEM32(ebp + 0x10);

loc_000B4AC6: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000B4ACDu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000B4ACD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4AD0
 * Original: 0x000B4AD0 - 0x000B4AE6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4AD0: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AE5; /* je: equal / zero */

loc_000B4AD6: ;
    eax = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x000B4AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4ADFu); } /* indirect call */
    }

loc_000B4AE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4AE6
 * Original: 0x000B4AE6 - 0x000B4B01 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4AE6(void)
{

loc_000B4AE6: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x98B860);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98B880);
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x000B4B00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4AFAu); } /* indirect call */
    }

loc_000B4B00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4B01
 * Original: 0x000B4B01 - 0x000B4B5B (90 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4B01(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B4B01: ;
    _fa = (uint32_t)(MEM32(0x98B8A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B8A8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B4B0E; /* jne: not equal / not zero */

loc_000B4B0A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000B4B0E: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B4B17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B11u); } /* indirect call */
    }

loc_000B4B17: ;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD10); PUSH32(esp, 0x000B4B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B19u); } /* indirect call */
    }

loc_000B4B1F: ;
    ecx = MEM32(0x98B894);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B4B3D; /* jb: below (unsigned <) */

loc_000B4B29: ;
    esi = MEM32(0x98B890);
    if (CMP_A(_fa, _fb)) goto loc_000B4B35; /* ja: above (unsigned >) */

loc_000B4B31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B4B3D; /* jb: below (unsigned <) */

loc_000B4B35: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ecx;
    goto loc_000B4B41;

loc_000B4B3D: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B4B41: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B4B49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B43u); } /* indirect call */
    }

loc_000B4B49: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B4B57u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_000B4B57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4B0E
 * Original: 0x000B4B0E - 0x000B4B5B (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4B0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B4B0E: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B4B17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B11u); } /* indirect call */
    }

loc_000B4B17: ;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD10); PUSH32(esp, 0x000B4B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B19u); } /* indirect call */
    }

loc_000B4B1F: ;
    ecx = MEM32(0x98B894);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B4B3D; /* jb: below (unsigned <) */

loc_000B4B29: ;
    esi = MEM32(0x98B890);
    if (CMP_A(_fa, _fb)) goto loc_000B4B35; /* ja: above (unsigned >) */

loc_000B4B31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B4B3D; /* jb: below (unsigned <) */

loc_000B4B35: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ecx;
    goto loc_000B4B41;

loc_000B4B3D: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B4B41: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B4B49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B43u); } /* indirect call */
    }

loc_000B4B49: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B4B57u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_000B4B57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4B5B
 * Original: 0x000B4B5B - 0x000B4B6D (18 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4B5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4B5B: ;
    _fa = (uint32_t)(MEM32(0x98B8A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B8A8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4B6A; /* je: equal / zero */

loc_000B4B64: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD14); PUSH32(esp, 0x000B4B6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B64u); } /* indirect call */
    }

loc_000B4B6A: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4B6D
 * Original: 0x000B4B6D - 0x000B4BE1 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B4B6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4B6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB4B5B);
    PUSH32(esp, 0x98B860);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x000B4B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B7Fu); } /* indirect call */
    }

loc_000B4B85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x98B880);
    { uint32_t _icall_target = MEM32(0x22BC64); PUSH32(esp, 0x000B4B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B8Cu); } /* indirect call */
    }

loc_000B4B92: ;
    eax = MEM32(0x22BCBC);
    MEM32(0x98B8A8) = MEM32(0x98B8A8) & 0;
    _fa = (uint32_t)(MEM32(0x98B8A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x98B8AC) = MEM32(0x98B8AC) & 0;
    _fa = (uint32_t)(MEM32(0x98B8AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4BDA; /* jne: not equal / not zero */

loc_000B4BAA: ;
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
    PUSH32(esp, 0x000B4BBFu); RECOMP_ABI_CALL(0x000AEE7Eu, sub_000AEE7E); /* call 0x000AEE7E */

loc_000B4BBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4BD0; /* jne: not equal / not zero */

loc_000B4BC3: ;
    eax = MEM32(ebp + -4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x98B8A8) = eax;
    goto loc_000B4BDA;

loc_000B4BD0: ;
    MEM32(0x98B8AC) = 1;

loc_000B4BDA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4BDFu); RECOMP_ABI_CALL(0x000B4AE6u, sub_000B4AE6); /* call 0x000B4AE6 */

loc_000B4BDF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4BE1
 * Original: 0x000B4BE1 - 0x000B4BFA (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4BE1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4BE1: ;
    eax = MEM32(0x22BD18);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F3ED8);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x000B4BF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4BF3u); } /* indirect call */
    }

loc_000B4BF9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4BFA
 * Original: 0x000B4BFA - 0x000B4BFD (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4BFA(void)
{

loc_000B4BFA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4BFD
 * Original: 0x000B4BFD - 0x000B4C53 (86 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4BFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4BFD: ;
    PUSH32(esp, esi);
    esi = MEM32(0x22BD18);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B4C0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4C04u); } /* indirect call */
    }

loc_000B4C0A: ;
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x10) = 0xB4BFA;
    MEM32(esi + 0x14) = 0xB4BE1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B4C20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4C1Au); } /* indirect call */
    }

loc_000B4C20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C38; /* je: equal / zero */

loc_000B4C28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F3ED8);
    { uint32_t _icall_target = MEM32(0x22BC60); PUSH32(esp, 0x000B4C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4C32u); } /* indirect call */
    }

loc_000B4C38: ;
    eax = MEM32(0x98B8C8);
    ecx = MEM32(0x98B8CC);
    edx = eax;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_000B4C50; /* je: equal / zero */

loc_000B4C49: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4C50u); RECOMP_ABI_CALL(0x000B4C64u, sub_000B4C64); /* call 0x000B4C64 */

loc_000B4C50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4C60
 * Original: 0x000B4C60 - 0x000B4C64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4C60: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_000B4C64
 * Original: 0x000B4C64 - 0x000B4C89 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4C64(void)
{

loc_000B4C64: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    RECOMP_UNIMPL("sgdt [esp + 6]", 0x000B4C6Cu); /* TODO: sgdt [esp + 6] */
    eax = MEM32(esp + 8);
    RECOMP_UNIMPL("cli", 0x000B4C75u); /* TODO: cli */
    { uint32_t _tmp = MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    ecx = _tmp; }
    { uint32_t _tmp = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = _tmp; }
    RECOMP_UNIMPL("sti", 0x000B4C7Cu); /* TODO: sti */
    RECOMP_UNIMPL("ljmp 8:0xb4c84", 0x000B4C7Du); /* TODO: ljmp 8:0xb4c84 */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4D22
 * Original: 0x000B4D22 - 0x000B4D41 (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4D22(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4D22: ;
    fp_push(1.0); /* fld1 */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4D64
 * Original: 0x000B4D64 - 0x000B4D8C (40 bytes, 16 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B4D64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4D64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4DAC
 * Original: 0x000B4DAC - 0x000B4DD9 (45 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4DAC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4DAC: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4DF9
 * Original: 0x000B4DF9 - 0x000B4E20 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4DF9(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4DF9: ;
    fp_push(1.0); /* fld1 */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4E20
 * Original: 0x000B4E20 - 0x000B4E4D (45 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4E20: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4E6D
 * Original: 0x000B4E6D - 0x000B4E92 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4E6D(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4E6D: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4E92
 * Original: 0x000B4E92 - 0x000B4EB6 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4E92(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4E92: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 1); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4EB6
 * Original: 0x000B4EB6 - 0x000B4EE6 (48 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4EB6(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4EB6: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4EE6
 * Original: 0x000B4EE6 - 0x000B4F05 (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4EE6(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4EE6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4F05
 * Original: 0x000B4F05 - 0x000B4F53 (78 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B4F05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B4F05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    esi = ebp + -12;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    eax = MEM32(ebp + 8);
    edi = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4F53
 * Original: 0x000B4F53 - 0x000B4F7D (42 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4F53(void)
{

loc_000B4F53: ;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B4F7D
 * Original: 0x000B4F7D - 0x000B4FB7 (58 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4F7D(void)
{

loc_000B4F7D: ;
    ecx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm1, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm2, edx + 4); /* movhps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4FB7
 * Original: 0x000B4FB7 - 0x000B4FE9 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4FB7(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4FB7: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4FE9
 * Original: 0x000B4FE9 - 0x000B503F (86 bytes, 34 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B4FE9(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B4FE9: ;
    eax = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B503F
 * Original: 0x000B503F - 0x000B5071 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B503F(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B503F: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5071
 * Original: 0x000B5071 - 0x000B50A7 (54 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5071(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5071: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_MEM(edx); /* movups */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_MEM(ecx); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B50A7
 * Original: 0x000B50A7 - 0x000B50CE (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B50A7(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B50A7: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B50CE
 * Original: 0x000B50CE - 0x000B5104 (54 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B50CE(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B50CE: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    xmm1 = XMM_MEM(edx); /* movups */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_MEM(ecx); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5104
 * Original: 0x000B5104 - 0x000B5126 (34 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5104(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5104: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5126
 * Original: 0x000B5126 - 0x000B5145 (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5126(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5126: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5145
 * Original: 0x000B5145 - 0x000B5175 (48 bytes, 17 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B5145(void)
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

loc_000B5145: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(0x281C00)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B516E; /* jp: parity */

loc_000B515C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B5170; /* jp: parity */

loc_000B5169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B5172;

loc_000B516E: ;
    fp_pop(); /* fstp st(0) */

loc_000B5170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B5172: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B518A
 * Original: 0x000B518A - 0x000B5209 (127 bytes, 51 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B518A(void)
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

loc_000B518A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5199u); RECOMP_ABI_CALL(0x000B4E92u, sub_000B4E92); /* call 0x000B4E92 */

loc_000B5199: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B51AFu); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B51AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B51C6; /* je: equal / zero */

loc_000B51B3: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5204; /* je: equal / zero */

loc_000B51BA: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 4);

loc_000B51C1: ;
    MEM32(eax + 4) = ecx;
    goto loc_000B5204;

loc_000B51C6: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_000B51FB; /* jne: not equal / not zero */

loc_000B51D9: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax) = ecx;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    goto loc_000B51C1;

loc_000B51FB: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B5204: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5209
 * Original: 0x000B5209 - 0x000B5297 (142 bytes, 59 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5209: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); /* fsubr st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5297
 * Original: 0x000B5297 - 0x000B5346 (175 bytes, 69 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5297(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5297: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5346
 * Original: 0x000B5346 - 0x000B5389 (67 bytes, 28 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5346: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B53BA
 * Original: 0x000B53BA - 0x000B5421 (103 bytes, 36 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B53BA(void)
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

loc_000B53BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_ADD(xmm2, XMM_MEM(ecx + 0x30)); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE_LOW(eax, xmm2); /* movlps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xFF); /* shufps */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5405u); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B5405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000B541D; /* jne: not equal / not zero */

loc_000B540C: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B541D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B544E
 * Original: 0x000B544E - 0x000B54C9 (123 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B544E(void)
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

loc_000B544E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B545Fu); RECOMP_ABI_CALL(0x000B4EB6u, sub_000B4EB6); /* call 0x000B4EB6 */

loc_000B545F: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5475u); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B5475: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5487; /* je: equal / zero */

loc_000B5479: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B54C3; /* je: equal / zero */

loc_000B5480: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_000B54C3;

loc_000B5487: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B54B2; /* jne: not equal / not zero */

loc_000B5497: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -12;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B54ABu); RECOMP_ABI_CALL(0x000B4D64u, sub_000B4D64); /* call 0x000B4D64 */

loc_000B54AB: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_000B5480;

loc_000B54B2: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B54C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B54C9
 * Original: 0x000B54C9 - 0x000B5577 (174 bytes, 71 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B54C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B54C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); /* fsubr st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5577
 * Original: 0x000B5577 - 0x000B5648 (209 bytes, 82 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5577(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5577: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5648
 * Original: 0x000B5648 - 0x000B56A5 (93 bytes, 37 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5648(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5648: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B56E6
 * Original: 0x000B56E6 - 0x000B5764 (126 bytes, 40 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B56E6(void)
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

loc_000B56E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, XMM_MEM(ecx + 0x30)); /* addps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    XMM_STORE_LOW(eax, xmm2); /* movlps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xFE); /* shufps */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xFF); /* shufps */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B574Au); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B574A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B575D; /* jne: not equal / not zero */

loc_000B574E: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B575Du); RECOMP_ABI_CALL(0x000B4D22u, sub_000B4D22); /* call 0x000B4D22 */

loc_000B575D: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5764
 * Original: 0x000B5764 - 0x000B57A9 (69 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5764(void)
{

loc_000B5764: ;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    eax = MEM32(esp + 4);
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    XMM_STORE_LOW(eax, xmm2); /* movlps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm2); /* movhlps */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B57A9
 * Original: 0x000B57A9 - 0x000B58BC (275 bytes, 108 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B57A9(void)
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

loc_000B57A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esi = esp + 0x10;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B582A; /* ja: above (unsigned >) */

loc_000B57E4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB58BC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000B57EBu) goto loc_000B57EB;
    if (_jt == 0x000B57F7u) goto loc_000B57F7;
    if (_jt == 0x000B57FBu) goto loc_000B57FB;
    if (_jt == 0x000B57FFu) goto loc_000B57FF;
    if (_jt == 0x000B5803u) goto loc_000B5803;
    if (_jt == 0x000B5807u) goto loc_000B5807;
    if (_jt == 0x000B580Au) goto loc_000B580A;
    if (_jt == 0x000B580Eu) goto loc_000B580E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B57EB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B57F5u); RECOMP_ABI_CALL(0x000B4FE9u, sub_000B4FE9); /* call 0x000B4FE9 */

loc_000B57F5: ;
    goto loc_000B582A;

loc_000B57F7: ;
    esi = ebx;
    goto loc_000B582A;

loc_000B57FB: ;
    esi = edi;
    goto loc_000B582A;

loc_000B57FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_000B5820;

loc_000B5803: ;
    esi = ecx;
    goto loc_000B582A;

loc_000B5807: ;
    PUSH32(esp, ebx);
    goto loc_000B580B;

loc_000B580A: ;
    PUSH32(esp, edi);

loc_000B580B: ;
    PUSH32(esp, ecx);
    goto loc_000B5820;

loc_000B580E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B581Au); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B581A: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_000B5820: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B582Au); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B582A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5837u); RECOMP_ABI_CALL(0x000B56E6u, sub_000B56E6); /* call 0x000B56E6 */

loc_000B5837: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58B1; /* je: equal / zero */

loc_000B583E: ;
    fp_push(MEMF(esi)); /* fld float */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5856; /* jge: greater or equal (signed >=) */

loc_000B5850: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B5856: ;
    ecx = MEM32(eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push((double)SMEM32(eax)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B586C; /* jge: greater or equal (signed >=) */

loc_000B5866: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B586C: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5885; /* jge: greater or equal (signed >=) */

loc_000B587F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B5885: ;
    ecx = MEM32(eax + 4);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B589D; /* jge: greater or equal (signed >=) */

loc_000B5897: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B589D: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x10)); /* fadd dword ptr [eax + 0x10] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B58B1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B58DC
 * Original: 0x000B58DC - 0x000B5A08 (300 bytes, 121 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B58DC(void)
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

loc_000B58DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B5968; /* ja: above (unsigned >) */

loc_000B5915: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB5A08); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000B591Cu) goto loc_000B591C;
    if (_jt == 0x000B5928u) goto loc_000B5928;
    if (_jt == 0x000B592Bu) goto loc_000B592B;
    if (_jt == 0x000B592Eu) goto loc_000B592E;
    if (_jt == 0x000B5932u) goto loc_000B5932;
    if (_jt == 0x000B5935u) goto loc_000B5935;
    if (_jt == 0x000B5938u) goto loc_000B5938;
    if (_jt == 0x000B593Cu) goto loc_000B593C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B591C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5926u); RECOMP_ABI_CALL(0x000B4FE9u, sub_000B4FE9); /* call 0x000B4FE9 */

loc_000B5926: ;
    goto loc_000B5968;

loc_000B5928: ;
    PUSH32(esp, ebx);
    goto loc_000B595D;

loc_000B592B: ;
    PUSH32(esp, edi);
    goto loc_000B595D;

loc_000B592E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_000B594E;

loc_000B5932: ;
    PUSH32(esp, ecx);
    goto loc_000B595D;

loc_000B5935: ;
    PUSH32(esp, ebx);
    goto loc_000B5939;

loc_000B5938: ;
    PUSH32(esp, edi);

loc_000B5939: ;
    PUSH32(esp, ecx);
    goto loc_000B594E;

loc_000B593C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5948u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B5948: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_000B594E: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5958u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B5958: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_000B595D: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5968u); RECOMP_ABI_CALL(0x000B602Du, sub_000B602D); /* call 0x000B602D */

loc_000B5968: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B59EC; /* je: equal / zero */

loc_000B596F: ;
    ecx = MEM32(eax);
    fp_push((double)SMEM32(eax)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B597D; /* jge: greater or equal (signed >=) */

loc_000B5977: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B597D: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5992; /* jge: greater or equal (signed >=) */

loc_000B598C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B5992: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    esi = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B59B1; /* jge: greater or equal (signed >=) */

loc_000B59AB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B59B1: ;
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 4) - fp_top()); /* fsubr dword ptr [ecx + 4] */
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B59C4; /* jge: greater or equal (signed >=) */

loc_000B59BE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B59C4: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, esi);
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B59F7;

loc_000B59EC: ;
    esi = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));

loc_000B59F7: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B59FDu); RECOMP_ABI_CALL(0x000B56E6u, sub_000B56E6); /* call 0x000B56E6 */

loc_000B59FD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5A28
 * Original: 0x000B5A28 - 0x000B5B18 (240 bytes, 97 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B5A28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B5A28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    PUSH32(esp, edi);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -4)); /* fsub dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    eax = MEM32(ebp + 8);
    esi = ebp + -28;
    edi = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5B18
 * Original: 0x000B5B18 - 0x000B5B99 (129 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B5B18(void)
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

loc_000B5B18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B29u); RECOMP_ABI_CALL(0x000B4FB7u, sub_000B4FB7); /* call 0x000B4FB7 */

loc_000B5B29: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B3Fu); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B5B3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5B52; /* je: equal / zero */

loc_000B5B43: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5B93; /* je: equal / zero */

loc_000B5B4A: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_000B5B93;

loc_000B5B52: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5B7D; /* jne: not equal / not zero */

loc_000B5B62: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -16;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B76u); RECOMP_ABI_CALL(0x000B4DACu, sub_000B4DAC); /* call 0x000B4DAC */

loc_000B5B76: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_000B5B4A;

loc_000B5B7D: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B5B93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5B99
 * Original: 0x000B5B99 - 0x000B5C6A (209 bytes, 86 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5B99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B5B99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C24C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -4) - fp_top()); /* fsubr dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 4) & 7]); /* fsub st(4) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    POP32(esp, edi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5C6A
 * Original: 0x000B5C6A - 0x000B5D5D (243 bytes, 95 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5C6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5C6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x22C164)); /* fld float */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5D5D
 * Original: 0x000B5D5D - 0x000B5DD4 (119 bytes, 46 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5D5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5D5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x18)); /* fmul dword ptr [ebp + 0x18] */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5E1A
 * Original: 0x000B5E1A - 0x000B5EE4 (202 bytes, 80 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B5E1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B5E1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_stack[(g_fp_top + 5) & 7] = fp_top(); fp_pop(); /* fstp st(5) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5EE4
 * Original: 0x000B5EE4 - 0x000B5FE2 (254 bytes, 69 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5EE4(void)
{

loc_000B5EE4: ;
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
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5FE2
 * Original: 0x000B5FE2 - 0x000B602D (75 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5FE2(void)
{

loc_000B5FE2: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm3 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm2); /* unpcklps */
    xmm1 = XMM_UNPACK_HIGH(xmm1, xmm2); /* unpckhps */
    xmm3 = XMM_UNPACK_LOW(xmm3, xmm5); /* unpcklps */
    xmm4 = XMM_UNPACK_HIGH(xmm4, xmm5); /* unpckhps */
    XMM_STORE_LOW(eax, xmm0); /* movlps */
    XMM_STORE_LOW(eax + 8, xmm3); /* movlps */
    XMM_STORE_HIGH(eax + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + 0x18, xmm3); /* movhps */
    XMM_STORE_LOW(eax + 0x20, xmm1); /* movlps */
    XMM_STORE_LOW(eax + 0x28, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + 0x30, xmm1); /* movhps */
    XMM_STORE_HIGH(eax + 0x38, xmm4); /* movhps */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B602D
 * Original: 0x000B602D - 0x000B63BA (909 bytes, 353 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B602D(void)
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

loc_000B602D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + -32) = ecx;
    fp_push(MEMF(ebp + -32)); /* fld float */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(ebp + -24) = ecx;
    fp_push(MEMF(ebp + -28)); /* fld float */
    ecx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x34);
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(eax + 0x38);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -16) = ecx;
    fp_push(MEMF(ebp + -4)); /* fld float */
    ecx = MEM32(eax + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEM32(ebp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEMF(ebp + -40) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    MEMF(ebp + -32) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEMF(ebp + -36) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -84) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -44)); /* fmul dword ptr [ebp - 0x2c] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -52)); /* fmul dword ptr [ebp - 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -48)); /* fmul dword ptr [ebp - 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -44)); /* fmul dword ptr [ebp - 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -52)); /* fmul dword ptr [ebp - 0x34] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -48)); /* fmul dword ptr [ebp - 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -72) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -40)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    MEM32(ebp + -56) = ecx;
    fp_push(MEMF(ebp + -36)); /* fld float */
    ecx = MEM32(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(ebp + -24) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x24);
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(eax + 0x34);
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEM32(ebp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -56)); /* fmul dword ptr [ebp - 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B630F; /* je: equal / zero */

loc_000B630D: ;
    MEMF(eax) = (float)fp_top(); /* fst */

loc_000B630F: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, ecx);
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6325u); RECOMP_ABI_CALL(0x00152F94u, sub_00152F94); /* call 0x00152F94 */

loc_000B6325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B63B6; /* je: equal / zero */

loc_000B632F: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -72)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -76)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_000B63B6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6472
 * Original: 0x000B6472 - 0x000B64EC (122 bytes, 48 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6472(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6472: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + -4);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = ecx;
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B64EC
 * Original: 0x000B64EC - 0x000B6567 (123 bytes, 49 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B64EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B64EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -4;
    MEM32(ebp + -12) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6567
 * Original: 0x000B6567 - 0x000B65E3 (124 bytes, 49 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6567(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6567: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    fp_push(0.0); /* fldz */
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B65E3
 * Original: 0x000B65E3 - 0x000B66E2 (255 bytes, 105 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B65E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B65E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -4;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    esi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -4)); /* fsub dword ptr [ebp - 4] */
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -28;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6621u); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B6621: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B66E2
 * Original: 0x000B66E2 - 0x000B67C4 (226 bytes, 87 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B66E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B66E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 8);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -16)); /* fsub dword ptr [ebp - 0x10] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B67C4
 * Original: 0x000B67C4 - 0x000B67FD (57 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B67C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B67C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -16;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B67EAu); RECOMP_ABI_CALL(0x000B75E5u, sub_000B75E5); /* call 0x000B75E5 */

loc_000B67EA: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B67F6u); RECOMP_ABI_CALL(0x000B66E2u, sub_000B66E2); /* call 0x000B66E2 */

loc_000B67F6: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B67FD
 * Original: 0x000B67FD - 0x000B6A1D (544 bytes, 194 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B67FD(void)
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

loc_000B67FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6988; /* je: equal / zero */

loc_000B6816: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    fp_push(0.0); /* fldz */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6934; /* je: equal / zero */

loc_000B6822: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    fp_push(0.0); /* fldz */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 8);
    fp_push(0.0); /* fldz */
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x54;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(0.0); /* fldz */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B688Fu); RECOMP_ABI_CALL(0x000B66E2u, sub_000B66E2); /* call 0x000B66E2 */

loc_000B688F: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6911; /* je: equal / zero */

loc_000B689B: ;
    eax = esp + 0x94;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B68A8u); RECOMP_ABI_CALL(0x000B5FE2u, sub_000B5FE2); /* call 0x000B5FE2 */

loc_000B68A8: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B68B1u); RECOMP_ABI_CALL(0x000B4FE9u, sub_000B4FE9); /* call 0x000B4FE9 */

loc_000B68B1: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B68DAu); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B68DA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B68E6u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B68E6: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B68F2u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B68F2: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B6991;

loc_000B6911: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B691Au); RECOMP_ABI_CALL(0x000B5FE2u, sub_000B5FE2); /* call 0x000B5FE2 */

loc_000B691A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6926u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B6926: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6932u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B6932: ;
    goto loc_000B6991;

loc_000B6934: ;
    esi = MEM32(ebp + 8);
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(eax + 8);
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x28) = eax;
    goto loc_000B6991;

loc_000B6988: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6991u); RECOMP_ABI_CALL(0x000B4FE9u, sub_000B4FE9); /* call 0x000B4FE9 */

loc_000B6991: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B69F2; /* je: equal / zero */

loc_000B6997: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = esp + 0x54;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B69A4u); RECOMP_ABI_CALL(0x000B66E2u, sub_000B66E2); /* call 0x000B66E2 */

loc_000B69A4: ;
    edx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B69ED; /* je: equal / zero */

loc_000B69B2: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B69D1u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B69D1: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 8)); /* fadd dword ptr [edx + 8] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B69F2;

loc_000B69ED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B69F2u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B69F2: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6A13; /* je: equal / zero */

loc_000B69F9: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B6A13: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6A1D
 * Original: 0x000B6A1D - 0x000B6AFE (225 bytes, 87 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B6A1D(void)
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

loc_000B6A1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    fp_push(0.0); /* fldz */
    edx = MEM32(ebp + 8);
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(edx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(edx) = (float)fp_top(); /* fst */
    MEMF(edx + 0x14) = (float)fp_top(); /* fst */
    MEMF(edx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(edx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6AD4; /* je: equal / zero */

loc_000B6A7C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6A89u); RECOMP_ABI_CALL(0x000B66E2u, sub_000B66E2); /* call 0x000B66E2 */

loc_000B6A89: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6ACF; /* je: equal / zero */

loc_000B6A97: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6AB3u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B6AB3: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x30)); /* fadd dword ptr [edx + 0x30] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(edx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x38)); /* fadd dword ptr [edx + 0x38] */
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B6AD4;

loc_000B6ACF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6AD4u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_000B6AD4: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6AF5; /* je: equal / zero */

loc_000B6ADB: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x30)); /* fadd dword ptr [edx + 0x30] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x34)); /* fadd dword ptr [edx + 0x34] */
    MEMF(edx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x38)); /* fadd dword ptr [edx + 0x38] */
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B6AF5: ;
    eax = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6AFE
 * Original: 0x000B6AFE - 0x000B6BE9 (235 bytes, 91 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6AFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6AFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6B15u); RECOMP_ABI_CALL(0x000B4F53u, sub_000B4F53); /* call 0x000B4F53 */

loc_000B6B15: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6B1Fu); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B6B1F: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6B2Fu); RECOMP_ABI_CALL(0x000B4F05u, sub_000B4F05); /* call 0x000B4F05 */

loc_000B6B2F: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6B39u); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B6B39: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6B4Au); RECOMP_ABI_CALL(0x000B4F05u, sub_000B4F05); /* call 0x000B4F05 */

loc_000B6B4A: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    ecx = MEM32(ebp + -36);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -28);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -12);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -4);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    POP32(esp, esi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6BE9
 * Original: 0x000B6BE9 - 0x000B6CD4 (235 bytes, 91 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6BE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6BE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C00u); RECOMP_ABI_CALL(0x000B4F53u, sub_000B4F53); /* call 0x000B4F53 */

loc_000B6C00: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C0Au); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B6C0A: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C1Au); RECOMP_ABI_CALL(0x000B4F05u, sub_000B4F05); /* call 0x000B4F05 */

loc_000B6C1A: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C24u); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B6C24: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C35u); RECOMP_ABI_CALL(0x000B4F05u, sub_000B4F05); /* call 0x000B4F05 */

loc_000B6C35: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    ecx = MEM32(ebp + -36);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -28);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -12);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -4);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    POP32(esp, esi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6CD4
 * Original: 0x000B6CD4 - 0x000B6D40 (108 bytes, 41 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6CD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B6CD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6D40
 * Original: 0x000B6D40 - 0x000B6DAC (108 bytes, 43 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B6D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6DAC
 * Original: 0x000B6DAC - 0x000B6E40 (148 bytes, 54 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6DAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6DAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6E40
 * Original: 0x000B6E40 - 0x000B6ED4 (148 bytes, 56 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B6E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x18) / fp_top()); /* fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6ED4
 * Original: 0x000B6ED4 - 0x000B6F71 (157 bytes, 56 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6ED4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B6ED4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x20)); /* fsub dword ptr [ebp + 0x20] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x20) / fp_top()); /* fdivr dword ptr [ebp + 0x20] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6F71
 * Original: 0x000B6F71 - 0x000B7012 (161 bytes, 60 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B6F71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B6F71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x20) / fp_top()); /* fdivr dword ptr [ebp + 0x20] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7012
 * Original: 0x000B7012 - 0x000B7084 (114 bytes, 41 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7012(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B7012: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x22C164)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7084
 * Original: 0x000B7084 - 0x000B70F8 (116 bytes, 42 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7084(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B7084: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x22C164)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B70F8
 * Original: 0x000B70F8 - 0x000B719A (162 bytes, 62 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B70F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B70F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x20)); /* fsub dword ptr [ebp + 0x20] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B719A
 * Original: 0x000B719A - 0x000B723E (164 bytes, 63 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B719A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B719A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C164)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); /* fdivr st(2) */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x10)); /* fadd dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x18)); /* fadd dword ptr [ebp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B723E
 * Original: 0x000B723E - 0x000B731A (220 bytes, 86 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B723E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B723E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7253u); RECOMP_ABI_CALL(0x000B7AE4u, sub_000B7AE4); /* call 0x000B7AE4 */

loc_000B7253: ;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7260u); RECOMP_ABI_CALL(0x000B50CEu, sub_000B50CE); /* call 0x000B50CE */

loc_000B7260: ;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B726Fu); RECOMP_ABI_CALL(0x000B4E6Du, sub_000B4E6D); /* call 0x000B4E6D */

loc_000B726F: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    esi = eax;
    eax = MEM32(ebp + 8);
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B731A
 * Original: 0x000B731A - 0x000B73D9 (191 bytes, 69 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B731A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B731A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B732Cu); RECOMP_ABI_CALL(0x000B7AE4u, sub_000B7AE4); /* call 0x000B7AE4 */

loc_000B732C: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C14)); /* fmul dword ptr [0x281c14] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B73D9
 * Original: 0x000B73D9 - 0x000B7455 (124 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B73D9(void)
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

loc_000B73D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B73E7u); RECOMP_ABI_CALL(0x000B503Fu, sub_000B503F); /* call 0x000B503F */

loc_000B73E7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_000B7430; /* jne: not equal / not zero */

loc_000B73F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7419; /* je: equal / zero */

loc_000B73FB: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B741B;

loc_000B7419: ;
    fp_pop(); /* fstp st(0) */

loc_000B741B: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B744F; /* je: equal / zero */

loc_000B7422: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B742Au); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_000B742A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B744F;

loc_000B7430: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7444; /* je: equal / zero */

loc_000B7436: ;
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B7444: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B744F; /* je: equal / zero */

loc_000B744B: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B744F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7455
 * Original: 0x000B7455 - 0x000B7589 (308 bytes, 112 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7455(void)
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

loc_000B7455: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B74B4; /* jne: not equal / not zero */

loc_000B7473: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C26C) / fp_top()); /* fdivr dword ptr [0x22c26c] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x10)); /* fsub dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B7583;

loc_000B74B4: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x14)); /* fsub dword ptr [ecx + 0x14] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    POP32(esp, edx);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -28) = ebx;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(ebp + -24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x28) - fp_top()); /* fsubr dword ptr [ecx + 0x28] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -12)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), HI8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B74F5; /* jne: not equal / not zero */

loc_000B74F3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B74F5: ;
    fp_push(MEMF(ebp + ebx * 4 + -16)); /* fld float */
    MEM32(ebp + 0xC) = ebx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B750B; /* je: equal / zero */

loc_000B7506: ;
    ebx = edx;
    MEM32(ebp + 0xC) = ebx;

loc_000B750B: ;
    edx = ebx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ebp + edx + -16)); /* fld float */
    edi = MEM32(ebp + edx + -28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax = MEM32(ebp + 8);
    esi = edi;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edx + eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C26C) / fp_top()); /* fdivr dword ptr [0x22c26c] */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edi * 4)); /* fadd dword ptr [ecx + edi*4] */
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + esi + -28);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + esi + -28);
    MEMF(esi + eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 4)); /* fadd dword ptr [ecx + edx*4] */
    edx = MEM32(ebp + 8);
    edi = MEM32(ebp + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edx + eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + edx * 4)); /* fsub dword ptr [ecx + edx*4] */
    POP32(esp, esi);
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B7583: ;
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7589
 * Original: 0x000B7589 - 0x000B75E5 (92 bytes, 33 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7589(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B7589: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B759Bu); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B759B: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    eax = ecx + 0xC;
    MEM32(ebp + -4) = eax;
    eax = ebp + 0xC;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    fp_push(MEMF(ebp + 8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    eax = ecx;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B75E5
 * Original: 0x000B75E5 - 0x000B76BE (217 bytes, 79 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B75E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B75E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = ebp + -4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -28) = eax;
    eax = ebp + 0x14;
    MEM32(ebp + -32) = eax;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    fp_push(MEMF(ebp + -24)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = ebp + -12;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -32) = eax;
    eax = ebp + -20;
    MEM32(ebp + -28) = eax;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + -8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(ebp + -32) = eax;
    eax = ebp + -16;
    MEM32(ebp + -28) = eax;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -12)); /* fmul dword ptr [ebp - 0xc] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7746
 * Original: 0x000B7746 - 0x000B77C7 (129 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7746(void)
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

loc_000B7746: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7757u); RECOMP_ABI_CALL(0x000B503Fu, sub_000B503F); /* call 0x000B503F */

loc_000B7757: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B776Du); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B776D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7780; /* je: equal / zero */

loc_000B7771: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B77C1; /* je: equal / zero */

loc_000B7778: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_000B77C1;

loc_000B7780: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B77AB; /* jne: not equal / not zero */

loc_000B7790: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = ebp + -16;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B77A4u); RECOMP_ABI_CALL(0x000B4E20u, sub_000B4E20); /* call 0x000B4E20 */

loc_000B77A4: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_000B7778;

loc_000B77AB: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B77C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B77C7
 * Original: 0x000B77C7 - 0x000B7831 (106 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B77C7(void)
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

loc_000B77C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B77D4u); RECOMP_ABI_CALL(0x000B503Fu, sub_000B503F); /* call 0x000B503F */

loc_000B77D4: ;
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    esi = MEM32(ebp + 8);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7817; /* jne: not equal / not zero */

loc_000B77E7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B77F0u); RECOMP_ABI_CALL(0x000B50A7u, sub_000B50A7); /* call 0x000B50A7 */

loc_000B77F0: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7803u); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B7803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B782A; /* jne: not equal / not zero */

loc_000B7807: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7815u); RECOMP_ABI_CALL(0x000B4DF9u, sub_000B4DF9); /* call 0x000B4DF9 */

loc_000B7815: ;
    goto loc_000B782A;

loc_000B7817: ;
    fp_push(0.0); /* fldz */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B782A: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7831
 * Original: 0x000B7831 - 0x000B78AC (123 bytes, 48 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7831(void)
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

loc_000B7831: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B788F; /* jp: parity */

loc_000B7849: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7851u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_000B7851: ;
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B786Cu); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B786C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000B7892; /* jne: not equal / not zero */

loc_000B7873: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B78A2;

loc_000B788F: ;
    eax = MEM32(ebp + 8);

loc_000B7892: ;
    fp_push(MEMF(esi)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_000B78A2: ;
    fp_push(0.0); /* fldz */
    POP32(esp, esi);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B78AC
 * Original: 0x000B78AC - 0x000B7944 (152 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B78AC(void)
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

loc_000B78AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 4)); /* fld float */
    esi = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = esi + 0xC;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ebp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = ebp + 0xC;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebp + -8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = sin(_a); fp_push(cos(_a)); } /* fsincos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7909u); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B7909: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7923; /* je: equal / zero */

loc_000B790D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B793D; /* je: equal / zero */

loc_000B7911: ;
    eax = MEM32(ecx);
    MEM32(esi) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esi + 8) = eax;
    goto loc_000B793D;

loc_000B7923: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B793D: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7944
 * Original: 0x000B7944 - 0x000B7A05 (193 bytes, 70 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7944(void)
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

loc_000B7944: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B795Cu); RECOMP_ABI_CALL(0x000B5071u, sub_000B5071); /* call 0x000B5071 */

loc_000B795C: ;
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7970; /* jne: not equal / not zero */

loc_000B796C: ;
    fp_push(1.0); /* fld1 */
    goto loc_000B7976;

loc_000B7970: ;
    fp_push(MEMF(0x235A58)); /* fld float */

loc_000B7976: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B79C4; /* jne: not equal / not zero */

loc_000B798F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_000B79C9;

loc_000B79C4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */

loc_000B79C9: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(ebp + 0x10);
    xmm2 = XMM_MEM(edx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm1); /* movups */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7A05
 * Original: 0x000B7A05 - 0x000B7A5C (87 bytes, 34 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7A05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B7A05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A21u); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7A21: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A37u); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7A37: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1C)); /* fsub dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx);
    eax = ebp + -16;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A55u); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7A55: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7A5C
 * Original: 0x000B7A5C - 0x000B7AE4 (136 bytes, 57 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7A5C(void)
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

loc_000B7A5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A7Fu); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B7A7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7A96; /* je: equal / zero */

loc_000B7A83: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7ADC; /* je: equal / zero */

loc_000B7A8B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    goto loc_000B7ADC;

loc_000B7A96: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7AACu); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7AAC: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7AC2u); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7AC2: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x18)); /* fdiv dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx);
    eax = ebp + -16;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7ADCu); RECOMP_ABI_CALL(0x000B7944u, sub_000B7944); /* call 0x000B7944 */

loc_000B7ADC: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7AE4
 * Original: 0x000B7AE4 - 0x000B7B85 (161 bytes, 70 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7AE4(void)
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

loc_000B7AE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7B1Fu); RECOMP_ABI_CALL(0x000B5145u, sub_000B5145); /* call 0x000B5145 */

loc_000B7B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B34; /* je: equal / zero */

loc_000B7B23: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B80; /* je: equal / zero */

loc_000B7B2A: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    goto loc_000B7B80;

loc_000B7B34: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281C10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281c10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_000B7B6D; /* jne: not equal / not zero */

loc_000B7B47: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    goto loc_000B7B7D;

loc_000B7B6D: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */

loc_000B7B7D: ;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B7B80: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7B85
 * Original: 0x000B7B85 - 0x000B7BFB (118 bytes, 43 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7B85(void)
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

loc_000B7B85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7B94u); RECOMP_ABI_CALL(0x000B5126u, sub_000B5126); /* call 0x000B5126 */

loc_000B7B94: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BA2u); RECOMP_ABI_CALL(0x000B5126u, sub_000B5126); /* call 0x000B5126 */

loc_000B7BA2: ;
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -4) - fp_top()); /* fsubr dword ptr [ebp - 4] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B7BDB; /* jnp: not parity */

loc_000B7BBA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BC5u); RECOMP_ABI_CALL(0x000B5104u, sub_000B5104); /* call 0x000B5104 */

loc_000B7BC5: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + -4)); /* fdiv dword ptr [ebp - 4] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BD5u); RECOMP_ABI_CALL(0x00152F94u, sub_00152F94); /* call 0x00152F94 */

loc_000B7BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000B7BDF; /* jne: not equal / not zero */

loc_000B7BDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B7BF7;

loc_000B7BDF: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BF4u); RECOMP_ABI_CALL(0x000B4F7Du, sub_000B4F7D); /* call 0x000B4F7D */

loc_000B7BF4: ;
    eax = MEM32(ebp + 8);

loc_000B7BF7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7C29
 * Original: 0x000B7C29 - 0x000B7C98 (111 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7C29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B7C29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    edi = MEM32(ebp + 8);
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x14);
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C7Du); RECOMP_ABI_CALL(0x000B4F05u, sub_000B4F05); /* call 0x000B4F05 */

loc_000B7C7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C84u); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B7C84: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C8Bu); RECOMP_ABI_CALL(0x000B5126u, sub_000B5126); /* call 0x000B5126 */

loc_000B7C8B: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7C98
 * Original: 0x000B7C98 - 0x000B7D11 (121 bytes, 48 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7C98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B7C98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CABu); RECOMP_ABI_CALL(0x000B7AE4u, sub_000B7AE4); /* call 0x000B7AE4 */

loc_000B7CAB: ;
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -12;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -20)); /* fmul dword ptr [ebp - 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CD9u); RECOMP_ABI_CALL(0x000B56E6u, sub_000B56E6); /* call 0x000B56E6 */

loc_000B7CD9: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 8);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CE9u); RECOMP_ABI_CALL(0x000B5764u, sub_000B5764); /* call 0x000B5764 */

loc_000B7CE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CF0u); RECOMP_ABI_CALL(0x000B544Eu, sub_000B544E); /* call 0x000B544E */

loc_000B7CF0: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    eax = esi;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7D11
 * Original: 0x000B7D11 - 0x000B7D69 (88 bytes, 32 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7D11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B7D11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C0C)); /* fmul dword ptr [0x281c0c] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C08)); /* fmul dword ptr [0x281c08] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281C04)); /* fmul dword ptr [0x281c04] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7D69
 * Original: 0x000B7D69 - 0x000B7DA9 (64 bytes, 25 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_000B7D69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B7D69: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7DA9
 * Original: 0x000B7DA9 - 0x000B7DB1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001AC4C7(); return; /* tail jmp 0x001AC4C7 */

}

/**
 * sub_000B7DB1
 * Original: 0x000B7DB1 - 0x000B7DB9 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B2173(); return; /* tail jmp 0x001B2173 */

}

/**
 * sub_000B7DB9
 * Original: 0x000B7DB9 - 0x000B7DC1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B7A32(); return; /* tail jmp 0x001B7A32 */

}

/**
 * sub_000B7DC1
 * Original: 0x000B7DC1 - 0x000B7DC9 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B7CD7(); return; /* tail jmp 0x001B7CD7 */

}

/**
 * sub_000B7DC9
 * Original: 0x000B7DC9 - 0x000B7DD1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B8337(); return; /* tail jmp 0x001B8337 */

}

/**
 * sub_000B7E19
 * Original: 0x000B7E19 - 0x000B7E43 (42 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7E19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7E19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000B7E3E; /* js: sign (negative) */

loc_000B7E2E: ;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_000B7E32: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x000B7E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7E37u); } /* indirect call */
    }

loc_000B7E3A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B7E32; /* jne: not equal / not zero */

loc_000B7E3D: ;
    POP32(esp, esi);

loc_000B7E3E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B7ED0
 * Original: 0x000B7ED0 - 0x000B7EE8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7ED0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7EE5; /* je: equal / zero */

loc_000B7ED7: ;
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 8;

loc_000B7EE5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7EE8
 * Original: 0x000B7EE8 - 0x000B7F04 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7EE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7EE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7F04
 * Original: 0x000B7F04 - 0x000B7F44 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F04(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7F04: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x54) = eax;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x5C) = eax;
    MEM32(edx + 0x60) = eax;
    MEM32(edx + 0x64) = eax;
    MEM32(edx + 0x78) = 1;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = edx + 0x40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7F44
 * Original: 0x000B7F44 - 0x000B7FE7 (163 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7F44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7F44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B7F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7F51u); } /* indirect call */
    }

loc_000B7F53: ;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x40), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F62; /* je: equal / zero */

loc_000B7F5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B7FC1;

loc_000B7F62: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000B7F69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7F66u); } /* indirect call */
    }

loc_000B7F69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B7FB7; /* jl: less (signed <) */

loc_000B7F70: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F7E; /* je: equal / zero */

loc_000B7F75: ;
    MEM32(ebp + 0xC) = 0x80004005u;
    goto loc_000B7FB7;

loc_000B7F7E: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7FA7; /* jbe: below or equal (unsigned <=) */

loc_000B7F84: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B7F88: ;
    ecx = MEM32(edi + 0x38);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B7F96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7F93u); } /* indirect call */
    }

loc_000B7F96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B7FC8; /* jl: less (signed <) */

loc_000B7F9D: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x7C;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B7F88; /* jb: below (unsigned <) */

loc_000B7FA7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B7FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7FABu); } /* indirect call */
    }

loc_000B7FAD: ;
    MEM32(edi + eax * 4 + 0x40) = esi;

loc_000B7FB1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B7FBE; /* jge: greater or equal (signed >=) */

loc_000B7FB7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B7FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7FBBu); } /* indirect call */
    }

loc_000B7FBE: ;
    eax = MEM32(ebp + 0xC);

loc_000B7FC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B7FC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7FB1; /* jbe: below or equal (unsigned <=) */

loc_000B7FCC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B7FD0: ;
    ecx = MEM32(edi + 0x38);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B7FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7FDBu); } /* indirect call */
    }

loc_000B7FDE: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x7C;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B7FD0; /* jne: not equal / not zero */

loc_000B7FE5: ;
    goto loc_000B7FB1;

}

/**
 * sub_000B8007
 * Original: 0x000B8007 - 0x000B8074 (109 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8007: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000B801E; /* jne: not equal / not zero */

loc_000B8017: ;
    eax = 0x80004005u;
    goto loc_000B8070;

loc_000B801E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B802E; /* jne: not equal / not zero */

loc_000B8027: ;
    eax = 0x80004005u;
    goto loc_000B806F;

loc_000B802E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx + edi * 4 + 0x28;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8042; /* je: equal / zero */

loc_000B803B: ;
    eax = 0x80004005u;
    goto loc_000B806D;

loc_000B8042: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8057; /* jbe: below or equal (unsigned <=) */

loc_000B8046: ;
    ebx = MEM32(ecx + 0x38);

loc_000B8049: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8057; /* je: equal / zero */

loc_000B804E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x7C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8049; /* jb: below (unsigned <) */

loc_000B8057: ;
    eax = MEM32(ecx + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7C);
    MEM32(edx + eax) = edi;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);

loc_000B806D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B806F: ;
    POP32(esp, ebx);

loc_000B8070: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8074
 * Original: 0x000B8074 - 0x000B8097 (35 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8074(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8074: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B808F; /* je: equal / zero */

loc_000B8084: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000B808Du); RECOMP_ABI_CALL(0x000BA9D0u, sub_000BA9D0); /* call 0x000BA9D0 */

loc_000B808D: ;
    goto loc_000B8094;

loc_000B808F: ;
    eax = 0x80004005u;

loc_000B8094: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B80D5
 * Original: 0x000B80D5 - 0x000B810F (58 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B80D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B80D5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8107; /* je: equal / zero */

loc_000B80E5: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B80FC; /* je: equal / zero */

loc_000B80EB: ;
    eax = MEM32(eax + 0x48);

loc_000B80EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000B80FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B80F7u); } /* indirect call */
    }

loc_000B80FA: ;
    goto loc_000B810C;

loc_000B80FC: ;
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8107; /* je: equal / zero */

loc_000B8102: ;
    eax = MEM32(eax + 0x44);
    goto loc_000B80EE;

loc_000B8107: ;
    eax = 0x80004005u;

loc_000B810C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B810F
 * Original: 0x000B810F - 0x000B8132 (35 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B810F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B810F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B812A; /* je: equal / zero */

loc_000B811F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000B8128u); RECOMP_ABI_CALL(0x000BAA1Du, sub_000BAA1D); /* call 0x000BAA1D */

loc_000B8128: ;
    goto loc_000B812F;

loc_000B812A: ;
    eax = 0x80004005u;

loc_000B812F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8132
 * Original: 0x000B8132 - 0x000B815E (44 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8132(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8132: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8154; /* je: equal / zero */

loc_000B813E: ;
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B8152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B814Fu); } /* indirect call */
    }

loc_000B8152: ;
    goto loc_000B8159;

loc_000B8154: ;
    eax = 0x80004005u;

loc_000B8159: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B815E
 * Original: 0x000B815E - 0x000B818A (44 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B815E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B815E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8180; /* je: equal / zero */

loc_000B816A: ;
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000B817Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B817Bu); } /* indirect call */
    }

loc_000B817E: ;
    goto loc_000B8185;

loc_000B8180: ;
    eax = 0x80004005u;

loc_000B8185: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B81AE
 * Original: 0x000B81AE - 0x000B81E2 (52 bytes, 21 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B81AE: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B81D8; /* je: equal / zero */

loc_000B81BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000B81D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B81D3u); } /* indirect call */
    }

loc_000B81D6: ;
    goto loc_000B81DD;

loc_000B81D8: ;
    eax = 0x80004005u;

loc_000B81DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B81E2
 * Original: 0x000B81E2 - 0x000B8208 (38 bytes, 18 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B81E2: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8203; /* je: equal / zero */

loc_000B81EF: ;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000B8203u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8200u); } /* indirect call */
    }

loc_000B8203: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B8208
 * Original: 0x000B8208 - 0x000B823C (52 bytes, 21 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8208(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8208: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8232; /* je: equal / zero */

loc_000B8214: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000B8230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B822Du); } /* indirect call */
    }

loc_000B8230: ;
    goto loc_000B8237;

loc_000B8232: ;
    eax = 0x80004005u;

loc_000B8237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B823C
 * Original: 0x000B823C - 0x000B826C (48 bytes, 20 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B823C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B823C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8262; /* je: equal / zero */

loc_000B8248: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000B8260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B825Du); } /* indirect call */
    }

loc_000B8260: ;
    goto loc_000B8267;

loc_000B8262: ;
    eax = 0x80004005u;

loc_000B8267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B826C
 * Original: 0x000B826C - 0x000B82A0 (52 bytes, 21 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B826C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B826C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8296; /* je: equal / zero */

loc_000B8278: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x000B8294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8291u); } /* indirect call */
    }

loc_000B8294: ;
    goto loc_000B829B;

loc_000B8296: ;
    eax = 0x80004005u;

loc_000B829B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B82A0
 * Original: 0x000B82A0 - 0x000B82C0 (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B82A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B82B8; /* je: equal / zero */

loc_000B82AA: ;
    ecx = MEM32(eax + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000B82B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B82B3u); } /* indirect call */
    }

loc_000B82B6: ;
    goto loc_000B82BD;

loc_000B82B8: ;
    eax = 0x80004005u;

loc_000B82BD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8307
 * Original: 0x000B8307 - 0x000B835A (83 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8307(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8307: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 4;
    edi = esi + 0x50;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B831B: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8343; /* je: equal / zero */

loc_000B831F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B833C; /* jbe: below or equal (unsigned <=) */

loc_000B8326: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B8333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8330u); } /* indirect call */
    }

loc_000B8333: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x7C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8326; /* jb: below (unsigned <) */

loc_000B833C: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8340u); } /* indirect call */
    }

loc_000B8343: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8354; /* je: equal / zero */

loc_000B834B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000B831B;

loc_000B8354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B835A
 * Original: 0x000B835A - 0x000B83AD (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B835A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B835A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B838F; /* je: equal / zero */

loc_000B8367: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBA6AB);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B837Au); RECOMP_ABI_CALL(0x000B7E19u, sub_000B7E19); /* call 0x000B7E19 */

loc_000B837A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B838A; /* je: equal / zero */

loc_000B837F: ;
    PUSH32(esp, 0x8019);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B838Au); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B838A: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_000B83A8;

loc_000B838F: ;
    ecx = esi;
    PUSH32(esp, 0x000B8396u); RECOMP_ABI_CALL(0x000BA6ABu, sub_000BA6AB); /* call 0x000BA6AB */

loc_000B8396: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B83A6; /* je: equal / zero */

loc_000B839B: ;
    PUSH32(esp, 0x8019);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B83A6u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B83A6: ;
    eax = esi;

loc_000B83A8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B83AD
 * Original: 0x000B83AD - 0x000B841D (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B83AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B83AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B83B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B83B3u); } /* indirect call */
    }

loc_000B83B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FCC0);
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x000B83C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B83C0u); } /* indirect call */
    }

loc_000B83C6: ;
    PUSH32(esp, 4);
    edi = esi + 0x28;
    POP32(esp, ebp);

loc_000B83CC: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B83E0; /* je: equal / zero */

loc_000B83D2: ;
    PUSH32(esp, MEM32(0x282294));
    PUSH32(esp, 0x000B83DDu); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000B83DD: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B83E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B83CC; /* jne: not equal / not zero */

loc_000B83E6: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B83EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B83E8u); } /* indirect call */
    }

loc_000B83EE: ;
    ecx = esi;
    PUSH32(esp, 0x000B83F5u); RECOMP_ABI_CALL(0x000B8307u, sub_000B8307); /* call 0x000B8307 */

loc_000B83F5: ;
    ecx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8408; /* je: equal / zero */

loc_000B83FE: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000B8405u); RECOMP_ABI_CALL(0x000B835Au, sub_000B835A); /* call 0x000B835A */

loc_000B8405: ;
    MEM32(esi + 0x38) = edi;

loc_000B8408: ;
    MEM32(0x96FD1C) = edi;
    MEM32(0x96FD04) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000BB4F7(); return; /* tail jmp 0x000BB4F7 */

}

/**
 * sub_000B841D
 * Original: 0x000B841D - 0x000B8428 (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B841D(void)
{

loc_000B841D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x40);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8428
 * Original: 0x000B8428 - 0x000B8452 (42 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8428(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B8428: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx + 0x68)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx + 0x68) = MEM32(ecx + 0x68) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FCE8);
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x6C)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0x6C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, MEM32(ecx + 0x6C));
    PUSH32(esp, MEM32(ecx + 0x68));
    PUSH32(esp, 0x96FCC0);
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x000B844Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8449u); } /* indirect call */
    }

loc_000B844F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8452
 * Original: 0x000B8452 - 0x000B84F7 (165 bytes, 67 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8452: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x222794);
    MEM32(esi + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8477u); RECOMP_ABI_CALL(0x00223C51u, sub_00223C51); /* call 0x00223C51 */

loc_000B8477: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2227A0);
    MEM32(esi + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8486u); RECOMP_ABI_CALL(0x00223C51u, sub_00223C51); /* call 0x00223C51 */

loc_000B8486: ;
    edi = MEM32(esi + 0x54);
    MEM32(esi + 0x58) = eax;
    edi = ~edi;
    edi = edi & MEM32(esi + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    eax = eax & MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = eax;
    ebx = esi + 0x28;

loc_000B849F: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000B84B5; /* jne: not equal / not zero */

loc_000B84AE: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B84C9; /* je: equal / zero */

loc_000B84B5: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B84C9; /* je: equal / zero */

loc_000B84BB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B84C9; /* jne: not equal / not zero */

loc_000B84C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B84C6u); RECOMP_ABI_CALL(0x000BA7A2u, sub_000BA7A2); /* call 0x000BA7A2 */

loc_000B84C6: ;
    eax = MEM32(ebp + -12);

loc_000B84C9: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x54), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B84E4; /* je: equal / zero */

loc_000B84CE: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x58), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B84E4; /* je: equal / zero */

loc_000B84D3: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B84E4; /* je: equal / zero */

loc_000B84D9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B84E4; /* je: equal / zero */

loc_000B84DF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B84E4u); RECOMP_ABI_CALL(0x000BA7C7u, sub_000BA7C7); /* call 0x000BA7C7 */

loc_000B84E4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B849F; /* jb: below (unsigned <) */

loc_000B84F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000B84F7
 * Original: 0x000B84F7 - 0x000B8527 (48 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B84F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B84F7: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8506; /* jne: not equal / not zero */

loc_000B84FF: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B8506: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    esi = edi + 0x28;
    POP32(esp, ebx);

loc_000B850E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B851B; /* je: equal / zero */

loc_000B8514: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x000B851Bu); RECOMP_ABI_CALL(0x000BB3B2u, sub_000BB3B2); /* call 0x000BB3B2 */

loc_000B851B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B850E; /* jne: not equal / not zero */

loc_000B8521: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8527
 * Original: 0x000B8527 - 0x000B8557 (48 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8527(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8527: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x282294));
    edi = ecx;
    esi = edi + eax * 4 + 0x28;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B8540u); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000B8540: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B8547u); RECOMP_ABI_CALL(0x000BB196u, sub_000BB196); /* call 0x000BB196 */

loc_000B8547: ;
    eax = MEM32(esi);
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8557
 * Original: 0x000B8557 - 0x000B8590 (57 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8557(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8557: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B858A; /* jbe: below or equal (unsigned <=) */

loc_000B8567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B858A; /* jl: less (signed <) */

loc_000B856B: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, MEM32(esp + 0x18));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x000B8581u); RECOMP_ABI_CALL(0x000BAD7Cu, sub_000BAD7C); /* call 0x000BAD7C */

loc_000B8581: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x7C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8567; /* jb: below (unsigned <) */

loc_000B858A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8590
 * Original: 0x000B8590 - 0x000B85B5 (37 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B85B1; /* jbe: below or equal (unsigned <=) */

loc_000B859E: ;
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B85A8u); RECOMP_ABI_CALL(0x000BADCCu, sub_000BADCC); /* call 0x000BADCC */

loc_000B85A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x7C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B859E; /* jb: below (unsigned <) */

loc_000B85B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B85B5
 * Original: 0x000B85B5 - 0x000B85FA (69 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B85B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B85B5: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x000B85BEu); RECOMP_ABI_CALL(0x000B7ED0u, sub_000B7ED0); /* call 0x000B7ED0 */

loc_000B85BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B85C9; /* jne: not equal / not zero */

loc_000B85C2: ;
    eax = 0x80004005u;
    goto loc_000B85F7;

loc_000B85C9: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000B85DB; /* je: equal / zero */

loc_000B85D4: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    MEM32(edx) = esi;
    POP32(esp, esi);

loc_000B85DB: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B85E8; /* je: equal / zero */

loc_000B85E3: ;
    eax = MEM32(eax + 0x18);
    MEM32(edx) = eax;

loc_000B85E8: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B85F5; /* je: equal / zero */

loc_000B85F0: ;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax) = ecx;

loc_000B85F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B85F7: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B85FA
 * Original: 0x000B85FA - 0x000B8637 (61 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B85FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B85FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B862E; /* je: equal / zero */

loc_000B860B: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B862E; /* je: equal / zero */

loc_000B8611: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B862E; /* je: equal / zero */

loc_000B8618: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x000B862Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8629u); } /* indirect call */
    }

loc_000B862C: ;
    goto loc_000B8633;

loc_000B862E: ;
    eax = 0x80004005u;

loc_000B8633: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B8637
 * Original: 0x000B8637 - 0x000B8674 (61 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8637(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8637: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B866B; /* je: equal / zero */

loc_000B8648: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B866B; /* je: equal / zero */

loc_000B864E: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B866B; /* je: equal / zero */

loc_000B8655: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000B8669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8666u); } /* indirect call */
    }

loc_000B8669: ;
    goto loc_000B8670;

loc_000B866B: ;
    eax = 0x80004005u;

loc_000B8670: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B8674
 * Original: 0x000B8674 - 0x000B86A8 (52 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8674(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8674: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B86A0; /* je: equal / zero */

loc_000B8684: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B86A0; /* je: equal / zero */

loc_000B868A: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B86A0; /* je: equal / zero */

loc_000B8691: ;
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000B869Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B869Bu); } /* indirect call */
    }

loc_000B869E: ;
    goto loc_000B86A5;

loc_000B86A0: ;
    eax = 0x80004005u;

loc_000B86A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B86A8
 * Original: 0x000B86A8 - 0x000B86C4 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B86A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B86A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B86C4
 * Original: 0x000B86C4 - 0x000B86C9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86C4: ;
    g_seh_ebp = ebp; sub_000B7F44(); return; /* tail jmp 0x000B7F44 */

}

/**
 * sub_000B86C9
 * Original: 0x000B86C9 - 0x000B86D8 (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B86C9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B86C9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B86E9
 * Original: 0x000B86E9 - 0x000B86EE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86E9: ;
    g_seh_ebp = ebp; sub_000B8007(); return; /* tail jmp 0x000B8007 */

}

/**
 * sub_000B86EE
 * Original: 0x000B86EE - 0x000B86F3 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86EE: ;
    g_seh_ebp = ebp; sub_000B8074(); return; /* tail jmp 0x000B8074 */

}

/**
 * sub_000B86F8
 * Original: 0x000B86F8 - 0x000B86FD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86F8: ;
    g_seh_ebp = ebp; sub_000B80D5(); return; /* tail jmp 0x000B80D5 */

}

/**
 * sub_000B86FD
 * Original: 0x000B86FD - 0x000B8702 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86FD: ;
    g_seh_ebp = ebp; sub_000B810F(); return; /* tail jmp 0x000B810F */

}

/**
 * sub_000B8702
 * Original: 0x000B8702 - 0x000B871E (28 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8702(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8702: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B8719u); RECOMP_ABI_CALL(0x000B8132u, sub_000B8132); /* call 0x000B8132 */

loc_000B8719: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B871E
 * Original: 0x000B871E - 0x000B873A (28 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B871E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B871E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B8735u); RECOMP_ABI_CALL(0x000B815Eu, sub_000B815E); /* call 0x000B815E */

loc_000B8735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B873F
 * Original: 0x000B873F - 0x000B8763 (36 bytes, 15 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B873F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B873F: ;
    PUSH32(esp, esi);
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
    PUSH32(esp, 0x000B875Eu); RECOMP_ABI_CALL(0x000B81AEu, sub_000B81AE); /* call 0x000B81AE */

loc_000B875E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B8763
 * Original: 0x000B8763 - 0x000B877F (28 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8763(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8763: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B877Au); RECOMP_ABI_CALL(0x000B81E2u, sub_000B81E2); /* call 0x000B81E2 */

loc_000B877A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B877F
 * Original: 0x000B877F - 0x000B87A3 (36 bytes, 15 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B877F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B877F: ;
    PUSH32(esp, esi);
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
    PUSH32(esp, 0x000B879Eu); RECOMP_ABI_CALL(0x000B8208u, sub_000B8208); /* call 0x000B8208 */

loc_000B879E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B87A3
 * Original: 0x000B87A3 - 0x000B87C3 (32 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87A3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = esp + 0x14;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B87BEu); RECOMP_ABI_CALL(0x000B823Cu, sub_000B823C); /* call 0x000B823C */

loc_000B87BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B87C3
 * Original: 0x000B87C3 - 0x000B87E7 (36 bytes, 15 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87C3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87C3: ;
    PUSH32(esp, esi);
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
    PUSH32(esp, 0x000B87E2u); RECOMP_ABI_CALL(0x000B826Cu, sub_000B826C); /* call 0x000B826C */

loc_000B87E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000B87E7
 * Original: 0x000B87E7 - 0x000B87EC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B87E7: ;
    g_seh_ebp = ebp; sub_000B82A0(); return; /* tail jmp 0x000B82A0 */

}

/**
 * sub_000B87F6
 * Original: 0x000B87F6 - 0x000B87FF (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B87F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000B87F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000B85FA(); return; /* tail jmp 0x000B85FA */

}

/**
 * sub_000B87FF
 * Original: 0x000B87FF - 0x000B8808 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B87FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000B87FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000B8637(); return; /* tail jmp 0x000B8637 */

}

/**
 * sub_000B8808
 * Original: 0x000B8808 - 0x000B880D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8808: ;
    g_seh_ebp = ebp; sub_000B8674(); return; /* tail jmp 0x000B8674 */

}

/**
 * sub_000B8812
 * Original: 0x000B8812 - 0x000B883E (44 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8812(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8812: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B881Fu); RECOMP_ABI_CALL(0x000B84F7u, sub_000B84F7); /* call 0x000B84F7 */

loc_000B881F: ;
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000B8825: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8831; /* je: equal / zero */

loc_000B882A: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B8831u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B882Eu); } /* indirect call */
    }

loc_000B8831: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8825; /* jne: not equal / not zero */

loc_000B8837: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B883E
 * Original: 0x000B883E - 0x000B8862 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B883E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B883E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x28), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8857; /* je: equal / zero */

loc_000B884F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8855u); RECOMP_ABI_CALL(0x000B8527u, sub_000B8527); /* call 0x000B8527 */

loc_000B8855: ;
    goto loc_000B885C;

loc_000B8857: ;
    esi = 0x80004005u;

loc_000B885C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8862
 * Original: 0x000B8862 - 0x000B889C (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8862(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8862: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B886Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8867u); } /* indirect call */
    }

loc_000B886D: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000B8876u); RECOMP_ABI_CALL(0x000B8452u, sub_000B8452); /* call 0x000B8452 */

loc_000B8876: ;
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000B887C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8888; /* je: equal / zero */

loc_000B8881: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B8888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8885u); } /* indirect call */
    }

loc_000B8888: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B887C; /* jne: not equal / not zero */

loc_000B888E: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B8896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8890u); } /* indirect call */
    }

loc_000B8896: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B889C
 * Original: 0x000B889C - 0x000B88A1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B889C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B889C: ;
    g_seh_ebp = ebp; sub_000B8812(); return; /* tail jmp 0x000B8812 */

}

/**
 * sub_000B88A1
 * Original: 0x000B88A1 - 0x000B88A6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B88A1: ;
    g_seh_ebp = ebp; sub_000B883E(); return; /* tail jmp 0x000B883E */

}

/**
 * sub_000B88A6
 * Original: 0x000B88A6 - 0x000B88C6 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B88A6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B88AEu); RECOMP_ABI_CALL(0x000B83ADu, sub_000B83AD); /* call 0x000B83AD */

loc_000B88AE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B88C0; /* je: equal / zero */

loc_000B88B5: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B88C0u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B88C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B88C6
 * Original: 0x000B88C6 - 0x000B88E1 (27 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88C6(void)
{

loc_000B88C6: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000B88D3u); RECOMP_ABI_CALL(0x000B8428u, sub_000B8428); /* call 0x000B8428 */

loc_000B88D3: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 0x000B88DEu); RECOMP_ABI_CALL(0x000B8862u, sub_000B8862); /* call 0x000B8862 */

loc_000B88DE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B88E1
 * Original: 0x000B88E1 - 0x000B89CF (238 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B88E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 9);
    edi = ebx + 4;
    POP32(esp, ecx);
    esi = ebp;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8904; /* je: equal / zero */

loc_000B88FF: ;
    MEM32(0x96FD1C) = eax;

loc_000B8904: ;
    MEM16(0x96FD18) = LO16(edi);
    MEM16(0x96FD0A) = LO16(eax);
    MEM32(0x96FD0C) = 0x3E80;
    MEM16(0x96FD16) = 0x10;
    MEM16(0x96FD14) = 2;
    MEM32(0x96FD10) = 0x7D00;
    MEM16(0x96FD08) = LO16(eax);
    PUSH32(esp, 0x000B8942u); RECOMP_ABI_CALL(0x000BB524u, sub_000BB524); /* call 0x000BB524 */

loc_000B8942: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B89C6; /* jl: less (signed <) */

loc_000B8948: ;
    esi = MEM32(ebp + 4);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    PUSH32(esp, 0x8019);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B895Eu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B895E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8975; /* je: equal / zero */

loc_000B8962: ;
    PUSH32(esp, 0xBA651);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000B8975u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000B8975: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 0x38) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000B8983; /* jne: not equal / not zero */

loc_000B897C: ;
    esi = 0x8007000Eu;
    goto loc_000B89C6;

loc_000B8983: ;
    PUSH32(esp, MEM32(0x282294));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B898Fu); RECOMP_ABI_CALL(0x000B7F44u, sub_000B7F44); /* call 0x000B7F44 */

loc_000B898F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B89C6; /* jl: less (signed <) */

loc_000B8995: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x96FCC0);
    { uint32_t _icall_target = MEM32(0x22BC64); PUSH32(esp, 0x000B89A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B899Cu); } /* indirect call */
    }

loc_000B89A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB88C6);
    PUSH32(esp, 0x96FCE8);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x000B89B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B89ADu); } /* indirect call */
    }

loc_000B89B3: ;
    eax = ebx + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x000B89BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B89B7u); } /* indirect call */
    }

loc_000B89BD: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x000B89C6u); RECOMP_ABI_CALL(0x000B8428u, sub_000B8428); /* call 0x000B8428 */

loc_000B89C6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B89CF
 * Original: 0x000B89CF - 0x000B8A3F (112 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B89CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x801A);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x000B89E7u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B89E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B89F4; /* je: equal / zero */

loc_000B89EB: ;
    ecx = eax;
    PUSH32(esp, 0x000B89F2u); RECOMP_ABI_CALL(0x000B7F04u, sub_000B7F04); /* call 0x000B7F04 */

loc_000B89F2: ;
    goto loc_000B89F6;

loc_000B89F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B89F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x96FD04) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B8A06; /* jne: not equal / not zero */

loc_000B89FF: ;
    esi = 0x8007000Eu;
    goto loc_000B8A38;

loc_000B8A06: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x000B8A11u); RECOMP_ABI_CALL(0x000B88E1u, sub_000B88E1); /* call 0x000B88E1 */

loc_000B8A11: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8A20; /* jl: less (signed <) */

loc_000B8A17: ;
    eax = MEM32(0x96FD04);
    MEM32(edi) = eax;
    goto loc_000B8A38;

loc_000B8A20: ;
    ecx = MEM32(0x96FD04);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A31; /* je: equal / zero */

loc_000B8A2A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000B8A31u); RECOMP_ABI_CALL(0x000B88A6u, sub_000B88A6); /* call 0x000B88A6 */

loc_000B8A31: ;
    MEM32(0x96FD04) = MEM32(0x96FD04) & 0;
    _fa = (uint32_t)(MEM32(0x96FD04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B8A38: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8A3F
 * Original: 0x000B8A3F - 0x000B8A72 (51 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8A3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = edx + 0x78;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8A6B; /* jne: not equal / not zero */

loc_000B8A5E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A6B; /* je: equal / zero */

loc_000B8A62: ;
    PUSH32(esp, 1);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8A6Bu); RECOMP_ABI_CALL(0x000B88A6u, sub_000B88A6); /* call 0x000B88A6 */

loc_000B8A6B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8A72
 * Original: 0x000B8A72 - 0x000B8A77 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8A72: ;
    g_seh_ebp = ebp; sub_000B8A3F(); return; /* tail jmp 0x000B8A3F */

}

/**
 * sub_000B8B0A
 * Original: 0x000B8B0A - 0x000B8B4C (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B0A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8B0A: ;
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = 4;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8B4C
 * Original: 0x000B8B4C - 0x000B8B4D (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B4C(void)
{

loc_000B8B4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8B53
 * Original: 0x000B8B53 - 0x000B8B63 (16 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B53(void)
{

loc_000B8B53: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0xC;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8BE0
 * Original: 0x000B8BE0 - 0x000B8BF3 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8BE0(void)
{

loc_000B8BE0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    POP32(esp, ecx);
    edi = esi + 0x140;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8BF3
 * Original: 0x000B8BF3 - 0x000B8C1B (40 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8BF3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8BF3: ;
    eax = ecx + 0xFC;
    edx = MEM32(eax);
    MEM32(ecx + edx * 8 + 0x6C) = 1;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + edx * 8 + 0x70) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 2;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8C1B
 * Original: 0x000B8C1B - 0x000B8C42 (39 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C1B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8C1B: ;
    eax = ecx + 0xFC;
    edx = MEM32(eax);
    MEM32(ecx + edx * 8 + 0x6C) = 2;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + edx * 8 + 0x70) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8C4B
 * Original: 0x000B8C4B - 0x000B8C53 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C4B(void)
{

loc_000B8C4B: ;
    eax = 0x80004005u;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8C53
 * Original: 0x000B8C53 - 0x000B8C5B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C53(void)
{

loc_000B8C53: ;
    eax = 0x80004005u;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8C5B
 * Original: 0x000B8C5B - 0x000B8C63 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C5B(void)
{

loc_000B8C5B: ;
    eax = 0x80004005u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8C63
 * Original: 0x000B8C63 - 0x000B8C66 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C63(void)
{

loc_000B8C63: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8C66
 * Original: 0x000B8C66 - 0x000B8C67 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C66(void)
{

loc_000B8C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8C67
 * Original: 0x000B8C67 - 0x000B8C6F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C67(void)
{

loc_000B8C67: ;
    eax = 0x80004005u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B8C6F
 * Original: 0x000B8C6F - 0x000B8C77 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C6F(void)
{

loc_000B8C6F: ;
    eax = 0x80004005u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8C77
 * Original: 0x000B8C77 - 0x000B8C7A (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B8C77(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8C77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8C7A
 * Original: 0x000B8C7A - 0x000B8C7F (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B8C7A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8C7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8C7F
 * Original: 0x000B8C7F - 0x000B8C87 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C7F(void)
{

loc_000B8C7F: ;
    eax = 0x80004005u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B8C87
 * Original: 0x000B8C87 - 0x000B8C8F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C87(void)
{

loc_000B8C87: ;
    eax = 0x80004005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B8C8F
 * Original: 0x000B8C8F - 0x000B8C97 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C8F(void)
{

loc_000B8C8F: ;
    eax = 0x80004005u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8C97
 * Original: 0x000B8C97 - 0x000B8C9F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C97(void)
{

loc_000B8C97: ;
    eax = 0x80004005u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B8C9F
 * Original: 0x000B8C9F - 0x000B8CA7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C9F(void)
{

loc_000B8C9F: ;
    eax = 0x80004005u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8CA7
 * Original: 0x000B8CA7 - 0x000B8CAF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CA7(void)
{

loc_000B8CA7: ;
    eax = 0x80004005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B8CAF
 * Original: 0x000B8CAF - 0x000B8CB7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CAF(void)
{

loc_000B8CAF: ;
    eax = 0x80004005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B8CB7
 * Original: 0x000B8CB7 - 0x000B8CBF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CB7(void)
{

loc_000B8CB7: ;
    eax = 0x80004005u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8CBF
 * Original: 0x000B8CBF - 0x000B8CD6 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CBF(void)
{

loc_000B8CBF: ;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x000B8CD3u); RECOMP_ABI_CALL(0x000BB0A2u, sub_000BB0A2); /* call 0x000BB0A2 */

loc_000B8CD3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8CD6
 * Original: 0x000B8CD6 - 0x000B8CE2 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CD6(void)
{

loc_000B8CD6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B8CDFu); RECOMP_ABI_CALL(0x000BA6E8u, sub_000BA6E8); /* call 0x000BA6E8 */

loc_000B8CDF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8CE2
 * Original: 0x000B8CE2 - 0x000B8D63 (129 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8CE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8CE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    MEM32(ebp + -4) = 2;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000B8D60; /* jbe: below or equal (unsigned <=) */

loc_000B8CFC: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edi);

loc_000B8D04: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D5E; /* je: equal / zero */

loc_000B8D0A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + -8);
    edi = MEM32(ecx + eax);
    ecx = MEM32(edi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8D1Bu); RECOMP_ABI_CALL(0x000BA36Eu, sub_000BA36E); /* call 0x000BA36E */

loc_000B8D1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D4E; /* je: equal / zero */

loc_000B8D1F: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8D27u); RECOMP_ABI_CALL(0x000B8BF3u, sub_000B8BF3); /* call 0x000B8BF3 */

loc_000B8D27: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_000B8D3F; /* jae: above or equal (unsigned >=) */

loc_000B8D2E: ;
    eax = MEM32(esi + 8);
    eax = eax + ecx * 4;
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8D2E; /* jb: below (unsigned <) */

loc_000B8D3F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4 + -4) = edi;
    goto loc_000B8D53;

loc_000B8D4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8D53: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8D04; /* jb: below (unsigned <) */

loc_000B8D5E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000B8D60: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8D63
 * Original: 0x000B8D63 - 0x000B8DC1 (94 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8D63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8D63: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000B8DBC; /* jae: above or equal (unsigned >=) */

loc_000B8D73: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8DB7; /* je: equal / zero */

loc_000B8D77: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8D8E; /* jbe: below or equal (unsigned <=) */

loc_000B8D83: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B8D8Bu); RECOMP_ABI_CALL(0x000B8C1Bu, sub_000B8C1B); /* call 0x000B8C1B */

loc_000B8D8B: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000B8D9B;

loc_000B8D8E: ;
    edi = MEM32(edx + 0x24);
    PUSH32(esp, 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x4C) = eax;

loc_000B8D9B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8D73; /* jb: below (unsigned <) */

loc_000B8DA1: ;
    goto loc_000B8DB7;

loc_000B8DA3: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + ebx * 4);
    edi = MEM32(edx + 0x24);
    PUSH32(esp, 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x4C) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8DB7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8DA3; /* jb: below (unsigned <) */

loc_000B8DBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8DC1
 * Original: 0x000B8DC1 - 0x000B8DE2 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8DC1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B8DC1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000B8DD1u); RECOMP_ABI_CALL(0x000B841Du, sub_000B841D); /* call 0x000B841D */

loc_000B8DD1: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8DE2
 * Original: 0x000B8DE2 - 0x000B8DFA (24 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8DE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8DE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000B8E1C(); return; } /* jbe: below or equal (unsigned <=) */

loc_000B8DF4: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    edi = ecx;

    g_seh_ebp = ebp; sub_000B8DFA(); return; /* fallthrough 0x000B8DFA */

}

/**
 * sub_000B8DFA
 * Original: 0x000B8DFA - 0x000B8E1C (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8DFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8DFA: ;
    edx = MEM32(edi);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8E0B; /* jne: not equal / not zero */

loc_000B8E03: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E15; /* je: equal / zero */

loc_000B8E0B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8DFA; /* jb: below (unsigned <) */

loc_000B8E13: ;
    goto loc_000B8E1B;

loc_000B8E15: ;
    eax = MEM32(ecx + ebx * 4);
    MEM32(ebp + -4) = eax;

loc_000B8E1B: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_000B8E1C(); return; /* fallthrough 0x000B8E1C */

}

/**
 * sub_000B8E1C
 * Original: 0x000B8E1C - 0x000B8E25 (9 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8E1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8E1C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8E25
 * Original: 0x000B8E25 - 0x000B8E5C (55 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8E25(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8E25: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8E57; /* jbe: below or equal (unsigned <=) */

loc_000B8E33: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);

loc_000B8E37: ;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8E4A; /* jne: not equal / not zero */

loc_000B8E41: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E54; /* je: equal / zero */

loc_000B8E4A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8E37; /* jb: below (unsigned <) */

loc_000B8E52: ;
    goto loc_000B8E56;

loc_000B8E54: ;
    eax = edi;

loc_000B8E56: ;
    POP32(esp, ebx);

loc_000B8E57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8E5C
 * Original: 0x000B8E5C - 0x000B8E91 (53 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8E5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8E5C: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E8F; /* je: equal / zero */

loc_000B8E67: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8E8F; /* jbe: below or equal (unsigned <=) */

loc_000B8E6D: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = ecx + 0x50;

loc_000B8E74: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E83; /* je: equal / zero */

loc_000B8E79: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8E74; /* jb: below (unsigned <) */

loc_000B8E81: ;
    goto loc_000B8E8E;

loc_000B8E83: ;
    eax = edx + edx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x50) = edx;

loc_000B8E8E: ;
    POP32(esp, edi);

loc_000B8E8F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8E91
 * Original: 0x000B8E91 - 0x000B8F0E (125 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8E91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8E91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B8EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8EA0u); } /* indirect call */
    }

loc_000B8EA6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = ebx;
    MEM8(ebp + -1) = LO8(eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8EBBu); RECOMP_ABI_CALL(0x000B8DE2u, sub_000B8DE2); /* call 0x000B8DE2 */

loc_000B8EBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8ECB; /* je: equal / zero */

loc_000B8EC2: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_000B8EED;

loc_000B8ECB: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8ED2u); RECOMP_ABI_CALL(0x000B8E5Cu, sub_000B8E5C); /* call 0x000B8E5C */

loc_000B8ED2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8EC2; /* je: equal / zero */

loc_000B8ED9: ;
    esi = ebp + 8;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ebx + 0x20);
    MEM32(edx + ecx * 4) = eax;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8EED: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B8EF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8EF0u); } /* indirect call */
    }

loc_000B8EF6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8F04; /* jl: less (signed <) */

loc_000B8EFC: ;
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8F04u); RECOMP_ABI_CALL(0x000BC8BEu, sub_000BC8BE); /* call 0x000BC8BE */

loc_000B8F04: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B8F52
 * Original: 0x000B8F52 - 0x000B8F83 (49 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B8F52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8F52: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8F7E; /* jbe: below or equal (unsigned <=) */

loc_000B8F62: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000B8F68: ;
    esi = MEM32(ecx + 0x20);
    esi = MEM32(esi + eax * 4);
    edi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8F68; /* jb: below (unsigned <) */

loc_000B8F7C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B8F7E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8F83
 * Original: 0x000B8F83 - 0x000B8FFA (119 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8F83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8F83: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    edi = ebx;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + eax);
    PUSH32(esp, 0x000B8F9Du); RECOMP_ABI_CALL(0x000BC6B8u, sub_000BC6B8); /* call 0x000BC6B8 */

loc_000B8F9D: ;
    ebp = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8FF3; /* jbe: below or equal (unsigned <=) */

loc_000B8FA7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FC7; /* je: equal / zero */

loc_000B8FAC: ;
    eax = MEM32(esi + 0x20);
    ecx = eax + edi;
    edi = MEM32(esi + 0x14);
    eax = MEM32(eax + edi * 4 + -4);
    edx = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + eax * 4 + -4) = edx;

loc_000B8FC7: ;
    edi = MEM32(esi + 0x14);
    goto loc_000B8FF0;

loc_000B8FCC: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4 + -4);
    PUSH32(esp, 0x000B8FD8u); RECOMP_ABI_CALL(0x000BC6B8u, sub_000BC6B8); /* call 0x000BC6B8 */

loc_000B8FD8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B8FF3; /* jae: above or equal (unsigned >=) */

loc_000B8FDC: ;
    eax = MEM32(esi + 0x20);
    eax = eax + edi * 4;
    edx = MEM32(eax);
    ecx = MEM32(eax + -4);
    MEM32(eax + -4) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(eax + edi * 4) = ecx;

loc_000B8FF0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8FCC; /* jne: not equal / not zero */

loc_000B8FF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8FFA
 * Original: 0x000B8FFA - 0x000B904B (81 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8FFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8FFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = ecx;
    MEM32(ebp + -4) = 0x80004005u;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B901Au); RECOMP_ABI_CALL(0x000B8E25u, sub_000B8E25); /* call 0x000B8E25 */

loc_000B901A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9041; /* jae: above or equal (unsigned >=) */

loc_000B9021: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(eax + esi * 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9032u); RECOMP_ABI_CALL(0x000BC6D2u, sub_000BC6D2); /* call 0x000BC6D2 */

loc_000B9032: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B9041; /* jl: less (signed <) */

loc_000B9039: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9041u); RECOMP_ABI_CALL(0x000B8F83u, sub_000B8F83); /* call 0x000B8F83 */

loc_000B9041: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B904B
 * Original: 0x000B904B - 0x000B9057 (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B904B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B904B: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9057
 * Original: 0x000B9057 - 0x000B90A3 (76 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9057(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9057: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B908C; /* je: equal / zero */

loc_000B9064: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB8B4C);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B9077u); RECOMP_ABI_CALL(0x000B7E19u, sub_000B7E19); /* call 0x000B7E19 */

loc_000B9077: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9087; /* je: equal / zero */

loc_000B907C: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9087u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B9087: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_000B909E;

loc_000B908C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B909C; /* je: equal / zero */

loc_000B9091: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B909Cu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B909C: ;
    eax = edi;

loc_000B909E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B90A3
 * Original: 0x000B90A3 - 0x000B9178 (213 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B90A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B90A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = esi;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, esi);
    edi = ecx + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B90C8u); RECOMP_ABI_CALL(0x001AE8F7u, sub_001AE8F7); /* call 0x001AE8F7 */

loc_000B90C8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B90D8; /* jne: not equal / not zero */

loc_000B90CC: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_000B9169;

loc_000B90D8: ;
    eax = ebp + -56;
    MEM32(ebp + -16) = 5;
    MEM32(ebp + -12) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B90EB;

loc_000B90E9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B90EB: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B90F7u); RECOMP_ABI_CALL(0x000B7ED0u, sub_000B7ED0); /* call 0x000B7ED0 */

loc_000B90F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9171; /* je: equal / zero */

loc_000B90FB: ;
    esi = MEM32(eax + 8);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi));
    eax = ebp + ebx * 8 + -56;
    MEM32(eax) = ecx;
    MEM32(ebp + ebx * 8 + -52) = 0xFFFFD8F0u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9122u); RECOMP_ABI_CALL(0x001AB115u, sub_001AB115); /* call 0x001AB115 */

loc_000B9122: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esi + 0x1C) = 3;
    if (CMP_B(_fa, _fb)) goto loc_000B90E9; /* jb: below (unsigned <) */

loc_000B912F: ;
    esi = MEM32(ebp + -8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    MEM32(ebp + -24) = 2;
    MEM32(ebp + -20) = 0xFFFFD8F0u;
    if (CMP_BE(_fa, _fb)) goto loc_000B9169; /* jbe: below or equal (unsigned <=) */

loc_000B9149: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9169; /* jl: less (signed <) */

loc_000B914F: ;
    ecx = MEM32(esi + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B915Du); RECOMP_ABI_CALL(0x000BCBD8u, sub_000BCBD8); /* call 0x000BCBD8 */

loc_000B915D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x18) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B9149; /* jb: below (unsigned <) */

loc_000B9169: ;
    eax = MEM32(ebp + -4);

loc_000B916C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000B9171: ;
    eax = 0x80004005u;
    goto loc_000B916C;

}

/**
 * sub_000B9178
 * Original: 0x000B9178 - 0x000B91E5 (109 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B9178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9178: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x000B9186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9180u); } /* indirect call */
    }

loc_000B9186: ;
    ecx = esi;
    PUSH32(esp, 0x000B918Du); RECOMP_ABI_CALL(0x000BB65Au, sub_000BB65A); /* call 0x000BB65A */

loc_000B918D: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000B9197u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000B9197: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    MEM32(esi + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000B91D2; /* je: equal / zero */

loc_000B91A1: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B91C0; /* jbe: below or equal (unsigned <=) */

loc_000B91A9: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B91AC: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B91B6u); RECOMP_ABI_CALL(0x000BC4B6u, sub_000BC4B6); /* call 0x000BC4B6 */

loc_000B91B6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B91AC; /* jb: below (unsigned <) */

loc_000B91BF: ;
    POP32(esp, ebx);

loc_000B91C0: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B91CF; /* je: equal / zero */

loc_000B91C8: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000B91CFu); RECOMP_ABI_CALL(0x000B9057u, sub_000B9057); /* call 0x000B9057 */

loc_000B91CF: ;
    MEM32(esi + 0x10) = ebp;

loc_000B91D2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91E2; /* je: equal / zero */

loc_000B91D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B91DFu); RECOMP_ABI_CALL(0x001A8DFEu, sub_001A8DFE); /* call 0x001A8DFE */

loc_000B91DF: ;
    MEM32(esi + 0x24) = ebp;

loc_000B91E2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B91E5
 * Original: 0x000B91E5 - 0x000B920A (37 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B91E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B91E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9207; /* jbe: below or equal (unsigned <=) */

loc_000B91F2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000B91FDu); RECOMP_ABI_CALL(0x000BAAEAu, sub_000BAAEA); /* call 0x000BAAEA */

loc_000B91FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9207; /* jl: less (signed <) */

loc_000B9201: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B91F2; /* jb: below (unsigned <) */

loc_000B9207: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B920A
 * Original: 0x000B920A - 0x000B9232 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B920A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B920A: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9231; /* jbe: below or equal (unsigned <=) */

loc_000B9213: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000B9215: ;
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + edx * 4);
    esi = MEM32(ecx + 0x24);
    PUSH32(esp, 0x50);
    edi = esi + 0x140;
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9215; /* jb: below (unsigned <) */

loc_000B922F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B9231: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9232
 * Original: 0x000B9232 - 0x000B9283 (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9232(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9232: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 0x80004005u;
    if (CMP_BE(_fa, _fb)) goto loc_000B927E; /* jbe: below or equal (unsigned <=) */

loc_000B9242: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B927D; /* jbe: below or equal (unsigned <=) */

loc_000B9249: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000B9257u); RECOMP_ABI_CALL(0x000BBAA6u, sub_000BBAA6); /* call 0x000BBAA6 */

loc_000B9257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9263; /* jne: not equal / not zero */

loc_000B925B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9249; /* jb: below (unsigned <) */

loc_000B9261: ;
    goto loc_000B927D;

loc_000B9263: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B927B; /* jbe: below or equal (unsigned <=) */

loc_000B926A: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000B9275u); RECOMP_ABI_CALL(0x000BC58Du, sub_000BC58D); /* call 0x000BC58D */

loc_000B9275: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B926A; /* jb: below (unsigned <) */

loc_000B927B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B927D: ;
    POP32(esp, edi);

loc_000B927E: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9283
 * Original: 0x000B9283 - 0x000B92B9 (54 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9283(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9283: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = 0x80004005u;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B929Cu); RECOMP_ABI_CALL(0x000B8DE2u, sub_000B8DE2); /* call 0x000B8DE2 */

loc_000B929C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B92B1; /* je: equal / zero */

loc_000B92A0: ;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x000B92AFu); RECOMP_ABI_CALL(0x000BC520u, sub_000BC520); /* call 0x000BC520 */

loc_000B92AF: ;
    ebx = eax;

loc_000B92B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B92B9
 * Original: 0x000B92B9 - 0x000B92F6 (61 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B92B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B92B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236608)); /* fmul dword ptr [0x236608] */
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B92CDu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000B92CD: ;
    esi = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax + 0x18);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B92F1u); RECOMP_ABI_CALL(0x001AB0B7u, sub_001AB0B7); /* call 0x001AB0B7 */

loc_000B92F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B92F6
 * Original: 0x000B92F6 - 0x000B931B (37 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B92F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B92F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B930Cu); RECOMP_ABI_CALL(0x000B8DE2u, sub_000B8DE2); /* call 0x000B8DE2 */

loc_000B930C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9313; /* je: equal / zero */

loc_000B9310: ;
    ebx = MEM32(eax + 0x4C);

loc_000B9313: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B931B
 * Original: 0x000B931B - 0x000B9351 (54 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B931B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B931B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = 0x80004005u;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B9334u); RECOMP_ABI_CALL(0x000B8DE2u, sub_000B8DE2); /* call 0x000B8DE2 */

loc_000B9334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9349; /* je: equal / zero */

loc_000B9338: ;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x000B9347u); RECOMP_ABI_CALL(0x000BC77Bu, sub_000BC77B); /* call 0x000BC77B */

loc_000B9347: ;
    ebx = eax;

loc_000B9349: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B9351
 * Original: 0x000B9351 - 0x000B9385 (52 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9351(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9351: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = 0x80004005u;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x000B936Au); RECOMP_ABI_CALL(0x000B8DE2u, sub_000B8DE2); /* call 0x000B8DE2 */

loc_000B936A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B937D; /* je: equal / zero */

loc_000B936E: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B937Bu); RECOMP_ABI_CALL(0x001AB4B9u, sub_001AB4B9); /* call 0x001AB4B9 */

loc_000B937B: ;
    ebx = eax;

loc_000B937D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B9385
 * Original: 0x000B9385 - 0x000B944F (202 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B9385(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9385: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xFC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B944A; /* je: equal / zero */

loc_000B9399: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B93A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B939Au); } /* indirect call */
    }

loc_000B93A0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xFC);
    if (CMP_EQ(_fa, _fb)) goto loc_000B93B4; /* je: equal / zero */

loc_000B93B0: ;
    edx = eax;
    goto loc_000B93D6;

loc_000B93B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B93D6; /* jb: below (unsigned <) */

loc_000B93B9: ;
    PUSH32(esp, 2);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + eax * 8 + 0x64;

loc_000B93C3: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B93D3; /* je: equal / zero */

loc_000B93C8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B93C3; /* jbe: below or equal (unsigned <=) */

loc_000B93D1: ;
    goto loc_000B93D6;

loc_000B93D3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B93D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B93DC; /* jb: below (unsigned <) */

loc_000B93DA: ;
    edx = eax;

loc_000B93DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B941F; /* jbe: below or equal (unsigned <=) */

loc_000B93E0: ;
    PUSH32(esp, ebx);
    ebx = edx;

loc_000B93E3: ;
    MEM32(esi + 0xFC) = MEM32(esi + 0xFC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(esi + eax * 8 + 0x6C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B9404; /* je: equal / zero */

loc_000B93F6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B940D; /* jne: not equal / not zero */

loc_000B93F9: ;
    ecx = MEM32(esi + eax * 8 + 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9402u); RECOMP_ABI_CALL(0x000BC5B3u, sub_000BC5B3); /* call 0x000BC5B3 */

loc_000B9402: ;
    goto loc_000B940D;

loc_000B9404: ;
    ecx = MEM32(esi + eax * 8 + 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B940Du); RECOMP_ABI_CALL(0x000BAB29u, sub_000BAB29); /* call 0x000BAB29 */

loc_000B940D: ;
    ecx = MEM32(esi + 0xFC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = esi + ecx * 8 + 0x6C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if ((_fa != 0)) goto loc_000B93E3; /* jne: not equal / not zero */

loc_000B941E: ;
    POP32(esp, ebx);

loc_000B941F: ;
    _fa = (uint32_t)(MEM32(esi + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xFC), 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9441; /* je: equal / zero */

loc_000B9429: ;
    edx = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFFD8F0u;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x000B9441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B943Bu); } /* indirect call */
    }

loc_000B9441: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B944Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9444u); } /* indirect call */
    }

loc_000B944A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B944F
 * Original: 0x000B944F - 0x000B94CA (123 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B944F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B944F: ;
    eax = MEM32(ecx + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B94C7; /* je: equal / zero */

loc_000B9459: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000B9478; /* jbe: below or equal (unsigned <=) */

loc_000B9461: ;
    esi = ecx + 0x70;

loc_000B9464: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9478; /* je: equal / zero */

loc_000B946C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9464; /* jb: below (unsigned <) */

loc_000B9478: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    esi = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000B949D; /* jae: above or equal (unsigned >=) */

loc_000B947F: ;
    eax = ecx + edx * 8 + 0x6C;

loc_000B9483: ;
    edi = MEM32(eax + 8);
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 0xFC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9483; /* jb: below (unsigned <) */

loc_000B949D: ;
    eax = MEM32(ecx + 0xFC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000B94C7; /* jae: above or equal (unsigned >=) */

loc_000B94A9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + eax * 8 + 0x6C) = MEM32(ecx + eax * 8 + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xFC);
    MEM32(ecx + eax * 8 + 0x70) = MEM32(ecx + eax * 8 + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B94C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B94CA
 * Original: 0x000B94CA - 0x000B9544 (122 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94CA: ;
    eax = MEM32(ecx + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9541; /* je: equal / zero */

loc_000B94D4: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000B94F3; /* jbe: below or equal (unsigned <=) */

loc_000B94DC: ;
    esi = ecx + 0x70;

loc_000B94DF: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B94F3; /* je: equal / zero */

loc_000B94E7: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B94DF; /* jb: below (unsigned <) */

loc_000B94F3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    esi = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000B9518; /* jae: above or equal (unsigned >=) */

loc_000B94FA: ;
    eax = ecx + edx * 8 + 0x6C;

loc_000B94FE: ;
    edi = MEM32(eax + 8);
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 0xFC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B94FE; /* jb: below (unsigned <) */

loc_000B9518: ;
    eax = MEM32(ecx + 0xFC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000B9541; /* jae: above or equal (unsigned >=) */

loc_000B9524: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + eax * 8 + 0x6C) = MEM32(ecx + eax * 8 + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xFC);
    MEM32(ecx + eax * 8 + 0x70) = MEM32(ecx + eax * 8 + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B9541: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9544
 * Original: 0x000B9544 - 0x000B956B (39 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9544(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9544: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9566; /* jbe: below or equal (unsigned <=) */

loc_000B954F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000B9560u); RECOMP_ABI_CALL(0x000BC81Cu, sub_000BC81C); /* call 0x000BC81C */

loc_000B9560: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B954F; /* jb: below (unsigned <) */

loc_000B9566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B956B
 * Original: 0x000B956B - 0x000B9592 (39 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B956B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B956B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B958D; /* jbe: below or equal (unsigned <=) */

loc_000B9576: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000B9587u); RECOMP_ABI_CALL(0x000BC886u, sub_000BC886); /* call 0x000BC886 */

loc_000B9587: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9576; /* jb: below (unsigned <) */

loc_000B958D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B959B
 * Original: 0x000B959B - 0x000B959F (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B959B(void)
{

loc_000B959B: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000B959F
 * Original: 0x000B959F - 0x000B95A3 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B959F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B959F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000B95A3
 * Original: 0x000B95A3 - 0x000B95B3 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95A3(void)
{

loc_000B95A3: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000B95B0u); RECOMP_ABI_CALL(0x000BAA15u, sub_000BAA15); /* call 0x000BAA15 */

loc_000B95B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B95B3
 * Original: 0x000B95B3 - 0x000B95CE (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95B3(void)
{

loc_000B95B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x000B95BFu); RECOMP_ABI_CALL(0x000BB582u, sub_000BB582); /* call 0x000BB582 */

loc_000B95BF: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x000B95CAu); RECOMP_ABI_CALL(0x000B956Bu, sub_000B956B); /* call 0x000B956B */

loc_000B95CA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B95CE
 * Original: 0x000B95CE - 0x000B95EF (33 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95CE(void)
{

loc_000B95CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B95DCu); RECOMP_ABI_CALL(0x000B944Fu, sub_000B944F); /* call 0x000B944F */

loc_000B95DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B95E2u); RECOMP_ABI_CALL(0x000B9544u, sub_000B9544); /* call 0x000B9544 */

loc_000B95E2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B95EAu); RECOMP_ABI_CALL(0x000BB5BAu, sub_000BB5BA); /* call 0x000BB5BA */

loc_000B95EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B95EF
 * Original: 0x000B95EF - 0x000B9667 (120 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B95EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x000B95F9u); RECOMP_ABI_CALL(0x000B9385u, sub_000B9385); /* call 0x000B9385 */

loc_000B95F9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x100) = MEM32(esi + 0x100) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    PUSH32(esp, 0x000B9607u); RECOMP_ABI_CALL(0x000B920Au, sub_000B920A); /* call 0x000B920A */

loc_000B9607: ;
    ecx = esi;
    PUSH32(esp, 0x000B960Eu); RECOMP_ABI_CALL(0x000B91E5u, sub_000B91E5); /* call 0x000B91E5 */

loc_000B960E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000B9619; /* jl: less (signed <) */

loc_000B9612: ;
    ecx = esi;
    PUSH32(esp, 0x000B9619u); RECOMP_ABI_CALL(0x000B8CE2u, sub_000B8CE2); /* call 0x000B8CE2 */

loc_000B9619: ;
    ecx = esi;
    PUSH32(esp, 0x000B9620u); RECOMP_ABI_CALL(0x000B9232u, sub_000B9232); /* call 0x000B9232 */

loc_000B9620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000B962B; /* jl: less (signed <) */

loc_000B9624: ;
    ecx = esi;
    PUSH32(esp, 0x000B962Bu); RECOMP_ABI_CALL(0x000B8D63u, sub_000B8D63); /* call 0x000B8D63 */

loc_000B962B: ;
    eax = MEM32(esi + 0x100);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B9639; /* jne: not equal / not zero */

loc_000B9635: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_000B963C;

loc_000B9639: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B963C: ;
    PUSH32(esp, 0x13);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2710);
    MEM32(esi + 0x100) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x000B9665u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B965Fu); } /* indirect call */
    }

loc_000B9665: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9667
 * Original: 0x000B9667 - 0x000B96D2 (107 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9667(void)
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

loc_000B9667: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x000B9673u); RECOMP_ABI_CALL(0x000B9385u, sub_000B9385); /* call 0x000B9385 */

loc_000B9673: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9692; /* jbe: below or equal (unsigned <=) */

loc_000B967A: ;
    eax = MEM32(0x96FD04);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000B968Cu); RECOMP_ABI_CALL(0x000BACC5u, sub_000BACC5); /* call 0x000BACC5 */

loc_000B968C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B967A; /* jb: below (unsigned <) */

loc_000B9692: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B96CE; /* jbe: below or equal (unsigned <=) */

loc_000B9699: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0x30);
    fp_push((double)SMEM32(eax + 0x30)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B96AF; /* jge: greater or equal (signed >=) */

loc_000B96A9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000B96AF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2821AC)); /* fmul dword ptr [0x2821ac] */
    PUSH32(esp, ecx);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(MEMF(0x2820C0) - fp_top()); /* fsubr dword ptr [0x2820c0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x000B96C8u); RECOMP_ABI_CALL(0x000B92B9u, sub_000B92B9); /* call 0x000B92B9 */

loc_000B96C8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9699; /* jb: below (unsigned <) */

loc_000B96CE: ;
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
 * sub_000B96D2
 * Original: 0x000B96D2 - 0x000B97B7 (229 bytes, 86 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B96D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B96D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B96E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B96E1u); } /* indirect call */
    }

loc_000B96E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = ebx;
    MEM8(ebp + -1) = LO8(eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B96FCu); RECOMP_ABI_CALL(0x000B8E25u, sub_000B8E25); /* call 0x000B8E25 */

loc_000B96FC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B974C; /* jae: above or equal (unsigned >=) */

loc_000B9703: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9711u); RECOMP_ABI_CALL(0x000B94CAu, sub_000B94CA); /* call 0x000B94CA */

loc_000B9711: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B971Fu); RECOMP_ABI_CALL(0x001AB4DBu, sub_001AB4DB); /* call 0x001AB4DB */

loc_000B971F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9726u); RECOMP_ABI_CALL(0x000BC3D0u, sub_000BC3D0); /* call 0x000BC3D0 */

loc_000B9726: ;
    goto loc_000B9734;

loc_000B9728: ;
    eax = MEM32(ebx + 0x20);
    eax = eax + edi * 4;
    ecx = MEM32(eax + 4);
    MEM32(eax) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9734: ;
    eax = MEM32(ebx + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9728; /* jb: below (unsigned <) */

loc_000B973C: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x20);
    MEM32(ecx + eax * 4 + -4) = MEM32(ecx + eax * 4 + -4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000B974F;

loc_000B974C: ;
    esi = MEM32(ebp + -8);

loc_000B974F: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B9758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9752u); } /* indirect call */
    }

loc_000B9758: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B97AB; /* je: equal / zero */

loc_000B975C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x10;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 4);
    POP32(esp, ebx);
    eax = ebp + -40;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9770: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B977Cu); RECOMP_ABI_CALL(0x000B7ED0u, sub_000B7ED0); /* call 0x000B7ED0 */

loc_000B977C: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + edi * 8 + -40) = eax;
    MEM32(ebp + edi * 8 + -36) = 0xFFFFD8F0u;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9770; /* jb: below (unsigned <) */

loc_000B979B: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B97A7u); RECOMP_ABI_CALL(0x001AD34Cu, sub_001AD34C); /* call 0x001AD34C */

loc_000B97A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B97B0;

loc_000B97AB: ;
    eax = 0x80004005u;

loc_000B97B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B97B7
 * Original: 0x000B97B7 - 0x000B97C5 (14 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97B7(void)
{

loc_000B97B7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000B97C2u); RECOMP_ABI_CALL(0x000B9385u, sub_000B9385); /* call 0x000B9385 */

loc_000B97C2: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B97C5
 * Original: 0x000B97C5 - 0x000B98C8 (259 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B97C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC64); PUSH32(esp, 0x000B97D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B97D2u); } /* indirect call */
    }

loc_000B97D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB97B7);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x000B97E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B97E2u); } /* indirect call */
    }

loc_000B97E8: ;
    ecx = esi;
    PUSH32(esp, 0x000B97EFu); RECOMP_ABI_CALL(0x000BB615u, sub_000BB615); /* call 0x000BB615 */

loc_000B97EF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B982B; /* jl: less (signed <) */

loc_000B97F5: ;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0xFC) = ebp;
    MEM32(esi + 0x100) = ebp;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000B981F; /* jbe: below or equal (unsigned <=) */

loc_000B981C: ;
    MEM32(esi + 0x1C) = ecx;

loc_000B981F: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9839; /* jne: not equal / not zero */

loc_000B9826: ;
    ebx = 0x80004005u;

loc_000B982B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B9832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B982Fu); } /* indirect call */
    }

loc_000B9832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B9839: ;
    eax = edi + edi * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x801C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B984Du); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B984D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9866; /* je: equal / zero */

loc_000B9851: ;
    PUSH32(esp, 0xB8B0A);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x000B9864u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000B9864: ;
    goto loc_000B9868;

loc_000B9866: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9868: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esi + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9884; /* je: equal / zero */

loc_000B986F: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x23);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B987Du); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B987D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B988B; /* jne: not equal / not zero */

loc_000B9884: ;
    ebx = 0x8007000Eu;
    goto loc_000B982B;

loc_000B988B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B989E; /* jbe: below or equal (unsigned <=) */

loc_000B9892: ;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + eax * 4) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9892; /* jb: below (unsigned <) */

loc_000B989E: ;
    ecx = esi;
    MEM32(0x96FD1C) = 1;
    PUSH32(esp, 0x000B98AFu); RECOMP_ABI_CALL(0x000B90A3u, sub_000B90A3); /* call 0x000B90A3 */

loc_000B98AF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B982B; /* jl: less (signed <) */

loc_000B98B9: ;
    PUSH32(esp, 0x24);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x6C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_000B9832;

}

/**
 * sub_000B98C8
 * Original: 0x000B98C8 - 0x000B98E3 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B98C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B98C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000B98D3u); RECOMP_ABI_CALL(0x000BA273u, sub_000BA273); /* call 0x000BA273 */

loc_000B98D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B98DF; /* je: equal / zero */

loc_000B98D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B98E1; /* je: equal / zero */

loc_000B98DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B98E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B98E7
 * Original: 0x000B98E7 - 0x000B9903 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B98E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B98E7: ;
    edx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_000B9900; /* ja: above (unsigned >) */

loc_000B98F9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x78) = edx;
    esp += 4; return; /* ret */

loc_000B9900: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B990D
 * Original: 0x000B990D - 0x000B9919 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B990D(void)
{

loc_000B990D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B9916u); RECOMP_ABI_CALL(0x000BB138u, sub_000BB138); /* call 0x000BB138 */

loc_000B9916: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9919
 * Original: 0x000B9919 - 0x000B9925 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9919(void)
{

loc_000B9919: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B9922u); RECOMP_ABI_CALL(0x000BA720u, sub_000BA720); /* call 0x000BA720 */

loc_000B9922: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9925
 * Original: 0x000B9925 - 0x000B9959 (52 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9925(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9925: ;
    edx = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B994E; /* jbe: below or equal (unsigned <=) */

loc_000B9932: ;
    eax = ecx + 0x1C;

loc_000B9935: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9946; /* jne: not equal / not zero */

loc_000B993E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B994E; /* je: equal / zero */

loc_000B9946: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9935; /* jb: below (unsigned <) */

loc_000B994E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9959
 * Original: 0x000B9959 - 0x000B997A (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9959(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B9959: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000B9969u); RECOMP_ABI_CALL(0x000B841Du, sub_000B841D); /* call 0x000B841D */

loc_000B9969: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B997A
 * Original: 0x000B997A - 0x000B9A54 (218 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B997A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B997A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = ecx;
    edi = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B999Eu); RECOMP_ABI_CALL(0x001AE8F7u, sub_001AE8F7); /* call 0x001AE8F7 */

loc_000B999E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B99AF; /* jne: not equal / not zero */

loc_000B99A3: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_000B9A4C;

loc_000B99AF: ;
    PUSH32(esp, 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_000B99B4: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B99C0u); RECOMP_ABI_CALL(0x000B7ED0u, sub_000B7ED0); /* call 0x000B7ED0 */

loc_000B99C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A0F; /* je: equal / zero */

loc_000B99C4: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    MEM32(ebp + esi * 8 + -40) = MEM32(ebp + esi * 8 + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + esi * 8 + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + esi * 8 + -44) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B99B4; /* jb: below (unsigned <) */

loc_000B99E0: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, 0x184);
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B99F6u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B99F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A16; /* je: equal / zero */

loc_000B99FA: ;
    PUSH32(esp, 0xB8B0A);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9A0Du); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000B9A0D: ;
    goto loc_000B9A18;

loc_000B9A0F: ;
    eax = 0x80004005u;
    goto loc_000B9A4F;

loc_000B9A16: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9A18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B99A3; /* je: equal / zero */

loc_000B9A1F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -44;

loc_000B9A24: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9A4C; /* jl: less (signed <) */

loc_000B9A2A: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9A3Bu); RECOMP_ABI_CALL(0x000BCE48u, sub_000BCE48); /* call 0x000BCE48 */

loc_000B9A3B: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B9A24; /* jb: below (unsigned <) */

loc_000B9A4C: ;
    eax = MEM32(ebp + -4);

loc_000B9A4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9A54
 * Original: 0x000B9A54 - 0x000B9AA0 (76 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9A54: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9A5Cu); RECOMP_ABI_CALL(0x000BB65Au, sub_000BB65A); /* call 0x000BB65A */

loc_000B9A5C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A6D; /* je: equal / zero */

loc_000B9A63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9A69u); RECOMP_ABI_CALL(0x001A8DFEu, sub_001A8DFE); /* call 0x001A8DFE */

loc_000B9A69: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B9A6D: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A9E; /* je: equal / zero */

loc_000B9A73: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9A76: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9A80u); RECOMP_ABI_CALL(0x000BCCFAu, sub_000BCCFA); /* call 0x000BCCFA */

loc_000B9A80: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9A76; /* jb: below (unsigned <) */

loc_000B9A8B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A9A; /* je: equal / zero */

loc_000B9A93: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000B9A9Au); RECOMP_ABI_CALL(0x000B9057u, sub_000B9057); /* call 0x000B9057 */

loc_000B9A9A: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B9A9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9AA0
 * Original: 0x000B9AA0 - 0x000B9B36 (150 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B9AADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9AA7u); } /* indirect call */
    }

loc_000B9AAD: ;
    ebp = MEM32(ebx + 0x98);
    edx = ebx + 0x18;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = edx;
    MEM8(esp + 0x13) = LO8(eax);
    edi = ebx + 0x58;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = ebp + ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) & eax;
    _fa = (uint32_t)(MEM32(ebx + 0x98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B9ADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9AD8u); } /* indirect call */
    }

loc_000B9ADE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9B30; /* jbe: below or equal (unsigned <=) */

loc_000B9AE2: ;
    edi = ebx + 0x5C;

loc_000B9AE5: ;
    eax = MEM32(edi + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(edi);
    if ((_fa == 0)) goto loc_000B9B23; /* je: equal / zero */

loc_000B9AED: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B9B1F; /* je: equal / zero */

loc_000B9AF2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B9B01; /* je: equal / zero */

loc_000B9AF5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9B2A; /* jne: not equal / not zero */

loc_000B9AF8: ;
    ecx = esi;
    PUSH32(esp, 0x000B9AFFu); RECOMP_ABI_CALL(0x000BABB4u, sub_000BABB4); /* call 0x000BABB4 */

loc_000B9AFF: ;
    goto loc_000B9B2A;

loc_000B9B01: ;
    ecx = esi + esi * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9B0Fu); RECOMP_ABI_CALL(0x000BCA0Au, sub_000BCA0A); /* call 0x000BCA0A */

loc_000B9B0F: ;
    PUSH32(esp, esi);

loc_000B9B10: ;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x000B9B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9B1Au); } /* indirect call */
    }

loc_000B9B1D: ;
    goto loc_000B9B2A;

loc_000B9B1F: ;
    PUSH32(esp, MEM32(esi));
    goto loc_000B9B10;

loc_000B9B23: ;
    ecx = esi;
    PUSH32(esp, 0x000B9B2Au); RECOMP_ABI_CALL(0x000BB26Fu, sub_000BB26F); /* call 0x000BB26F */

loc_000B9B2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9AE5; /* jne: not equal / not zero */

loc_000B9B30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B3F
 * Original: 0x000B9B3F - 0x000B9B43 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B3F(void)
{

loc_000B9B3F: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B43
 * Original: 0x000B9B43 - 0x000B9B5C (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B43(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9B43: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = ecx;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9B59u); RECOMP_ABI_CALL(0x000BC3D0u, sub_000BC3D0); /* call 0x000BC3D0 */

loc_000B9B59: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9B5C
 * Original: 0x000B9B5C - 0x000B9B60 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B5C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9B5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B60
 * Original: 0x000B9B60 - 0x000B9B76 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B60(void)
{

loc_000B9B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9B6Bu); RECOMP_ABI_CALL(0x000BB582u, sub_000BB582); /* call 0x000BB582 */

loc_000B9B6B: ;
    MEM32(esi + 0x64) = 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9B76
 * Original: 0x000B9B76 - 0x000B9BB7 (65 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9B76: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000B9B88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9B85u); } /* indirect call */
    }

loc_000B9B88: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B9B96; /* jne: not equal / not zero */

loc_000B9B8F: ;
    ecx = esi;
    PUSH32(esp, 0x000B9B96u); RECOMP_ABI_CALL(0x000BABB4u, sub_000BABB4); /* call 0x000BABB4 */

loc_000B9B96: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9BAF; /* jl: less (signed <) */

loc_000B9B9A: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x000B9BADu); RECOMP_ABI_CALL(0x000BAEA4u, sub_000BAEA4); /* call 0x000BAEA4 */

loc_000B9BAD: ;
    ebx = eax;

loc_000B9BAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B9BB7
 * Original: 0x000B9BB7 - 0x000B9C02 (75 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B9BB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9BB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B9BD3; /* jne: not equal / not zero */

loc_000B9BC7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000B9BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9BCCu); } /* indirect call */
    }

loc_000B9BCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9BFC; /* jl: less (signed <) */

loc_000B9BD3: ;
    eax = MEM32(edi);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9BE3u); RECOMP_ABI_CALL(0x000BCA0Au, sub_000BCA0A); /* call 0x000BCA0A */

loc_000B9BE3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + eax * 2;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9BFCu); RECOMP_ABI_CALL(0x000BC94Bu, sub_000BC94B); /* call 0x000BC94B */

loc_000B9BFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B9C02
 * Original: 0x000B9C02 - 0x000B9C40 (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9C02: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9C3B; /* jae: above or equal (unsigned >=) */

loc_000B9C11: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000B9C1Eu); RECOMP_ABI_CALL(0x000B9925u, sub_000B9925); /* call 0x000B9925 */

loc_000B9C1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C3A; /* jne: not equal / not zero */

loc_000B9C22: ;
    MEM32(esi + edi * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9C3A: ;
    POP32(esp, ebx);

loc_000B9C3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9C40
 * Original: 0x000B9C40 - 0x000B9C7E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9C79; /* jae: above or equal (unsigned >=) */

loc_000B9C4F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000B9C5Cu); RECOMP_ABI_CALL(0x000B9925u, sub_000B9925); /* call 0x000B9925 */

loc_000B9C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C78; /* jne: not equal / not zero */

loc_000B9C60: ;
    MEM32(esi + edi * 8 + 0x18) = 6;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9C78: ;
    POP32(esp, ebx);

loc_000B9C79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9C7E
 * Original: 0x000B9C7E - 0x000B9CCA (76 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C7E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9C7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9C87u); RECOMP_ABI_CALL(0x000BB615u, sub_000BB615); /* call 0x000BB615 */

loc_000B9C87: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9CBE; /* jl: less (signed <) */

loc_000B9C8D: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x96FD1C) = 1;
    PUSH32(esp, 0x000B9C9Fu); RECOMP_ABI_CALL(0x000B997Au, sub_000B997A); /* call 0x000B997A */

loc_000B9C9F: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = esi + 0x58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x98) = MEM32(esi + 0x98) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B9CC5; /* jge: greater or equal (signed >=) */

loc_000B9CBE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B9CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9CC2u); } /* indirect call */
    }

loc_000B9CC5: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9CCA
 * Original: 0x000B9CCA - 0x000B9D10 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CCA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9CCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x000B9CD9u); RECOMP_ABI_CALL(0x000B98E7u, sub_000B98E7); /* call 0x000B98E7 */

loc_000B9CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CFC; /* je: equal / zero */

loc_000B9CDD: ;
    eax = esi + 0x98;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9D0B; /* jae: above or equal (unsigned >=) */

loc_000B9CEA: ;
    MEM32(esi + ecx * 8 + 0x18) = 1;
    ecx = MEM32(eax);
    MEM32(esi + ecx * 8 + 0x1C) = edi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B9D0B;

loc_000B9CFC: ;
    ecx = edi;
    PUSH32(esp, 0x000B9D03u); RECOMP_ABI_CALL(0x000BAF35u, sub_000BAF35); /* call 0x000BAF35 */

loc_000B9D03: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B9D0Bu); RECOMP_ABI_CALL(0x000B9C40u, sub_000B9C40); /* call 0x000B9C40 */

loc_000B9D0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9D10
 * Original: 0x000B9D10 - 0x000B9D85 (117 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9D80; /* jae: above or equal (unsigned >=) */

loc_000B9D1F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D58; /* jne: not equal / not zero */

loc_000B9D2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000B9D32u); RECOMP_ABI_CALL(0x000B9925u, sub_000B9925); /* call 0x000B9925 */

loc_000B9D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D4E; /* jne: not equal / not zero */

loc_000B9D36: ;
    MEM32(esi + ebx * 8 + 0x18) = 4;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = edi;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9D4E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B9D56u); RECOMP_ABI_CALL(0x000B9C40u, sub_000B9C40); /* call 0x000B9C40 */

loc_000B9D56: ;
    goto loc_000B9D7F;

loc_000B9D58: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 5);
    PUSH32(esp, 0x000B9D61u); RECOMP_ABI_CALL(0x000B9925u, sub_000B9925); /* call 0x000B9925 */

loc_000B9D61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D7F; /* jne: not equal / not zero */

loc_000B9D65: ;
    MEM32(esi + ebx * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    ecx = MEM32(edi);
    MEM32(esi + eax * 8 + 0x1C) = ecx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9D7F: ;
    POP32(esp, edi);

loc_000B9D80: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
