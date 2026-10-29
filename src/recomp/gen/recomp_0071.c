/**
 * DOAU1 - Recompiled code chunk 71
 * Functions: 250 (0x001E5483 - 0x001E95CC)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001E5483
 * Original: 0x001E5483 - 0x001E54E6 (99 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E5483(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5483: ;
    ecx = MEM32(ebx + 0x94);
    PUSH32(esp, 0x1EC);
    edx = ebp + -492;
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001E549Du); RECOMP_ABI_CALL(0x001DFD17u, sub_001DFD17); /* call 0x001DFD17 */

loc_001E549D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E54CA; /* je: equal / zero */

loc_001E54A1: ;
    PUSH32(esp, 0x1C);
    eax = ebx + 0x24;
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -492;
    PUSH32(esp, 0xAA670C);
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
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E54BEu); RECOMP_ABI_CALL(0x001F20E5u, sub_001F20E5); /* call 0x001F20E5 */

loc_001E54BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E54CA; /* jne: not equal / not zero */

loc_001E54C2: ;
    PUSH32(esp, 0x1B);
    POP32(esp, ecx);
    edi = ebx + 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001E54CA: ;
    eax = ebx + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E54D6u); RECOMP_ABI_CALL(0x002054DCu, sub_002054DC); /* call 0x002054DC */

loc_001E54D6: ;
    PUSH32(esp, ebx);
    ecx = ebx;
    PUSH32(esp, 0x001E54DEu); RECOMP_ABI_CALL(0x001DFC32u, sub_001DFC32); /* call 0x001DFC32 */

loc_001E54DE: ;
    MEM32(ebx) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E54E6(); return; /* fallthrough 0x001E54E6 */

}

/**
 * sub_001E54E6
 * Original: 0x001E54E6 - 0x001E54E7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E54E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E54E6: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001E54E7(); return; /* fallthrough 0x001E54E7 */

}

/**
 * sub_001E54E7
 * Original: 0x001E54E7 - 0x001E54ED (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E54E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E54E7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E54ED
 * Original: 0x001E54ED - 0x001E561B (302 bytes, 109 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E54ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E54ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x728);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001E5510; /* je: equal / zero */

loc_001E550A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5510u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E5510: ;
    eax = MEM32(esi + 0x734);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5522; /* je: equal / zero */

loc_001E551A: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5522u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E5522: ;
    eax = MEM32(esi + 0xCAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5534; /* je: equal / zero */

loc_001E552C: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5534u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E5534: ;
    eax = MEM32(esi + 0x14D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5549; /* je: equal / zero */

loc_001E553E: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5546u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E5546: ;
    MEM32(ebp + -4) = ebx;

loc_001E5549: ;
    eax = MEM32(esi + 0x14E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E555E; /* je: equal / zero */

loc_001E5553: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E555Bu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E555B: ;
    MEM32(ebp + -4) = ebx;

loc_001E555E: ;
    eax = MEM32(esi + 0x18A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E557D; /* je: equal / zero */

loc_001E5568: ;
    eax = MEM32(eax + 0x14D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E557D; /* je: equal / zero */

loc_001E5572: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E557Au); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E557A: ;
    MEM32(ebp + -4) = ebx;

loc_001E557D: ;
    eax = MEM32(esi + 0x1398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E55BF; /* je: equal / zero */

loc_001E5587: ;
    _fa = (uint32_t)(MEM32(esi + 0x139C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x139C), ebx (32-bit) */
    eax = MEM32(eax + 0x164);
    if (CMP_NE(_fa, _fb)) goto loc_001E55B0; /* jne: not equal / not zero */

loc_001E5595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E55A4; /* je: equal / zero */

loc_001E5599: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E55A1u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E55A1: ;
    MEM32(ebp + -4) = ebx;

loc_001E55A4: ;
    eax = MEM32(esi + 0x1398);
    eax = MEM32(eax + 0x170);

loc_001E55B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E55BF; /* je: equal / zero */

loc_001E55B4: ;
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E55BCu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E55BC: ;
    MEM32(ebp + -4) = ebx;

loc_001E55BF: ;
    edi = esi + 0x1870;
    MEM32(ebp + -8) = 0xD;

loc_001E55CC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E560B; /* je: equal / zero */

loc_001E55D2: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E55DAu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001E55DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E5609; /* jge: greater or equal (signed >=) */

loc_001E55DE: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E55E7u); RECOMP_ABI_CALL(0x00208CE3u, sub_00208CE3); /* call 0x00208CE3 */

loc_001E55E7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5607; /* je: equal / zero */

loc_001E55ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E55F7u); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001E55F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E5607; /* jl: less (signed <) */

loc_001E55FB: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5603u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E5603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E55FB; /* je: equal / zero */

loc_001E5607: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E5609: ;
    MEM32(edi) = ebx;

loc_001E560B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E55CC; /* jne: not equal / not zero */

loc_001E5613: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001E561B
 * Original: 0x001E561B - 0x001E562A (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E561B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E561B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E562A(); return; } /* jne: not equal / not zero */

loc_001E5623: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E564D(); return; /* tail jmp 0x001E564D */

}

/**
 * sub_001E562A
 * Original: 0x001E562A - 0x001E564D (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E562A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E562A: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001E5644u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_001E5644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E564A; /* je: equal / zero */

loc_001E5648: ;
    esi = eax;

loc_001E564A: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001E564D(); return; /* fallthrough 0x001E564D */

}

/**
 * sub_001E564D
 * Original: 0x001E564D - 0x001E5651 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E564D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E564D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E5651
 * Original: 0x001E5651 - 0x001E565C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5651(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5651: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E561B(); return; /* tail jmp 0x001E561B */

}

/**
 * sub_001E565C
 * Original: 0x001E565C - 0x001E5667 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E565C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E565C: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E54ED(); return; /* tail jmp 0x001E54ED */

}

/**
 * sub_001E5667
 * Original: 0x001E5667 - 0x001E56A6 (63 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5667(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5667: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001E567C; /* je: equal / zero */

loc_001E5676: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E567Cu); RECOMP_ABI_CALL(0x001DFC1Bu, sub_001DFC1B); /* call 0x001DFC1B */

loc_001E567C: ;
    ecx = esi;
    PUSH32(esp, 0x001E5683u); RECOMP_ABI_CALL(0x001ECBC4u, sub_001ECBC4); /* call 0x001ECBC4 */

loc_001E5683: ;
    ecx = esi;
    PUSH32(esp, 0x001E568Au); RECOMP_ABI_CALL(0x001E54EDu, sub_001E54ED); /* call 0x001E54ED */

loc_001E568A: ;
    edi = esi + 0x98;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x001E5697u); RECOMP_ABI_CALL(0x000B1763u, sub_000B1763); /* call 0x000B1763 */

loc_001E5697: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001E56A3u); RECOMP_ABI_CALL(0x001DFC32u, sub_001DFC32); /* call 0x001DFC32 */

loc_001E56A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E56A6
 * Original: 0x001E56A6 - 0x001E56CE (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E56A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E56A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001E56AF: ;
    eax = 0;
    ecx = 0x9701A8;
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E56CE(); return; } /* je: equal / zero */

loc_001E56C5: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E56CCu); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_001E56CC: ;
    goto loc_001E56AF;

}

/**
 * sub_001E56CE
 * Original: 0x001E56CE - 0x001E56F8 (42 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E56CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E56CE: ;
    PUSH32(esp, edi);
    eax = ebp + -400;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001E56E2u); RECOMP_ABI_CALL(0x001CF705u, sub_001CF705); /* call 0x001CF705 */

loc_001E56E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E571C(); return; } /* je: equal / zero */

loc_001E56E6: ;
    PUSH32(esp, 0x001E56EBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001E56EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E56F8(); return; } /* jg: greater (signed >) */

loc_001E56EF: ;
    PUSH32(esp, 0x001E56F4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001E56F4: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001E570B(); return; /* tail jmp 0x001E570B */

}

/**
 * sub_001E56F8
 * Original: 0x001E56F8 - 0x001E570B (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E56F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E56F8: ;
    PUSH32(esp, 0x001E56FDu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001E56FD: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E570B(); return; /* fallthrough 0x001E570B */

}

/**
 * sub_001E570B
 * Original: 0x001E570B - 0x001E571C (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E570B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E570B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5795(); return; } /* jl: less (signed <) */

loc_001E5713: ;
    edi = 0x80004005u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5795(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E571C(); return; /* fallthrough 0x001E571C */

}

/**
 * sub_001E571C
 * Original: 0x001E571C - 0x001E5745 (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E571C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E571C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x9701A4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E577A(); return; } /* jne: not equal / not zero */

loc_001E5728: ;
    ebx = 0x8001;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BA0);
    PUSH32(esp, 0x001E5738u); RECOMP_ABI_CALL(0x0020C385u, sub_0020C385); /* call 0x0020C385 */

loc_001E5738: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5745(); return; } /* jne: not equal / not zero */

loc_001E573E: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001E5780(); return; /* tail jmp 0x001E5780 */

}

/**
 * sub_001E5745
 * Original: 0x001E5745 - 0x001E5772 (45 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5745: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x6E8;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x001E575Au); RECOMP_ABI_CALL(0x001E535Bu, sub_001E535B); /* call 0x001E535B */

loc_001E575A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5772(); return; } /* jge: greater or equal (signed >=) */

loc_001E5760: ;
    ecx = esi;
    PUSH32(esp, 0x001E5767u); RECOMP_ABI_CALL(0x001E5667u, sub_001E5667); /* call 0x001E5667 */

loc_001E5767: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E576Eu); RECOMP_ABI_CALL(0x0020C39Bu, sub_0020C39B); /* call 0x0020C39B */

loc_001E576E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E577C(); return; /* tail jmp 0x001E577C */

}

/**
 * sub_001E5772
 * Original: 0x001E5772 - 0x001E577A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5772: ;
    MEM32(0x9701A4) = esi;
    g_seh_ebp = ebp; sub_001E577C(); return; /* tail jmp 0x001E577C */

}

/**
 * sub_001E577A
 * Original: 0x001E577A - 0x001E5780 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E577A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E577A: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5787(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001E5780(); return; /* fallthrough 0x001E5780 */

}

/**
 * sub_001E577C
 * Original: 0x001E577C - 0x001E5780 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E577C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E577C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5787(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001E5780(); return; /* fallthrough 0x001E5780 */

}

/**
 * sub_001E5780
 * Original: 0x001E5780 - 0x001E5787 (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5780: ;
    PUSH32(esp, 0x001E5785u); RECOMP_ABI_CALL(0x001CF800u, sub_001CF800); /* call 0x001CF800 */

loc_001E5785: ;
    g_seh_ebp = ebp; sub_001E5793(); return; /* tail jmp 0x001E5793 */

}

/**
 * sub_001E5787
 * Original: 0x001E5787 - 0x001E5793 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5787: ;
    PUSH32(esp, esi);
    ecx = esi + 0x1580;
    PUSH32(esp, 0x001E5793u); RECOMP_ABI_CALL(0x00205479u, sub_00205479); /* call 0x00205479 */

    g_seh_ebp = ebp; sub_001E5793(); return; /* fallthrough 0x001E5793 */

}

/**
 * sub_001E5793
 * Original: 0x001E5793 - 0x001E5795 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5793(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5793: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E5795(); return; /* fallthrough 0x001E5795 */

}

/**
 * sub_001E5795
 * Original: 0x001E5795 - 0x001E57A3 (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5795(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5795: ;
    MEM32(0x9701A8) = MEM32(0x9701A8) & 0;
    _fa = (uint32_t)(MEM32(0x9701A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E57A3
 * Original: 0x001E57A3 - 0x001E57C6 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E57A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E57A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E57A7: ;
    eax = 0;
    ecx = 0x9701A8;
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E57C6(); return; } /* je: equal / zero */

loc_001E57BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001E57C4u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_001E57C4: ;
    goto loc_001E57A7;

}

/**
 * sub_001E57C6
 * Original: 0x001E57C6 - 0x001E57D7 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E57C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E57C6: ;
    esi = MEM32(0x9701A4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E57D7(); return; } /* jne: not equal / not zero */

loc_001E57D0: ;
    ebx = 0x80150005u;
    g_seh_ebp = ebp; sub_001E5806(); return; /* tail jmp 0x001E5806 */

}

/**
 * sub_001E57D7
 * Original: 0x001E57D7 - 0x001E5806 (47 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E57D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E57D7: ;
    PUSH32(esp, 0);
    ecx = esi + 0x1580;
    PUSH32(esp, 0x001E57E4u); RECOMP_ABI_CALL(0x00205479u, sub_00205479); /* call 0x00205479 */

loc_001E57E4: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E5801; /* jne: not equal / not zero */

loc_001E57E8: ;
    ecx = esi;
    PUSH32(esp, 0x001E57EFu); RECOMP_ABI_CALL(0x001E5667u, sub_001E5667); /* call 0x001E5667 */

loc_001E57EF: ;
    PUSH32(esp, 0x8001);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E57FAu); RECOMP_ABI_CALL(0x0020C39Bu, sub_0020C39B); /* call 0x0020C39B */

loc_001E57FA: ;
    MEM32(0x9701A4) = MEM32(0x9701A4) & 0;
    _fa = (uint32_t)(MEM32(0x9701A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E5801: ;
    PUSH32(esp, 0x001E5806u); RECOMP_ABI_CALL(0x001CF800u, sub_001CF800); /* call 0x001CF800 */

    g_seh_ebp = ebp; sub_001E5806(); return; /* fallthrough 0x001E5806 */

}

/**
 * sub_001E5806
 * Original: 0x001E5806 - 0x001E5812 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5806(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5806: ;
    MEM32(0x9701A8) = MEM32(0x9701A8) & 0;
    _fa = (uint32_t)(MEM32(0x9701A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E583E
 * Original: 0x001E583E - 0x001E585D (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E583E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E583E: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xF422C080u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xF422C080u)) >> 32) & 1);
    eax = eax + 0xF422C080u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x989680);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(2) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E585Au); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001E585A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E585D
 * Original: 0x001E585D - 0x001E58E2 (133 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E585D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E585D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x24));
    MEM8(esi + 0xC) = LO8(eax);
    eax = MEM32(edi + 8);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, 0x001E5894u); RECOMP_ABI_CALL(0x001E583Eu, sub_001E583E); /* call 0x001E583E */

loc_001E5894: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E58B5; /* je: equal / zero */

loc_001E58AD: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x24) = eax;

loc_001E58B5: ;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x28) = eax;
    SET_LO16(eax, MEM16(edi + 0x20));
    MEM16(esi + 0x2C) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x22));
    PUSH32(esp, 0xF);
    MEM16(esi + 0x2E) = LO16(eax);
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x25;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E58DAu); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001E58DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E5927
 * Original: 0x001E5927 - 0x001E596E (71 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5927(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E5927: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E5932u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001E5932: ;
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E5942; /* jne: not equal / not zero */

loc_001E593A: ;
    MEM32(esp + 8) = 0xA8C0;

loc_001E5942: ;
    eax = ZX16(MEM16(esp + 8));
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x23C34600);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E5956u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001E5956: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x2F7A78);
    { uint64_t _t = (uint64_t)(MEM32(esi + 4)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x2F7A7C);
    { uint64_t _t = (uint64_t)(MEM32(esi + 4)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E596E
 * Original: 0x001E596E - 0x001E59BD (79 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E596E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E596E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5981u); RECOMP_ABI_CALL(0x001E583Eu, sub_001E583E); /* call 0x001E583E */

loc_001E5981: ;
    edi = eax;
    eax = ZX16(MEM16(esi + 0x20));
    PUSH32(esp, 0);
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x23C34600);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5998u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001E5998: ;
    ecx = MEM32(ebp + 0xC);
    esi = eax;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    MEM32(ebp + -4) = ecx;
    POP32(esp, ebx);
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001E59BD(); return; } /* js: sign (negative) */

loc_001E59B2: ;
    if (_flags /* jg: greater (signed >) */) goto loc_001E59B8;

loc_001E59B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E59BD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E59B8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001E59BF(); return; /* tail jmp 0x001E59BF */

}

/**
 * sub_001E59BD
 * Original: 0x001E59BD - 0x001E59BF (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E59BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E59BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E59BF(); return; /* fallthrough 0x001E59BF */

}

/**
 * sub_001E59BF
 * Original: 0x001E59BF - 0x001E59C3 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E59BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E59BF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E59C3
 * Original: 0x001E59C3 - 0x001E5A23 (96 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E59C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E59C3: ;
    SET_LO16(edx, MEM16(esp + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001E5A1A; /* jns: not sign (positive) */

loc_001E59CC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E5A13; /* je: equal / zero */

loc_001E59D1: ;
    MEM8(esp + 4) = 0;

loc_001E59D6: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x2F7A48));
    eax = MEM32(eax + 0x2F7A4A);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E5A0B; /* jbe: below or equal (unsigned <=) */

loc_001E59F6: ;
    ecx = ZX16(LO16(edi));
    ecx = eax + ecx * 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E5A05; /* jne: not equal / not zero */

loc_001E5A00: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E5A1F; /* jne: not equal / not zero */

loc_001E5A05: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(esi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E59F6; /* jb: below (unsigned <) */

loc_001E5A0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E5A0E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E5A10: ;
    esp += 12; return; /* ret 8 */

loc_001E5A13: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E59D6; /* jb: below (unsigned <) */

loc_001E5A1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E5A10;

loc_001E5A1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E5A0E;

}

/**
 * sub_001E5A23
 * Original: 0x001E5A23 - 0x001E5B08 (229 bytes, 86 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E5A23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5A23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E5A3D; /* jne: not equal / not zero */

loc_001E5A33: ;
    eax = 0x80150005u;
    goto loc_001E5B02;

loc_001E5A3D: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 2 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E5A54; /* je: equal / zero */

loc_001E5A4A: ;
    eax = 0x80150009u;
    goto loc_001E5B01;

loc_001E5A54: ;
    PUSH32(esp, ebx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5A74u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E5A74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E5B01; /* jl: less (signed <) */

loc_001E5A7C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    ecx = MEM32(ebp + -4);
    edx = ecx;
    MEM32(ebp + -12) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E5AD0; /* je: equal / zero */

loc_001E5A89: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E5AB9; /* je: equal / zero */

loc_001E5A94: ;
    edi = MEM32(esi + 0x185C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E5AB9; /* jbe: below or equal (unsigned <=) */

loc_001E5A9E: ;
    edx = esi + 0x1860;

loc_001E5AA4: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5AB2; /* je: equal / zero */

loc_001E5AA8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E5AA4; /* jb: below (unsigned <) */

loc_001E5AB0: ;
    goto loc_001E5AB9;

loc_001E5AB2: ;
    MEM32(ebp + -8) = 1;

loc_001E5AB9: ;
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5AC8u); RECOMP_ABI_CALL(0x001E585Du, sub_001E585D); /* call 0x001E585D */

loc_001E5AC8: ;
    edx = MEM32(ebp + -12);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E5AD0: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5AE7; /* je: equal / zero */

loc_001E5AD7: ;
    _fa = (uint32_t)(MEM16(edx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x46), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E5AE5; /* jbe: below or equal (unsigned <=) */

loc_001E5ADD: ;
    ecx = ZX16(MEM16(edx + 0x58));
    MEM32(eax) = ecx;
    goto loc_001E5AE7;

loc_001E5AE5: ;
    MEM32(eax) = ebx;

loc_001E5AE7: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5AFF; /* je: equal / zero */

loc_001E5AEE: ;
    ecx = MEM32(edi + 0x174);
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x178);
    MEM32(eax + 4) = ecx;

loc_001E5AFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E5B01: ;
    POP32(esp, edi);

loc_001E5B02: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E5B08
 * Original: 0x001E5B08 - 0x001E5B1F (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E5B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5B08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5B1F(); return; } /* jne: not equal / not zero */

loc_001E5B15: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E5CB6(); return; /* tail jmp 0x001E5CB6 */

}

/**
 * sub_001E5B1F
 * Original: 0x001E5B1F - 0x001E5B38 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5B1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5B1F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5B38(); return; } /* je: equal / zero */

loc_001E5B2E: ;
    eax = 0x80150009u;
    g_seh_ebp = ebp; sub_001E5CB6(); return; /* tail jmp 0x001E5CB6 */

}

/**
 * sub_001E5B38
 * Original: 0x001E5B38 - 0x001E5BAD (117 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5B38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5B38: ;
    PUSH32(esp, esi);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -32;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E5B56u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E5B56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5CB6(); return; } /* jl: less (signed <) */

loc_001E5B5E: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5B67; /* je: equal / zero */

loc_001E5B65: ;
    MEM32(eax) = esi;

loc_001E5B67: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(ecx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x46), LO16(esi) (16-bit) */
    eax = 0x80155A03u;
    MEM32(ebp + 8) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5CB6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5B7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx + 0x58));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    edx = ZX16(LO16(edi));
    ebx = ecx + edx * 4 + 0x5C;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5CB4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5B92: ;
    SET_LO16(edx, MEM16(ebp + 0xC));

loc_001E5B96: ;
    eax = ZX16(LO16(esi));
    _fa = (uint32_t)(MEM8(ecx + eax * 4 + 0x5C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax * 4 + 0x5C), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5BAD(); return; } /* je: equal / zero */

loc_001E5B9F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E5B96; /* jb: below (unsigned <) */

loc_001E5BA5: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001E5CB4(); return; /* tail jmp 0x001E5CB4 */

}

/**
 * sub_001E5BAD
 * Original: 0x001E5BAD - 0x001E5BC7 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5BAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5BAD: ;
    eax = ZX16(LO16(esi));
    edi = ecx + eax * 4 + 0x5C;
    SET_LO16(eax, ZX8(MEM8(edi + 1)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5BC7(); return; } /* je: equal / zero */

loc_001E5BBD: ;
    eax = 0x8015000Cu;
    g_seh_ebp = ebp; sub_001E5CB4(); return; /* tail jmp 0x001E5CB4 */

}

/**
 * sub_001E5BC7
 * Original: 0x001E5BC7 - 0x001E5C69 (162 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5BC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5BC7: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5C69(); return; } /* ja: above (unsigned >) */

loc_001E5BD4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1E5CBB); /* switch: 11 entries, 9 targets */
    if (_jt == 0x001E5BDBu) goto loc_001E5BDB;
    if (_jt == 0x001E5BE4u) goto loc_001E5BE4;
    if (_jt == 0x001E5BE9u) goto loc_001E5BE9;
    if (_jt == 0x001E5BF1u) goto loc_001E5BF1;
    if (_jt == 0x001E5BF5u) goto loc_001E5BF5;
    if (_jt == 0x001E5C2Bu) goto loc_001E5C2B;
    if (_jt == 0x001E5C36u) goto loc_001E5C36;
    if (_jt == 0x001E5C44u) goto loc_001E5C44;
    if (_jt == 0x001E5C56u) goto loc_001E5C56;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001E5BDB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5BE4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E5BEC;

loc_001E5BE9: ;
    PUSH32(esp, 2);
    POP32(esp, edx);

loc_001E5BEC: ;
    esi = edi + 2;
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5BF1: ;
    PUSH32(esp, 4);
    goto loc_001E5C2D;

loc_001E5BF5: ;
    eax = ZX16(MEM16(edi + 2));
    ecx = MEM32(ebp + 0x10);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E5C19u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E5C19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E5C27; /* jge: greater or equal (signed >=) */

loc_001E5C1D: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001E5CB4(); return; /* tail jmp 0x001E5CB4 */

loc_001E5C27: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5C2B: ;
    PUSH32(esp, 8);

loc_001E5C2D: ;
    esi = ZX16(MEM16(edi + 2));
    POP32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5C36: ;
    eax = ZX16(MEM16(edi + 2));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(MEM16(eax));
    esi = eax + 2;
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5C44: ;
    eax = ZX16(MEM16(edi + 2));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

loc_001E5C56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), LO8(eax) (8-bit) */
    PUSH32(esp, 4);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edx);
    esi = ebp + 0xC;
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001E5C6D(); return; /* tail jmp 0x001E5C6D */

}

/**
 * sub_001E5C69
 * Original: 0x001E5C69 - 0x001E5C7A (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5C69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5C69: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5C7A(); return; } /* jne: not equal / not zero */

loc_001E5C73: ;
    eax = 0x80155A02u;
    g_seh_ebp = ebp; sub_001E5C9F(); return; /* tail jmp 0x001E5C9F */

}

/**
 * sub_001E5C6D
 * Original: 0x001E5C6D - 0x001E5C7A (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5C6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5C6D: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5C7A(); return; } /* jne: not equal / not zero */

loc_001E5C73: ;
    eax = 0x80155A02u;
    g_seh_ebp = ebp; sub_001E5C9F(); return; /* tail jmp 0x001E5C9F */

}

/**
 * sub_001E5C7A
 * Original: 0x001E5C7A - 0x001E5C9A (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5C7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5C7A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5C9A(); return; } /* jb: below (unsigned <) */

loc_001E5C7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5C96; /* je: equal / zero */

loc_001E5C83: ;
    edi = MEM32(ebp + 0x14);
    ecx = edx;
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

loc_001E5C96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E5C9F(); return; /* tail jmp 0x001E5C9F */

}

/**
 * sub_001E5C9A
 * Original: 0x001E5C9A - 0x001E5C9F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5C9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5C9A: ;
    eax = 0x80150001u;

    g_seh_ebp = ebp; sub_001E5C9F(); return; /* fallthrough 0x001E5C9F */

}

/**
 * sub_001E5C9F
 * Original: 0x001E5C9F - 0x001E5CB4 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5C9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5C9F: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5CA8; /* je: equal / zero */

loc_001E5CA6: ;
    MEM32(ecx) = edx;

loc_001E5CA8: ;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5CB4(); return; } /* je: equal / zero */

loc_001E5CAF: ;
    edx = MEM32(ebp + -8);
    MEM32(ecx) = edx;

    g_seh_ebp = ebp; sub_001E5CB4(); return; /* fallthrough 0x001E5CB4 */

}

/**
 * sub_001E5CB4
 * Original: 0x001E5CB4 - 0x001E5CB6 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5CB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5CB4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E5CB6(); return; /* fallthrough 0x001E5CB6 */

}

/**
 * sub_001E5CB6
 * Original: 0x001E5CB6 - 0x001E5CBB (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5CB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5CB6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E5CE7
 * Original: 0x001E5CE7 - 0x001E5D04 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E5CE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5CE7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5D04(); return; } /* jne: not equal / not zero */

loc_001E5CFA: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E5DF6(); return; /* tail jmp 0x001E5DF6 */

}

/**
 * sub_001E5D04
 * Original: 0x001E5D04 - 0x001E5D1B (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5D04: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5D1B(); return; } /* je: equal / zero */

loc_001E5D11: ;
    eax = 0x80150009u;
    g_seh_ebp = ebp; sub_001E5DF5(); return; /* tail jmp 0x001E5DF5 */

}

/**
 * sub_001E5D1B
 * Original: 0x001E5D1B - 0x001E5D7F (100 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5D1B: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E5D39u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E5D39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5DF5(); return; } /* jl: less (signed <) */

loc_001E5D41: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(ecx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x46), LO16(esi) (16-bit) */
    eax = 0x80155A03u;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5DF5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5D53: ;
    SET_LO16(edx, MEM16(ecx + 0x58));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(edx));
    ebx = ecx + ebx * 4 + 0x5C;
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5DF4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5D6B: ;
    ebx = ZX16(LO16(esi));
    SET_LO8(ebx, MEM8(ecx + ebx * 4 + 0x5C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ebp + 0xC) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5D7F(); return; } /* je: equal / zero */

loc_001E5D77: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E5D6B; /* jb: below (unsigned <) */

loc_001E5D7D: ;
    g_seh_ebp = ebp; sub_001E5DF4(); return; /* tail jmp 0x001E5DF4 */

}

/**
 * sub_001E5D7F
 * Original: 0x001E5D7F - 0x001E5D8C (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5D7F: ;
    eax = ZX16(LO16(esi));
    eax = ecx + eax * 4 + 0x5C;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5D93(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001E5D8C(); return; /* fallthrough 0x001E5D8C */

}

/**
 * sub_001E5D8C
 * Original: 0x001E5D8C - 0x001E5D93 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5D8C: ;
    eax = 0x8015000Cu;
    g_seh_ebp = ebp; sub_001E5DF4(); return; /* tail jmp 0x001E5DF4 */

}

/**
 * sub_001E5D93
 * Original: 0x001E5D93 - 0x001E5DAE (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5D93: ;
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5D8C(); return; } /* jne: not equal / not zero */

loc_001E5DA0: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5DAE(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5DA7: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_001E5DF4(); return; /* tail jmp 0x001E5DF4 */

}

/**
 * sub_001E5DAE
 * Original: 0x001E5DAE - 0x001E5DD5 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5DAE: ;
    PUSH32(esp, 0x100);
    ecx = ebp + -544;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E5DC9u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E5DC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E5DD5(); return; } /* jg: greater (signed >) */

loc_001E5DCE: ;
    eax = 0x80150007u;
    g_seh_ebp = ebp; sub_001E5DF4(); return; /* tail jmp 0x001E5DF4 */

}

/**
 * sub_001E5DD5
 * Original: 0x001E5DD5 - 0x001E5DF4 (31 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5DD5: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -544;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0x001E5DF4u); RECOMP_ABI_CALL(0x0020C8BAu, sub_0020C8BA); /* call 0x0020C8BA */

    g_seh_ebp = ebp; sub_001E5DF4(); return; /* fallthrough 0x001E5DF4 */

}

/**
 * sub_001E5DF4
 * Original: 0x001E5DF4 - 0x001E5DF5 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5DF4: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E5DF5(); return; /* fallthrough 0x001E5DF5 */

}

/**
 * sub_001E5DF5
 * Original: 0x001E5DF5 - 0x001E5DF6 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5DF5: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001E5DF6(); return; /* fallthrough 0x001E5DF6 */

}

/**
 * sub_001E5DF6
 * Original: 0x001E5DF6 - 0x001E5DFB (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5DF6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E5DFB
 * Original: 0x001E5DFB - 0x001E5E17 (28 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5DFB(void)
{

loc_001E5DFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001E5E14u); RECOMP_ABI_CALL(0x0020CA32u, sub_0020CA32); /* call 0x0020CA32 */

loc_001E5E14: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E5E17
 * Original: 0x001E5E17 - 0x001E5F18 (257 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E5E17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5E17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E5E34; /* jne: not equal / not zero */

loc_001E5E2A: ;
    eax = 0x80150005u;
    goto loc_001E5F13;

loc_001E5E34: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 2 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001E5E4B; /* je: equal / zero */

loc_001E5E41: ;
    eax = 0x80150009u;
    goto loc_001E5F12;

loc_001E5E4B: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5E69u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E5E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E5F12; /* jl: less (signed <) */

loc_001E5E71: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(ecx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x46), LO16(esi) (16-bit) */
    eax = 0x80155A03u;
    if (CMP_BE(_fa, _fb)) goto loc_001E5F12; /* jbe: below or equal (unsigned <=) */

loc_001E5E83: ;
    SET_LO16(edx, MEM16(ecx + 0x58));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(edx));
    ebx = ecx + ebx * 4 + 0x5C;
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001E5F11; /* jbe: below or equal (unsigned <=) */

loc_001E5E97: ;
    ebx = ZX16(LO16(esi));
    SET_LO8(ebx, MEM8(ecx + ebx * 4 + 0x5C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ebp + 0xC) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5EAB; /* je: equal / zero */

loc_001E5EA3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E5E97; /* jb: below (unsigned <) */

loc_001E5EA9: ;
    goto loc_001E5F11;

loc_001E5EAB: ;
    eax = ZX16(LO16(esi));
    eax = ecx + eax * 4 + 0x5C;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E5EBF; /* je: equal / zero */

loc_001E5EB8: ;
    eax = 0x8015000Cu;
    goto loc_001E5F11;

loc_001E5EBF: ;
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E5EB8; /* je: equal / zero */

loc_001E5ECC: ;
    PUSH32(esp, 0x100);
    ecx = ebp + -544;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5EE7u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E5EE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001E5EF3; /* jg: greater (signed >) */

loc_001E5EEC: ;
    eax = 0x80150007u;
    goto loc_001E5F11;

loc_001E5EF3: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -544;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E5F11u); RECOMP_ABI_CALL(0x0020C580u, sub_0020C580); /* call 0x0020C580 */

loc_001E5F11: ;
    POP32(esp, ebx);

loc_001E5F12: ;
    POP32(esp, edi);

loc_001E5F13: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E5F1D
 * Original: 0x001E5F1D - 0x001E5F32 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E5F1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E5F1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5F32(); return; } /* jne: not equal / not zero */

loc_001E5F28: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E6013(); return; /* tail jmp 0x001E6013 */

}

/**
 * sub_001E5F32
 * Original: 0x001E5F32 - 0x001E5F56 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5F32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5F32: ;
    eax = ZX8(MEM8(ebp + 8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F62(); return; } /* je: equal / zero */

loc_001E5F3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F62(); return; } /* je: equal / zero */

loc_001E5F3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F62(); return; } /* je: equal / zero */

loc_001E5F40: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F5C(); return; } /* je: equal / zero */

loc_001E5F43: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F56(); return; } /* je: equal / zero */

loc_001E5F46: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E5F56(); return; } /* je: equal / zero */

loc_001E5F49: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E5F62(); return; } /* jne: not equal / not zero */

loc_001E5F4C: ;
    edi = 0x80070057u;
    g_seh_ebp = ebp; sub_001E6010(); return; /* tail jmp 0x001E6010 */

}

/**
 * sub_001E5F4A
 * Original: 0x001E5F4A - 0x001E5F56 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5F4A: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_001E5F62(); return; }

loc_001E5F4C: ;
    edi = 0x80070057u;
    g_seh_ebp = ebp; sub_001E6010(); return; /* tail jmp 0x001E6010 */

}

/**
 * sub_001E5F56
 * Original: 0x001E5F56 - 0x001E5F5C (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5F56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5F56: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1C), 0x80 (8-bit) */
    g_seh_ebp = ebp; sub_001E5F4A(); return; /* tail jmp 0x001E5F4A */

}

/**
 * sub_001E5F5C
 * Original: 0x001E5F5C - 0x001E5F62 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5F5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5F5C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1C), 0x40 (8-bit) */
    g_seh_ebp = ebp; sub_001E5F4A(); return; /* tail jmp 0x001E5F4A */

}

/**
 * sub_001E5F62
 * Original: 0x001E5F62 - 0x001E5FAF (77 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5F62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5F62: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(ebp + 0xC));
    PUSH32(esp, esi);
    eax = ZX16(LO16(ebx));
    edi = 0x93;
    PUSH32(esp, edi);
    eax = eax * 4 + 0x10E9;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E5F7Eu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001E5F7E: ;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5FCC(); return; } /* je: equal / zero */

loc_001E5F86: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x14) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5FAF(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E5FA9: ;
    MEM16(esi + 0x1C) = LO16(eax);
    g_seh_ebp = ebp; sub_001E5FB5(); return; /* tail jmp 0x001E5FB5 */

}

/**
 * sub_001E5FAF
 * Original: 0x001E5FAF - 0x001E5FB5 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5FAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5FAF: ;
    MEM16(esi + 0x1C) = 0x80;

    g_seh_ebp = ebp; sub_001E5FB5(); return; /* fallthrough 0x001E5FB5 */

}

/**
 * sub_001E5FB5
 * Original: 0x001E5FB5 - 0x001E5FCC (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5FB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5FB5: ;
    eax = ZX16(MEM16(esi + 0x1C));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E5FC3u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001E5FC3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E5FE2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E5FCC(); return; /* fallthrough 0x001E5FCC */

}

/**
 * sub_001E5FCC
 * Original: 0x001E5FCC - 0x001E5FE2 (22 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5FCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5FCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = 0x80150008u;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E600E(); return; } /* je: equal / zero */

loc_001E5FD5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E5FE0u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E5FE0: ;
    g_seh_ebp = ebp; sub_001E600E(); return; /* tail jmp 0x001E600E */

}

/**
 * sub_001E5FE2
 * Original: 0x001E5FE2 - 0x001E600E (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5FE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5FE2: ;
    SET_LO16(eax, MEM16(ebp + 0x20));
    MEM16(esi + 0x20) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(esi + 0x10E4) = LO8(eax);
    eax = MEM32(ebp + 0x24);
    MEM16(esi + 0x1E) = LO16(ebx);
    MEM16(esi + 0x22) = LO16(edi);
    MEM16(esi + 0x10E5) = LO16(edi);
    MEM16(esi + 0x10E7) = LO16(edi);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001E600E(); return; /* fallthrough 0x001E600E */

}

/**
 * sub_001E600E
 * Original: 0x001E600E - 0x001E6010 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E600E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E600E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E6010(); return; /* fallthrough 0x001E6010 */

}

/**
 * sub_001E6010
 * Original: 0x001E6010 - 0x001E6013 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6010: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001E6013(); return; /* fallthrough 0x001E6013 */

}

/**
 * sub_001E6013
 * Original: 0x001E6013 - 0x001E6017 (4 bytes, 2 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6013(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6013: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001E6017
 * Original: 0x001E6017 - 0x001E6025 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6017: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6025(); return; } /* jne: not equal / not zero */

loc_001E601E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E604D(); return; /* tail jmp 0x001E604D */

}

/**
 * sub_001E6025
 * Original: 0x001E6025 - 0x001E604D (40 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6025(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6025: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 0x93;
    if (CMP_EQ(_fa, _fb)) goto loc_001E6040; /* je: equal / zero */

loc_001E6037: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E6040u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E6040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001E6049u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E6049: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001E604D(); return; /* fallthrough 0x001E604D */

}

/**
 * sub_001E604D
 * Original: 0x001E604D - 0x001E6051 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E604D(void)
{

loc_001E604D: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6051
 * Original: 0x001E6051 - 0x001E606B (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6051(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6051: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E606B(); return; } /* jne: not equal / not zero */

loc_001E6061: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E6303(); return; /* tail jmp 0x001E6303 */

}

/**
 * sub_001E606B
 * Original: 0x001E606B - 0x001E609F (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E606B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E606B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ebx + 0x10E5));
    PUSH32(esp, esi);
    esi = ebx + eax * 4 + 0x10E9;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(esi) = LO16(eax);
    eax = ZX8(HI8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + 8) = esi;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E62ED(); return; } /* ja: above (unsigned >) */

loc_001E6098: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1E6308)); return; /* indirect tail jmp */

}

/**
 * sub_001E609F
 * Original: 0x001E609F - 0x001E60A8 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E609F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E609F: ;
    MEM16(esi + 2) = LO16(edi);
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E60A8
 * Original: 0x001E60A8 - 0x001E60B9 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60A8: ;
    eax = MEM32(ebp + 0x14);
    MEM16(esi + 2) = LO16(edi);
    SET_LO8(eax, MEM8(eax));
    MEM8(esi + 2) = LO8(eax);
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E60B9
 * Original: 0x001E60B9 - 0x001E60C8 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60B9: ;
    eax = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 2) = LO16(eax);
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E60C8
 * Original: 0x001E60C8 - 0x001E60D1 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60C8: ;
    MEM32(ebp + -4) = 4;
    g_seh_ebp = ebp; sub_001E6105(); return; /* tail jmp 0x001E6105 */

}

/**
 * sub_001E60D1
 * Original: 0x001E60D1 - 0x001E60FE (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60D1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x001E60D9u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001E60D9: ;
    POP32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E60EEu); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001E60EE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001E61BB(); return; /* tail jmp 0x001E61BB */

}

/**
 * sub_001E60F0
 * Original: 0x001E60F0 - 0x001E60FE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60F0: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001E61BB(); return; /* tail jmp 0x001E61BB */

}

/**
 * sub_001E60FE
 * Original: 0x001E60FE - 0x001E6110 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E60FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E60FE: ;
    MEM32(ebp + -4) = 8;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001E61C5(); return; /* tail jmp 0x001E61C5 */

}

/**
 * sub_001E6105
 * Original: 0x001E6105 - 0x001E6110 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6105(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6105: ;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001E61C5(); return; /* tail jmp 0x001E61C5 */

}

/**
 * sub_001E6110
 * Original: 0x001E6110 - 0x001E6118 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6110: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E60F0(); return; /* tail jmp 0x001E60F0 */

}

/**
 * sub_001E6118
 * Original: 0x001E6118 - 0x001E612C (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6118: ;
    SET_LO16(eax, MEM16(ebx + 0x22));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x10 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E612C(); return; } /* jb: below (unsigned <) */

loc_001E6122: ;
    edi = 0x80150001u;
    g_seh_ebp = ebp; sub_001E62FF(); return; /* tail jmp 0x001E62FF */

}

/**
 * sub_001E612C
 * Original: 0x001E612C - 0x001E6179 (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E612C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E612C: ;
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    MEM32(eax + ebx + 0x24) = edi;
    eax = ZX16(MEM16(ebx + 0x22));
    SET_LO16(ecx, MEM16(ebx + 0x10E5));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    MEM16(eax + ebx + 0x28) = LO16(ecx);
    eax = ZX16(MEM16(ebx + 0x22));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6179(); return; } /* je: equal / zero */

loc_001E615F: ;
    PUSH32(esp, 0x104);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + ebx + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E6171u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001E6171: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = edi;
    g_seh_ebp = ebp; sub_001E6186(); return; /* tail jmp 0x001E6186 */

}

/**
 * sub_001E6179
 * Original: 0x001E6179 - 0x001E6186 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6179(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6179: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + ebx + 0x2C) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;

    g_seh_ebp = ebp; sub_001E6186(); return; /* fallthrough 0x001E6186 */

}

/**
 * sub_001E6186
 * Original: 0x001E6186 - 0x001E61A3 (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6186: ;
    eax = MEM32(ebp + 0x18);
    MEM16(ebx + 0x22) = MEM16(ebx + 0x22) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = 0x44;
    MEM32(ebp + -4) = 0x50;
    MEM32(ebp + 0xC) = edi;
    g_seh_ebp = ebp; sub_001E61C5(); return; /* tail jmp 0x001E61C5 */

}

/**
 * sub_001E61A3
 * Original: 0x001E61A3 - 0x001E61B7 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E61A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E61A3: ;
    eax = MEM32(ebp + 0x14);
    MEM16(esi + 2) = LO16(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E61B7(); return; } /* je: equal / zero */

loc_001E61AE: ;
    MEM8(esi + 2) = 1;
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E61B7
 * Original: 0x001E61B7 - 0x001E61BB (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E61B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E61B7: ;
    MEM8(esi + 2) = 0;

    g_seh_ebp = ebp; sub_001E61BB(); return; /* fallthrough 0x001E61BB */

}

/**
 * sub_001E61BB
 * Original: 0x001E61BB - 0x001E61C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E61BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E61BB: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E62ED(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001E61C5(); return; /* fallthrough 0x001E61C5 */

}

/**
 * sub_001E61C5
 * Original: 0x001E61C5 - 0x001E6209 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E61C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E61C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(eax));
    _fb = (uint32_t)(MEM16(ebx + 0x10E7)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(ebx + 0x10E7));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebp + -4) (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6265(); return; } /* jae: above or equal (unsigned >=) */

loc_001E61E1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(ebx + 0x10E5));
    MEM32(ebp + 0x18) = eax;
    eax = ZX16(LO16(eax));
    ecx = eax + ecx * 4 + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6209(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E61FF: ;
    edi = 0x80155A08u;
    g_seh_ebp = ebp; sub_001E62FF(); return; /* tail jmp 0x001E62FF */

}

/**
 * sub_001E6209
 * Original: 0x001E6209 - 0x001E6228 (31 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6209: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x93);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E6217u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001E6217: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6228(); return; } /* jne: not equal / not zero */

loc_001E621E: ;
    edi = 0x80150008u;
    g_seh_ebp = ebp; sub_001E62FF(); return; /* tail jmp 0x001E62FF */

}

/**
 * sub_001E6228
 * Original: 0x001E6228 - 0x001E6265 (61 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6228(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6228: ;
    ecx = ZX16(MEM16(ebx + 0x10E7));
    esi = MEM32(ebx + 0x18);
    edi = eax;
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
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x93);
    PUSH32(esp, MEM32(ebx + 0x18));
    PUSH32(esp, 0x001E6252u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E6252: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 8);
    MEM32(ebx + 0x18) = eax;
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebx + 0x1C) = LO16(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E6265(); return; /* fallthrough 0x001E6265 */

}

/**
 * sub_001E6265
 * Original: 0x001E6265 - 0x001E62A2 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6265(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6265: ;
    edx = ZX8(MEM8(esi + 1));
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(ebx + 0x10E7));
    ecx = MEM32(ebp + 0x10);
    MEM16(esi + 2) = LO16(eax);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E62C3(); return; } /* je: equal / zero */

loc_001E627C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E62B2(); return; } /* je: equal / zero */

loc_001E6280: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001E62A2(); return; } /* je: equal / zero */

loc_001E6283: ;
    ecx = ZX16(MEM16(ebp + -4));
    edi = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebx + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0xC);
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E628D
 * Original: 0x001E628D - 0x001E62A2 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E628D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E628D: ;
    esi = MEM32(ebp + 0xC);
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E629E
 * Original: 0x001E629E - 0x001E62A2 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E629E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E629E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E62ED(); return; /* tail jmp 0x001E62ED */

}

/**
 * sub_001E62A2
 * Original: 0x001E62A2 - 0x001E62B2 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E62A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E62A2: ;
    edi = MEM32(ebx + 0x18);
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_seh_ebp = ebp; sub_001E629E(); return; /* tail jmp 0x001E629E */

}

/**
 * sub_001E62B2
 * Original: 0x001E62B2 - 0x001E62C3 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E62B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E62B2: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ecx);
    ecx = ZX16(LO16(ecx));
    edi = eax + 2;
    g_seh_ebp = ebp; sub_001E628D(); return; /* tail jmp 0x001E628D */

}

/**
 * sub_001E62C3
 * Original: 0x001E62C3 - 0x001E62ED (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E62C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E62C3: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    esi = edx + -2;
    edx = ZX16(LO16(edx));
    PUSH32(esp, edx);
    MEM16(eax) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E62EDu); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

    g_seh_ebp = ebp; sub_001E62ED(); return; /* fallthrough 0x001E62ED */

}

/**
 * sub_001E62ED
 * Original: 0x001E62ED - 0x001E6303 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E62ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E62ED: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebx + 0x10E5) = MEM16(ebx + 0x10E5) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x10E5)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + 0x10E7) = MEM16(ebx + 0x10E7) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + 0x10E7)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E6303(); return; /* fallthrough 0x001E6303 */

}

/**
 * sub_001E62FF
 * Original: 0x001E62FF - 0x001E6303 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E62FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E62FF: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E6303(); return; /* fallthrough 0x001E6303 */

}

/**
 * sub_001E6303
 * Original: 0x001E6303 - 0x001E6308 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6303(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6303: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E6334
 * Original: 0x001E6334 - 0x001E6346 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6334: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6346(); return; } /* jne: not equal / not zero */

loc_001E633F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E637A(); return; /* tail jmp 0x001E637A */

}

/**
 * sub_001E6346
 * Original: 0x001E6346 - 0x001E637A (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6346: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(edi + 0x10E5));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    MEM32(ebp + -4) = esi;
    eax = edi + 0x10E9;
    if (CMP_BE(_fa, _fb)) goto loc_001E6373; /* jbe: below or equal (unsigned <=) */

loc_001E6362: ;
    SET_LO16(edx, MEM16(ebp + 0xC));

loc_001E6366: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E637F(); return; } /* je: equal / zero */

loc_001E636A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6366; /* jb: below (unsigned <) */

loc_001E6373: ;
    eax = 0x80155A03u;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E637A(); return; /* fallthrough 0x001E637A */

}

/**
 * sub_001E6378
 * Original: 0x001E6378 - 0x001E637A (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6378(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6378: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E637A(); return; /* fallthrough 0x001E637A */

}

/**
 * sub_001E637A
 * Original: 0x001E637A - 0x001E637F (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E637A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E637A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E637F
 * Original: 0x001E637F - 0x001E638F (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E637F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E637F: ;
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), HI8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E638F(); return; } /* je: equal / zero */

loc_001E6388: ;
    eax = 0x8015000Cu;
    g_seh_ebp = ebp; sub_001E6378(); return; /* tail jmp 0x001E6378 */

}

/**
 * sub_001E638F
 * Original: 0x001E638F - 0x001E64DF (336 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E638F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E638F: ;
    ecx = ZX8(LO8(ecx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E648C; /* ja: above (unsigned >) */

loc_001E639C: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1E64B3); /* switch: 11 entries, 9 targets */
    if (_jt == 0x001E63A3u) goto loc_001E63A3;
    if (_jt == 0x001E63AAu) goto loc_001E63AA;
    if (_jt == 0x001E63AFu) goto loc_001E63AF;
    if (_jt == 0x001E63B4u) goto loc_001E63B4;
    if (_jt == 0x001E63B8u) goto loc_001E63B8;
    if (_jt == 0x001E63EAu) goto loc_001E63EA;
    if (_jt == 0x001E63F6u) goto loc_001E63F6;
    if (_jt == 0x001E6405u) goto loc_001E6405;
    if (_jt == 0x001E6479u) goto loc_001E6479;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001E63A3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E6447;

loc_001E63AA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E6400;

loc_001E63AF: ;
    PUSH32(esp, 2);
    POP32(esp, edx);
    goto loc_001E6400;

loc_001E63B4: ;
    PUSH32(esp, 4);
    goto loc_001E63EC;

loc_001E63B8: ;
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x10);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E63DBu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E63DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E63E6; /* jge: greater or equal (signed >=) */

loc_001E63DF: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001E6378(); return; /* tail jmp 0x001E6378 */

loc_001E63E6: ;
    edx = eax;
    goto loc_001E642B;

loc_001E63EA: ;
    PUSH32(esp, 8);

loc_001E63EC: ;
    esi = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edx);
    goto loc_001E642B;

loc_001E63F6: ;
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(MEM16(eax));

loc_001E6400: ;
    esi = eax + 2;
    goto loc_001E642B;

loc_001E6405: ;
    SET_LO16(ecx, MEM16(edi + 0x22));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    esi = edi + 0x24;
    if (CMP_BE(_fa, _fb)) goto loc_001E6425; /* jbe: below or equal (unsigned <=) */

loc_001E6413: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E644B; /* je: equal / zero */

loc_001E6419: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6413; /* jb: below (unsigned <) */

loc_001E6425: ;
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0xC);

loc_001E642B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6490; /* jb: below (unsigned <) */

loc_001E6430: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6447; /* je: equal / zero */

loc_001E6434: ;
    edi = MEM32(ebp + 0x14);
    ecx = edx;
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

loc_001E6447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E6495;

loc_001E644B: ;
    ecx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E645D; /* je: equal / zero */

loc_001E6458: ;
    esi = MEM32(esi + 8);
    goto loc_001E6471;

loc_001E645D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    edi = eax + 1;

loc_001E6465: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E6465; /* jne: not equal / not zero */

loc_001E646C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 1;

loc_001E6471: ;
    eax = MEM32(ecx + 4);
    MEM32(ebp + -4) = eax;
    goto loc_001E642B;

loc_001E6479: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ecx) (8-bit) */
    PUSH32(esp, 4);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edx);
    esi = ebp + 0xC;
    MEM32(ebp + 0xC) = ecx;
    goto loc_001E642B;

loc_001E648C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E642B;

loc_001E6490: ;
    eax = 0x80150001u;

loc_001E6495: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E649E; /* je: equal / zero */

loc_001E649C: ;
    MEM32(ecx) = edx;

loc_001E649E: ;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6378(); return; } /* je: equal / zero */

loc_001E64A9: ;
    edx = MEM32(ebp + -4);
    MEM32(ecx) = edx;
    g_seh_ebp = ebp; sub_001E6378(); return; /* tail jmp 0x001E6378 */

    MEM32(0xAA001E63u) = eax;
    RECOMP_UNIMPL("arpl word ptr [esi], bx", 0x001E64B8u); /* TODO: arpl word ptr [esi], bx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + -1275060637) = MEM8(edi + -1275060637) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi + -1275060637)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("arpl word ptr [esi], bx", 0x001E64C0u); /* TODO: arpl word ptr [esi], bx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("arpl word ptr [esi], bx", 0x001E64C4u); /* TODO: arpl word ptr [esi], bx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -369090973) = MEM8(eax + -369090973) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -369090973)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("arpl word ptr [esi], bx", 0x001E64CCu); /* TODO: arpl word ptr [esi], bx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("arpl word ptr [esi], bx", 0x001E64D0u); /* TODO: arpl word ptr [esi], bx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x79001E64) = MEM8(0x79001E64) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x79001E64)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);

    g_seh_ebp = ebp; sub_001E64DF(); return; /* fallthrough 0x001E64DF */

}

/**
 * sub_001E64DF
 * Original: 0x001E64DF - 0x001E65F8 (281 bytes, 96 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E64DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E64DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E64F6; /* jne: not equal / not zero */

loc_001E64EC: ;
    eax = 0x80150005u;
    goto loc_001E65F3;

loc_001E64F6: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001E6551; /* jne: not equal / not zero */

loc_001E6500: ;
    eax = MEM32(esi + 0x170);
    edx = ZX16(MEM16(eax + 0x22));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    edi = edx + eax + -232;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6527u); RECOMP_ABI_CALL(0x0020E66Bu, sub_0020E66B); /* call 0x0020E66B */

loc_001E6527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E65EE; /* jl: less (signed <) */

loc_001E6532: ;
    ecx = ZX16(MEM16(edi + 4));
    eax = MEM32(esi + 0x170);
    ecx = ZX16(MEM16(eax + ecx * 4 + 0x10EB));
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(ebp + -12);
    if (CMP_EQ(_fa, _fb)) goto loc_001E656C; /* je: equal / zero */

loc_001E654F: ;
    goto loc_001E6566;

loc_001E6551: ;
    eax = MEM32(esi + 0xFC);
    edi = MEM32(esi + 0x100);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + 8) = ebx;

loc_001E6566: ;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;

loc_001E656C: ;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E6581; /* je: equal / zero */

loc_001E6576: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -16)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebp + -16) = MEM32(ebp + -16) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x10);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_001E6581: ;
    eax = MEM32(esi + 0x174);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x178);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E65AB; /* jb: below (unsigned <) */

loc_001E6598: ;
    if (CMP_A(_fa, _fb)) goto loc_001E65A2; /* ja: above (unsigned >) */

loc_001E659A: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E65AB; /* jbe: below or equal (unsigned <=) */

loc_001E65A2: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;

loc_001E65AB: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E65CD; /* je: equal / zero */

loc_001E65B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E65BEu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001E65BE: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E65CBu); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_001E65CB: ;
    MEM32(esi) = eax;

loc_001E65CD: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E65DC; /* je: equal / zero */

loc_001E65D4: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;

loc_001E65DC: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E65EE; /* je: equal / zero */

loc_001E65E3: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_001E65EE: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E65F3: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E65F8
 * Original: 0x001E65F8 - 0x001E66C2 (202 bytes, 78 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E65F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E65F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E660C; /* jne: not equal / not zero */

loc_001E6602: ;
    eax = 0x80150005u;
    goto loc_001E66BE;

loc_001E660C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6621; /* je: equal / zero */

loc_001E6615: ;
    MEM32(ebp + 8) = 0x80150009u;
    goto loc_001E66BB;

loc_001E6621: ;
    PUSH32(esp, 0);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -32;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6640u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E6640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E66BB; /* jl: less (signed <) */

loc_001E6647: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(esi + 0x24));
    edx = ZX16(LO16(eax));
    ecx = edx + edx * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -8), LO16(edi) (16-bit) */
    ecx = esi + 0x26;
    if (CMP_BE(_fa, _fb)) goto loc_001E66B8; /* jbe: below or equal (unsigned <=) */

loc_001E6681: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E6687: ;
    esi = MEM32(ecx);
    MEM32(eax + -16) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + -12) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_001E66A7; /* jns: not sign (positive) */

loc_001E6699: ;
    MEM32(eax + -4) = esi;
    MEM32(eax) = edi;
    MEM32(ebp + 8) = 1;
    goto loc_001E66AF;

loc_001E66A7: ;
    MEM32(eax + -4) = edi;
    esi = MEM32(ecx + 8);
    MEM32(eax) = esi;

loc_001E66AF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E6687; /* jne: not equal / not zero */

loc_001E66B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E66BB: ;
    eax = MEM32(ebp + 8);

loc_001E66BE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E66C2
 * Original: 0x001E66C2 - 0x001E66E6 (36 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E66C2(void)
{

loc_001E66C2: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 8 + 0x13E0);
    ecx = eax + 0x24;
    MEM32(edx) = ecx;
    eax = ZX16(MEM16(eax + 0x20));
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E66E6
 * Original: 0x001E66E6 - 0x001E6709 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E66E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E66E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x14FC;

loc_001E66F6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6709(); return; } /* je: equal / zero */

loc_001E66FB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E66F6; /* jb: below (unsigned <) */

loc_001E6704: ;
    g_seh_ebp = ebp; sub_001E67C4(); return; /* tail jmp 0x001E67C4 */

}

/**
 * sub_001E6709
 * Original: 0x001E6709 - 0x001E6745 (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6709(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6709: ;
    edx = MEM32(ebp + 8);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x150;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14FC) = edx;
    edx = MEM32(ebp + 0xC);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + edi) = edx;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(ebp + 0x14);
    MEM32(eax + 0x1504) = ecx;
    MEM32(eax + 0x1508) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6745(); return; } /* jne: not equal / not zero */

loc_001E673F: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001E674D(); return; /* tail jmp 0x001E674D */

}

/**
 * sub_001E6745
 * Original: 0x001E6745 - 0x001E674D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6745: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E67C4(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001E674D(); return; /* fallthrough 0x001E674D */

}

/**
 * sub_001E674D
 * Original: 0x001E674D - 0x001E67C4 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E674D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E674D: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax * 8;
    eax = edi + eax * 8 + 0x13E0;
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, esi);

loc_001E675F: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E67B0; /* je: equal / zero */

loc_001E6768: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x20), 0 (16-bit) */
    ebx = esi + 0x24;
    if (CMP_BE(_fa, _fb)) goto loc_001E67B0; /* jbe: below or equal (unsigned <=) */

loc_001E6776: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x001E6784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E6781u); } /* indirect call */
    }

loc_001E6784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E679D; /* je: equal / zero */

loc_001E6788: ;
    eax = MEM32(ebx + 0x18);
    ecx = 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E679D; /* jne: not equal / not zero */

loc_001E6794: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x18) = eax;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001E679D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x20) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6776; /* jb: below (unsigned <) */

loc_001E67AD: ;
    ecx = MEM32(ebp + 0x10);

loc_001E67B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E67C2; /* jne: not equal / not zero */

loc_001E67B5: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E675F; /* jb: below (unsigned <) */

loc_001E67C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E67C4(); return; /* fallthrough 0x001E67C4 */

}

/**
 * sub_001E67C4
 * Original: 0x001E67C4 - 0x001E67C9 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E67C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E67C4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E67C9
 * Original: 0x001E67C9 - 0x001E6800 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E67C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E67C9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x1500;
    PUSH32(esp, edi);

loc_001E67D2: ;
    edi = MEM32(eax + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E67F5; /* jne: not equal / not zero */

loc_001E67DB: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E67F5; /* jne: not equal / not zero */

loc_001E67E3: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E67F5; /* jne: not equal / not zero */

loc_001E67EC: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6800(); return; } /* je: equal / zero */

loc_001E67F5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E67D2; /* jb: below (unsigned <) */

loc_001E67FE: ;
    g_seh_ebp = ebp; sub_001E6829(); return; /* tail jmp 0x001E6829 */

}

/**
 * sub_001E6800
 * Original: 0x001E6800 - 0x001E6829 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6800: ;
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x150;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14FC) = MEM32(eax + 0x14FC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1504) = MEM32(eax + 0x1504) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1504)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + ecx) = MEM32(edx + ecx) & 0;
    _fa = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1508) = MEM32(eax + 0x1508) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x1508)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001E6829(); return; /* fallthrough 0x001E6829 */

}

/**
 * sub_001E6829
 * Original: 0x001E6829 - 0x001E682D (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6829(void)
{

loc_001E6829: ;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E6848
 * Original: 0x001E6848 - 0x001E6852 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6848(void)
{

loc_001E6848: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6852
 * Original: 0x001E6852 - 0x001E685F (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6852(void)
{

loc_001E6852: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E685F
 * Original: 0x001E685F - 0x001E6875 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E685F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E685F: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x10E5));
    eax = ZX16(MEM16(eax + 0x1E));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6875
 * Original: 0x001E6875 - 0x001E6886 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6875(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6875: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x170);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6886
 * Original: 0x001E6886 - 0x001E68A8 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6886: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x10E5));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E68A8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E6898: ;
    eax = eax * 4 + 4;
    _fb = (uint32_t)(MEM16(ecx + 0x10E7)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10E7));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E68AA(); return; /* tail jmp 0x001E68AA */

}

/**
 * sub_001E68A8
 * Original: 0x001E68A8 - 0x001E68AA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E68A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E68A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E68AA(); return; /* fallthrough 0x001E68AA */

}

/**
 * sub_001E68AA
 * Original: 0x001E68AA - 0x001E68AD (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E68AA(void)
{

loc_001E68AA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E68AD
 * Original: 0x001E68AD - 0x001E690D (96 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E68AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E68AD: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x170);
    PUSH32(esp, esi);
    esi = eax + 0x10E5;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E6909; /* jbe: below or equal (unsigned <=) */

loc_001E68C8: ;
    ecx = ecx * 4 + 4;
    edx = ZX16(LO16(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = edx;
    ebx = ecx;
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
    ecx = ZX16(MEM16(eax + 0x10E7));
    esi = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x18);
    edi = edx + eax;
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
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001E6909: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E690D
 * Original: 0x001E690D - 0x001E69B9 (172 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E690D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E690D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x170);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E69DD(); return; } /* je: equal / zero */

loc_001E692F: ;
    SET_LO16(eax, MEM16(edi + 0x22));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E69DD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E693C: ;
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + -232;
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(eax + 4));
    ebx = ZX16(MEM16(edi + eax * 4 + 0x10EB));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(edi + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    eax = ebp + -524;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6979u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E6979: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6989u); RECOMP_ABI_CALL(0x001E5927u, sub_001E5927); /* call 0x001E5927 */

loc_001E6989: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E69B9(); return; } /* jne: not equal / not zero */

loc_001E699C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -524;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E69B7u); RECOMP_ABI_CALL(0x0020E1B3u, sub_0020E1B3); /* call 0x0020E1B3 */

loc_001E69B7: ;
    g_seh_ebp = ebp; sub_001E69D4(); return; /* tail jmp 0x001E69D4 */

}

/**
 * sub_001E69B9
 * Original: 0x001E69B9 - 0x001E69D4 (27 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E69B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E69B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    eax = ebp + -524;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0x001E69D4u); RECOMP_ABI_CALL(0x0020E4A4u, sub_0020E4A4); /* call 0x0020E4A4 */

    g_seh_ebp = ebp; sub_001E69D4(); return; /* fallthrough 0x001E69D4 */

}

/**
 * sub_001E69D4
 * Original: 0x001E69D4 - 0x001E69DD (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E69D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E69D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E6A37(); return; } /* jl: less (signed <) */

loc_001E69D8: ;
    MEM32(esi + 0x10) = edi;
    g_seh_ebp = ebp; sub_001E6A37(); return; /* tail jmp 0x001E6A37 */

}

/**
 * sub_001E69DD
 * Original: 0x001E69DD - 0x001E6A3E (97 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E69DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E69DD: ;
    ecx = MEM32(esi + 0x208);
    eax = MEM32(esi + 0x204);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + esi + 0x210;
    PUSH32(esp, 0x7530);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20C));
    edx = ecx + eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    eax = esi + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x180));
    PUSH32(esp, MEM32(esi + 0x17C));
    PUSH32(esp, 0x001E6A27u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E6A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6A37; /* jl: less (signed <) */

loc_001E6A2B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = ecx;
    MEM32(esi + 0x10) = ecx;

loc_001E6A37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6A37
 * Original: 0x001E6A37 - 0x001E6A3E (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6A37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6A3E
 * Original: 0x001E6A3E - 0x001E6A4A (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A3E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6A3E: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x210;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6A4A
 * Original: 0x001E6A4A - 0x001E6A54 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A4A(void)
{

loc_001E6A4A: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6A54
 * Original: 0x001E6A54 - 0x001E6A91 (61 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6A54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6A54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6A75u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E6A75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6A8C; /* jl: less (signed <) */

loc_001E6A79: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6A87; /* je: equal / zero */

loc_001E6A7E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6A8C; /* je: equal / zero */

loc_001E6A87: ;
    eax = 0x8015000Au;

loc_001E6A8C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E6A91
 * Original: 0x001E6A91 - 0x001E6ACC (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6A91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6AD8(); return; } /* jne: not equal / not zero */

loc_001E6A9A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E6AAA; /* je: equal / zero */

loc_001E6AA1: ;
    _fa = (uint32_t)(MEM32(ecx + 0x185C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x185C), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6AD8(); return; } /* ja: above (unsigned >) */

loc_001E6AAA: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6AD3(); return; } /* je: equal / zero */

loc_001E6AB2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6AD8(); return; } /* je: equal / zero */

loc_001E6AB7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6ACC(); return; } /* je: equal / zero */

loc_001E6ABC: ;
    if (CMP_BE(_fa, _fb)) goto loc_001E6AC3; /* jbe: below or equal (unsigned <=) */

loc_001E6ABE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6AD3(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E6AC3: ;
    _fa = (uint32_t)(MEM32(0x9701B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9701B4), 0 (32-bit) */
    g_seh_ebp = ebp; sub_001E6AD1(); return; /* tail jmp 0x001E6AD1 */

}

/**
 * sub_001E6ACC
 * Original: 0x001E6ACC - 0x001E6AD1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6ACC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6ACC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 4 (8-bit) */

    g_seh_ebp = ebp; sub_001E6AD1(); return; /* fallthrough 0x001E6AD1 */

}

/**
 * sub_001E6AD1
 * Original: 0x001E6AD1 - 0x001E6AD3 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6AD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6AD1: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_001E6AD8(); return; }

    g_seh_ebp = ebp; sub_001E6AD3(); return; /* fallthrough 0x001E6AD3 */

}

/**
 * sub_001E6AD3
 * Original: 0x001E6AD3 - 0x001E6AD8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6AD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6AD3: ;
    eax = MEM32(0x9701B0);

    g_seh_ebp = ebp; sub_001E6AD8(); return; /* fallthrough 0x001E6AD8 */

}

/**
 * sub_001E6AD8
 * Original: 0x001E6AD8 - 0x001E6ADB (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6AD8(void)
{

loc_001E6AD8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E6ADB
 * Original: 0x001E6ADB - 0x001E6B0A (47 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6ADB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6ADB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    eax = eax + ecx + 0x17C;
    PUSH32(esp, 0x91);
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6B0A(); return; } /* je: equal / zero */

loc_001E6B03: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6B08u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_001E6B08: ;
    g_seh_ebp = ebp; sub_001E6B0F(); return; /* tail jmp 0x001E6B0F */

}

/**
 * sub_001E6B0A
 * Original: 0x001E6B0A - 0x001E6B0F (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6B0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6B0A: ;
    PUSH32(esp, 0x001E6B0Fu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

    g_seh_ebp = ebp; sub_001E6B0F(); return; /* fallthrough 0x001E6B0F */

}

/**
 * sub_001E6B0F
 * Original: 0x001E6B0F - 0x001E6B22 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6B0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6B0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 0x28);
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6B22(); return; } /* jne: not equal / not zero */

loc_001E6B18: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001E6BA9(); return; /* tail jmp 0x001E6BA9 */

}

/**
 * sub_001E6B22
 * Original: 0x001E6B22 - 0x001E6BB0 (142 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6B22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6B22: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0x001E6B31u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001E6B31: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x20);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x24);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x10) = 2;
    eax = MEM32(esi);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi);
    MEM32(ecx + 0x16C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x170) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x174) = eax;
    MEM32(ecx + 0x178) = eax;
    esi = MEM32(esi);
    ecx = MEM32(ebp + 0x2C);
    eax = esi + 0x17C;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x34);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_001E6BA9
 * Original: 0x001E6BA9 - 0x001E6BB0 (7 bytes, 5 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6BA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6BA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_001E6BB0
 * Original: 0x001E6BB0 - 0x001E6C37 (135 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6BB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x170);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E6C11; /* je: equal / zero */

loc_001E6BC6: ;
    SET_LO16(ecx, MEM16(eax + 0x22));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E6BEF; /* jbe: below or equal (unsigned <=) */

loc_001E6BCF: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edi = ecx + eax + -232;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6BEF; /* je: equal / zero */

loc_001E6BE5: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E6BEDu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E6BED: ;
    MEM32(edi) = ebp;

loc_001E6BEF: ;
    eax = MEM32(esi + 0x170);
    MEM32(eax) = ebp;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E6C0B; /* je: equal / zero */

loc_001E6C03: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E6C0Bu); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001E6C0B: ;
    MEM32(esi + 0x170) = ebp;

loc_001E6C11: ;
    edi = esi + 0x16C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6C28; /* je: equal / zero */

loc_001E6C1B: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001E6C26u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001E6C26: ;
    MEM32(edi) = ebp;

loc_001E6C28: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebp (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E6C37(); return; } /* je: equal / zero */

loc_001E6C2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E6C35u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001E6C35: ;
    g_seh_ebp = ebp; sub_001E6C42(); return; /* tail jmp 0x001E6C42 */

}

/**
 * sub_001E6C37
 * Original: 0x001E6C37 - 0x001E6C42 (11 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6C37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6C37: ;
    PUSH32(esp, 0x91);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E6C42u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_001E6C42(); return; /* fallthrough 0x001E6C42 */

}

/**
 * sub_001E6C42
 * Original: 0x001E6C42 - 0x001E6C49 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6C42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6C42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6C49
 * Original: 0x001E6C49 - 0x001E6CDC (147 bytes, 62 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6C49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6C49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fa == 0)) goto loc_001E6C65; /* je: equal / zero */

loc_001E6C5D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E6CD2; /* jne: not equal / not zero */

loc_001E6C60: ;
    eax = MEM32(esi + 0x28);
    goto loc_001E6CD5;

loc_001E6C65: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6C70u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E6C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6CD5; /* je: equal / zero */

loc_001E6C74: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E6CC6; /* jl: less (signed <) */

loc_001E6C76: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6C94u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E6C94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6CC6; /* jl: less (signed <) */

loc_001E6C98: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6CC1; /* je: equal / zero */

loc_001E6C9F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E6CC1; /* jne: not equal / not zero */

loc_001E6CA8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6CC1; /* jb: below (unsigned <) */

loc_001E6CAE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x6E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E6CC1; /* jne: not equal / not zero */

loc_001E6CB3: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6CC6; /* jl: less (signed <) */

loc_001E6CBA: ;
    eax = 0x1500F0;
    goto loc_001E6CC6;

loc_001E6CC1: ;
    eax = 0x8015000Au;

loc_001E6CC6: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_001E6CD5;

loc_001E6CD2: ;
    eax = MEM32(ebp + 8);

loc_001E6CD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6CDC
 * Original: 0x001E6CDC - 0x001E6D8A (174 bytes, 68 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6CDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E6CDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fa == 0)) goto loc_001E6CFF; /* je: equal / zero */

loc_001E6CF0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E6D80; /* jne: not equal / not zero */

loc_001E6CF7: ;
    eax = MEM32(esi + 0x28);
    goto loc_001E6D83;

loc_001E6CFF: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6D0Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E6D0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6D83; /* je: equal / zero */

loc_001E6D0E: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E6D60; /* jl: less (signed <) */

loc_001E6D10: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6D2Eu); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E6D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6D60; /* jl: less (signed <) */

loc_001E6D32: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E6D5B; /* je: equal / zero */

loc_001E6D39: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E6D5B; /* jne: not equal / not zero */

loc_001E6D42: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E6D5B; /* jb: below (unsigned <) */

loc_001E6D48: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x69 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E6D5B; /* jne: not equal / not zero */

loc_001E6D4D: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E6D60; /* jl: less (signed <) */

loc_001E6D54: ;
    eax = 0x1500F0;
    goto loc_001E6D60;

loc_001E6D5B: ;
    eax = 0x8015000Au;

loc_001E6D60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_001E6D83; /* jge: greater or equal (signed >=) */

loc_001E6D6E: ;
    esi = MEM32(esi + 0x14);
    ecx = esi + esi * 8;
    ecx = ebx + ecx * 8 + 0x13B4;
    MEM32(ecx) = MEM32(ecx) | 0x40;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001E6D83;

loc_001E6D80: ;
    eax = MEM32(ebp + 8);

loc_001E6D83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E6D8A
 * Original: 0x001E6D8A - 0x001E7151 (967 bytes, 291 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E6D8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E6D8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x234));
    esp = esp - 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) goto loc_001E6EAD; /* je: equal / zero */

loc_001E6DA9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001E6DBE; /* je: equal / zero */

loc_001E6DAC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E7147; /* jne: not equal / not zero */

loc_001E6DB3: ;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + 8) = eax;
    goto loc_001E7147;

loc_001E6DBE: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6DC7u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E6DC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E7147; /* je: equal / zero */

loc_001E6DD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E70D2; /* jl: less (signed <) */

loc_001E6DDA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6DF8u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E6DF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E70D2; /* jl: less (signed <) */

loc_001E6E03: ;
    ecx = MEM32(ebp + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E6EA1; /* je: equal / zero */

loc_001E6E0E: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0xC8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E6EA1; /* jne: not equal / not zero */

loc_001E6E1B: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E6D8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1E6D8A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E70D2; /* jne: not equal / not zero */

loc_001E6E27: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E6EA1; /* jb: below (unsigned <) */

loc_001E6E2D: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x6A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E6EA1; /* jne: not equal / not zero */

loc_001E6E32: ;
    SET_LO16(edx, MEM16(ecx + 0x24));
    eax = ZX16(LO16(edx));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x26;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E6EA1; /* jb: below (unsigned <) */

loc_001E6E48: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E70D2; /* jl: less (signed <) */

loc_001E6E56: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E6EA1; /* jb: below (unsigned <) */

loc_001E6E5C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001E6E95; /* jbe: below or equal (unsigned <=) */

loc_001E6E66: ;
    eax = ZX16(LO16(edi));
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 0x2E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_001E6E79; /* jns: not sign (positive) */

loc_001E6E74: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E6E7D;

loc_001E6E79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E6EA1; /* je: equal / zero */

loc_001E6E7D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E6E66; /* jb: below (unsigned <) */

loc_001E6E83: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E6E95; /* jbe: below or equal (unsigned <=) */

loc_001E6E89: ;
    MEM32(ebp + 8) = 1;
    goto loc_001E70D2;

loc_001E6E95: ;
    MEM32(ebp + 8) = 0x1500F0;
    goto loc_001E70D2;

loc_001E6EA1: ;
    MEM32(ebp + 8) = 0x8015000Au;
    goto loc_001E70D2;

loc_001E6EAD: ;
    eax = MEM32(esi + 0x170);
    edx = ZX16(MEM16(eax + 0x22));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    edi = edx + eax + -232;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6ECBu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E6ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001E7147; /* je: equal / zero */

loc_001E6ED6: ;
    ecx = ZX16(MEM16(edi + 4));
    eax = MEM32(esi + 0x170);
    ecx = eax + ecx * 4 + 0x10E9;
    ecx = ZX16(MEM16(ecx + 2));
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E6F56; /* jne: not equal / not zero */

loc_001E6EF6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E6D8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1E6D8A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E6F0D; /* je: equal / zero */

loc_001E6EFE: ;
    eax = MEM32(esi + 0x204);
    eax = eax + esi + 0x210;
    goto loc_001E6F13;

loc_001E6F0D: ;
    eax = esi + 0x17C;

loc_001E6F13: ;
    edx = ZX16(MEM16(eax + 0x3C));
    eax = eax + edx * 8 + 0x4E;
    edx = ZX16(MEM16(eax));
    ebx = ecx + edx * 4 + 4;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6F3Cu); RECOMP_ABI_CALL(0x0020E66Bu, sub_0020E66B); /* call 0x0020E66B */

loc_001E6F3C: ;
    eax = MEM32(ebp + -12);
    MEM32(ebx) = eax;
    ecx = MEM32(ebp + -12);
    eax = esi + 0x174;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E6F5C;

loc_001E6F56: ;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = ebx;

loc_001E6F5C: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6F66u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E6F66: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001E70D2; /* jl: less (signed <) */

loc_001E6F71: ;
    eax = MEM32(esi + 0x170);
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 0xC)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(MEM32(eax + 0x10)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 0x10) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(esi + 0x170);
    MEM16(eax + 0x22) = MEM16(eax + 0x22) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(MEM16(eax + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x22), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E703A; /* jbe: below or equal (unsigned <=) */

loc_001E6F9D: ;
    ecx = ZX16(MEM16(edi + -264));
    ebx = ZX16(MEM16(eax + ecx * 4 + 0x10EB));
    _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(eax + 0x18))) >> 32) & 1);
    ebx = ebx + MEM32(eax + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x10C));
    edi = edi - 0x10C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x100);
    eax = ebp + -564;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6FD0u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E6FD0: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x170);
    eax = ZX16(MEM16(eax + 0x20));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E6FE4u); RECOMP_ABI_CALL(0x001E5927u, sub_001E5927); /* call 0x001E5927 */

loc_001E6FE4: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -564;
    PUSH32(esp, 0x40000000);
    if (CMP_NE(_fa, _fb)) goto loc_001E7013; /* jne: not equal / not zero */

loc_001E6FFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7011u); RECOMP_ABI_CALL(0x0020E1B3u, sub_0020E1B3); /* call 0x0020E1B3 */

loc_001E7011: ;
    goto loc_001E7028;

loc_001E7013: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7028u); RECOMP_ABI_CALL(0x0020E4A4u, sub_0020E4A4); /* call 0x0020E4A4 */

loc_001E7028: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E70D2; /* jl: less (signed <) */

loc_001E7035: ;
    goto loc_001E7144;

loc_001E703A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E6D8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1E6D8A (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi + 0x17C;
    if (CMP_NE(_fa, _fb)) goto loc_001E7075; /* jne: not equal / not zero */

loc_001E7048: ;
    edx = ZX16(MEM16(eax + 0x3C));
    ecx = ZX16(MEM16(eax + 0x3A));
    ecx = ecx + edx * 8 + 0x4E;
    edx = edx + edx * 2;
    MEM32(ebp + -16) = 0x12;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + 8) = 0xAA6774;
    edx = edx * 4 + 0x126;
    goto loc_001E70A1;

loc_001E7075: ;
    ecx = MEM32(eax);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -24) = ecx;
    ecx = eax + 8;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x88);
    edx = eax;
    eax = eax + ecx + 0x94;
    ecx = MEM32(edx + 0x8C);
    edx = MEM32(edx + 0x90);

loc_001E70A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7530);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi = ecx + eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E70CBu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E70CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001E7138; /* jge: greater or equal (signed >=) */

loc_001E70D2: ;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7129; /* je: equal / zero */

loc_001E70DC: ;
    SET_LO16(ecx, MEM16(eax + 0x22));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E7106; /* jbe: below or equal (unsigned <=) */

loc_001E70E5: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edi = ecx + eax + -232;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7106; /* je: equal / zero */

loc_001E70FB: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7104u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E7104: ;
    MEM32(edi) = ebx;

loc_001E7106: ;
    eax = MEM32(esi + 0x170);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001E7123; /* je: equal / zero */

loc_001E711A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7123u); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001E7123: ;
    MEM32(esi + 0x170) = ebx;

loc_001E7129: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_001E714A;

loc_001E7138: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;

loc_001E7144: ;
    MEM32(ebp + 8) = ebx;

loc_001E7147: ;
    eax = MEM32(ebp + 8);

loc_001E714A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E7151
 * Original: 0x001E7151 - 0x001E71E9 (152 bytes, 64 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7151(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7151: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fa == 0)) goto loc_001E716D; /* je: equal / zero */

loc_001E7165: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E71DF; /* jne: not equal / not zero */

loc_001E7168: ;
    eax = MEM32(esi + 0x28);
    goto loc_001E71E2;

loc_001E716D: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7178u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E7178: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E71E2; /* je: equal / zero */

loc_001E717C: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E71D3; /* jl: less (signed <) */

loc_001E717E: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E719Cu); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E719C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E71D3; /* jl: less (signed <) */

loc_001E71A0: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E71CE; /* je: equal / zero */

loc_001E71A7: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E71CE; /* jne: not equal / not zero */

loc_001E71B0: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E71CE; /* jb: below (unsigned <) */

loc_001E71B6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x6B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E71CE; /* jne: not equal / not zero */

loc_001E71BB: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E71D3; /* jl: less (signed <) */

loc_001E71C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E71D3; /* je: equal / zero */

loc_001E71C7: ;
    eax = 0x1500F0;
    goto loc_001E71D3;

loc_001E71CE: ;
    eax = 0x8015000Au;

loc_001E71D3: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_001E71E2;

loc_001E71DF: ;
    eax = MEM32(ebp + 8);

loc_001E71E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E71E9
 * Original: 0x001E71E9 - 0x001E71EE (5 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E71E9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E71E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E71EE
 * Original: 0x001E71EE - 0x001E7255 (103 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E71EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E71EE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E720F; /* je: equal / zero */

loc_001E71F9: ;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001E720F; /* js: sign (negative) */

loc_001E71FB: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E7214; /* je: equal / zero */

loc_001E7203: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_001E720F; /* js: sign (negative) */

loc_001E7207: ;
    edx = MEM32(eax + 8);
    edx = edx | MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001E7218; /* jne: not equal / not zero */

loc_001E720F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E7211: ;
    esp += 8; return; /* ret 4 */

loc_001E7214: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_001E7207; /* js: sign (negative) */

loc_001E7218: ;
    SET_LO8(edx, MEM8(eax + 0x24));
    ecx = ecx & 0xFFDFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    MEM32(eax + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E7236; /* je: equal / zero */

loc_001E7229: ;
    if (CMP_BE(_fa, _fb)) goto loc_001E723B; /* jbe: below or equal (unsigned <=) */

loc_001E722B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E723B; /* ja: above (unsigned >) */

loc_001E7230: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_001E723B; /* js: sign (negative) */

loc_001E7234: ;
    goto loc_001E720F;

loc_001E7236: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E720F; /* je: equal / zero */

loc_001E723B: ;
    SET_LO16(eax, MEM16(eax + 0x22));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7250; /* je: equal / zero */

loc_001E7244: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E720F; /* jb: below (unsigned <) */

loc_001E724A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x1000 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E720F; /* ja: above (unsigned >) */

loc_001E7250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E7211;

}

/**
 * sub_001E7255
 * Original: 0x001E7255 - 0x001E75CD (888 bytes, 295 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E7255: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX16(MEM16(esi + 0x22));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001E7288; /* jae: above or equal (unsigned >=) */

loc_001E7281: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E734C;

loc_001E7288: ;
    if (CMP_BE(_fa, _fb)) goto loc_001E728C; /* jbe: below or equal (unsigned <=) */

loc_001E728A: ;
    ecx = eax;

loc_001E728C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edx = ecx + -4;
    ecx = ZX16(MEM16(edi));
    ebx = ecx;
    if (2) _cf = (int)(((ebx) >> (32 - (2))) & 1);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E7348; /* jb: below (unsigned <) */

loc_001E72A4: ;
    ebx = 0x3FFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(MEM16(edi + 2));
    eax = eax + ebx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E72BA: ;
    eax = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    SET_LO16(ecx, MEM16(edi));
    eax = ZX16(LO16(ecx));
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = eax + edi + 4;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001E7514; /* jbe: below or equal (unsigned <=) */

loc_001E72E5: ;
    eax = ZX16(MEM16(ebp + -8));
    esi = edi + eax * 4 + 4;
    eax = MEM32(ebp + 0x10);
    eax = ZX8(MEM8(eax + 0x24));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7300u); RECOMP_ABI_CALL(0x001E59C3u, sub_001E59C3); /* call 0x001E59C3 */

loc_001E7300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7304: ;
    eax = ZX8(HI8(ebx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E730D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1E75A1); /* switch: 11 entries, 7 targets */
    if (_jt == 0x001E7314u) goto loc_001E7314;
    if (_jt == 0x001E7318u) goto loc_001E7318;
    if (_jt == 0x001E7351u) goto loc_001E7351;
    if (_jt == 0x001E7359u) goto loc_001E7359;
    if (_jt == 0x001E7379u) goto loc_001E7379;
    if (_jt == 0x001E73DCu) goto loc_001E73DC;
    if (_jt == 0x001E73FBu) goto loc_001E73FB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001E7314: ;
    PUSH32(esp, 4);
    goto loc_001E7353;

loc_001E7318: ;
    eax = ZX16(MEM16(esi + 2));
    ecx = eax + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E7324: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7331: ;
    edx = ZX16(LO16(edx));
    eax = edx + eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E733D: ;
    _fa = (uint32_t)(MEM8(edx + ecx + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx + 1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E73FB; /* je: equal / zero */

loc_001E7348: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E734A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001E734C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_001E7351: ;
    PUSH32(esp, 8);

loc_001E7353: ;
    POP32(esp, eax);
    goto loc_001E73EC;

loc_001E7359: ;
    eax = ZX16(MEM16(esi + 2));
    ecx = eax + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E7365: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7372: ;
    eax = ZX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E73E8;

loc_001E7379: ;
    ecx = ZX16(MEM16(esi + 2));
    eax = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E7385: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7390: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E7348; /* jbe: below or equal (unsigned <=) */

loc_001E7398: ;
    ecx = edx + ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E73A1: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001E73B2; /* je: equal / zero */

loc_001E73A6: ;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax + 0xC), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E73B2; /* je: equal / zero */

loc_001E73AD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E73A6; /* jb: below (unsigned <) */

loc_001E73B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E73B6: ;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax + 0xC), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E73BD: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x9C1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x9C1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E73CE; /* jne: not equal / not zero */

loc_001E73C4: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E73CE: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + 0xC);
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_001E73FB;

loc_001E73DC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E734A; /* ja: above (unsigned >) */

loc_001E73E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001E73FB; /* jbe: below or equal (unsigned <=) */

loc_001E73EC: ;
    ecx = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E7348; /* ja: above (unsigned >) */

loc_001E73FB: ;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7421; /* jne: not equal / not zero */

loc_001E7402: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 9 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E740C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7416: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    goto loc_001E74B9;

loc_001E7421: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7442; /* jne: not equal / not zero */

loc_001E7426: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7430: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E743A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    goto loc_001E74B9;

loc_001E7442: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7474; /* jne: not equal / not zero */

loc_001E7447: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7451: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E745B: ;
    eax = ZX16(MEM16(esi + 2));
    ebx = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax + ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7472: ;
    goto loc_001E74B9;

loc_001E7474: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7495; /* jne: not equal / not zero */

loc_001E7479: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7483: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E748D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -24) = ecx;
    goto loc_001E74B9;

loc_001E7495: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC5 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E74B6; /* jne: not equal / not zero */

loc_001E749A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74A4: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74AE: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = ecx;
    goto loc_001E74B9;

loc_001E74B6: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E74B9: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(eax + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E74DF; /* jne: not equal / not zero */

loc_001E74C3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x81 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E74DF; /* jne: not equal / not zero */

loc_001E74C8: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 5 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74D2: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74DC: ;
    MEM32(ebp + -36) = ecx;

loc_001E74DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E74FF; /* jne: not equal / not zero */

loc_001E74E3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x81 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E74FF; /* jne: not equal / not zero */

loc_001E74E8: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74F2: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E74FC: ;
    MEM32(ebp + -32) = ecx;

loc_001E74FF: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E72E5; /* jb: below (unsigned <) */

loc_001E750F: ;
    esi = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E7514: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001E7537; /* je: equal / zero */

loc_001E751B: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7524: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E752D: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7552; /* jne: not equal / not zero */

loc_001E7532: ;
    goto loc_001E7348;

loc_001E7537: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7540: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7549: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7552: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001E7569; /* je: equal / zero */

loc_001E7556: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E755F: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E757B; /* jne: not equal / not zero */

loc_001E7564: ;
    goto loc_001E7348;

loc_001E7569: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E7572: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7348; /* jne: not equal / not zero */

loc_001E757B: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7590; /* je: equal / zero */

loc_001E7582: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7599; /* jne: not equal / not zero */

loc_001E7586: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E7599; /* jne: not equal / not zero */

loc_001E758B: ;
    goto loc_001E7348;

loc_001E7590: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E7348; /* je: equal / zero */

loc_001E7599: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E734A;

    RECOMP_UNIMPL("sti", 0x001E75A1u); /* TODO: sti */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_001E75C2 - dead code, label not in function */

loc_001E75A4: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (!_cf) goto loc_001E75C6; /* jae: above or equal (unsigned >=) */

loc_001E75A8: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (!_cf) (void)0; /* goto loc_001E75CA - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_001E75AC: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + esi * 2)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + esi * 2) = MEM8(ebx + esi * 2) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx + esi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x73)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x73)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (!_cf) { g_seh_ebp = ebp; sub_001E75D6(); return; } /* jae: above or equal (unsigned >=) */

loc_001E75B8: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x73)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x73)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x73)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0x73)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x73)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0x73)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_001E75C6: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) { g_seh_ebp = ebp; sub_001E75E6(); return; }

loc_001E75C8: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + esi * 2)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + esi * 2) = MEM8(ebx + esi * 2) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx + esi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ds */);

    g_seh_ebp = ebp; sub_001E75CD(); return; /* fallthrough 0x001E75CD */

}

/**
 * sub_001E75CD
 * Original: 0x001E75CD - 0x001E760C (63 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E75CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E75CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 8);
    esi = edi + 0x1504;
    POP32(esp, ebx);

loc_001E75DB: ;
    edx = MEM32(esi + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7600; /* je: equal / zero */

loc_001E75E2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E75EF; /* je: equal / zero */

loc_001E75E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7600; /* jne: not equal / not zero */

loc_001E75EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esi + 4));
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001E7600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E75FEu); } /* indirect call */
    }

loc_001E7600: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E75DB; /* jne: not equal / not zero */

loc_001E7606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E760C
 * Original: 0x001E760C - 0x001E76C4 (184 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E760C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E760C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = eax + eax * 8;
    eax = MEM32(ebx + eax * 8 + 0x13E0);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x20) (16-bit) */
    PUSH32(esp, edi);
    esi = eax + 0x24;
    if (CMP_AE(_fa, _fb)) goto loc_001E76BD; /* jae: above or equal (unsigned >=) */

loc_001E7630: ;
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi + 0x14);

loc_001E7636: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7647; /* je: equal / zero */

loc_001E763B: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x20) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E7636; /* jb: below (unsigned <) */

loc_001E7645: ;
    goto loc_001E764D;

loc_001E7647: ;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;

loc_001E764D: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x20) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E76BD; /* jae: above or equal (unsigned >=) */

loc_001E7653: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E7674; /* je: equal / zero */

loc_001E7664: ;
    ecx = ecx & 0xFFDFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = ecx;
    MEM16(eax + 0x22) = MEM16(eax + 0x22) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E7674: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E76BD; /* je: equal / zero */

loc_001E7678: ;
    edi = ebx + 0x1500;
    MEM32(ebp + 0xC) = 8;

loc_001E7685: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7692; /* je: equal / zero */

loc_001E768D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E76A6; /* jne: not equal / not zero */

loc_001E7692: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E76A6; /* je: equal / zero */

loc_001E7698: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001E76A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E76A4u); } /* indirect call */
    }

loc_001E76A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E7685; /* jne: not equal / not zero */

loc_001E76AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx + 0x1580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E76BDu); RECOMP_ABI_CALL(0x002052F8u, sub_002052F8); /* call 0x002052F8 */

loc_001E76BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E76C4
 * Original: 0x001E76C4 - 0x001E76D2 (14 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E76C4(void)
{

loc_001E76C4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E772D
 * Original: 0x001E772D - 0x001E773C (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E772D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E772D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E5B08(); return; /* tail jmp 0x001E5B08 */

}

/**
 * sub_001E773C
 * Original: 0x001E773C - 0x001E774B (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E773C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E773C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E5CE7(); return; /* tail jmp 0x001E5CE7 */

}

/**
 * sub_001E774B
 * Original: 0x001E774B - 0x001E7756 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E774B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E774B: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E5DFB(); return; /* tail jmp 0x001E5DFB */

}

/**
 * sub_001E7756
 * Original: 0x001E7756 - 0x001E7765 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7756(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E7756: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E5E17(); return; /* tail jmp 0x001E5E17 */

}

/**
 * sub_001E7770
 * Original: 0x001E7770 - 0x001E779A (42 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E7770: ;
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
    PUSH32(esp, 0x001E7796u); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001E7796: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001E779A
 * Original: 0x001E779A - 0x001E77A5 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E779A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E779A: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E6017(); return; /* tail jmp 0x001E6017 */

}

/**
 * sub_001E77A5
 * Original: 0x001E77A5 - 0x001E77B4 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E77A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E77A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E6051(); return; /* tail jmp 0x001E6051 */

}

/**
 * sub_001E77CA
 * Original: 0x001E77CA - 0x001E77D9 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E77CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E77CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E6334(); return; /* tail jmp 0x001E6334 */

}

/**
 * sub_001E785D
 * Original: 0x001E785D - 0x001E78E0 (131 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E785D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E785D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E786F; /* jne: not equal / not zero */

loc_001E7868: ;
    eax = 0x80150005u;
    goto loc_001E78C3;

loc_001E786F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ecx + 0x185C) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001E78C0; /* jbe: below or equal (unsigned <=) */

loc_001E787D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);

loc_001E7882: ;
    edx = MEM32(0x10118);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edx + 0x5C;

loc_001E788D: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E78A1; /* je: equal / zero */

loc_001E7893: ;
    _fa = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edi * 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E78C8; /* je: equal / zero */

loc_001E7898: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E788D; /* jb: below (unsigned <) */

loc_001E78A1: ;
    MEM32(ebp + -4) = 1;

loc_001E78A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E7882; /* jb: below (unsigned <) */

loc_001E78AE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x185C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x185C), 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001E78C0; /* jne: not equal / not zero */

loc_001E78B9: ;
    MEM32(ebp + -4) = 0x80070057u;

loc_001E78C0: ;
    eax = MEM32(ebp + -4);

loc_001E78C3: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_001E78C8: ;
    eax = MEM32(ecx + 0x185C);
    edx = MEM32(ebx + edi * 4);
    MEM32(ecx + eax * 4 + 0x1860) = edx;
    MEM32(ecx + 0x185C) = MEM32(ecx + 0x185C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x185C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E78A8;

}

/**
 * sub_001E7939
 * Original: 0x001E7939 - 0x001E7954 (27 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7939(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7939: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E7968(); return; } /* je: equal / zero */

loc_001E794A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E7950u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E7950: ;
    MEM32(esi) = edi;
    g_seh_ebp = ebp; sub_001E7968(); return; /* tail jmp 0x001E7968 */

}

/**
 * sub_001E7954
 * Original: 0x001E7954 - 0x001E7968 (20 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7954(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7954: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(eax + 0x18) = edi;
    PUSH32(esp, 0x001E7968u); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

    g_seh_ebp = ebp; sub_001E7968(); return; /* fallthrough 0x001E7968 */

}

/**
 * sub_001E7968
 * Original: 0x001E7968 - 0x001E7996 (46 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7968(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7968: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E7954(); return; } /* jne: not equal / not zero */

loc_001E796D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7983; /* je: equal / zero */

loc_001E7974: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x001E7980u); RECOMP_ABI_CALL(0x001DFC7Fu, sub_001DFC7F); /* call 0x001DFC7F */

loc_001E7980: ;
    MEM32(esi + 8) = edi;

loc_001E7983: ;
    PUSH32(esp, 0x8092);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E7990u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E7990: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E7996
 * Original: 0x001E7996 - 0x001E799B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7996(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7996: ;
    g_seh_ebp = ebp; sub_001E6BB0(); return; /* tail jmp 0x001E6BB0 */

}

/**
 * sub_001E799B
 * Original: 0x001E799B - 0x001E79A0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E799B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E799B: ;
    g_seh_ebp = ebp; sub_001E6D8A(); return; /* tail jmp 0x001E6D8A */

}

/**
 * sub_001E79A0
 * Original: 0x001E79A0 - 0x001E79BB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E79A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E79A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E79BB(); return; } /* jne: not equal / not zero */

loc_001E79B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001E79F0(); return; /* tail jmp 0x001E79F0 */

}

/**
 * sub_001E79BB
 * Original: 0x001E79BB - 0x001E79F0 (53 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E79BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E79BB: ;
    edx = MEM32(ecx + 0x185C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001E79D8; /* jbe: below or equal (unsigned <=) */

loc_001E79C6: ;
    edi = ecx + 0x1860;

loc_001E79CC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E79F5(); return; } /* je: equal / zero */

loc_001E79D0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E79CC; /* jb: below (unsigned <) */

loc_001E79D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E79E3; /* je: equal / zero */

loc_001E79E0: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_001E79E3: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E79EFu); RECOMP_ABI_CALL(0x001E6A91u, sub_001E6A91); /* call 0x001E6A91 */

loc_001E79EF: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001E79F0(); return; /* fallthrough 0x001E79F0 */

}

/**
 * sub_001E79EF
 * Original: 0x001E79EF - 0x001E79F0 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E79EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E79EF: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001E79F0(); return; /* fallthrough 0x001E79F0 */

}

/**
 * sub_001E79F0
 * Original: 0x001E79F0 - 0x001E79F5 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E79F0(void)
{

loc_001E79F0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E79F5
 * Original: 0x001E79F5 - 0x001E7A00 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E79F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E79F5: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001E79EF(); return; /* tail jmp 0x001E79EF */

}

/**
 * sub_001E7A00
 * Original: 0x001E7A00 - 0x001E7A73 (115 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x2C));
    ebx = MEM32(ebp + 0x10);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x1E6BB0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7A35u); RECOMP_ABI_CALL(0x001E6ADBu, sub_001E6ADB); /* call 0x001E6ADB */

loc_001E7A35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E7A69; /* jl: less (signed <) */

loc_001E7A3C: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(esi);
    eax = edi + 0x14C8;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7A69u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001E7A69: ;
    eax = MEM32(ebp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001E7A73
 * Original: 0x001E7A73 - 0x001E7B6A (247 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7A73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7A73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) goto loc_001E7A96; /* je: equal / zero */

loc_001E7A87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E7B61; /* jne: not equal / not zero */

loc_001E7A8E: ;
    eax = MEM32(esi + 0x28);
    goto loc_001E7B64;

loc_001E7A96: ;
    ecx = MEM32(ebp + -4);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7AA2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E7AA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7B64; /* je: equal / zero */

loc_001E7AAA: ;
    PUSH32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001E7B34; /* jl: less (signed <) */

loc_001E7AB1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7AD0u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E7AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E7B34; /* jl: less (signed <) */

loc_001E7AD4: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7B2F; /* je: equal / zero */

loc_001E7ADB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7B2F; /* jne: not equal / not zero */

loc_001E7AE4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E7B2F; /* jb: below (unsigned <) */

loc_001E7AEA: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x68 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E7B2F; /* jne: not equal / not zero */

loc_001E7AF1: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E7B34; /* jl: less (signed <) */

loc_001E7AF8: ;
    edi = ecx + 0x24;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7B04u); RECOMP_ABI_CALL(0x001E71EEu, sub_001E71EE); /* call 0x001E71EE */

loc_001E7B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7B2F; /* je: equal / zero */

loc_001E7B08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x46), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E7B41; /* jbe: below or equal (unsigned <=) */

loc_001E7B10: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x174;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xFFFFFFA8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFA8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7B2Bu); RECOMP_ABI_CALL(0x001E7255u, sub_001E7255); /* call 0x001E7255 */

loc_001E7B2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7B4D; /* jne: not equal / not zero */

loc_001E7B2F: ;
    eax = 0x8015000Au;

loc_001E7B34: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    POP32(esp, ebx);
    goto loc_001E7B64;

loc_001E7B41: ;
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x178) = eax;

loc_001E7B4D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7B5Au); RECOMP_ABI_CALL(0x001E760Cu, sub_001E760C); /* call 0x001E760C */

loc_001E7B5A: ;
    eax = 0x1500F0;
    goto loc_001E7B34;

loc_001E7B61: ;
    eax = MEM32(ebp + 8);

loc_001E7B64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E7B6A
 * Original: 0x001E7B6A - 0x001E7D10 (422 bytes, 152 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7B6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7B6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax = ebp + -32;
    edi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7B83u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001E7B83: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7B8Fu); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E7B8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7B9A; /* je: equal / zero */

loc_001E7B93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E7D01;

loc_001E7B9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + esi * 8;
    ebx = MEM32(edi + eax * 8 + 0x13E0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    edi = ebx + 0x24;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001E7C30; /* jbe: below or equal (unsigned <=) */

loc_001E7BC0: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7BD1u); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E7BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7C14; /* je: equal / zero */

loc_001E7BD5: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7BE2u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7BE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7BF0; /* je: equal / zero */

loc_001E7BE6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7BF0u); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E7BF0: ;
    ecx = ZX16(MEM16(ebp + -8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi + 0x34;
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
    MEM16(ebx + 0x20) = MEM16(ebx + 0x20) - 1;
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -20);
    goto loc_001E7C29;

loc_001E7C14: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7D06; /* je: equal / zero */

loc_001E7C23: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = edi;

loc_001E7C29: ;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -8), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E7BC0; /* ja: above (unsigned >) */

loc_001E7C30: ;
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x20), 0x7D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7C5E; /* jne: not equal / not zero */

loc_001E7C37: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edi = ebx + 0x1954;
    PUSH32(esp, edi);
    MEM16(ebx + 0x20) = 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7C50u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7C50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7C5E; /* je: equal / zero */

loc_001E7C54: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7C5Eu); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E7C5E: ;
    eax = ZX16(MEM16(ebx + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7C73u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001E7C73: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
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
    MEM16(ebx + 0x20) = MEM16(ebx + 0x20) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -12);
    edi = MEM32(ebp + -4);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7C97u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7C97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7CFC; /* je: equal / zero */

loc_001E7C9B: ;
    esi = edi + 0x1504;
    MEM32(ebp + 0xC) = 8;

loc_001E7CA8: ;
    edx = MEM32(esi + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7CD4; /* je: equal / zero */

loc_001E7CAF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7CBB; /* je: equal / zero */

loc_001E7CB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7CD4; /* jne: not equal / not zero */

loc_001E7CBB: ;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001E7CC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E7CC7u); } /* indirect call */
    }

loc_001E7CC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7CD4; /* je: equal / zero */

loc_001E7CCD: ;
    MEM32(ebp + -16) = 1;

loc_001E7CD4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E7CA8; /* jne: not equal / not zero */

loc_001E7CDC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7CE7u); RECOMP_ABI_CALL(0x0020F7C6u, sub_0020F7C6); /* call 0x0020F7C6 */

loc_001E7CE7: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E7CFC; /* jne: not equal / not zero */

loc_001E7CED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 0x1580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7CFCu); RECOMP_ABI_CALL(0x002052F8u, sub_002052F8); /* call 0x002052F8 */

loc_001E7CFC: ;
    eax = MEM32(ebp + -16);

loc_001E7CFF: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E7D01: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_001E7D06: ;
    eax = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E7CFF;

}

/**
 * sub_001E7D10
 * Original: 0x001E7D10 - 0x001E7DE9 (217 bytes, 76 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E7D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    _fa = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x22), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E7DE2; /* jbe: below or equal (unsigned <=) */

loc_001E7D30: ;
    PUSH32(esp, 0x10);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7D3Bu); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001E7D3B: ;
    _fa = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x22), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001E7DE2; /* jbe: below or equal (unsigned <=) */

loc_001E7D48: ;
    eax = MEM32(ebp + 0x14);
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = eax;
    eax = ebx + 0x28;
    MEM32(ebp + 0x18) = eax;

loc_001E7D57: ;
    eax = MEM32(ebp + 0x18);
    eax = ZX16(MEM16(eax));
    eax = ebx + eax * 4 + 0x10E9;
    esi = ZX16(MEM16(eax + 2));
    eax = ZX8(MEM8(eax));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -5));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -6));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -8));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -9));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -11));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -12));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -14));
    _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebx + 0x18))) >> 32) & 1);
    esi = esi + MEM32(ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -16));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    eax = ZX8(MEM8(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6728);
    eax = esi + 0xC;
    PUSH32(esp, 0x44);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7DBFu); RECOMP_ABI_CALL(0x0020B354u, sub_0020B354); /* call 0x0020B354 */

loc_001E7DBF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x18)) + (uint64_t)(0x10C)) >> 32) & 1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x10C;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx + 0x22) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E7D57; /* jb: below (unsigned <) */

loc_001E7DE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E7E0A
 * Original: 0x001E7E0A - 0x001E7E21 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7E0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7E0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E7E21(); return; } /* jne: not equal / not zero */

loc_001E7E17: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E7F1F(); return; /* tail jmp 0x001E7F1F */

}

/**
 * sub_001E7E21
 * Original: 0x001E7E21 - 0x001E7E78 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7E21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7E21: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    esi = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(esi + 0x13B4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x13B4), 0x80 (8-bit) */
    MEM32(ebp + -24) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001E7E48; /* je: equal / zero */

loc_001E7E41: ;
    MEM32(ebp + -20) = 0x155A01;

loc_001E7E48: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E7E51u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001E7E51: ;
    eax = MEM32(esi + 0x13E0);
    ecx = MEM32(ebp + 0xC);
    ebx = eax + 0x24;
    SET_LO16(eax, MEM16(eax + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E7EF5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E7E6D: ;
    eax = ZX16(LO16(eax));
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    MEM32(ebp + -16) = eax;

    g_seh_ebp = ebp; sub_001E7E78(); return; /* fallthrough 0x001E7E78 */

}

/**
 * sub_001E7E78
 * Original: 0x001E7E78 - 0x001E7ED1 (89 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7E78: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0x001E7E88u); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E7E88: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E7ED1(); return; } /* je: equal / zero */

loc_001E7E94: ;
    PUSH32(esp, 0x001E7E99u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7E99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7EA7; /* je: equal / zero */

loc_001E7E9D: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E7EA7u); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E7EA7: ;
    ecx = esi;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x34;
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
    eax = MEM32(ebp + -24);
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
    eax = MEM32(eax + 0x13E0);
    MEM16(eax + 0x20) = MEM16(eax + 0x20) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_001E7EF0(); return; /* tail jmp 0x001E7EF0 */

}

/**
 * sub_001E7ED1
 * Original: 0x001E7ED1 - 0x001E7EF0 (31 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7ED1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7ED1: ;
    PUSH32(esp, 0x001E7ED6u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7ED6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7EED; /* je: equal / zero */

loc_001E7EDA: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E7EE6u); RECOMP_ABI_CALL(0x001E585Du, sub_001E585D); /* call 0x001E585D */

loc_001E7EE6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E7EED: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001E7EF0(); return; /* fallthrough 0x001E7EF0 */

}

/**
 * sub_001E7EF0
 * Original: 0x001E7EF0 - 0x001E7EF5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7EF0: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001E7E78(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001E7EF5(); return; /* fallthrough 0x001E7EF5 */

}

/**
 * sub_001E7EF5
 * Original: 0x001E7EF5 - 0x001E7F1F (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7EF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7EF5: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x7D);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E7F1F(); return; /* fallthrough 0x001E7F1F */

}

/**
 * sub_001E7F1F
 * Original: 0x001E7F1F - 0x001E7F23 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7F1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7F1F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E7F23
 * Original: 0x001E7F23 - 0x001E8017 (244 bytes, 87 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E7F23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E7F23: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_001E7F3A; /* jne: not equal / not zero */

loc_001E7F30: ;
    eax = 0x80150005u;
    goto loc_001E7FF4;

loc_001E7F3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    esi = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(esi + 0x13B4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x13B4), 0x80 (8-bit) */
    MEM32(ebp + -16) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001E7F5D; /* je: equal / zero */

loc_001E7F56: ;
    MEM32(ebp + -4) = 0x155A01;

loc_001E7F5D: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7F66u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001E7F66: ;
    eax = MEM32(esi + 0x13E0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(eax + 0x20));
    ebx = eax + 0x24;
    goto loc_001E7FE2;

loc_001E7F77: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7F8Au); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E7F8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7FD7; /* je: equal / zero */

loc_001E7F8E: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7F9Bu); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E7F9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7FA9; /* je: equal / zero */

loc_001E7F9F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E7FA9u); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E7FA9: ;
    ecx = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x34;
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
    eax = MEM32(ebp + -16);
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
    eax = MEM32(eax + 0x13E0);
    MEM16(eax + 0x20) = MEM16(eax + 0x20) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -20);
    goto loc_001E7FE2;

loc_001E7FD7: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7FF8; /* je: equal / zero */

loc_001E7FDF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E7FE2: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E7F77; /* ja: above (unsigned >) */

loc_001E7FE7: ;
    MEM32(ebp + -4) = 0x80155A01u;

loc_001E7FEE: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E7FF4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_001E7FF8: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8005u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E8005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E7FE7; /* je: equal / zero */

loc_001E8009: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8015u); RECOMP_ABI_CALL(0x001E585Du, sub_001E585D); /* call 0x001E585D */

loc_001E8015: ;
    goto loc_001E7FEE;

}

/**
 * sub_001E8017
 * Original: 0x001E8017 - 0x001E8159 (322 bytes, 118 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8017: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E8030; /* jne: not equal / not zero */

loc_001E8026: ;
    eax = 0x80150005u;
    goto loc_001E8155;

loc_001E8030: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(eax) = edx;
    eax = ebx + ebx * 8;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = MEM32(esi + 0x13E0);
    ecx = eax + 0x24;
    SET_LO16(eax, MEM16(eax + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = 0x80155A01u;
    MEM32(ebp + 8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001E8150; /* jbe: below or equal (unsigned <=) */

loc_001E8063: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_001E8067: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E807D; /* je: equal / zero */

loc_001E806C: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001E8067; /* jb: below (unsigned <) */

loc_001E8078: ;
    goto loc_001E814F;

loc_001E807D: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E808Au); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E808A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E814F; /* je: equal / zero */

loc_001E8092: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x1E6C49);
    PUSH32(esp, ebx);
    ebx = 0x100;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E80BBu); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E80BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E813F; /* jl: less (signed <) */

loc_001E80C2: ;
    ecx = MEM32(esi + 0x13A8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x13AC);
    esi = MEM32(ebp + -8);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x28) = edi;
    edi = MEM32(ebp + 0x14);
    MEM32(eax + 0x2C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    MEM32(eax + 0x30) = edi;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8113u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E8113: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E8142; /* jl: less (signed <) */

loc_001E811A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ~edi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E8142;

loc_001E813F: ;
    esi = MEM32(ebp + -8);

loc_001E8142: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E814F; /* je: equal / zero */

loc_001E8146: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E814Fu); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E814F: ;
    POP32(esp, edi);

loc_001E8150: ;
    eax = MEM32(ebp + -12);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E8155: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E8159
 * Original: 0x001E8159 - 0x001E830B (434 bytes, 147 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8159(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8159: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8170; /* jne: not equal / not zero */

loc_001E8166: ;
    eax = 0x80150005u;
    goto loc_001E8306;

loc_001E8170: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    esi = ebx + eax * 8;
    eax = MEM32(esi + 0x13E0);
    ecx = eax + 0x24;
    SET_LO16(eax, MEM16(eax + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM32(ebp + -16) = 0x80155A01u;
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001E8301; /* jbe: below or equal (unsigned <=) */

loc_001E81A3: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E81BF; /* je: equal / zero */

loc_001E81AB: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), LO16(eax) (16-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001E81A3; /* jb: below (unsigned <) */

loc_001E81BA: ;
    goto loc_001E8301;

loc_001E81BF: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E81CBu); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E81CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8301; /* je: equal / zero */

loc_001E81D3: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC8);
    PUSH32(esp, MEM32(eax + 8));
    ecx = ebx;
    PUSH32(esp, 0x1E6CDC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8201u); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E8201: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E82F2; /* jl: less (signed <) */

loc_001E820C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    ecx = MEM32(esi + 0x13A8);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001E823D; /* je: equal / zero */

loc_001E822F: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx);
    edx = edx | MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001E823D; /* je: equal / zero */

loc_001E8239: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001E823D: ;
    ecx = MEM32(esi + 0x13E0);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8295; /* jne: not equal / not zero */

loc_001E8247: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -12);
    ecx = edi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8276u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E8276: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E82F5; /* jl: less (signed <) */

loc_001E827D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x16C) = eax;
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esi + 0x13E0);
    MEM32(eax) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E82AD;

loc_001E8295: ;
    eax = MEM32(esi + 0x13E0);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esi + 0x13E0);
    MEM32(ecx + 4) = eax;

loc_001E82AD: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E82BAu); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E82BA: ;
    eax = MEM32(esi + 0x13E0);
    MEM16(eax + 0x20) = MEM16(eax + 0x20) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x13E0);
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x20) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E8301; /* jae: above or equal (unsigned >=) */

loc_001E82D3: ;
    ecx = ZX16(MEM16(ecx + 0x20));
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E82EDu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001E82ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001E82F5;

loc_001E82F2: ;
    edi = MEM32(ebp + -12);

loc_001E82F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8301; /* je: equal / zero */

loc_001E82F9: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8301u); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E8301: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E8306: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E830B
 * Original: 0x001E830B - 0x001E85F8 (749 bytes, 257 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E830B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E830B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x230));
    esp = esp - 0x230;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001E832C; /* jne: not equal / not zero */

loc_001E8322: ;
    eax = 0x80150005u;
    goto loc_001E85F1;

loc_001E832C: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x10E5));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001E8360; /* jbe: below or equal (unsigned <=) */

loc_001E8345: ;
    edx = eax * 4 + 4;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x10E7));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(LO16(edx))) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -16) = eax;
    goto loc_001E8368;

loc_001E8360: ;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = edi;
    eax = edi;

loc_001E8368: ;
    ebx = MEM32(ebp + 8);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -36;
    PUSH32(esp, edx);
    ecx = ZX16(LO16(eax));
    eax = MEM32(ebp + 0x10);
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ecx + eax * 8 + 0x4E;
    PUSH32(esp, 0x1E6D8A);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    eax = eax * 4 + 0x126;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + -40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E83A6u); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E83A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E85DD; /* jl: less (signed <) */

loc_001E83B1: ;
    esi = MEM32(esi + 0xD0);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = ebp + -48;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + -12);
    ecx = esi;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E83DAu); RECOMP_ABI_CALL(0x001E7D10u, sub_001E7D10); /* call 0x001E7D10 */

loc_001E83DA: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -48))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + -44)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax + 0x174) = ecx;
    MEM32(eax + 0x178) = edx;
    eax = ebx + ebx * 8;
    ecx = MEM32(esi + eax * 8 + 0x13A8);
    ebx = MEM32(ebp + -36);
    MEM32(ebx + 0x20) = ecx;
    ecx = esi;
    eax = MEM32(ecx + eax * 8 + 0x13AC);
    esi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(esi + 8);
    MEM32(ebx + 0x2C) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(ecx + 0x1858);
    MEM32(ebx + 0x34) = eax;
    SET_LO16(eax, MEM16(esi + 0x20));
    MEM16(ebx + 0x38) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebx + 0x3A) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebx + 0x3C) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x10E4));
    MEM8(ebx + 0x3E) = LO8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x3F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E845Fu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001E845F: ;
    ecx = MEM32(ebp + -8);
    eax = ecx + eax + 0xC;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    eax = ebx + 0x3F;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8472u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001E8472: ;
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ebx + 0x4E;
    if (CMP_BE(_fa, _fb)) goto loc_001E849C; /* jbe: below or equal (unsigned <=) */

loc_001E8484: ;
    MEM32(ebp + 0x10) = edi;

loc_001E8487: ;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E8487; /* jne: not equal / not zero */

loc_001E849C: ;
    edi = esi + 0x10E5;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E84E4; /* jbe: below or equal (unsigned <=) */

loc_001E84A7: ;
    ecx = ZX16(MEM16(ebp + -20));
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
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
    edx = MEM32(ebp + 0xC);
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
    ecx = ZX16(MEM16(edx + 0x10E7));
    esi = MEM32(edx + 0x18);
    edx = ZX16(MEM16(ebp + -20));
    edi = edx + eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    esi = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E84E4: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E858A; /* jbe: below or equal (unsigned <=) */

loc_001E84F1: ;
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ebx = eax + esi + -232;
    eax = ZX16(MEM16(ebx + 4));
    edi = ZX16(MEM16(esi + eax * 4 + 0x10EB));
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(esi + 0x18))) >> 32) & 1);
    edi = edi + MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    eax = ebp + -560;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8529u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E8529: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x20));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8539u); RECOMP_ABI_CALL(0x001E5927u, sub_001E5927); /* call 0x001E5927 */

loc_001E8539: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -560;
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_001E8565; /* jne: not equal / not zero */

loc_001E854E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8563u); RECOMP_ABI_CALL(0x0020E1B3u, sub_0020E1B3); /* call 0x0020E1B3 */

loc_001E8563: ;
    goto loc_001E857A;

loc_001E8565: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E857Au); RECOMP_ABI_CALL(0x0020E4A4u, sub_0020E4A4); /* call 0x0020E4A4 */

loc_001E857A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E85DD; /* jl: less (signed <) */

loc_001E8581: ;
    eax = MEM32(ebp + -4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001E85CC;

loc_001E858A: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ecx = MEM32(ebp + -12);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -40));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(ebp + -24));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E85BAu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E85BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E85DD; /* jl: less (signed <) */

loc_001E85C1: ;
    MEM32(edi + 0x16C) = ebx;
    MEM32(edi + 0x10) = ebx;
    eax = edi;

loc_001E85CC: ;
    ecx = MEM32(ebp + 0x1C);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x170) = esi;
    MEM32(esi) = eax;
    MEM32(ecx) = eax;

loc_001E85DD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E85EE; /* je: equal / zero */

loc_001E85E3: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E85EEu); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E85EE: ;
    eax = MEM32(ebp + -8);

loc_001E85F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E85F8
 * Original: 0x001E85F8 - 0x001E873E (326 bytes, 116 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E85F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E85F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E8612; /* jne: not equal / not zero */

loc_001E8608: ;
    eax = 0x80150005u;
    goto loc_001E8739;

loc_001E8612: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edx = ebp + -16;
    PUSH32(esp, edx);
    edx = ebp + 0x14;
    PUSH32(esp, edx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(eax) = ebx;
    PUSH32(esp, 0x1E7151);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + esi * 2;
    eax = eax * 4 + 0x33;
    edi = 0x100;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8652u); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E8652: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E8724; /* jl: less (signed <) */

loc_001E865D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = eax + eax * 8;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + ecx * 8 + 0x13A8);
    eax = MEM32(ebp + 0x14);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(edx + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x30) = LO16(ebx);
    MEM8(eax + 0x32) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_001E86CD; /* jbe: below or equal (unsigned <=) */

loc_001E8691: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;

loc_001E869A: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E86C5; /* jl: less (signed <) */

loc_001E869F: ;
    edx = ZX16(MEM16(eax + 0x30));
    esi = MEM32(ecx + -16);
    edx = edx + edx * 2;
    MEM32(eax + edx * 4 + 0x33) = esi;
    esi = MEM32(ecx + -12);
    MEM32(eax + edx * 4 + 0x37) = esi;
    edx = ZX16(MEM16(eax + 0x30));
    esi = MEM32(ecx);
    edx = edx + edx * 2;
    MEM32(eax + edx * 4 + 0x3B) = esi;
    MEM16(eax + 0x30) = MEM16(eax + 0x30) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001E86C5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E869A; /* jne: not equal / not zero */

loc_001E86CD: ;
    _fa = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x30), LO16(ebx) (16-bit) */
    esi = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001E86DF; /* jne: not equal / not zero */

loc_001E86D6: ;
    MEM32(ebp + 0xC) = 0x80155A04u;
    goto loc_001E8727;

loc_001E86DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8708u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E8708: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E8727; /* jl: less (signed <) */

loc_001E870F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E8727;

loc_001E8724: ;
    esi = MEM32(ebp + -4);

loc_001E8727: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8734; /* je: equal / zero */

loc_001E872B: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8734u); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E8734: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E8739: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E873E
 * Original: 0x001E873E - 0x001E8760 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E873E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E873E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8760(); return; } /* je: equal / zero */

loc_001E875B: ;
    MEM32(ebp + -4) = esi;
    g_seh_ebp = ebp; sub_001E8763(); return; /* tail jmp 0x001E8763 */

}

/**
 * sub_001E8760
 * Original: 0x001E8760 - 0x001E8763 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8760: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001E8763(); return; /* fallthrough 0x001E8763 */

}

/**
 * sub_001E8763
 * Original: 0x001E8763 - 0x001E883E (219 bytes, 76 insns)
 * Category: game_network
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8763(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8763: ;
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x3C));
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 0x2C));
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x94)) >> 32) & 1);
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E8795u); RECOMP_ABI_CALL(0x001E6ADBu, sub_001E6ADB); /* call 0x001E6ADB */

loc_001E8795: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E8834; /* jl: less (signed <) */

loc_001E87A0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(ebp + 0x3C);
    if (CMP_EQ(_fa, _fb)) goto loc_001E87D3; /* je: equal / zero */

loc_001E87A8: ;
    MEM32(esi) = ebx;
    MEM32(ebx + 0x170) = esi;
    esi = MEM32(ebx + 0x14);
    ecx = MEM32(ebp + -8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fb = (uint32_t)(MEM32(edi + 0xD0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(edi + 0xD0))) >> 32) & 1);
    esi = esi + MEM32(edi + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -16;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x001E87D3u); RECOMP_ABI_CALL(0x001E7D10u, sub_001E7D10); /* call 0x001E7D10 */

loc_001E87D3: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -12)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(ebx + 0x174) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + 0x178) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = eax + 8;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001E8800: ;
    SET_LO8(ecx, MEM8(edi));
    MEM8(esi + edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001E8800; /* jne: not equal / not zero */

loc_001E880A: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x88) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x8C) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax + 0x90) = ecx;
    ecx = MEM32(ebp + 0x34);
    MEM32(ecx) = ebx;
    ecx = MEM32(ebp + 0x38);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x94)) >> 32) & 1);
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_001E8834: ;
    eax = MEM32(ebp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_001E883E
 * Original: 0x001E883E - 0x001E88FD (191 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E883E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E883E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 0x14));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x158;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1E7A73);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xF);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8880u); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E8880: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E88FD(); return; } /* jl: less (signed <) */

loc_001E8887: ;
    eax = MEM32(ebp + 0x20);
    ecx = esi + esi * 8;
    edx = MEM32(ebx + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ebx + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax + 0x30) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = ebx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E88E1u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E88E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E8900(); return; } /* jl: less (signed <) */

loc_001E88E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E8900(); return; /* tail jmp 0x001E8900 */

}

/**
 * sub_001E88FD
 * Original: 0x001E88FD - 0x001E8900 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E88FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E88FD: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001E8900(); return; /* fallthrough 0x001E8900 */

}

/**
 * sub_001E8900
 * Original: 0x001E8900 - 0x001E8916 (22 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8900: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E890C; /* je: equal / zero */

loc_001E8904: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001E890Cu); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E890C: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001E8916
 * Original: 0x001E8916 - 0x001E8D7B (1125 bytes, 357 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8916(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8916: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ebx;
    if ((_fa == 0)) goto loc_001E893F; /* je: equal / zero */

loc_001E8930: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E8D71; /* jne: not equal / not zero */

loc_001E8937: ;
    eax = MEM32(esi + 0x28);
    goto loc_001E8D74;

loc_001E893F: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E894Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E894A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8D74; /* je: equal / zero */

loc_001E8952: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E8D65; /* jl: less (signed <) */

loc_001E8958: ;
    PUSH32(esp, 0);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8976u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E8976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8D65; /* jl: less (signed <) */

loc_001E897E: ;
    ecx = MEM32(ebp + -40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8D5B; /* je: equal / zero */

loc_001E8989: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8D5B; /* jne: not equal / not zero */

loc_001E8996: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0x26 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8D5B; /* jb: below (unsigned <) */

loc_001E89A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x66 (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E8D5B; /* jne: not equal / not zero */

loc_001E89AC: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8D65; /* jl: less (signed <) */

loc_001E89B7: ;
    eax = ecx + 0x24;
    MEM32(ebp + -24) = eax;
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x26;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8D5B; /* jb: below (unsigned <) */

loc_001E89CF: ;
    PUSH32(esp, 0x7D);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7D);
    edi = ebp + -568;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -1068;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E89F0u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001E89F0: ;
    eax = MEM32(esi + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 8;
    ebx = MEM32(ebx + eax * 8 + 0x13E0);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x26;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E8ADF; /* jbe: below or equal (unsigned <=) */

loc_001E8A1A: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8A25u); RECOMP_ABI_CALL(0x001E71EEu, sub_001E71EE); /* call 0x001E71EE */

loc_001E8A25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8D5B; /* je: equal / zero */

loc_001E8A2D: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8A39u); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E8A39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8AC8; /* jne: not equal / not zero */

loc_001E8A41: ;
    SET_LO16(edi, MEM16(ebx + 0x20));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E8A73; /* jbe: below or equal (unsigned <=) */

loc_001E8A4C: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0x14);
    eax = ebx + 0x38;

loc_001E8A55: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A65; /* je: equal / zero */

loc_001E8A59: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebx + 0x20) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8A55; /* jb: below (unsigned <) */

loc_001E8A63: ;
    goto loc_001E8A73;

loc_001E8A65: ;
    eax = ZX16(LO16(ecx));
    MEM32(ebp + eax * 4 + -568) = 1;

loc_001E8A73: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8AC8; /* jb: below (unsigned <) */

loc_001E8A78: ;
    eax = ZX16(MEM16(ebp + -4));
    MEM32(ebp + eax * 4 + -1068) = 1;
    eax = MEM32(ebx + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E8AC8; /* jbe: below or equal (unsigned <=) */

loc_001E8A90: ;
    edx = MEM32(ebp + -8);
    edi = MEM32(edx + 0x14);
    edx = ebx + 0x10;

loc_001E8A99: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8AA8; /* je: equal / zero */

loc_001E8A9D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8A99; /* jb: below (unsigned <) */

loc_001E8AA6: ;
    goto loc_001E8AC8;

loc_001E8AA8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebx + 0xC) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001E8AC8; /* jae: above or equal (unsigned >=) */

loc_001E8AB0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebx + ecx * 4 + 0x14;
    PUSH32(esp, eax);
    eax = ebx + ecx * 4 + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8AC5u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001E8AC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E8AC8: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x34;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -24);
    SET_LO16(ecx, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8A1A; /* jb: below (unsigned <) */

loc_001E8ADF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x20), 0 (16-bit) */
    edi = ebx + 0x24;
    if (CMP_BE(_fa, _fb)) goto loc_001E8B3E; /* jbe: below or equal (unsigned <=) */

loc_001E8AED: ;
    eax = ZX16(MEM16(ebp + -4));
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -568)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -568), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8B2E; /* jne: not equal / not zero */

loc_001E8AFB: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8B11; /* je: equal / zero */

loc_001E8B05: ;
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x18) = eax;
    MEM16(ebx + 0x22) = MEM16(ebx + 0x22) - 1;
    _fa = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_001E8B11: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8B1Eu); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E8B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8B2E; /* je: equal / zero */

loc_001E8B22: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8B2Eu); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E8B2E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx + 0x20) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8AED; /* jb: below (unsigned <) */

loc_001E8B3E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x24;
    MEM16(ebx + 0x20) = LO16(eax);
    MEM16(ebx + 0x22) = LO16(eax);
    ecx = 0x659;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001E8D54; /* jbe: below or equal (unsigned <=) */

loc_001E8B71: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8B7Du); RECOMP_ABI_CALL(0x001E596Eu, sub_001E596E); /* call 0x001E596E */

loc_001E8B7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8C74; /* jne: not equal / not zero */

loc_001E8B85: ;
    eax = ZX16(MEM16(ebp + -4));
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -1068)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -1068), 0 (32-bit) */
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + -16);
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
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
    esi = MEM32(ebp + -16);
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C60; /* je: equal / zero */

loc_001E8BA5: ;
    edi = MEM32(ebp + -12);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8BB4u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E8BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C60; /* je: equal / zero */

loc_001E8BBC: ;
    MEM32(ebp + -20) = 1;
    _fb = (uint32_t)(0x1504) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1504;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = 8;

loc_001E8BD0: ;
    edx = MEM32(edi + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C31; /* je: equal / zero */

loc_001E8BD7: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8BE6; /* je: equal / zero */

loc_001E8BDE: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8C31; /* jne: not equal / not zero */

loc_001E8BE6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x14));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001E8BF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001E8BF6u); } /* indirect call */
    }

loc_001E8BF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C31; /* je: equal / zero */

loc_001E8BFC: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8C13; /* jne: not equal / not zero */

loc_001E8C03: ;
    eax = MEM32(esi + 0x14);
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0x22));
    MEM16(ebp + -36) = LO16(eax);
    goto loc_001E8C2D;

loc_001E8C13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C2D; /* je: equal / zero */

loc_001E8C18: ;
    eax = MEM32(esi + 0x18);
    ecx = 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8C2D; /* jne: not equal / not zero */

loc_001E8C24: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x18) = eax;
    MEM16(ebx + 0x22) = MEM16(ebx + 0x22) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001E8C2D: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E8C31: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E8BD0; /* jne: not equal / not zero */

loc_001E8C39: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8C48u); RECOMP_ABI_CALL(0x0020F7C6u, sub_0020F7C6); /* call 0x0020F7C6 */

loc_001E8C48: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8C60; /* je: equal / zero */

loc_001E8C4E: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + 0x14));
    _fb = (uint32_t)(0x1580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1580;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8C60u); RECOMP_ABI_CALL(0x002052F8u, sub_002052F8); /* call 0x002052F8 */

loc_001E8C60: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + 0x20) = MEM16(ebx + 0x20) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x20), 0x7D (16-bit) */
    MEM32(ebp + -16) = esi;
    esi = MEM32(ebp + 8);
    if (CMP_AE(_fa, _fb)) goto loc_001E8C8B; /* jae: above or equal (unsigned >=) */

loc_001E8C74: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x34;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -24);
    SET_LO16(ecx, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8B71; /* jb: below (unsigned <) */

loc_001E8C8B: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8D54; /* je: equal / zero */

loc_001E8C95: ;
    ecx = MEM32(ebp + -12);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8CA1u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001E8CA1: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x16C) = MEM32(esi + 0x16C) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x16C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -12);
    MEM32(esi) = 0x1E7A73;
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x17C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x14C8;
    MEM32(esi) = 0xF;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8CE5u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001E8CE5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    MEM32(esi + 0x24) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 0x28) = ecx;
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, MEM32(eax + 8));
    eax = ZX16(MEM16(ebp + -36));
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x158;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8D3Fu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E8D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8D62; /* jl: less (signed <) */

loc_001E8D43: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x16C) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E8D74;

loc_001E8D54: ;
    eax = 0x1500F0;
    goto loc_001E8D65;

loc_001E8D5B: ;
    eax = 0x8015000Au;
    goto loc_001E8D65;

loc_001E8D62: ;
    esi = MEM32(ebp + 8);

loc_001E8D65: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_001E8D74;

loc_001E8D71: ;
    eax = MEM32(ebp + 8);

loc_001E8D74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8D7B
 * Original: 0x001E8D7B - 0x001E8F2A (431 bytes, 137 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8D7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8D7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) goto loc_001E8D9F; /* je: equal / zero */

loc_001E8D90: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E8F20; /* jne: not equal / not zero */

loc_001E8D97: ;
    eax = MEM32(ebx + 0x28);
    goto loc_001E8F23;

loc_001E8D9F: ;
    ecx = MEM32(ebp + -4);
    edi = ebx + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8DABu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E8DAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8F23; /* je: equal / zero */

loc_001E8DB3: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E8F14; /* jl: less (signed <) */

loc_001E8DB9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8DD8u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E8DD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8F14; /* jl: less (signed <) */

loc_001E8DE0: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8F0F; /* je: equal / zero */

loc_001E8DEB: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8F0F; /* jne: not equal / not zero */

loc_001E8DF8: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8F0F; /* jb: below (unsigned <) */

loc_001E8E02: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x67 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8F0F; /* jne: not equal / not zero */

loc_001E8E0B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8F14; /* jl: less (signed <) */

loc_001E8E16: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8E25u); RECOMP_ABI_CALL(0x001E71EEu, sub_001E71EE); /* call 0x001E71EE */

loc_001E8E25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8F0F; /* je: equal / zero */

loc_001E8E2D: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8E3Bu); RECOMP_ABI_CALL(0x001E7B6Au, sub_001E7B6A); /* call 0x001E7B6A */

loc_001E8E3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8F08; /* je: equal / zero */

loc_001E8E43: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 0x46));
    PUSH32(esp, edi);
    MEM16(ebp + -20) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8E5Au); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001E8E5A: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebx + 0x16C) = MEM32(ebx + 0x16C) & eax;
    _fa = (uint32_t)(MEM32(ebx + 0x16C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -4);
    MEM32(ebx) = 0x1E7A73;
    esi = ebx + 0x17C;
    eax = edi + 0x14C8;
    MEM32(esi) = 0xF;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8E9Du); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001E8E9D: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    ecx = MEM32(edi + eax * 8 + 0x13A8);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + eax * 8 + 0x13AC);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = ebx + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, MEM32(ebx + 8));
    edx = esi + 0x34;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -20));
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x158;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E8EF6u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E8EF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8F14; /* jl: less (signed <) */

loc_001E8EFA: ;
    MEM32(ebx + 0x16C) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E8F23;

loc_001E8F08: ;
    eax = 0x1500F0;
    goto loc_001E8F14;

loc_001E8F0F: ;
    eax = 0x8015000Au;

loc_001E8F14: ;
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x10) = 2;
    goto loc_001E8F23;

loc_001E8F20: ;
    eax = MEM32(ebp + 8);

loc_001E8F23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8F2A
 * Original: 0x001E8F2A - 0x001E8F3A (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8F2A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E8D7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x1E8D7B (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8F3A(); return; } /* je: equal / zero */

loc_001E8F36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E8F4B(); return; /* tail jmp 0x001E8F4B */

}

/**
 * sub_001E8F3A
 * Original: 0x001E8F3A - 0x001E8F4B (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8F3A: ;
    eax = MEM32(eax + 0x1A4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;

    g_seh_ebp = ebp; sub_001E8F4B(); return; /* fallthrough 0x001E8F4B */

}

/**
 * sub_001E8F4B
 * Original: 0x001E8F4B - 0x001E8F4E (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F4B(void)
{

loc_001E8F4B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E8F4E
 * Original: 0x001E8F4E - 0x001E8F59 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8F4E: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E7E0A(); return; /* tail jmp 0x001E7E0A */

}

/**
 * sub_001E8F64
 * Original: 0x001E8F64 - 0x001E8F73 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8F64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E8F64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E8017(); return; /* tail jmp 0x001E8017 */

}

/**
 * sub_001E8F7E
 * Original: 0x001E8F7E - 0x001E8F8D (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8F7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E8F7E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E830B(); return; /* tail jmp 0x001E830B */

}

/**
 * sub_001E8F8D
 * Original: 0x001E8F8D - 0x001E8F9C (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8F8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E8F8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E85F8(); return; /* tail jmp 0x001E85F8 */

}

/**
 * sub_001E8F9C
 * Original: 0x001E8F9C - 0x001E8FAE (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E8F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8F9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8FAE(); return; } /* jne: not equal / not zero */

loc_001E8FA7: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E8FF0(); return; /* tail jmp 0x001E8FF0 */

}

/**
 * sub_001E8FAE
 * Original: 0x001E8FAE - 0x001E8FE8 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8FAE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    eax = MEM32(ecx + eax * 8 + 0x13E0);
    esi = eax + 0x24;
    SET_LO16(eax, MEM16(eax + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8FE8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E8FD4: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8FF4(); return; } /* je: equal / zero */

loc_001E8FDC: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x1C), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E8FD4; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001E8FE8(); return; /* fallthrough 0x001E8FE8 */

}

/**
 * sub_001E8FE8
 * Original: 0x001E8FE8 - 0x001E8FF0 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8FE8: ;
    eax = 0x80155A01u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E8FF0(); return; /* fallthrough 0x001E8FF0 */

}

/**
 * sub_001E8FED
 * Original: 0x001E8FED - 0x001E8FF0 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8FED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E8FF0(); return; /* fallthrough 0x001E8FF0 */

}

/**
 * sub_001E8FF0
 * Original: 0x001E8FF0 - 0x001E8FF4 (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8FF0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E8FF4
 * Original: 0x001E8FF4 - 0x001E9012 (30 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8FF4: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E8FFEu); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E8FFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E8FE8(); return; } /* je: equal / zero */

loc_001E9002: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9012(); return; } /* jne: not equal / not zero */

loc_001E900B: ;
    eax = 0x80155A05u;
    g_seh_ebp = ebp; sub_001E8FED(); return; /* tail jmp 0x001E8FED */

}

/**
 * sub_001E9012
 * Original: 0x001E9012 - 0x001E903F (45 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9012(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9012: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001E902Cu); RECOMP_ABI_CALL(0x001E883Eu, sub_001E883E); /* call 0x001E883E */

loc_001E902C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E8FED(); return; } /* jl: less (signed <) */

loc_001E9030: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx | MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ~ebx;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = ecx;
    g_seh_ebp = ebp; sub_001E8FED(); return; /* tail jmp 0x001E8FED */

}

/**
 * sub_001E903F
 * Original: 0x001E903F - 0x001E90ED (174 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E903F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E903F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = 0x1A8A;
    PUSH32(esp, 0x1E8916);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E907Cu); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E907C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E90ED(); return; } /* jl: less (signed <) */

loc_001E9083: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    MEM32(eax + 4) = 8;
    PUSH32(esp, 0);
    ecx = esi + esi * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = edi;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E90D1u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E90D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E90F0(); return; } /* jl: less (signed <) */

loc_001E90D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E90F0(); return; /* tail jmp 0x001E90F0 */

}

/**
 * sub_001E90ED
 * Original: 0x001E90ED - 0x001E90F0 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E90ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E90ED: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001E90F0(); return; /* fallthrough 0x001E90F0 */

}

/**
 * sub_001E90F0
 * Original: 0x001E90F0 - 0x001E9106 (22 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E90F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E90F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E90FC; /* je: equal / zero */

loc_001E90F4: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001E90FCu); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E90FC: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E9106
 * Original: 0x001E9106 - 0x001E91BA (180 bytes, 69 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9106(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9106: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = 0x1158;
    PUSH32(esp, 0x1E8D7B);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9143u); RECOMP_ABI_CALL(0x001E7A00u, sub_001E7A00); /* call 0x001E7A00 */

loc_001E9143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E91BA(); return; } /* jl: less (signed <) */

loc_001E914A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0xC;
    PUSH32(esp, 0);
    ecx = esi + esi * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = edi;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E919Eu); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E919E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E91BD(); return; } /* jl: less (signed <) */

loc_001E91A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E91BD(); return; /* tail jmp 0x001E91BD */

}

/**
 * sub_001E91BA
 * Original: 0x001E91BA - 0x001E91BD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E91BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E91BA: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001E91BD(); return; /* fallthrough 0x001E91BD */

}

/**
 * sub_001E91BD
 * Original: 0x001E91BD - 0x001E91D3 (22 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E91BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E91BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E91C9; /* je: equal / zero */

loc_001E91C1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001E91C9u); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E91C9: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E91D3
 * Original: 0x001E91D3 - 0x001E91E2 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E91D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E91D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E8F9C(); return; /* tail jmp 0x001E8F9C */

}

/**
 * sub_001E91E2
 * Original: 0x001E91E2 - 0x001E922E (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E91E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E91E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x157C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x157C), edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E9222; /* je: equal / zero */

loc_001E9201: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x14FC;

loc_001E9209: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9216; /* jne: not equal / not zero */

loc_001E920D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9209; /* jb: below (unsigned <) */

loc_001E9216: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9222; /* jb: below (unsigned <) */

loc_001E921B: ;
    MEM32(ebp + -24) = 1;

loc_001E9222: ;
    ebx = ecx + 0x13B4;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -32) = ebx;

    g_seh_ebp = ebp; sub_001E922E(); return; /* fallthrough 0x001E922E */

}

/**
 * sub_001E922E
 * Original: 0x001E922E - 0x001E9265 (55 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E922E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E922E: ;
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945F(); return; } /* je: equal / zero */

loc_001E9239: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E92D2(); return; } /* je: equal / zero */

loc_001E9249: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E9252u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E9252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E92CF(); return; } /* je: equal / zero */

loc_001E9256: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001E9260u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001E9260: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001E92B4(); return; /* tail jmp 0x001E92B4 */

}

/**
 * sub_001E9265
 * Original: 0x001E9265 - 0x001E92B4 (79 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9265(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9265: ;
    edi = MEM32(esi + 4);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edi + 0x1C;
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, MEM32(edi + 8));
    eax = edi + 0x17C;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    ecx = eax + 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA6774);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x001E92A4u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E92A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E92BC(); return; } /* jge: greater or equal (signed >=) */

loc_001E92A8: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E92B1u); RECOMP_ABI_CALL(0x001E6BB0u, sub_001E6BB0); /* call 0x001E6BB0 */

loc_001E92B1: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E92B4(); return; /* fallthrough 0x001E92B4 */

}

/**
 * sub_001E92B4
 * Original: 0x001E92B4 - 0x001E92BC (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E92B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E92B4: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9265(); return; } /* jne: not equal / not zero */

loc_001E92BA: ;
    g_seh_ebp = ebp; sub_001E92D2(); return; /* tail jmp 0x001E92D2 */

}

/**
 * sub_001E92BC
 * Original: 0x001E92BC - 0x001E92CF (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E92BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E92BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x16C) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(esi) = edi;
    MEM32(ebp + -20) = eax;
    g_seh_ebp = ebp; sub_001E92D2(); return; /* tail jmp 0x001E92D2 */

}

/**
 * sub_001E92CF
 * Original: 0x001E92CF - 0x001E92D2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E92CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E92CF: ;
    MEM32(ebp + -20) = edi;

    g_seh_ebp = ebp; sub_001E92D2(); return; /* fallthrough 0x001E92D2 */

}

/**
 * sub_001E92D2
 * Original: 0x001E92D2 - 0x001E932A (88 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E92D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E92D2: ;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 7);
    edi = ebp + -96;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    _fb = (uint32_t)(0x1580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1580;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001E9300u); RECOMP_ABI_CALL(0x002054BAu, sub_002054BA); /* call 0x002054BA */

loc_001E9300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945F(); return; } /* je: equal / zero */

loc_001E9308: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945C(); return; } /* ja: above (unsigned >) */

loc_001E9312: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945C(); return; } /* ja: above (unsigned >) */

loc_001E931C: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E940D(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001E932A(); return; /* fallthrough 0x001E932A */

}

/**
 * sub_001E932A
 * Original: 0x001E932A - 0x001E9359 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E932A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E932A: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    edi = esi + 0x24;
    MEM32(ebp + -36) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E93A8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E933F: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ebp + ecx * 4 + -64);

loc_001E9346: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9359(); return; } /* je: equal / zero */

loc_001E934B: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9346; /* jb: below (unsigned <) */

loc_001E9357: ;
    g_seh_ebp = ebp; sub_001E939E(); return; /* tail jmp 0x001E939E */

}

/**
 * sub_001E9359
 * Original: 0x001E9359 - 0x001E939E (69 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9359(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9359: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E9366u); RECOMP_ABI_CALL(0x001E79A0u, sub_001E79A0); /* call 0x001E79A0 */

loc_001E9366: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9376; /* je: equal / zero */

loc_001E936A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001E9376u); RECOMP_ABI_CALL(0x001E75CDu, sub_001E75CD); /* call 0x001E75CD */

loc_001E9376: ;
    MEM16(esi + 0x20) = MEM16(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(esi + 0x20));
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E939E(); return; } /* jae: above or equal (unsigned >=) */

loc_001E9384: ;
    ecx = ZX16(MEM16(ebp + -12));
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001E939Bu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001E939B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001E939E(); return; /* fallthrough 0x001E939E */

}

/**
 * sub_001E939E
 * Original: 0x001E939E - 0x001E93A8 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E939E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E939E: ;
    SET_LO16(eax, MEM16(ebp + -12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -36) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E93F6(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001E93A8(); return; /* fallthrough 0x001E93A8 */

}

/**
 * sub_001E93A8
 * Original: 0x001E93A8 - 0x001E93E7 (63 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E93A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E93A8: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E93C7; /* je: equal / zero */

loc_001E93B0: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + ecx * 4 + -64));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E93C3u); RECOMP_ABI_CALL(0x001E8F2Au, sub_001E8F2A); /* call 0x001E8F2A */

loc_001E93C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9407(); return; } /* jne: not equal / not zero */

loc_001E93C7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E93ED(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E93CE: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + eax * 4 + -64);
    eax = esi + 0x10;

loc_001E93D8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E93E7(); return; } /* je: equal / zero */

loc_001E93DC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E93D8; /* jb: below (unsigned <) */

loc_001E93E5: ;
    g_seh_ebp = ebp; sub_001E93ED(); return; /* tail jmp 0x001E93ED */

}

/**
 * sub_001E93E7
 * Original: 0x001E93E7 - 0x001E93ED (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E93E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E93E7: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -96) = edi;

    g_seh_ebp = ebp; sub_001E93ED(); return; /* fallthrough 0x001E93ED */

}

/**
 * sub_001E93ED
 * Original: 0x001E93ED - 0x001E93F6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E93ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E93ED: ;
    eax = ZX16(MEM16(ebp + -12));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E940D(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001E93F6(); return; /* fallthrough 0x001E93F6 */

}

/**
 * sub_001E93F6
 * Original: 0x001E93F6 - 0x001E9407 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E93F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E93F6: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -68) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E932A(); return; } /* jb: below (unsigned <) */

loc_001E9405: ;
    g_seh_ebp = ebp; sub_001E940D(); return; /* tail jmp 0x001E940D */

}

/**
 * sub_001E9407
 * Original: 0x001E9407 - 0x001E940D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9407(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9407: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -96) = edi;

    g_seh_ebp = ebp; sub_001E940D(); return; /* fallthrough 0x001E940D */

}

/**
 * sub_001E940D
 * Original: 0x001E940D - 0x001E9425 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E940D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E940D: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945F(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E9413: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945C(); return; } /* ja: above (unsigned >) */

loc_001E941E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945F(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001E9425(); return; /* fallthrough 0x001E9425 */

}

/**
 * sub_001E9425
 * Original: 0x001E9425 - 0x001E943E (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9425(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9425: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9446(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E942C: ;
    edx = MEM32(ebp + eax * 4 + -92);

loc_001E9430: ;
    _fa = (uint32_t)(MEM32(ebp + ecx * 4 + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + ecx * 4 + -64), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E943E(); return; } /* je: equal / zero */

loc_001E9436: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -68) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9430; /* jb: below (unsigned <) */

loc_001E943C: ;
    g_seh_ebp = ebp; sub_001E9441(); return; /* tail jmp 0x001E9441 */

}

/**
 * sub_001E943E
 * Original: 0x001E943E - 0x001E9441 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E943E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E943E: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E9441(); return; /* fallthrough 0x001E9441 */

}

/**
 * sub_001E9441
 * Original: 0x001E9441 - 0x001E9446 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9441(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9441: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -68) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E945F(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001E9446(); return; /* fallthrough 0x001E9446 */

}

/**
 * sub_001E9446
 * Original: 0x001E9446 - 0x001E945C (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9446: ;
    edx = MEM32(ebp + eax * 4 + -92);
    ecx = MEM32(esi + 0xC);
    MEM32(esi + ecx * 4 + 0x10) = edx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -96) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9425(); return; } /* jb: below (unsigned <) */

loc_001E945A: ;
    g_seh_ebp = ebp; sub_001E945F(); return; /* tail jmp 0x001E945F */

}

/**
 * sub_001E945C
 * Original: 0x001E945C - 0x001E945F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E945C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E945C: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001E945F(); return; /* fallthrough 0x001E945F */

}

/**
 * sub_001E945F
 * Original: 0x001E945F - 0x001E94C4 (101 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E945F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E945F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001E922E(); return; } /* jb: below (unsigned <) */

loc_001E946F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* je: equal / zero */

loc_001E947A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* jne: not equal / not zero */

loc_001E9483: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* jne: not equal / not zero */

loc_001E948C: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x001E9499u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001E9499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E94C4(); return; } /* jge: greater or equal (signed >=) */

loc_001E949D: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, 4);
    ecx = esi + 0x1584;
    POP32(esp, edx);

loc_001E94A9: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E94B3; /* je: equal / zero */

loc_001E94AE: ;
    MEM8(eax) = MEM8(eax) & 0x7F;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ecx) = edi;

loc_001E94B3: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E94A9; /* jne: not equal / not zero */

loc_001E94BF: ;
    g_seh_ebp = ebp; sub_001E95CC(); return; /* tail jmp 0x001E95CC */

}

/**
 * sub_001E94C4
 * Original: 0x001E94C4 - 0x001E95CC (264 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E94C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E94C4: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(0x1584) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1584;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;

loc_001E94D6: ;
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E95B5; /* je: equal / zero */

loc_001E94E1: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E950A; /* je: equal / zero */

loc_001E94E7: ;
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001E9502u); RECOMP_ABI_CALL(0x001E903Fu, sub_001E903F); /* call 0x001E903F */

loc_001E9502: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* je: equal / zero */

loc_001E950A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E9568; /* jbe: below or equal (unsigned <=) */

loc_001E9512: ;
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x20), LO16(eax) (16-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001E9568; /* jbe: below or equal (unsigned <=) */

loc_001E951B: ;
    edi = esi + 0x3C;

loc_001E951E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9558; /* je: equal / zero */

loc_001E9527: ;
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0xA));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 1);
    PUSH32(esp, 0x001E9554u); RECOMP_ABI_CALL(0x001E883Eu, sub_001E883E); /* call 0x001E883E */

loc_001E9554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* je: equal / zero */

loc_001E9558: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x20) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E951E; /* jb: below (unsigned <) */

loc_001E9568: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001E957B; /* jns: not sign (positive) */

loc_001E956E: ;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -24);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E957B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E95B5; /* jbe: below or equal (unsigned <=) */

loc_001E9582: ;
    ecx = esi + 0x10;
    edi = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    if ((_fa == 0)) goto loc_001E959E; /* je: equal / zero */

loc_001E958D: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001E959Bu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001E959B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001E959E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001E95B1u); RECOMP_ABI_CALL(0x001E9106u, sub_001E9106); /* call 0x001E9106 */

loc_001E95B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95CC(); return; } /* je: equal / zero */

loc_001E95B5: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0xB0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E94D6; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001E95CC(); return; /* fallthrough 0x001E95CC */

}

/**
 * sub_001E95CC
 * Original: 0x001E95CC - 0x001E95D3 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E95CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E95CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
