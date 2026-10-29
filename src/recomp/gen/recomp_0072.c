/**
 * DOAU1 - Recompiled code chunk 72
 * Functions: 250 (0x001E95D3 - 0x001EE273)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001E95D3
 * Original: 0x001E95D3 - 0x001E95E4 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E95D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E95D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95E4(); return; } /* jne: not equal / not zero */

loc_001E95DD: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E9641(); return; /* tail jmp 0x001E9641 */

}

/**
 * sub_001E95E4
 * Original: 0x001E95E4 - 0x001E95F4 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E95E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E95E4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001E95F4(); return; } /* je: equal / zero */

loc_001E95ED: ;
    eax = 0x80150009u;
    g_seh_ebp = ebp; sub_001E9641(); return; /* tail jmp 0x001E9641 */

}

/**
 * sub_001E95F4
 * Original: 0x001E95F4 - 0x001E9641 (77 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E95F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E95F4: ;
    PUSH32(esp, 0);
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E9613u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E9613: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E9641(); return; } /* jl: less (signed <) */

loc_001E9617: ;
    edx = MEM32(ebp + 8);
    ecx = ZX16(MEM16(edx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = edx + 2;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
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
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9641(); return; } /* jne: not equal / not zero */

loc_001E963F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E9641(); return; /* fallthrough 0x001E9641 */

}

/**
 * sub_001E9641
 * Original: 0x001E9641 - 0x001E9645 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9641(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9641: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E9645
 * Original: 0x001E9645 - 0x001E9761 (284 bytes, 104 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9645: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E965C; /* jne: not equal / not zero */

loc_001E9652: ;
    eax = 0x80150005u;
    goto loc_001E975C;

loc_001E965C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E9674; /* je: equal / zero */

loc_001E9668: ;
    MEM32(ebp + 8) = 0x80150009u;
    goto loc_001E9759;

loc_001E9674: ;
    PUSH32(esp, ebx);
    edx = ebp + -20;
    PUSH32(esp, edx);
    edx = ebp + -32;
    PUSH32(esp, edx);
    edx = ebp + -40;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9692u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E9692: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9759; /* jl: less (signed <) */

loc_001E969D: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x10);
    ecx = eax;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(ebx) (16-bit) */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001E9746; /* jbe: below or equal (unsigned <=) */

loc_001E96C5: ;
    ebx = 0xFDE9;

loc_001E96CA: ;
    SET_LO16(ecx, MEM16(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001E970F; /* jbe: below or equal (unsigned <=) */

loc_001E96D7: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_001E96E5; /* jbe: below or equal (unsigned <=) */

loc_001E96E2: ;
    PUSH32(esp, edi);
    goto loc_001E96ED;

loc_001E96E5: ;
    MEM32(ebp + 8) = 0x80150001u;
    PUSH32(esp, edx);

loc_001E96ED: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E96F6u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001E96F6: ;
    edx = MEM32(ebp + 0x14);
    ecx = eax + eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ebp + 0xC));
    MEM32(edx + eax * 4) = edi;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001E972A;

loc_001E970F: ;
    ecx = ZX16(MEM16(ebp + 0xC));
    edx = MEM32(ebp + 0x14);
    MEM32(edx + ecx * 4) = MEM32(edx + ecx * 4) & 0;
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80150001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80150001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E972A; /* je: equal / zero */

loc_001E9723: ;
    MEM32(ebp + 8) = 1;

loc_001E972A: ;
    ecx = MEM32(ebp + -16);
    ecx = ZX16(MEM16(ecx));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(ebp + 0xC));
    eax = eax + ecx + 2;
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E96CA; /* jb: below (unsigned <) */

loc_001E9746: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    SET_LO16(eax, MEM16(ecx));
    ecx = MEM32(ebp + 0x18);
    POP32(esp, edi);
    MEM16(ecx) = LO16(eax);
    POP32(esp, esi);

loc_001E9759: ;
    eax = MEM32(ebp + 8);

loc_001E975C: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E9761
 * Original: 0x001E9761 - 0x001E9794 (51 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9761(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9761: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 0x160;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001E9781; /* je: equal / zero */

loc_001E9775: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E977Eu); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001E977E: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E9781: ;
    PUSH32(esp, 0xA7);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001E978Eu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E978E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9794
 * Original: 0x001E9794 - 0x001E986B (215 bytes, 78 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9794: ;
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
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fa == 0)) goto loc_001E97BF; /* je: equal / zero */

loc_001E97AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001E97B7; /* je: equal / zero */

loc_001E97AD: ;
    eax = 0x80004005u;
    goto loc_001E9864;

loc_001E97B7: ;
    eax = MEM32(esi + 0x1C);
    goto loc_001E9864;

loc_001E97BF: ;
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E97CAu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E97CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9864; /* je: equal / zero */

loc_001E97D2: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E985A; /* jl: less (signed <) */

loc_001E97D8: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E97F6u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E97F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E985A; /* jl: less (signed <) */

loc_001E97FA: ;
    edi = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9855; /* je: equal / zero */

loc_001E9801: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9855; /* jne: not equal / not zero */

loc_001E980A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E9817; /* jae: above or equal (unsigned >=) */

loc_001E9810: ;
    eax = 0x8015000Au;
    goto loc_001E985A;

loc_001E9817: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x164)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0x164) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9810; /* jne: not equal / not zero */

loc_001E9823: ;
    eax = ZX16(LO16(ecx));
    eax = eax * 4 + 2;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9810; /* jb: below (unsigned <) */

loc_001E9832: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    eax = 0x1500F0;
    if (CMP_BE(_fa, _fb)) goto loc_001E985A; /* jbe: below or equal (unsigned <=) */

loc_001E983E: ;
    ebx = ZX16(LO16(edx));
    _fa = (uint32_t)(MEM32(edi + ebx * 4 + 2)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ebx * 4 + 2), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9850; /* jl: less (signed <) */

loc_001E9848: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E983E; /* jb: below (unsigned <) */

loc_001E984E: ;
    goto loc_001E985A;

loc_001E9850: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E985A;

loc_001E9855: ;
    eax = 0x80150007u;

loc_001E985A: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0xC) = 1;

loc_001E9864: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E986B
 * Original: 0x001E986B - 0x001E9989 (286 bytes, 101 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E986B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E986B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    if ((_fa == 0)) goto loc_001E9896; /* je: equal / zero */

loc_001E9881: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001E988E; /* je: equal / zero */

loc_001E9884: ;
    eax = 0x80004005u;
    goto loc_001E9982;

loc_001E988E: ;
    eax = MEM32(edi + 0x1C);
    goto loc_001E9982;

loc_001E9896: ;
    esi = edi + 0x10;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E98A1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001E98A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9982; /* je: equal / zero */

loc_001E98A9: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E9978; /* jl: less (signed <) */

loc_001E98AF: ;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E98CDu); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001E98CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001E9978; /* jl: less (signed <) */

loc_001E98D5: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9973; /* je: equal / zero */

loc_001E98E0: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xC8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E9973; /* jne: not equal / not zero */

loc_001E98ED: ;
    PUSH32(esp, 2);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001E98FC; /* jae: above or equal (unsigned >=) */

loc_001E98F5: ;
    eax = 0x8015000Au;
    goto loc_001E9978;

loc_001E98FC: ;
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x164)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x164) (16-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ecx;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001E98F5; /* jne: not equal / not zero */

loc_001E990D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 8)) < (uint32_t)(esi));
    MEM32(ebp + 8) = MEM32(ebp + 8) - esi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001E9963; /* jbe: below or equal (unsigned <=) */

loc_001E991F: ;
    goto loc_001E9924;

loc_001E9921: ;
    ecx = MEM32(ebp + -4);

loc_001E9924: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E98F5; /* jb: below (unsigned <) */

loc_001E9929: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xC00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0xC00 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001E98F5; /* ja: above (unsigned >) */

loc_001E9930: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 8)) < (uint32_t)(esi));
    MEM32(ebp + 8) = MEM32(ebp + 8) - esi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001E9954; /* jbe: below or equal (unsigned <=) */

loc_001E993E: ;
    edx = ZX16(LO16(edx));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E98F5; /* jb: below (unsigned <) */

loc_001E9946: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 8)) < (uint32_t)(edx));
    MEM32(ebp + 8) = MEM32(ebp + 8) - edx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(MEM16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -16);
    goto loc_001E9957;

loc_001E9954: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E9957: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(ebp + -8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001E9921; /* jb: below (unsigned <) */

loc_001E9963: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFEAFF11u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1500F0)) >> 32) & 1);
    eax = eax + 0x1500F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001E9978;

loc_001E9973: ;
    eax = 0x80150007u;

loc_001E9978: ;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0xC) = 1;

loc_001E9982: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9989
 * Original: 0x001E9989 - 0x001E9994 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9989(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9989: ;
    ecx = MEM32(0x9701A4);
    g_seh_ebp = ebp; sub_001E95D3(); return; /* tail jmp 0x001E95D3 */

}

/**
 * sub_001E9994
 * Original: 0x001E9994 - 0x001E99A3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9994(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E9994: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E9645(); return; /* tail jmp 0x001E9645 */

}

/**
 * sub_001E99A3
 * Original: 0x001E99A3 - 0x001E99D3 (48 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E99A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E99A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7);
    eax = ebx + eax + 0x168;
    PUSH32(esp, eax);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E99C3u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001E99C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 0x1C);
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E99D3(); return; } /* jne: not equal / not zero */

loc_001E99CC: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001E9A34(); return; /* tail jmp 0x001E9A34 */

}

/**
 * sub_001E99D3
 * Original: 0x001E99D3 - 0x001E9A34 (97 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E99D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E99D3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001E99DBu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001E99DB: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 4) = 0x1E9761;
    eax = MEM32(esi);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = 1;
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    MEM32(eax + 0x160) = MEM32(eax + 0x160) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + 0x164) = LO16(ecx);
    esi = MEM32(esi);
    ecx = MEM32(ebp + 0x20);
    eax = esi + 0x168;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001E9A34(); return; /* fallthrough 0x001E9A34 */

}

/**
 * sub_001E9A34
 * Original: 0x001E9A34 - 0x001E9A3B (7 bytes, 5 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9A34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9A34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001E9A3B
 * Original: 0x001E9A3B - 0x001E9A55 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9A3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9A3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9A55(); return; } /* jne: not equal / not zero */

loc_001E9A4B: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001E9B98(); return; /* tail jmp 0x001E9B98 */

}

/**
 * sub_001E9A55
 * Original: 0x001E9A55 - 0x001E9B84 (303 bytes, 110 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9A55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9A55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E9A8E; /* jbe: below or equal (unsigned <=) */

loc_001E9A61: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = ZX16(LO16(esi));
    MEM32(ebp + -12) = eax;

loc_001E9A6D: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E9A83u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001E9A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E9A6D; /* jne: not equal / not zero */

loc_001E9A8E: ;
    eax = MEM32(ebp + 0x18);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    eax = ZX16(LO16(esi));
    ebx = ebx + eax * 2 + 8;
    PUSH32(esp, 0x1E9794);
    MEM32(ebp + -20) = eax;
    eax = eax * 4 + 0x102;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0x001E9AC9u); RECOMP_ABI_CALL(0x001E99A3u, sub_001E99A3); /* call 0x001E99A3 */

loc_001E9AC9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E9B84(); return; } /* jl: less (signed <) */

loc_001E9AD3: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(ebx) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebx + 4) = LO16(eax);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), LO16(edi) (16-bit) */
    MEM16(ebx + 6) = LO16(esi);
    esi = ebx + 8;
    MEM32(ebp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001E9B3A; /* jbe: below or equal (unsigned <=) */

loc_001E9AFC: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + 0xC) = eax;

loc_001E9B08: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 2;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = esi + 2;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001E9B27u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001E9B27: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = LO16(eax);
    esi = esi + eax + 2;
    if ((_fa != 0)) goto loc_001E9B08; /* jne: not equal / not zero */

loc_001E9B3A: ;
    esi = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + -4);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(0x2F7A80));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001E9B68u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E9B68: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001E9B87(); return; } /* jl: less (signed <) */

loc_001E9B6E: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x160) = 1;
    MEM32(esi + 0xC) = edi;
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001E9B87(); return; /* tail jmp 0x001E9B87 */

}

/**
 * sub_001E9B84
 * Original: 0x001E9B84 - 0x001E9B87 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9B84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9B84: ;
    esi = MEM32(ebp + -8);

    g_seh_ebp = ebp; sub_001E9B87(); return; /* fallthrough 0x001E9B87 */

}

/**
 * sub_001E9B87
 * Original: 0x001E9B87 - 0x001E9B98 (17 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9B87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9B87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9B94; /* je: equal / zero */

loc_001E9B8B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E9B94u); RECOMP_ABI_CALL(0x001E9761u, sub_001E9761); /* call 0x001E9761 */

loc_001E9B94: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001E9B98(); return; /* fallthrough 0x001E9B98 */

}

/**
 * sub_001E9B98
 * Original: 0x001E9B98 - 0x001E9B9D (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9B98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9B98: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E9B9D
 * Original: 0x001E9B9D - 0x001E9C8C (239 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9B9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9B9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001E9BB4; /* jne: not equal / not zero */

loc_001E9BAA: ;
    eax = 0x80150005u;
    goto loc_001E9C88;

loc_001E9BB4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9BC0; /* jne: not equal / not zero */

loc_001E9BBA: ;
    eax = MEM32(ecx + 4);
    MEM32(ebp + 8) = eax;

loc_001E9BC0: ;
    PUSH32(esp, ebx);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ZX16(LO16(edi));
    edx = ebp + -20;
    PUSH32(esp, edx);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xC02);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = esi * 4 + 8;
    PUSH32(esp, 0x1E986B);
    _fb = (uint32_t)(0x102) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x102;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9C03u); RECOMP_ABI_CALL(0x001E99A3u, sub_001E99A3); /* call 0x001E99A3 */

loc_001E9C03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9C72; /* jl: less (signed <) */

loc_001E9C0A: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edi);
    ecx = esi;
    esi = MEM32(ebp + 0x10);
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
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -20));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(0x2F7A84));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9C59u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001E9C59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9C75; /* jl: less (signed <) */

loc_001E9C60: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x160) = ebx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & edi;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001E9C75;

loc_001E9C72: ;
    esi = MEM32(ebp + 0xC);

loc_001E9C75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9C82; /* je: equal / zero */

loc_001E9C79: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9C82u); RECOMP_ABI_CALL(0x001E9761u, sub_001E9761); /* call 0x001E9761 */

loc_001E9C82: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E9C88: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E9C8C
 * Original: 0x001E9C8C - 0x001E9C9B (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9C8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E9C8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E9A3B(); return; /* tail jmp 0x001E9A3B */

}

/**
 * sub_001E9C9B
 * Original: 0x001E9C9B - 0x001E9CAA (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9C9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001E9C9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E9B9D(); return; /* tail jmp 0x001E9B9D */

}

/**
 * sub_001E9CAA
 * Original: 0x001E9CAA - 0x001E9CBD (19 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9CAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9CAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9CBD(); return; } /* jne: not equal / not zero */

loc_001E9CB6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9CBBu); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001E9CBB: ;
    g_seh_ebp = ebp; sub_001E9CCF(); return; /* tail jmp 0x001E9CCF */

}

/**
 * sub_001E9CBD
 * Original: 0x001E9CBD - 0x001E9CCA (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9CBD: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9CCA(); return; } /* jne: not equal / not zero */

loc_001E9CC3: ;
    PUSH32(esp, 0x001E9CC8u); RECOMP_ABI_CALL(0x001F8F7Au, sub_001F8F7A); /* call 0x001F8F7A */

loc_001E9CC8: ;
    g_seh_ebp = ebp; sub_001E9CCF(); return; /* tail jmp 0x001E9CCF */

}

/**
 * sub_001E9CCA
 * Original: 0x001E9CCA - 0x001E9CCF (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9CCA: ;
    PUSH32(esp, 0x001E9CCFu); RECOMP_ABI_CALL(0x0020EF03u, sub_0020EF03); /* call 0x0020EF03 */

    g_seh_ebp = ebp; sub_001E9CCF(); return; /* fallthrough 0x001E9CCF */

}

/**
 * sub_001E9CCF
 * Original: 0x001E9CCF - 0x001E9CD3 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9CCF: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E9CD3
 * Original: 0x001E9CD3 - 0x001E9CF3 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9CD3: ;
    eax = ecx + 0x109A4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9CE7; /* jne: not equal / not zero */

loc_001E9CDF: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    goto loc_001E9CF0;

loc_001E9CE7: ;
    edx = MEM32(esp + 4);
    MEM32(edx + 0x40) = ecx;
    MEM32(eax) = edx;

loc_001E9CF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9CF3
 * Original: 0x001E9CF3 - 0x001E9D1E (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9CF3: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x109A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x109A4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9D0D; /* jne: not equal / not zero */

loc_001E9D03: ;
    eax = MEM32(eax + 0x40);
    MEM32(ecx) = eax;
    goto loc_001E9D1B;

loc_001E9D0A: ;
    eax = MEM32(eax + 0x40);

loc_001E9D0D: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9D0A; /* jne: not equal / not zero */

loc_001E9D12: ;
    ecx = MEM32(eax + 0x40);
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = ecx;

loc_001E9D1B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9D1E
 * Original: 0x001E9D1E - 0x001E9D3E (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9D1E: ;
    eax = ecx + 0x109A0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9D32; /* jne: not equal / not zero */

loc_001E9D2A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    goto loc_001E9D3B;

loc_001E9D32: ;
    edx = MEM32(esp + 4);
    MEM32(edx + 0x40) = ecx;
    MEM32(eax) = edx;

loc_001E9D3B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9D3E
 * Original: 0x001E9D3E - 0x001E9D5A (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9D3E: ;
    edx = ecx + 0x109A0;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9D59; /* je: equal / zero */

loc_001E9D4C: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    MEM32(edx) = esi;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    POP32(esp, esi);

loc_001E9D59: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9D5A
 * Original: 0x001E9D5A - 0x001E9E05 (171 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9D5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9D5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9D6C; /* jne: not equal / not zero */

loc_001E9D62: ;
    eax = 0x80150005u;
    goto loc_001E9E01;

loc_001E9D6C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E9DFF; /* jbe: below or equal (unsigned <=) */

loc_001E9D7A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001E9D83: ;
    esi = MEM32(eax + 0x17730);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E9DB8; /* jbe: below or equal (unsigned <=) */

loc_001E9D91: ;
    edi = MEM32(ecx);
    edx = eax + 0x138B8;

loc_001E9D99: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9DAD; /* jne: not equal / not zero */

loc_001E9D9E: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9DAD; /* jne: not equal / not zero */

loc_001E9DA6: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9DEE; /* je: equal / zero */

loc_001E9DAD: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9D99; /* jb: below (unsigned <) */

loc_001E9DB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3E8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001E9DFC; /* jae: above or equal (unsigned >=) */

loc_001E9DC0: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x138B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x138B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + eax + 4) = edx;
    edx = MEM32(eax + 0x17730);
    esi = MEM32(ebp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + eax + 0x138B8) = esi;
    MEM32(eax + 0x17730) = MEM32(eax + 0x17730) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x17730)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E9DEE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001E9D83; /* jb: below (unsigned <) */

loc_001E9DFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E9DFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001E9E01: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E9E2F
 * Original: 0x001E9E2F - 0x001E9E52 (35 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9E2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9E2F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9E3A; /* jne: not equal / not zero */

loc_001E9E33: ;
    eax = 0x80150005u;
    goto loc_001E9E4F;

loc_001E9E3A: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001E9E4Fu); RECOMP_ABI_CALL(0x001F8E54u, sub_001F8E54); /* call 0x001F8E54 */

loc_001E9E4F: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E9E52
 * Original: 0x001E9E52 - 0x001E9ED0 (126 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9E52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9E52: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9E6A; /* jne: not equal / not zero */

loc_001E9E63: ;
    eax = 0x80150005u;
    goto loc_001E9EC9;

loc_001E9E6A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001E9E83u); RECOMP_ABI_CALL(0x001F92F9u, sub_001F92F9); /* call 0x001F92F9 */

loc_001E9E83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9EC7; /* jne: not equal / not zero */

loc_001E9E87: ;
    PUSH32(esp, esi);
    ecx = MEM32(ebp);
    esi = ebp + 0x30;
    edi = ebx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = ebx + 0xC;
    esi = ebp + -40;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = ebx + 0x18;
    esi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(ebp + 4);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x2C) = ecx;
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebx + 0x30) = ecx;
    ecx = MEM32(ebp + 0x40);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x34) = ecx;
    POP32(esp, ecx);
    edi = ebx + 0x38;
    esi = ebp + 0x44;
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

loc_001E9EC7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001E9EC9: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9ED0
 * Original: 0x001E9ED0 - 0x001E9EE3 (19 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9ED0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001E9ED8u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001E9ED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9EE3(); return; } /* jne: not equal / not zero */

loc_001E9EDC: ;
    esi = 0x80150002u;
    g_seh_ebp = ebp; sub_001E9F07(); return; /* tail jmp 0x001E9F07 */

}

/**
 * sub_001E9EE3
 * Original: 0x001E9EE3 - 0x001E9EFC (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9EE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9EE3: ;
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9EFC(); return; } /* jne: not equal / not zero */

loc_001E9EF0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9EFC(); return; } /* jne: not equal / not zero */

loc_001E9EF5: ;
    esi = 0x80150003u;
    g_seh_ebp = ebp; sub_001E9F07(); return; /* tail jmp 0x001E9F07 */

}

/**
 * sub_001E9EFC
 * Original: 0x001E9EFC - 0x001E9F07 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9EFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9EFC: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001E9F07(); return; } /* je: equal / zero */

loc_001E9F02: ;
    esi = 0x80150004u;

    g_seh_ebp = ebp; sub_001E9F07(); return; /* fallthrough 0x001E9F07 */

}

/**
 * sub_001E9F07
 * Original: 0x001E9F07 - 0x001E9F0D (6 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9F07(void)
{

loc_001E9F07: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E9F0D
 * Original: 0x001E9F0D - 0x001E9F34 (39 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9F0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F0D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E9F18u); RECOMP_ABI_CALL(0x00210FDDu, sub_00210FDD); /* call 0x00210FDD */

loc_001E9F18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9F30; /* je: equal / zero */

loc_001E9F1C: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E9F30; /* jl: less (signed <) */

loc_001E9F1E: ;
    eax = MEM32(esi + 0x174);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9F30; /* jne: not equal / not zero */

loc_001E9F2B: ;
    eax = 0x1500F0;

loc_001E9F30: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9F34
 * Original: 0x001E9F34 - 0x001E9F5B (39 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9F34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F34: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E9F3Fu); RECOMP_ABI_CALL(0x00210FDDu, sub_00210FDD); /* call 0x00210FDD */

loc_001E9F3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9F57; /* je: equal / zero */

loc_001E9F43: ;
    if (CMP_L(_fas, _fbs)) goto loc_001E9F57; /* jl: less (signed <) */

loc_001E9F45: ;
    eax = MEM32(esi + 0x174);
    eax = MEM32(eax + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9F57; /* jne: not equal / not zero */

loc_001E9F52: ;
    eax = 0x1500F0;

loc_001E9F57: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9F5B
 * Original: 0x001E9F5B - 0x001E9F7E (35 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9F5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F5B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x16C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9F7A; /* je: equal / zero */

loc_001E9F6C: ;
    PUSH32(esp, 0x8F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E9F77u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001E9F77: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001E9F7A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9F91
 * Original: 0x001E9F91 - 0x001EA01D (140 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001E9F91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001E9FA8u); RECOMP_ABI_CALL(0x001E9D3Eu, sub_001E9D3E); /* call 0x001E9D3E */

loc_001E9FA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9FB5; /* jne: not equal / not zero */

loc_001E9FAC: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_001EA015;

loc_001E9FB5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = ecx + ecx * 2 + 0x4272;
    edx = edi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + esi + 0x138B8);
    MEM32(esi + ebx * 4) = edx;
    ecx = ecx + ecx * 2;
    ecx = esi + ecx * 4;
    edx = ecx + 0x109CC;
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x138B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x138B;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x1C560;
    MEM32(ecx + 0x109D0) = ebx;
    MEM32(esi + 0x1C570) = MEM32(esi + 0x1C570) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edx);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edi + esi);
    MEM32(ecx) = edx;
    edx = MEM32(edi + esi + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA013u); RECOMP_ABI_CALL(0x001E9CD3u, sub_001E9CD3); /* call 0x001E9CD3 */

loc_001EA013: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001EA015: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA01D
 * Original: 0x001EA01D - 0x001EA04A (45 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA01D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA01D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    esi = ecx + eax * 4 + 0x109CC;
    PUSH32(esp, MEM32(esi));
    edi = ecx + 0x20;
    ecx = edi;
    PUSH32(esp, 0x001EA039u); RECOMP_ABI_CALL(0x001E9CF3u, sub_001E9CF3); /* call 0x001E9CF3 */

loc_001EA039: ;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0x001EA042u); RECOMP_ABI_CALL(0x001E9D1Eu, sub_001E9D1E); /* call 0x001E9D1E */

loc_001EA042: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA04A
 * Original: 0x001EA04A - 0x001EA18B (321 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA04A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EA04A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = ecx + ecx * 2;
    PUSH32(esp, esi);
    ecx = eax + ecx * 4;
    edx = MEM32(ecx + 0x109CC);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebp + -12) = LO8(ecx);
    MEM8(ebp + -11) = LO8(ecx);
    MEM8(ebp + -10) = LO8(ecx);
    MEM8(ebp + -9) = LO8(ecx);
    MEM8(ebp + -8) = LO8(ecx);
    MEM8(ebp + -7) = LO8(ecx);
    MEM8(ebp + -6) = LO8(ecx);
    MEM8(ebp + -5) = LO8(ecx);
    PUSH32(esp, 8);
    esi = edx + 0x10;
    POP32(esp, ecx);
    edi = ebp + -12;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001EA095; /* je: equal / zero */

loc_001EA090: ;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA095: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EA0B2; /* jne: not equal / not zero */

loc_001EA099: ;
    MEM32(eax + 0x1C570) = MEM32(eax + 0x1C570) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x1C570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C560) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C560)) >> 32) & 1);
    eax = eax + 0x1C560;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x109D0) = eax;
    goto loc_001EA150;

loc_001EA0B2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 0x17750;
    MEM32(ebp + -4) = 0x3E8;
    MEM32(ebp + -8) = esi;

loc_001EA0C6: ;
    PUSH32(esp, 8);
    edi = esi + -16;
    POP32(esp, ecx);
    esi = edx + 0x10;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001EA0DA; /* je: equal / zero */

loc_001EA0D5: ;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA0DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA159; /* je: equal / zero */

loc_001EA0DE: ;
    esi = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001EA0F7; /* jne: not equal / not zero */

loc_001EA0E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA0F7; /* jne: not equal / not zero */

loc_001EA0F1: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;

loc_001EA0F7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001EA0C6; /* jb: below (unsigned <) */

loc_001EA109: ;
    ebx = MEM32(edx + 0x10);
    esi = ecx + ecx * 4;
    esi = eax + esi * 4;
    edi = esi + 0x17740;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 0x14);
    ecx = ecx + ecx * 4 + 0x5DD4;
    eax = eax + ecx * 4;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ebx;
    eax = MEM32(edx + 0xC);
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1774C) = eax;
    _fa = (uint32_t)(MEM8(edx + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xF), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001EA147; /* je: equal / zero */

loc_001EA141: ;
    MEM8(esi + 0x17748) = MEM8(esi + 0x17748) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x17748)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_001EA147: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x109D0) = edi;

loc_001EA150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001EA159: ;
    ecx = MEM32(ebp + 8);
    esi = ecx + ecx * 4 + 0x5DD4;
    ecx = ecx + ecx * 4;
    esi = eax + esi * 4;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + ecx * 4;
    ecx = MEM32(edx + 0xC);
    if (4) _cf = (int)(((ecx) >> ((4) - 1)) & 1);
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1774C) = ecx;
    _fa = (uint32_t)(MEM8(edx + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xF), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001EA150; /* je: equal / zero */

loc_001EA183: ;
    MEM8(eax + 0x17748) = MEM8(eax + 0x17748) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x17748)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EA150;

}

/**
 * sub_001EA18B
 * Original: 0x001EA18B - 0x001EA1C3 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA18B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA18B: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x109D0);
    eax = MEM32(eax + 0x109CC);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EA1AD; /* jne: not equal / not zero */

loc_001EA1A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    goto loc_001EA1BF;

loc_001EA1AD: ;
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA1BF; /* je: equal / zero */

loc_001EA1B3: ;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA1BF; /* je: equal / zero */

loc_001EA1BA: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi + 8) = LO8(eax);

loc_001EA1BF: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA1C3
 * Original: 0x001EA1C3 - 0x001EA221 (94 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA1C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EA1C3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA1D5; /* jne: not equal / not zero */

loc_001EA1D1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001EA21C;

loc_001EA1D5: ;
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(ecx, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001EA202; /* ja: above (unsigned >) */

loc_001EA1DF: ;
    if (CMP_B(_fa, _fb)) goto loc_001EA209; /* jb: below (unsigned <) */

loc_001EA1E1: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA1F2; /* je: equal / zero */

loc_001EA1E8: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA202; /* je: equal / zero */

loc_001EA1EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EA1F8; /* jne: not equal / not zero */

loc_001EA1F2: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EA209; /* jne: not equal / not zero */

loc_001EA1F8: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001EA207; /* jbe: below or equal (unsigned <=) */

loc_001EA202: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001EA21C;

loc_001EA207: ;
    if (CMP_AE(_fa, _fb)) goto loc_001EA20E; /* jae: above or equal (unsigned >=) */

loc_001EA209: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EA21C;

loc_001EA20E: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
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
    if ((_flags != 0)) goto loc_001EA21C; /* je: equal / zero */

loc_001EA217: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA21C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA221
 * Original: 0x001EA221 - 0x001EA2CC (171 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA221(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA221: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EA2A3; /* je: equal / zero */

loc_001EA236: ;
    ecx = 0x8000000;
    eax = edx;
    edi = esi;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001EA2C6; /* jne: not equal / not zero */

loc_001EA247: ;
    ecx = 0x10000000;
    eax = edx;
    edi = esi;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001EA2C6; /* jne: not equal / not zero */

loc_001EA258: ;
    ecx = 0x4000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    edi = 0x20000000;
    if (TEST_Z(_fa, _fb)) goto loc_001EA26F; /* je: equal / zero */

loc_001EA266: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA26F; /* jne: not equal / not zero */

loc_001EA26A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EA271;

loc_001EA26F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EA271: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA27E; /* je: equal / zero */

loc_001EA275: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA27E; /* jne: not equal / not zero */

loc_001EA279: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EA280;

loc_001EA27E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EA280: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001EA2C6; /* jne: not equal / not zero */

loc_001EA284: ;
    eax = edx;
    edi = esi;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0x40000000;
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001EA2C6; /* jne: not equal / not zero */

loc_001EA299: ;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    if ((_fa != 0)) goto loc_001EA2C6; /* jne: not equal / not zero */

loc_001EA2A3: ;
    eax = MEM32(ebx + 0xC);
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA2B1; /* je: equal / zero */

loc_001EA2AF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EA2B1: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + 0xC);
    eax = edx;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA2C4; /* je: equal / zero */

loc_001EA2C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EA2C4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001EA2C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA2CC
 * Original: 0x001EA2CC - 0x001EA305 (57 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA2CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA2CC: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EA2E2; /* jbe: below or equal (unsigned <=) */

loc_001EA2DD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EA2E2: ;
    if (CMP_AE(_fa, _fb)) goto loc_001EA2E9; /* jae: above or equal (unsigned >=) */

loc_001EA2E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EA2E9: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(edx + 8));
    PUSH32(esp, 0x001EA2F4u); RECOMP_ABI_CALL(0x001EA1C3u, sub_001EA1C3); /* call 0x001EA1C3 */

loc_001EA2F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA303; /* jne: not equal / not zero */

loc_001EA2F8: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(edx + 4));
    PUSH32(esp, 0x001EA303u); RECOMP_ABI_CALL(0x001EA221u, sub_001EA221); /* call 0x001EA221 */

loc_001EA303: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA305
 * Original: 0x001EA305 - 0x001EA322 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA305(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA305: ;
    PUSH32(esp, 0x1EA2CC);
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(ecx + 0x138A8));
    _fb = (uint32_t)(0x109C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x109C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EA31Eu); RECOMP_ABI_CALL(0x00151B90u, sub_00151B90); /* call 0x00151B90 */

loc_001EA31E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EA322
 * Original: 0x001EA322 - 0x001EA415 (243 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA322: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C574);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA33Bu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001EA33B: ;
    ecx = MEM32(esi + 0x138A8);
    edx = MEM32(esi + 0x10);
    ecx = ecx * 8 + 0x2A;
    MEM32(edx + 0x170) = ecx;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(ecx + 0x16C);
    MEM32(edi) = 0x412;
    ecx = MEM32(esi + 0x138A8);
    ecx = ecx * 8 + 0xA;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = MEM32(ecx + eax);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(ecx + eax + 4);
    MEM32(edi + 0x24) = eax;
    SET_LO16(eax, MEM16(esi + 0x138A8));
    MEM16(edi + 0x28) = LO16(eax);
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, ebx);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA3A4u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001EA3A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA3B2; /* je: equal / zero */

loc_001EA3A9: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_001EA40D;

loc_001EA3B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x138A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x138A8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EA3DD; /* jbe: below or equal (unsigned <=) */

loc_001EA3BC: ;
    ecx = esi + 0x109CC;

loc_001EA3C2: ;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    MEM32(edi + eax * 8 + 0x2A) = ebx;
    edx = MEM32(edx + 4);
    MEM32(edi + eax * 8 + 0x2E) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x138A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EA3C2; /* jb: below (unsigned <) */

loc_001EA3DD: ;
    eax = MEM32(esi + 0x10);
    ecx = eax + 0x1A0;
    MEM32(eax + 0x174) = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x178) = 0x124;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1773C) = 1;

loc_001EA40D: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001EA415
 * Original: 0x001EA415 - 0x001EA4B3 (158 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA415(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA415: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001EA426u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001EA426: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x164), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA4AE; /* jne: not equal / not zero */

loc_001EA432: ;
    MEM32(ecx + 0x170) = 0x28;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 0x16C);
    MEM32(ecx) = 0x413;
    MEM32(ecx + 4) = 8;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + eax);
    MEM32(ecx + 0x20) = ebx;
    eax = MEM32(edx + eax + 4);
    MEM32(ecx + 0x24) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, 0x001EA47Cu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001EA47C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EA489; /* je: equal / zero */

loc_001EA482: ;
    edi = 0x80004005u;
    goto loc_001EA4AE;

loc_001EA489: ;
    eax = MEM32(esi + 0x14);
    ecx = eax + 0x1A0;
    MEM32(eax + 0x174) = ecx;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x178) = 0x124;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x164) = edi;

loc_001EA4AE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA4B3
 * Original: 0x001EA4B3 - 0x001EA56B (184 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA4B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA4B3: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001EA4C4u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001EA4C4: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x164), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA566; /* jne: not equal / not zero */

loc_001EA4D4: ;
    MEM32(ecx + 0x170) = 0x34;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + 0x16C);
    MEM32(ecx) = 8;
    MEM32(ecx + 4) = 0x14;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + eax);
    MEM32(ecx + 0x20) = ebx;
    eax = MEM32(edx + eax + 4);
    MEM32(ecx + 0x24) = eax;
    MEM16(ecx + 0x28) = 6;
    MEM32(ecx + 0x2A) = edi;
    MEM16(ecx + 0x2E) = 0x3E8;
    MEM32(ecx + 0x30) = 0x1870;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, 0x001EA534u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001EA534: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EA541; /* je: equal / zero */

loc_001EA53A: ;
    edi = 0x80004005u;
    goto loc_001EA566;

loc_001EA541: ;
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x1A0;
    MEM32(eax + 0x174) = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x178) = 0x18AE;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x164) = edi;

loc_001EA566: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA56B
 * Original: 0x001EA56B - 0x001EA718 (429 bytes, 154 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA56B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EA56B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    edx = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -20) = ecx;
    if ((_fa != 0)) goto loc_001EA592; /* jne: not equal / not zero */

loc_001EA586: ;
    MEM32(ebp + -20) = 0x80070057u;
    goto loc_001EA710;

loc_001EA592: ;
    _fa = (uint32_t)(MEM32(edx + 0x138A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x138A8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + 8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001EA710; /* jbe: below or equal (unsigned <=) */

loc_001EA5A7: ;
    PUSH32(esp, esi);
    eax = edx + 0x109D0;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    goto loc_001EA5B6;

loc_001EA5B4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EA5B6: ;
    edi = MEM32(eax + -4);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA6F6; /* jne: not equal / not zero */

loc_001EA5C3: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA6F6; /* jne: not equal / not zero */

loc_001EA5CF: ;
    esi = MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA6EB; /* jne: not equal / not zero */

loc_001EA5DA: ;
    eax = edi;
    PUSH32(esp, 2);
    edi = ebx + 0x10;
    esi = eax + 0x10;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -28) = 0;
    MEM8(ebp + -27) = 0;
    MEM8(ebp + -26) = 0;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -24) = 0;
    MEM8(ebp + -23) = 0;
    MEM8(ebp + -22) = 0;
    MEM8(ebp + -21) = 0;
    if ((_flags != 0)) goto loc_001EA614; /* je: equal / zero */

loc_001EA60E: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0xF) = MEM8(eax + 0xF) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EA627;

loc_001EA614: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebp + -28;
    esi = eax + 0x10;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001EA627; /* je: equal / zero */

loc_001EA623: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0xF) = MEM8(eax + 0xF) | 8;
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001EA627: ;
    ecx = MEM32(eax + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFC000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax + 0x10;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebx + 0x10);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + 0x14);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 0x18) = ecx;
    _fa = (uint32_t)(MEM16(ebx + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x18), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001EA680; /* jbe: below or equal (unsigned <=) */

loc_001EA651: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA680; /* je: equal / zero */

loc_001EA658: ;
    SET_LO8(ecx, MEM8(ebx + 0x18));
    MEM8(eax + 0x1C) = LO8(ecx);
    edi = eax + 0x1D;
    MEM32(ebp + -16) = edi;
    PUSH32(esp, 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ZX16(MEM16(ebx + 0x18));
    edi = MEM32(ebp + -16);
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

loc_001EA680: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax);
    PUSH32(esp, 8);
    esi = edx;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = edi;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001EA698; /* je: equal / zero */

loc_001EA693: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA698: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA6CF; /* je: equal / zero */

loc_001EA69C: ;
    edi = MEM32(ebp + -16);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = ebp + -28;
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
    if ((_flags != 0)) goto loc_001EA6B0; /* je: equal / zero */

loc_001EA6AB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA6BF; /* je: equal / zero */

loc_001EA6B4: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA6BFu); RECOMP_ABI_CALL(0x001EA18Bu, sub_001EA18B); /* call 0x001EA18B */

loc_001EA6BF: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA6CAu); RECOMP_ABI_CALL(0x001EA04Au, sub_001EA04A); /* call 0x001EA04A */

loc_001EA6CA: ;
    eax = MEM32(ebp + -8);
    goto loc_001EA6E1;

loc_001EA6CF: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + -16);
    if (4) _cf = (int)(((ecx) >> ((4) - 1)) & 1);
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0xC) = ecx;

loc_001EA6E1: ;
    ecx = MEM32(eax);
    edx = MEM32(ebp + -4);
    MEM32(ebp + -16) = ecx;
    goto loc_001EA6F6;

loc_001EA6EB: ;
    PUSH32(esp, 0xF);
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
    ecx = MEM32(ebp + -16);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    MEM32(eax) = ecx;

loc_001EA6F6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x138A8) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001EA5B4; /* jb: below (unsigned <) */

loc_001EA70E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001EA710: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA718
 * Original: 0x001EA718 - 0x001EA778 (96 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA718(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA718: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA72Fu); RECOMP_ABI_CALL(0x001E66C2u, sub_001E66C2); /* call 0x001E66C2 */

loc_001EA72F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EA76A; /* jbe: below or equal (unsigned <=) */

loc_001EA736: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    esi = MEM32(ecx);
    edi = MEM32(ecx + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EA744: ;
    ebx = MEM32(eax + -20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA761; /* jne: not equal / not zero */

loc_001EA74B: ;
    ebx = MEM32(eax + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA761; /* jne: not equal / not zero */

loc_001EA752: ;
    SET_LO8(ebx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ecx + 0x24) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA761; /* jne: not equal / not zero */

loc_001EA75A: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA774; /* jne: not equal / not zero */

loc_001EA761: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EA744; /* jb: below (unsigned <) */

loc_001EA76A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EA76D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_001EA774: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001EA76D;

}

/**
 * sub_001EA778
 * Original: 0x001EA778 - 0x001EA857 (223 bytes, 79 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EA778: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x138A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x138A8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001EA7B7; /* jbe: below or equal (unsigned <=) */

loc_001EA793: ;
    edx = ebx + 0x109CC;

loc_001EA799: ;
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA7AB; /* jne: not equal / not zero */

loc_001EA7A1: ;
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EA7B7; /* je: equal / zero */

loc_001EA7AB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC)) >> 32) & 1);
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x138A8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001EA799; /* jb: below (unsigned <) */

loc_001EA7B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x138A8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EA851; /* je: equal / zero */

loc_001EA7C3: ;
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    ecx = MEM32(eax + 0x109CC);
    eax = MEM32(eax + 0x109D0);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + 0x10) = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_NE(_fa, _fb)) goto loc_001EA850; /* jne: not equal / not zero */

loc_001EA7E9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA803u); RECOMP_ABI_CALL(0x001E5B08u, sub_001E5B08); /* call 0x001E5B08 */

loc_001EA803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001EA850; /* jl: less (signed <) */

loc_001EA807: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EA850; /* jne: not equal / not zero */

loc_001EA80D: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = ebp + -12;
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
    if ((_flags != 0)) goto loc_001EA821; /* je: equal / zero */

loc_001EA81C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001EA821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EA850; /* jne: not equal / not zero */

loc_001EA825: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x8000000;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0xC), ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA838; /* jne: not equal / not zero */

loc_001EA832: ;
    edx = MEM32(ebp + 8);
    MEM8(edx + 8) = MEM8(edx + 8) + 1;
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_001EA838: ;
    edx = MEM32(eax + 0xC);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xCFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = edx;
    MEM32(ebx + 0x17738) = 1;

loc_001EA850: ;
    POP32(esp, edi);

loc_001EA851: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EA857
 * Original: 0x001EA857 - 0x001EA87F (40 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA857(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA857: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x001EA866u); RECOMP_ABI_CALL(0x001E6A3Eu, sub_001E6A3E); /* call 0x001E6A3E */

loc_001EA866: ;
    PUSH32(esp, ebx);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x001EA870u); RECOMP_ABI_CALL(0x001E6A4Au, sub_001E6A4A); /* call 0x001E6A4A */

loc_001EA870: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EA87F(); return; } /* jl: less (signed <) */

loc_001EA878: ;
    ecx = 0x1500F0;
    g_seh_ebp = ebp; sub_001EA89B(); return; /* tail jmp 0x001EA89B */

}

/**
 * sub_001EA87F
 * Original: 0x001EA87F - 0x001EA88E (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA87F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA87F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80070524u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80070524u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EA88E(); return; } /* jne: not equal / not zero */

loc_001EA887: ;
    ecx = 0x80152007u;
    g_seh_ebp = ebp; sub_001EA89B(); return; /* tail jmp 0x001EA89B */

}

/**
 * sub_001EA88E
 * Original: 0x001EA88E - 0x001EA89B (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA88E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA88E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80070525u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80070525u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EA89B(); return; } /* jne: not equal / not zero */

loc_001EA896: ;
    ecx = 0x80152008u;

    g_seh_ebp = ebp; sub_001EA89B(); return; /* fallthrough 0x001EA89B */

}

/**
 * sub_001EA89B
 * Original: 0x001EA89B - 0x001EA8BA (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA89B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA89B: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ecx;
    eax = eax + eax * 8;
    MEM32(edi + eax * 8 + 0x13E8) = MEM32(edi + eax * 8 + 0x13E8) & 0;
    _fa = (uint32_t)(MEM32(edi + eax * 8 + 0x13E8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x001EA8B4u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001EA8B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA8BA
 * Original: 0x001EA8BA - 0x001EAA0A (336 bytes, 112 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA8BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA8BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA8CDu); RECOMP_ABI_CALL(0x001E6A3Eu, sub_001E6A3E); /* call 0x001E6A3E */

loc_001EA8CD: ;
    ebx = eax;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001EA96B; /* jne: not equal / not zero */

loc_001EA8DC: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA8E6u); RECOMP_ABI_CALL(0x001E799Bu, sub_001E799B); /* call 0x001E799B */

loc_001EA8E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAA01; /* je: equal / zero */

loc_001EA8F0: ;
    if (CMP_L(_fas, _fbs)) goto loc_001EA9BE; /* jl: less (signed <) */

loc_001EA8F6: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA908u); RECOMP_ABI_CALL(0x001E6A54u, sub_001E6A54); /* call 0x001E6A54 */

loc_001EA908: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA9BE; /* jl: less (signed <) */

loc_001EA912: ;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA94D; /* je: equal / zero */

loc_001EA919: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EA929; /* jae: above or equal (unsigned >=) */

loc_001EA91F: ;
    esi = 0x8015000Au;
    goto loc_001EA9BE;

loc_001EA929: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA91F; /* jne: not equal / not zero */

loc_001EA932: ;
    _fb = (uint32_t)(0x45A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x45A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001EA944; /* je: equal / zero */

loc_001EA93A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EA944; /* je: equal / zero */

loc_001EA93D: ;
    esi = 0x80150007u;
    goto loc_001EA9BE;

loc_001EA944: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EA91F; /* jb: below (unsigned <) */

loc_001EA94A: ;
    esi = MEM32(eax + 0x20);

loc_001EA94D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA9BE; /* jl: less (signed <) */

loc_001EA951: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA95E; /* jne: not equal / not zero */

loc_001EA957: ;
    esi = 0x1500F0;
    goto loc_001EA9BE;

loc_001EA95E: ;
    MEM32(ebx) = 0x1500F0;

loc_001EA964: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001EAA01;

loc_001EA96B: ;
    if (CMP_L(_fas, _fbs)) goto loc_001EAA01; /* jl: less (signed <) */

loc_001EA971: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAA01; /* je: equal / zero */

loc_001EA97B: ;
    eax = MEM32(edi + 0x14D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA993; /* je: equal / zero */

loc_001EA985: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA98Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EA98D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA9BE; /* jl: less (signed <) */

loc_001EA993: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA99Du); RECOMP_ABI_CALL(0x001E6A4Au, sub_001E6A4A); /* call 0x001E6A4A */

loc_001EA99D: ;
    eax = eax + eax * 8;
    ebx = edi + eax * 8;
    eax = MEM32(ebx + 0x13DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA9D1; /* je: equal / zero */

loc_001EA9AD: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA9B5u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EA9B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA9C2; /* jge: greater or equal (signed >=) */

loc_001EA9BB: ;
    ebx = MEM32(ebp + -8);

loc_001EA9BE: ;
    MEM32(ebx) = esi;
    goto loc_001EAA01;

loc_001EA9C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA9D1; /* jne: not equal / not zero */

loc_001EA9CA: ;
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EA9D1: ;
    esi = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA9FF; /* je: equal / zero */

loc_001EA9DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA9DFu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EA9DF: ;
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEA60 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EA964; /* jbe: below or equal (unsigned <=) */

loc_001EA9ED: ;
    esi = 0x800705B4u;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EA9FDu); RECOMP_ABI_CALL(0x001EA857u, sub_001EA857); /* call 0x001EA857 */

loc_001EA9FD: ;
    goto loc_001EAA01;

loc_001EA9FF: ;
    esi = MEM32(esi);

loc_001EAA01: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAA33
 * Original: 0x001EAA33 - 0x001EAA42 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAA33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001EAA33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E9E2F(); return; /* tail jmp 0x001E9E2F */

}

/**
 * sub_001EAA4D
 * Original: 0x001EAA4D - 0x001EAA7C (47 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4268;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x109A4) = MEM32(esi + 0x109A4) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x109A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi;
    ebx = 0x3E8;

loc_001EAA6A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EAA72u); RECOMP_ABI_CALL(0x001E9D1Eu, sub_001E9D1E); /* call 0x001E9D1E */

loc_001EAA72: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EAA6A; /* jne: not equal / not zero */

loc_001EAA78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA7C
 * Original: 0x001EAA7C - 0x001EAC20 (420 bytes, 143 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAA7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAA90; /* jne: not equal / not zero */

loc_001EAA86: ;
    eax = 0x80150005u;
    goto loc_001EAC1C;

loc_001EAA90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x164), 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001EAC0F; /* jne: not equal / not zero */

loc_001EAAA8: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x164), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAC0F; /* jne: not equal / not zero */

loc_001EAAB8: ;
    _fa = (uint32_t)(MEM32(esi + 0x17730)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17730), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAACC; /* jne: not equal / not zero */

loc_001EAAC0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAAC7u); RECOMP_ABI_CALL(0x001EA415u, sub_001EA415); /* call 0x001EA415 */

loc_001EAAC7: ;
    goto loc_001EAC19;

loc_001EAACC: ;
    _fa = (uint32_t)(MEM32(esi + 0x138A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x138A8), edx (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001EAB56; /* jbe: below or equal (unsigned <=) */

loc_001EAAD7: ;
    ebx = esi + 0x109C8;

loc_001EAADD: ;
    _fa = (uint32_t)(MEM32(esi + 0x17730)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17730), 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001EAB28; /* jbe: below or equal (unsigned <=) */

loc_001EAAE9: ;
    ecx = esi + 0x138B0;

loc_001EAAEF: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB16; /* jne: not equal / not zero */

loc_001EAAF8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB16; /* jne: not equal / not zero */

loc_001EAB00: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB16; /* jne: not equal / not zero */

loc_001EAB07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + -4) = 1;

loc_001EAB16: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x17730)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x17730) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAAEF; /* jb: below (unsigned <) */

loc_001EAB22: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB43; /* jne: not equal / not zero */

loc_001EAB28: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAB32u); RECOMP_ABI_CALL(0x001EA01Du, sub_001EA01D); /* call 0x001EA01D */

loc_001EAB32: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAB3Cu); RECOMP_ABI_CALL(0x001EA18Bu, sub_001EA18B); /* call 0x001EA18B */

loc_001EAB3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001EAB43: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x138A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAADD; /* jb: below (unsigned <) */

loc_001EAB56: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x17730)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17730), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EABB4; /* jbe: below or equal (unsigned <=) */

loc_001EAB62: ;
    eax = esi + 0x138B0;
    MEM32(ebp + 8) = eax;

loc_001EAB6B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB74; /* jne: not equal / not zero */

loc_001EAB6F: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EABA5; /* je: equal / zero */

loc_001EAB74: ;
    ecx = 0x3E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EAB93; /* jae: above or equal (unsigned >=) */

loc_001EAB7D: ;
    eax = edi + edi * 2;
    eax = esi + eax * 4 + 0x109CC;

loc_001EAB87: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAB93; /* je: equal / zero */

loc_001EAB8B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAB87; /* jb: below (unsigned <) */

loc_001EAB93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAB9Cu); RECOMP_ABI_CALL(0x001E9F91u, sub_001E9F91); /* call 0x001E9F91 */

loc_001EAB9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAC19; /* jl: less (signed <) */

loc_001EABA0: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EABA5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x17730)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x17730) (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001EAB6B; /* jb: below (unsigned <) */

loc_001EABB4: ;
    eax = 0x3E7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001EABEF; /* jae: above or equal (unsigned >=) */

loc_001EABBF: ;
    ebx = esi + 0x138A0;

loc_001EABC5: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EABE7; /* je: equal / zero */

loc_001EABC9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EABE5; /* jae: above or equal (unsigned >=) */

loc_001EABCD: ;
    eax = edi + edi * 2;
    eax = esi + eax * 4 + 0x109CC;

loc_001EABD7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EABE3; /* je: equal / zero */

loc_001EABDB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EABD7; /* jb: below (unsigned <) */

loc_001EABE3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */

loc_001EABE5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001EABEF; /* je: equal / zero */

loc_001EABE7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EABC5; /* ja: above (unsigned >) */

loc_001EABEF: ;
    eax = MEM32(esi + 0x17730);
    ecx = esi;
    MEM32(esi + 0x138A8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAC02u); RECOMP_ABI_CALL(0x001EA322u, sub_001EA322); /* call 0x001EA322 */

loc_001EAC02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAC19; /* jl: less (signed <) */

loc_001EAC06: ;
    MEM32(esi + 0x17734) = MEM32(esi + 0x17734) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x17734)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001EAC19;

loc_001EAC0F: ;
    MEM32(esi + 0x17734) = 1;

loc_001EAC19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001EAC1C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAC20
 * Original: 0x001EAC20 - 0x001EAD31 (273 bytes, 100 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAC32; /* jne: not equal / not zero */

loc_001EAC28: ;
    eax = 0x80150005u;
    goto loc_001EAD2D;

loc_001EAC32: ;
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3D);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = ebx + 0x17738;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAC68; /* je: equal / zero */

loc_001EAC5E: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAC65u); RECOMP_ABI_CALL(0x001EA305u, sub_001EA305); /* call 0x001EA305 */

loc_001EAC65: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EAC68: ;
    ecx = MEM32(ebx + 0x138A8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EAC8D; /* jbe: below or equal (unsigned <=) */

loc_001EAC74: ;
    edx = ebx + 0x109C8;

loc_001EAC7A: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAC8D; /* je: equal / zero */

loc_001EAC81: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x138A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAC7A; /* jb: below (unsigned <) */

loc_001EAC8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EAD28; /* jae: above or equal (unsigned >=) */

loc_001EAC95: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = eax;
    eax = eax + eax * 2;
    eax = ebx + eax * 4 + 0x109CC;
    MEM32(ebp + -4) = eax;
    edx = esi + 0xC;

loc_001EACAC: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EAD28; /* jae: above or equal (unsigned >=) */

loc_001EACB4: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAD28; /* jne: not equal / not zero */

loc_001EACBC: ;
    esi = MEM32(eax);
    PUSH32(esp, 0xF);
    edi = edx + -12;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    ecx = MEM32(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EACE3; /* je: equal / zero */

loc_001EACCE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x18000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EACDE; /* jne: not equal / not zero */

loc_001EACD6: ;
    ecx = ecx & 0xFC000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001EACE1;

loc_001EACDE: ;
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EACE1: ;
    MEM32(edx) = ecx;

loc_001EACE3: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EAD0E; /* jne: not equal / not zero */

loc_001EACEA: ;
    ecx = ecx & 0xF7FFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = edx + 0x11;
    MEM8(edx + 0x10) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);

loc_001EAD0E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3D;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x138A8) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001EACAC; /* jb: below (unsigned <) */

loc_001EAD28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_001EAD2D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EAD31
 * Original: 0x001EAD31 - 0x001EADCF (158 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAD31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAD31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAD48; /* jne: not equal / not zero */

loc_001EAD3E: ;
    eax = 0x80150005u;
    goto loc_001EADCA;

loc_001EAD48: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0xAA6850);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAD57u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EAD57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EADCA; /* jl: less (signed <) */

loc_001EAD5B: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAD63u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001EAD63: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EADC4; /* je: equal / zero */

loc_001EAD6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x15);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -88;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(esi);
    MEM32(ebp + -88) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebp + -84) = eax;
    PUSH32(esp, 0xF);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAD95u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001EAD95: ;
    eax = MEM32(esi + 0x1C);
    MEM32(ebp + -40) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -56;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EADA7u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001EADA7: ;
    eax = MEM32(esi + 0x20);
    MEM32(ebp + -48) = eax;
    eax = MEM32(esi + 0x24);
    MEM32(ebp + -44) = eax;
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EADC1u); RECOMP_ABI_CALL(0x001F976Au, sub_001F976A); /* call 0x001F976A */

loc_001EADC1: ;
    POP32(esp, edi);
    goto loc_001EADC9;

loc_001EADC4: ;
    eax = 0x8015200Bu;

loc_001EADC9: ;
    POP32(esp, esi);

loc_001EADCA: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EADCF
 * Original: 0x001EADCF - 0x001EAEE8 (281 bytes, 88 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EADCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EADCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x18);
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xEC);
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EAEE1; /* jl: less (signed <) */

loc_001EADFC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_001EAE0A; /* ja: above (unsigned >) */

loc_001EAE01: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAED9; /* jb: below (unsigned <) */

loc_001EAE0A: ;
    eax = MEM32(esi + 0x1A4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAED9; /* jne: not equal / not zero */

loc_001EAE1D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAED9; /* jne: not equal / not zero */

loc_001EAE25: ;
    eax = MEM32(esi + 0x1CA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EAE3E; /* jge: greater or equal (signed >=) */

loc_001EAE32: ;
    MEM32(ebp + -4) = 0x80150007u;
    goto loc_001EAEE0;

loc_001EAE3E: ;
    ecx = MEM32(edx + 0x1C574);
    edi = esi + 0x1DA;
    PUSH32(esp, MEM32(edi));
    eax = esi + 0x1DE;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edx + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAE5Bu); RECOMP_ABI_CALL(0x001DFC69u, sub_001DFC69); /* call 0x001DFC69 */

loc_001EAE5B: ;
    eax = MEM32(esi + 0x1A4);
    ebx = esi + eax + 0x1C0;
    eax = MEM32(edi);
    edi = esi + eax * 4 + 0x1DE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAE75: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 0x1D4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1D4), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EAED5; /* jbe: below or equal (unsigned <=) */

loc_001EAE83: ;
    eax = edi;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAE8C: ;
    eax = ZX16(MEM16(eax + 4));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    ecx = edi + 0x1A;
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAEA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAEA4: ;
    edx = ZX16(MEM16(edx + 0x18));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAEAE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAED9; /* ja: above (unsigned >) */

loc_001EAEB2: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x18), 0x20 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EAEC6; /* ja: above (unsigned >) */

loc_001EAEBC: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAEC6u); RECOMP_ABI_CALL(0x001EA56Bu, sub_001EA56B); /* call 0x001EA56B */

loc_001EAEC6: ;
    eax = ZX16(MEM16(esi + 0x1D4));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAE83; /* jb: below (unsigned <) */

loc_001EAED5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAEE0; /* je: equal / zero */

loc_001EAED9: ;
    MEM32(ebp + -4) = 0x80150001u;

loc_001EAEE0: ;
    POP32(esp, ebx);

loc_001EAEE1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAEE8
 * Original: 0x001EAEE8 - 0x001EB01F (311 bytes, 103 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAEE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAEE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x109CC);
    eax = MEM32(eax + 0x109D0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x17738) = edx;
    ecx = ZX8(MEM8(ebx + 0x24));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAFF2; /* je: equal / zero */

loc_001EAF21: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAFE0; /* je: equal / zero */

loc_001EAF28: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAFBC; /* je: equal / zero */

loc_001EAF2F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAF8E; /* je: equal / zero */

loc_001EAF32: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAF63; /* je: equal / zero */

loc_001EAF35: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EAFAD; /* jne: not equal / not zero */

loc_001EAF38: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAF5A; /* je: equal / zero */

loc_001EAF3E: ;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAF4Du); RECOMP_ABI_CALL(0x001EA718u, sub_001EA718); /* call 0x001EA718 */

loc_001EAF4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFAD; /* je: equal / zero */

loc_001EAF51: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) & 0xFB;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EAF5A: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 4;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001EB015;

loc_001EAF63: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAF85; /* je: equal / zero */

loc_001EAF69: ;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAF78u); RECOMP_ABI_CALL(0x001EA718u, sub_001EA718); /* call 0x001EA718 */

loc_001EAF78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFAD; /* je: equal / zero */

loc_001EAF7C: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) & 0xFD;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EAF85: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 2;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001EB015;

loc_001EAF8E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFB6; /* je: equal / zero */

loc_001EAF94: ;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EAFA3u); RECOMP_ABI_CALL(0x001EA718u, sub_001EA718); /* call 0x001EA718 */

loc_001EAFA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFAD; /* je: equal / zero */

loc_001EAFA7: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EAFAD: ;
    MEM32(esi + 0x17738) = MEM32(esi + 0x17738) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x17738)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EAFB6: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 1;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001EB015;

loc_001EAFBC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFD4; /* je: equal / zero */

loc_001EAFC2: ;
    MEM8(edi + 0xF) = MEM8(edi + 0xF) & 0xC7;
    _fa = (uint32_t)(MEM8(edi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB015; /* je: equal / zero */

loc_001EAFCD: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 8) = LO8(ecx);
    goto loc_001EB015;

loc_001EAFD4: ;
    MEM32(esi + 0x17738) = MEM32(esi + 0x17738) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x17738)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edx;
    goto loc_001EB015;

loc_001EAFE0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFEC; /* je: equal / zero */

loc_001EAFE6: ;
    MEM8(edi + 0xF) = MEM8(edi + 0xF) & 0x7F;
    _fa = (uint32_t)(MEM8(edi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EAFEC: ;
    MEM8(edi + 0xF) = MEM8(edi + 0xF) | 0x80;
    _fa = (uint32_t)(MEM8(edi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001EB015;

loc_001EAFF2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB011; /* je: equal / zero */

loc_001EAFF8: ;
    ecx = MEM32(esi + 0x1C574);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB007u); RECOMP_ABI_CALL(0x001EA718u, sub_001EA718); /* call 0x001EA718 */

loc_001EB007: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFAD; /* je: equal / zero */

loc_001EB00B: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) & 0xF7;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_001EB015;

loc_001EB011: ;
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 8;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001EB015: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EB01F
 * Original: 0x001EB01F - 0x001EB089 (106 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB01F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB01F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + 0x138A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x138A8), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_BE(_fa, _fb)) goto loc_001EB069; /* jbe: below or equal (unsigned <=) */

loc_001EB03C: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    edx = ecx + 0x109CC;
    PUSH32(esp, esi);

loc_001EB046: ;
    esi = MEM32(edx);
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB056; /* jne: not equal / not zero */

loc_001EB04E: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB067; /* je: equal / zero */

loc_001EB056: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x138A8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EB046; /* jb: below (unsigned <) */

loc_001EB067: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001EB069: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x138A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x138A8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB081; /* je: equal / zero */

loc_001EB074: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB07Eu); RECOMP_ABI_CALL(0x001EAEE8u, sub_001EAEE8); /* call 0x001EAEE8 */

loc_001EB07E: ;
    MEM32(ebp + -8) = eax;

loc_001EB081: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EB089
 * Original: 0x001EB089 - 0x001EB0B4 (43 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB089(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB089: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001EB097u); RECOMP_ABI_CALL(0x001E6A3Eu, sub_001E6A3E); /* call 0x001E6A3E */

loc_001EB097: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB0A7; /* je: equal / zero */

loc_001EB09D: ;
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EB0A7u); RECOMP_ABI_CALL(0x001EA857u, sub_001EA857); /* call 0x001EA857 */

loc_001EB0A7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB0AFu); RECOMP_ABI_CALL(0x001E7996u, sub_001E7996); /* call 0x001E7996 */

loc_001EB0AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB0D5
 * Original: 0x001EB0D5 - 0x001EB179 (164 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB0D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB0D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB0F0; /* je: equal / zero */

loc_001EB0E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB0EDu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EB0ED: ;
    MEM32(esi + 0xC) = ebx;

loc_001EB0F0: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB102; /* je: equal / zero */

loc_001EB0F7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EB0FFu); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_001EB0FF: ;
    MEM32(esi + 0x10) = ebx;

loc_001EB102: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB114; /* je: equal / zero */

loc_001EB109: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EB111u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_001EB111: ;
    MEM32(esi + 0x18) = ebx;

loc_001EB114: ;
    _fa = (uint32_t)(MEM32(esi + 0x1773C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1773C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB135; /* je: equal / zero */

loc_001EB11C: ;
    ecx = esi;
    PUSH32(esp, 0x001EB123u); RECOMP_ABI_CALL(0x001EA415u, sub_001EA415); /* call 0x001EA415 */

loc_001EB123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB135; /* jl: less (signed <) */

loc_001EB127: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0x001EB131u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EB131: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB127; /* je: equal / zero */

loc_001EB135: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB147; /* je: equal / zero */

loc_001EB13C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EB144u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_001EB144: ;
    MEM32(esi + 0x14) = ebx;

loc_001EB147: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = edi;
    PUSH32(esp, 0x1EA778);
    PUSH32(esp, 0x1EB01F);
    PUSH32(esp, 0x001EB15Cu); RECOMP_ABI_CALL(0x001E67C9u, sub_001E67C9); /* call 0x001E67C9 */

loc_001EB15C: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x808E);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + eax * 4 + 0x1840) = ebx;
    PUSH32(esp, 0x001EB173u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001EB173: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB179
 * Original: 0x001EB179 - 0x001EB24C (211 bytes, 70 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB179(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB179: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x17738);
    eax = MEM32(edi + 0xC);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = 0x1500F1;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB1A7; /* je: equal / zero */

loc_001EB19B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB1A1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EB1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB1A7; /* jne: not equal / not zero */

loc_001EB1A5: ;
    esi = ebx;

loc_001EB1A7: ;
    _fa = (uint32_t)(MEM32(edi + 0x17734)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x17734), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB1C0; /* je: equal / zero */

loc_001EB1B0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001EB1B8u); RECOMP_ABI_CALL(0x001EAA7Cu, sub_001EAA7C); /* call 0x001EAA7C */

loc_001EB1B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001EB243; /* jl: less (signed <) */

loc_001EB1C0: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x164), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB1F1; /* je: equal / zero */

loc_001EB1CC: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001EB1D4u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EB1D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001EB1EF; /* jge: greater or equal (signed >=) */

loc_001EB1D8: ;
    eax = MEM32(edi + 0x10);
    MEM32(eax + 0x164) = 3;
    MEM32(edi + 0x17734) = 1;

loc_001EB1EF: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EB1F1: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x164), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB205; /* je: equal / zero */

loc_001EB1FD: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001EB205u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EB205: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x164), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB22A; /* je: equal / zero */

loc_001EB211: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001EB219u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EB219: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB22A; /* je: equal / zero */

loc_001EB21D: ;
    ecx = edi;
    PUSH32(esp, 0x001EB224u); RECOMP_ABI_CALL(0x001EADCFu, sub_001EADCF); /* call 0x001EADCF */

loc_001EB224: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001EB22A; /* jl: less (signed <) */

loc_001EB228: ;
    esi = ebx;

loc_001EB22A: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = ebp + 0x1580;
    PUSH32(esp, 0x001EB238u); RECOMP_ABI_CALL(0x002052E2u, sub_002052E2); /* call 0x002052E2 */

loc_001EB238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB243; /* je: equal / zero */

loc_001EB23C: ;
    ecx = edi;
    PUSH32(esp, 0x001EB243u); RECOMP_ABI_CALL(0x001EA4B3u, sub_001EA4B3); /* call 0x001EA4B3 */

loc_001EB243: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB24C
 * Original: 0x001EB24C - 0x001EB2F9 (173 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB24C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB24C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x28));
    esi = eax + eax * 4;
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x1EB089);
    PUSH32(esp, 0x1EA8BA);
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(esi + 0xAA67D0));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB294u); RECOMP_ABI_CALL(0x001E9CAAu, sub_001E9CAA); /* call 0x001E9CAA */

loc_001EB294: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xAA67C8));
    esi = MEM32(ebp + -4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB2A5u); RECOMP_ABI_CALL(0x001E873Eu, sub_001E873E); /* call 0x001E873E */

loc_001EB2A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB2EF; /* jl: less (signed <) */

loc_001EB2AC: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(edi);
    eax = esi + 0x14C8;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB2DCu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001EB2DC: ;
    eax = MEM32(ebx);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EB2EF: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001EB2F9
 * Original: 0x001EB2F9 - 0x001EB553 (602 bytes, 165 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB2F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB2F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB30D; /* jne: not equal / not zero */

loc_001EB303: ;
    eax = 0x80150005u;
    goto loc_001EB510;

loc_001EB30D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0xAA6860);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB31Du); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EB31D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB50D; /* jl: less (signed <) */

loc_001EB327: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB32Fu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001EB32F: ;
    PUSH32(esp, 0x808E);
    PUSH32(esp, 0x1C578);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB340u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB340: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB34A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB352u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001EB352: ;
    eax = MEM32(ebp + 8);
    ecx = ebx + 0x20;
    MEM32(ebx) = 0x1EB179;
    MEM32(ebx + 4) = 0x1EB0D5;
    MEM32(ebx + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB36Du); RECOMP_ABI_CALL(0x001EAA4Du, sub_001EAA4D); /* call 0x001EAA4D */

loc_001EB36D: ;
    PUSH32(esp, 0x809C);
    PUSH32(esp, 0x2C8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB37Eu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB37E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB38B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, 0xAA67C8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB39Bu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_001EB39B: ;
    PUSH32(esp, 0x412);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB3A5u); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001EB3A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB3AEu); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_001EB3AE: ;
    eax = 0x1F6A;
    PUSH32(esp, 0x8F);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x1E9F0D;
    MEM32(esi + 0x198) = 0x1E9F5B;
    MEM32(esi + 0x180) = 0x809C;
    MEM32(esi + 0x164) = 3;
    MEM32(esi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB3EAu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB3EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x16C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB3F8: ;
    PUSH32(esp, 0x809D);
    PUSH32(esp, 0x2C8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB409u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB409: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB416: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, 0xAA67C8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB426u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_001EB426: ;
    PUSH32(esp, 0x413);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB430u); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001EB430: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB439u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_001EB439: ;
    PUSH32(esp, 0x28);
    POP32(esp, eax);
    PUSH32(esp, 0x8F);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x1E9F0D;
    MEM32(esi + 0x198) = 0x1E9F5B;
    MEM32(esi + 0x180) = 0x809D;
    MEM32(esi + 0x164) = 3;
    MEM32(esi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB473u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB473: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x16C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB47D: ;
    PUSH32(esp, 0x809E);
    PUSH32(esp, 0x1A50);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB48Eu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB48E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB4FB; /* je: equal / zero */

loc_001EB497: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, 0xAA67DC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB4A7u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_001EB4A7: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB4AEu); RECOMP_ABI_CALL(0x001F8F7Au, sub_001F8F7A); /* call 0x001F8F7A */

loc_001EB4AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB4B7u); RECOMP_ABI_CALL(0x00210F89u, sub_00210F89); /* call 0x00210F89 */

loc_001EB4B7: ;
    PUSH32(esp, 0x34);
    POP32(esp, eax);
    PUSH32(esp, 0x8F);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x1E9F34;
    MEM32(esi + 0x198) = 0x1E9F5B;
    MEM32(esi + 0x180) = 0x809E;
    MEM32(esi + 0x164) = 3;
    MEM32(esi + 0x170) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB4F1u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001EB4F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x16C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001EB515; /* jne: not equal / not zero */

loc_001EB4FB: ;
    esi = 0x8007000Eu;

loc_001EB500: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB50C; /* je: equal / zero */

loc_001EB504: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB50Cu); RECOMP_ABI_CALL(0x001EB0D5u, sub_001EB0D5); /* call 0x001EB0D5 */

loc_001EB50C: ;
    POP32(esp, ebx);

loc_001EB50D: ;
    eax = esi;
    POP32(esp, esi);

loc_001EB510: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001EB515: ;
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB523u); RECOMP_ABI_CALL(0x001F8E93u, sub_001F8E93); /* call 0x001F8E93 */

loc_001EB523: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB500; /* jl: less (signed <) */

loc_001EB529: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x1C574) = edi;
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1EA778);
    PUSH32(esp, 0x1EB01F);
    ecx = edi;
    MEM32(edi + eax * 4 + 0x1840) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB551u); RECOMP_ABI_CALL(0x001E66E6u, sub_001E66E6); /* call 0x001E66E6 */

loc_001EB551: ;
    goto loc_001EB50C;

}

/**
 * sub_001EB553
 * Original: 0x001EB553 - 0x001EB56D (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB553(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB553: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EB56D(); return; } /* jne: not equal / not zero */

loc_001EB563: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001EB7FE(); return; /* tail jmp 0x001EB7FE */

}

/**
 * sub_001EB56D
 * Original: 0x001EB56D - 0x001EB5D0 (99 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB56D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB56D: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, 0xAA6874);
    ecx = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x001EB587u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EB587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EB7DA(); return; } /* jl: less (signed <) */

loc_001EB592: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EB5D0(); return; } /* je: equal / zero */

loc_001EB59C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EB5AFu); RECOMP_ABI_CALL(0x001E6334u, sub_001E6334); /* call 0x001E6334 */

loc_001EB5AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80155A03u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80155A03u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EB610(); return; } /* jne: not equal / not zero */

loc_001EB5B6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB5BEu); RECOMP_ABI_CALL(0x001E685Fu, sub_001E685F); /* call 0x001E685F */

loc_001EB5BE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EB5F1(); return; } /* jae: above or equal (unsigned >=) */

loc_001EB5C4: ;
    MEM32(ebp + -16) = 0x80150001u;
    g_seh_ebp = ebp; sub_001EB7D9(); return; /* tail jmp 0x001EB7D9 */

}

/**
 * sub_001EB5D0
 * Original: 0x001EB5D0 - 0x001EB5F1 (33 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB5D0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001EB5E3u); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001EB5E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EB7D9(); return; } /* jl: less (signed <) */

loc_001EB5EE: ;
    edi = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_001EB5F1(); return; /* fallthrough 0x001EB5F1 */

}

/**
 * sub_001EB5F1
 * Original: 0x001EB5F1 - 0x001EB610 (31 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB5F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB5F1: ;
    PUSH32(esp, ebx);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB605u); RECOMP_ABI_CALL(0x001E6051u, sub_001E6051); /* call 0x001E6051 */

loc_001EB605: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EB7D9(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001EB610(); return; /* fallthrough 0x001EB610 */

}

/**
 * sub_001EB610
 * Original: 0x001EB610 - 0x001EB7D9 (457 bytes, 147 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB610: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0xAA6874);
    PUSH32(esp, 0x001EB626u); RECOMP_ABI_CALL(0x001E71E9u, sub_001E71E9); /* call 0x001E71E9 */

loc_001EB626: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EB7D9(); return; } /* jl: less (signed <) */

loc_001EB631: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB639u); RECOMP_ABI_CALL(0x001E6886u, sub_001E6886); /* call 0x001E6886 */

loc_001EB639: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0x20) = eax;
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = eax;
    eax = eax + ecx * 8 + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x417);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EB670u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EB670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EB7D9(); return; } /* jl: less (signed <) */

loc_001EB67B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xD0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(eax + ecx);
    ebx = MEM32(ebp + -4);
    MEM32(ebx + 0x20) = edx;
    eax = MEM32(eax + ecx + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x24) = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB6A2u); RECOMP_ABI_CALL(0x001E6852u, sub_001E6852); /* call 0x001E6852 */

loc_001EB6A2: ;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(esi + 4);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EB6BFu); RECOMP_ABI_CALL(0x001E6848u, sub_001E6848); /* call 0x001E6848 */

loc_001EB6BF: ;
    ecx = MEM32(ebp + -4);
    ebx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(ebp + 0x20));
    MEM16(eax + 0x38) = LO16(ebx);
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x3A) = LO16(ecx);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EB6FC; /* jbe: below or equal (unsigned <=) */

loc_001EB6E4: ;
    ecx = MEM32(ebp + 0x10);
    edx = ebx;

loc_001EB6E9: ;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EB6E9; /* jne: not equal / not zero */

loc_001EB6FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001EB70Au); RECOMP_ABI_CALL(0x001E68ADu, sub_001E68AD); /* call 0x001E68AD */

loc_001EB70A: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EB714u); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EB714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB7D7; /* jl: less (signed <) */

loc_001EB71F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB733; /* je: equal / zero */

loc_001EB725: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EB72Fu); RECOMP_ABI_CALL(0x001E6875u, sub_001E6875); /* call 0x001E6875 */

loc_001EB72F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EB733: ;
    eax = MEM32(ebp + 8);
    ecx = eax + eax * 8;
    edi = esi + ecx * 8;
    ecx = MEM32(ebp + 0x14);
    MEM32(edi + 0x13C4) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(edi + 0x13C8) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7CB; /* je: equal / zero */

loc_001EB757: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EB75Fu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001EB75F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7CB; /* je: equal / zero */

loc_001EB763: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EB7B6; /* jbe: below or equal (unsigned <=) */

loc_001EB767: ;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + 8) = eax;

loc_001EB770: ;
    PUSH32(esp, MEM32(ebx + 4));
    ecx = esi;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(edi + 0x13D4));
    PUSH32(esp, 0x001EB782u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001EB782: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7AE; /* je: equal / zero */

loc_001EB786: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7AE; /* je: equal / zero */

loc_001EB78C: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB7AE; /* jne: not equal / not zero */

loc_001EB792: ;
    PUSH32(esp, 0x4000000);
    PUSH32(esp, 0x30000000);
    PUSH32(esp, MEM32(ebx + 4));
    ecx = esi;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(edi + 0x13D4));
    PUSH32(esp, 0x001EB7AEu); RECOMP_ABI_CALL(0x001FB80Fu, sub_001FB80F); /* call 0x001FB80F */

loc_001EB7AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EB770; /* jne: not equal / not zero */

loc_001EB7B6: ;
    eax = MEM32(edi + 0x13DC);
    MEM32(edi + 0x13B4) = MEM32(edi + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001EB7CBu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001EB7CB: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x28);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

loc_001EB7D7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001EB7D9(); return; /* fallthrough 0x001EB7D9 */

}

/**
 * sub_001EB7D9
 * Original: 0x001EB7D9 - 0x001EB7DA (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB7D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB7D9: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001EB7DA(); return; /* fallthrough 0x001EB7DA */

}

/**
 * sub_001EB7DA
 * Original: 0x001EB7DA - 0x001EB7FE (36 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB7DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB7DA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7EC; /* je: equal / zero */

loc_001EB7DF: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, 0x001EB7E9u); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001EB7E9: ;
    MEM32(ebp + -12) = ebx;

loc_001EB7EC: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7FB; /* je: equal / zero */

loc_001EB7F1: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EB7FBu); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EB7FB: ;
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_001EB7FE(); return; /* fallthrough 0x001EB7FE */

}

/**
 * sub_001EB7FE
 * Original: 0x001EB7FE - 0x001EB804 (6 bytes, 4 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB7FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB7FE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001EB804
 * Original: 0x001EB804 - 0x001EB9E2 (478 bytes, 161 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB804(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB804: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB81E; /* jne: not equal / not zero */

loc_001EB814: ;
    eax = 0x80150005u;
    goto loc_001EB9DC;

loc_001EB81E: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA688C);
    ecx = ebx;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB837u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EB837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB9C8; /* jl: less (signed <) */

loc_001EB842: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x3F4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB868u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EB868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB9C8; /* jl: less (signed <) */

loc_001EB873: ;
    ecx = MEM32(ebx + 0xD0);
    esi = MEM32(ebp + -4);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 2 (32-bit) */
    edx = MEM32(eax + ecx);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(eax + ecx + 4);
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebp + 0xC);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001EB8CB; /* jne: not equal / not zero */

loc_001EB8C0: ;
    MEM16(eax + 0x38) = 2;
    goto loc_001EB950;

loc_001EB8CB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB94B; /* jne: not equal / not zero */

loc_001EB8D1: ;
    MEM16(eax + 0x38) = 1;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB8E6; /* jne: not equal / not zero */

loc_001EB8DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB950; /* jne: not equal / not zero */

loc_001EB8E6: ;
    PUSH32(esp, 0x15);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -104;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(esi);
    MEM32(ebp + -104) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebp + -100) = eax;
    PUSH32(esp, 0xF);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB90Cu); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001EB90C: ;
    eax = MEM32(esi + 0x1C);
    MEM32(ebp + -56) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(ebp + -64) = eax;
    eax = MEM32(esi + 0x24);
    MEM32(ebp + -60) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + -72) = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -68) = eax;
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB93Bu); RECOMP_ABI_CALL(0x001F976Au, sub_001F976A); /* call 0x001F976A */

loc_001EB93B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB9C8; /* jl: less (signed <) */

loc_001EB946: ;
    edi = MEM32(ebp + 8);
    goto loc_001EB950;

loc_001EB94B: ;
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_001EB950: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB95Au); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EB95A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EB9C8; /* jl: less (signed <) */

loc_001EB961: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB9BC; /* je: equal / zero */

loc_001EB96A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB972u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001EB972: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB9BC; /* je: equal / zero */

loc_001EB976: ;
    PUSH32(esp, MEM32(esi + 0x24));
    eax = edi + edi * 8;
    PUSH32(esp, MEM32(esi + 0x20));
    edi = ebx + eax * 8;
    PUSH32(esp, MEM32(esi + 4));
    ecx = ebx;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi + 0x13D4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB994u); RECOMP_ABI_CALL(0x001FB8DAu, sub_001FB8DA); /* call 0x001FB8DA */

loc_001EB994: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB9A7; /* jne: not equal / not zero */

loc_001EB99A: ;
    PUSH32(esp, MEM32(edi + 0x13D4));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB9A7u); RECOMP_ABI_CALL(0x001FB951u, sub_001FB951); /* call 0x001FB951 */

loc_001EB9A7: ;
    eax = MEM32(edi + 0x13DC);
    MEM32(edi + 0x13B4) = MEM32(edi + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB9BCu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001EB9BC: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

loc_001EB9C8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB9D9; /* je: equal / zero */

loc_001EB9CF: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB9D9u); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EB9D9: ;
    eax = MEM32(ebp + -12);

loc_001EB9DC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EB9E2
 * Original: 0x001EB9E2 - 0x001EBB83 (417 bytes, 141 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB9E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB9E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB9FC; /* jne: not equal / not zero */

loc_001EB9F2: ;
    eax = 0x80150005u;
    goto loc_001EBB7D;

loc_001EB9FC: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA68A4);
    ecx = esi;
    MEM32(ebp + -4) = edi;
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBA15u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EBA15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EBB69; /* jl: less (signed <) */

loc_001EBA20: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    eax = eax * 8 + 0x32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F3);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBA4Fu); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EBA4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EBB69; /* jl: less (signed <) */

loc_001EBA5A: ;
    ecx = MEM32(esi + 0xD0);
    edi = MEM32(ebp + 8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(eax + ecx);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(eax + ecx + 4);
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0x30) = LO16(edi);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EBAB9; /* jbe: below or equal (unsigned <=) */

loc_001EBA9E: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = edi;

loc_001EBAA4: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBAA4; /* jne: not equal / not zero */

loc_001EBAB9: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBAC3u); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EBAC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EBB69; /* jl: less (signed <) */

loc_001EBACE: ;
    _fa = (uint32_t)(MEM32(esi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBB5D; /* je: equal / zero */

loc_001EBADB: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBAE3u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001EBAE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBB5D; /* je: equal / zero */

loc_001EBAE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EBB42; /* jbe: below or equal (unsigned <=) */

loc_001EBAEB: ;
    edi = MEM32(ebp + 0x10);
    eax = ebx + ebx * 8;
    eax = esi + eax * 8 + 0x13D4;
    MEM32(ebp + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;

loc_001EBB01: ;
    PUSH32(esp, MEM32(edi + 4));
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBB12u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001EBB12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBB3A; /* je: equal / zero */

loc_001EBB16: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBB3A; /* je: equal / zero */

loc_001EBB1C: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EBB3A; /* jne: not equal / not zero */

loc_001EBB22: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34000000);
    PUSH32(esp, MEM32(edi + 4));
    ecx = esi;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBB3Au); RECOMP_ABI_CALL(0x001FB80Fu, sub_001FB80F); /* call 0x001FB80F */

loc_001EBB3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBB01; /* jne: not equal / not zero */

loc_001EBB42: ;
    eax = ebx + ebx * 8;
    eax = esi + eax * 8;
    MEM32(eax + 0x13B4) = MEM32(eax + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(eax + 0x13DC);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBB5Du); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001EBB5D: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

loc_001EBB69: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EBB7A; /* je: equal / zero */

loc_001EBB70: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EBB7Au); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EBB7A: ;
    eax = MEM32(ebp + -8);

loc_001EBB7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EBB83
 * Original: 0x001EBB83 - 0x001EBB9C (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EBB83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBB83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBB9C(); return; } /* jne: not equal / not zero */

loc_001EBB92: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001EBD9D(); return; /* tail jmp 0x001EBD9D */

}

/**
 * sub_001EBB9C
 * Original: 0x001EBB9C - 0x001EBBD6 (58 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBB9C: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0xAA68BC);
    ecx = esi;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x001EBBB9u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EBBB9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EBD75(); return; } /* jl: less (signed <) */

loc_001EBBC3: ;
    _fa = (uint32_t)(MEM32(esi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBBD6(); return; } /* jne: not equal / not zero */

loc_001EBBCC: ;
    ebx = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001EBD75(); return; /* tail jmp 0x001EBD75 */

}

/**
 * sub_001EBBD6
 * Original: 0x001EBBD6 - 0x001EBBFA (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBBD6: ;
    eax = MEM32(esi + 0xD0);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBBFA(); return; } /* jne: not equal / not zero */

loc_001EBBE7: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBBFA(); return; } /* jne: not equal / not zero */

loc_001EBBF0: ;
    ebx = 0x8015200Au;
    g_seh_ebp = ebp; sub_001EBD75(); return; /* tail jmp 0x001EBD75 */

}

/**
 * sub_001EBBFA
 * Original: 0x001EBBFA - 0x001EBC24 (42 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBBFA: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EBC05u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001EBC05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBC48(); return; } /* je: equal / zero */

loc_001EBC09: ;
    eax = ebx + ebx * 8;
    eax = MEM32(esi + eax * 8 + 0x13D4);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 0x64 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBC24(); return; } /* jb: below (unsigned <) */

loc_001EBC1A: ;
    ebx = 0x80152002u;
    g_seh_ebp = ebp; sub_001EBD75(); return; /* tail jmp 0x001EBD75 */

}

/**
 * sub_001EBC24
 * Original: 0x001EBC24 - 0x001EBC48 (36 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBC24: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EBC32u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001EBC32: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBC4A(); return; } /* je: equal / zero */

loc_001EBC38: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBC4A(); return; } /* je: equal / zero */

loc_001EBC3E: ;
    ebx = 0x80152007u;
    g_seh_ebp = ebp; sub_001EBD75(); return; /* tail jmp 0x001EBD75 */

}

/**
 * sub_001EBC48
 * Original: 0x001EBC48 - 0x001EBC4A (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBC48: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001EBC4A(); return; /* fallthrough 0x001EBC4A */

}

/**
 * sub_001EBC4A
 * Original: 0x001EBC4A - 0x001EBD75 (299 bytes, 108 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBC4A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBC75; /* jne: not equal / not zero */

loc_001EBC4F: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x001EBC62u); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001EBC62: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EBD75(); return; } /* jl: less (signed <) */

loc_001EBC6C: ;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 0x18) = eax;

loc_001EBC75: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA68BC);
    PUSH32(esp, 0x001EBC8Bu); RECOMP_ABI_CALL(0x001E71E9u, sub_001E71E9); /* call 0x001E71E9 */

loc_001EBC8B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EBD75(); return; } /* jl: less (signed <) */

loc_001EBC95: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi;
    PUSH32(esp, 0x001EBC9Fu); RECOMP_ABI_CALL(0x001E6886u, sub_001E6886); /* call 0x001E6886 */

loc_001EBC9F: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ZX16(LO16(eax));
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x416);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001EBCD6u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EBCD6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EBD75(); return; } /* jl: less (signed <) */

loc_001EBCE0: ;
    eax = MEM32(esi + 0xD0);
    ecx = MEM32(edi + eax);
    edx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(edi + eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x10);
    MEM32(ecx + 0x2C) = eax;
    ecx = esi;
    PUSH32(esp, 0x001EBD15u); RECOMP_ABI_CALL(0x001E6848u, sub_001E6848); /* call 0x001E6848 */

loc_001EBD15: ;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0x34) = LO16(ecx);
    edi = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x36) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x36;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001EBD46u); RECOMP_ABI_CALL(0x001E68ADu, sub_001E68AD); /* call 0x001E68AD */

loc_001EBD46: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EBD50u); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EBD50: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EBD75(); return; } /* jl: less (signed <) */

loc_001EBD56: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBD6A; /* je: equal / zero */

loc_001EBD5D: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EBD67u); RECOMP_ABI_CALL(0x001E6875u, sub_001E6875); /* call 0x001E6875 */

loc_001EBD67: ;
    MEM32(ebp + -12) = edi;

loc_001EBD6A: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    MEM32(ebp + -8) = edi;

    g_seh_ebp = ebp; sub_001EBD75(); return; /* fallthrough 0x001EBD75 */

}

/**
 * sub_001EBD75
 * Original: 0x001EBD75 - 0x001EBD9D (40 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBD75: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBD89; /* je: equal / zero */

loc_001EBD7B: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, 0x001EBD85u); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001EBD85: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EBD89: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBD99; /* je: equal / zero */

loc_001EBD8F: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0x001EBD99u); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EBD99: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001EBD9D(); return; /* fallthrough 0x001EBD9D */

}

/**
 * sub_001EBD9D
 * Original: 0x001EBD9D - 0x001EBDA2 (5 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBD9D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EBDA2
 * Original: 0x001EBDA2 - 0x001EBDBC (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EBDA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBDA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBDBC(); return; } /* jne: not equal / not zero */

loc_001EBDB2: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001EC054(); return; /* tail jmp 0x001EC054 */

}

/**
 * sub_001EBDBC
 * Original: 0x001EBDBC - 0x001EBE00 (68 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBDBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBDBC: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA68D4);
    ecx = ebx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(eax) = edi;
    PUSH32(esp, 0x001EBDD8u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EBDD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EC02D(); return; } /* jl: less (signed <) */

loc_001EBDE3: ;
    eax = esi + esi * 8;
    eax = ebx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 0x13E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x13E8), edi (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBE00(); return; } /* je: equal / zero */

loc_001EBDF4: ;
    MEM32(ebp + -4) = 0x80150009u;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EBE00
 * Original: 0x001EBE00 - 0x001EBE6D (109 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBE00: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_001EBE06: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBE06; /* jne: not equal / not zero */

loc_001EBE0D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC026(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EBE1D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x10 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC026(); return; } /* ja: above (unsigned >) */

loc_001EBE27: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14D0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC01D(); return; } /* je: equal / zero */

loc_001EBE33: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001EBE3Bu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001EBE3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC01D(); return; } /* je: equal / zero */

loc_001EBE43: ;
    eax = MEM32(ebx + 0xD0);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = edi + eax + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001EBE5Bu); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_001EBE5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBE6D(); return; } /* jne: not equal / not zero */

loc_001EBE61: ;
    MEM32(ebp + -4) = 0x8015200Au;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EBE6D
 * Original: 0x001EBE6D - 0x001EBE89 (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBE6D: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x13D4);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 0x64 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBE89(); return; } /* jb: below (unsigned <) */

loc_001EBE7D: ;
    MEM32(ebp + -4) = 0x80152002u;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EBE89
 * Original: 0x001EBE89 - 0x001EBEAC (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBE89: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EBE94u); RECOMP_ABI_CALL(0x001F9F12u, sub_001F9F12); /* call 0x001F9F12 */

loc_001EBE94: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBEAC(); return; } /* je: equal / zero */

loc_001EBE9A: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EBEAC(); return; } /* je: equal / zero */

loc_001EBEA0: ;
    MEM32(ebp + -4) = 0x80152007u;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EBEAC
 * Original: 0x001EBEAC - 0x001EC01D (369 bytes, 131 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBEAC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBED7; /* jne: not equal / not zero */

loc_001EBEB1: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0x001EBEC4u); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001EBEC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EC02D(); return; } /* jl: less (signed <) */

loc_001EBECF: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + 0x10) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EBED7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA68D4);
    PUSH32(esp, 0x001EBEE9u); RECOMP_ABI_CALL(0x001E71E9u, sub_001E71E9); /* call 0x001E71E9 */

loc_001EBEE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EC02D(); return; } /* jl: less (signed <) */

loc_001EBEF4: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x001EBEFEu); RECOMP_ABI_CALL(0x001E6886u, sub_001E6886); /* call 0x001E6886 */

loc_001EBEFE: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ZX16(LO16(esi));
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x416);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001EBF34u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EBF34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EC02D(); return; } /* jl: less (signed <) */

loc_001EBF3F: ;
    eax = MEM32(ebx + 0xD0);
    ecx = MEM32(edi + eax);
    edx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(edi + eax + 4);
    ecx = MEM32(ebp + -8);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    PUSH32(esp, 0x001EBF70u); RECOMP_ABI_CALL(0x001E6848u, sub_001E6848); /* call 0x001E6848 */

loc_001EBF70: ;
    ecx = MEM32(ebp + -8);
    edx = ZX16(MEM16(ebp + -28));
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x34) = LO16(esi);
    edi = MEM32(ebp + -8);
    esi = MEM32(ebp + 0xC);
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x36) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x36;
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
    esi = MEM32(ebp + -8);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx + esi + 0x36;
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
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -32));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x001EBFCAu); RECOMP_ABI_CALL(0x001E68ADu, sub_001E68AD); /* call 0x001E68AD */

loc_001EBFCA: ;
    PUSH32(esp, 0x001EBFCFu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EBFCF: ;
    ecx = MEM32(ebp + -20);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBFE1; /* jne: not equal / not zero */

loc_001EBFDE: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EBFE1: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -24);
    MEM32(ecx + 0x13E8) = eax;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001EBFF5u); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EBFF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EC02D(); return; } /* jl: less (signed <) */

loc_001EBFFC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC010; /* je: equal / zero */

loc_001EC003: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    PUSH32(esp, 0x001EC00Du); RECOMP_ABI_CALL(0x001E6875u, sub_001E6875); /* call 0x001E6875 */

loc_001EC00D: ;
    MEM32(ebp + -16) = esi;

loc_001EC010: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    MEM32(ebp + -12) = esi;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EC01D
 * Original: 0x001EC01D - 0x001EC026 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC01D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC01D: ;
    MEM32(ebp + -4) = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001EC02D(); return; /* tail jmp 0x001EC02D */

}

/**
 * sub_001EC026
 * Original: 0x001EC026 - 0x001EC02D (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC026(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC026: ;
    MEM32(ebp + -4) = 0x80070057u;

    g_seh_ebp = ebp; sub_001EC02D(); return; /* fallthrough 0x001EC02D */

}

/**
 * sub_001EC02D
 * Original: 0x001EC02D - 0x001EC054 (39 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC02D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC02D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC041; /* je: equal / zero */

loc_001EC034: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = ebx;
    PUSH32(esp, 0x001EC03Eu); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001EC03E: ;
    MEM32(ebp + -16) = esi;

loc_001EC041: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC051; /* je: equal / zero */

loc_001EC047: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    PUSH32(esp, 0x001EC051u); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EC051: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001EC054(); return; /* fallthrough 0x001EC054 */

}

/**
 * sub_001EC054
 * Original: 0x001EC054 - 0x001EC05A (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC054(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC054: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EC05A
 * Original: 0x001EC05A - 0x001EC25C (514 bytes, 183 insns)
 * Category: game_network
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC05A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC05A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC073; /* jne: not equal / not zero */

loc_001EC069: ;
    eax = 0x80150005u;
    goto loc_001EC257;

loc_001EC073: ;
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ecx) = eax;
    esi = 0xAA68F4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC090u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EC090: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC22F; /* jl: less (signed <) */

loc_001EC09C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC0C9; /* jne: not equal / not zero */

loc_001EC0A1: ;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC0B9u); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001EC0B9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC22F; /* jl: less (signed <) */

loc_001EC0C3: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x28) = eax;

loc_001EC0C9: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC0DDu); RECOMP_ABI_CALL(0x001E71E9u, sub_001E71E9); /* call 0x001E71E9 */

loc_001EC0DD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC22F; /* jl: less (signed <) */

loc_001EC0E7: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC0F1u); RECOMP_ABI_CALL(0x001E6886u, sub_001E6886); /* call 0x001E6886 */

loc_001EC0F1: ;
    esi = MEM32(ebp + 0x24);
    ecx = ZX16(MEM16(esi + 4));
    MEM32(ebp + -16) = eax;
    eax = ZX16(LO16(eax));
    MEM32(ebp + 0x24) = eax;
    eax = ecx + eax + 0x58;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x45A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40F);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC133u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EC133: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC22F; /* jl: less (signed <) */

loc_001EC13D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0xD0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(eax + ecx);
    edi = MEM32(ebp + -4);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(eax + ecx + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x24) = eax;
    eax = ebx + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC16C; /* jne: not equal / not zero */

loc_001EC167: ;
    ecx = MEM32(ebx + 4);
    MEM32(eax) = ecx;

loc_001EC16C: ;
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(ecx + 0x38) = eax;
    edi = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    ecx = MEM32(ebp + -4);
    eax = MEM32(esi);
    MEM32(ecx + 0x4C) = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC1B6u); RECOMP_ABI_CALL(0x001E6848u, sub_001E6848); /* call 0x001E6848 */

loc_001EC1B6: ;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x50) = eax;
    ecx = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(esi + 4));
    MEM16(ecx + 0x54) = LO16(eax);
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0x56) = LO16(ecx);
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC1E6u); RECOMP_ABI_CALL(0x001E68ADu, sub_001E68AD); /* call 0x001E68AD */

loc_001EC1E6: ;
    ecx = ZX16(MEM16(esi + 4));
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC20Au); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EC20A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC22F; /* jl: less (signed <) */

loc_001EC210: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC224; /* je: equal / zero */

loc_001EC217: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC221u); RECOMP_ABI_CALL(0x001E6875u, sub_001E6875); /* call 0x001E6875 */

loc_001EC221: ;
    MEM32(ebp + -12) = esi;

loc_001EC224: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x30);
    MEM32(ecx) = eax;
    MEM32(ebp + -8) = esi;

loc_001EC22F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC243; /* je: equal / zero */

loc_001EC235: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC23Fu); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001EC23F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EC243: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC253; /* je: equal / zero */

loc_001EC249: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC253u); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EC253: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001EC257: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001EC25C
 * Original: 0x001EC25C - 0x001EC464 (520 bytes, 183 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC25C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC25C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC276; /* jne: not equal / not zero */

loc_001EC26C: ;
    eax = 0x80150005u;
    goto loc_001EC45E;

loc_001EC276: ;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0xAA6910;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC292u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EC292: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC439; /* jl: less (signed <) */

loc_001EC29D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC2CB; /* jne: not equal / not zero */

loc_001EC2A2: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC2BAu); RECOMP_ABI_CALL(0x001E5F1Du, sub_001E5F1D); /* call 0x001E5F1D */

loc_001EC2BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC439; /* jl: less (signed <) */

loc_001EC2C5: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x20) = eax;

loc_001EC2CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC2DBu); RECOMP_ABI_CALL(0x001E71E9u, sub_001E71E9); /* call 0x001E71E9 */

loc_001EC2DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC439; /* jl: less (signed <) */

loc_001EC2E6: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC2F0u); RECOMP_ABI_CALL(0x001E6886u, sub_001E6886); /* call 0x001E6886 */

loc_001EC2F0: ;
    esi = MEM32(ebp + 0x1C);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    MEM32(ebp + -20) = eax;
    PUSH32(esp, MEM32(ebp + 0x20));
    edi = ZX16(LO16(eax));
    PUSH32(esp, MEM32(ebp + 8));
    eax = ZX16(MEM16(esi + 4));
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x45A);
    eax = eax + edi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40F);
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC32Fu); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EC32F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC437; /* jl: less (signed <) */

loc_001EC33A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0xD0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(ebp + -4);
    MEM32(ebp + 8) = eax;
    eax = MEM32(eax + ecx);
    MEM32(edx + 0x20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + ecx + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x24) = eax;
    eax = ebx + 0x1854;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC370; /* jne: not equal / not zero */

loc_001EC36B: ;
    edx = MEM32(ebx + 4);
    MEM32(eax) = edx;

loc_001EC370: ;
    eax = MEM32(eax);
    edx = MEM32(ebp + -4);
    MEM32(edx + 0x28) = eax;
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x30) = edx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC3A7u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_001EC3A7: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(ecx + 0x4C) = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC3BCu); RECOMP_ABI_CALL(0x001E6848u, sub_001E6848); /* call 0x001E6848 */

loc_001EC3BC: ;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x50) = eax;
    ecx = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(esi + 4));
    MEM16(ecx + 0x54) = LO16(eax);
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax + 0x56) = LO16(ecx);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    MEM32(ebp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC3EDu); RECOMP_ABI_CALL(0x001E68ADu, sub_001E68AD); /* call 0x001E68AD */

loc_001EC3ED: ;
    ecx = ZX16(MEM16(esi + 4));
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC411u); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EC411: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC437; /* jl: less (signed <) */

loc_001EC418: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC42C; /* je: equal / zero */

loc_001EC41F: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC429u); RECOMP_ABI_CALL(0x001E6875u, sub_001E6875); /* call 0x001E6875 */

loc_001EC429: ;
    MEM32(ebp + -12) = esi;

loc_001EC42C: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x28);
    MEM32(ecx) = eax;
    MEM32(ebp + -8) = esi;

loc_001EC437: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EC439: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC44C; /* je: equal / zero */

loc_001EC43F: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC449u); RECOMP_ABI_CALL(0x001E6017u, sub_001E6017); /* call 0x001E6017 */

loc_001EC449: ;
    MEM32(ebp + -12) = edi;

loc_001EC44C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC45B; /* je: equal / zero */

loc_001EC451: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC45Bu); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EC45B: ;
    eax = MEM32(ebp + -16);

loc_001EC45E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001EC464
 * Original: 0x001EC464 - 0x001EC5CD (361 bytes, 127 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC464: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC47E; /* jne: not equal / not zero */

loc_001EC474: ;
    eax = 0x80150005u;
    goto loc_001EC5C7;

loc_001EC47E: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA6930);
    ecx = edi;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC497u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_001EC497: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC5B3; /* jl: less (signed <) */

loc_001EC4A2: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC4B2u); RECOMP_ABI_CALL(0x001E66C2u, sub_001E66C2); /* call 0x001E66C2 */

loc_001EC4B2: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EC4E1; /* jbe: below or equal (unsigned <=) */

loc_001EC4B8: ;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EC4BE: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC4D3; /* jne: not equal / not zero */

loc_001EC4C4: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC4D3; /* jne: not equal / not zero */

loc_001EC4CB: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC4DC; /* je: equal / zero */

loc_001EC4D3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC4BE; /* jb: below (unsigned <) */

loc_001EC4DC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC4ED; /* jb: below (unsigned <) */

loc_001EC4E1: ;
    MEM32(ebp + -12) = 0x8015210Bu;
    goto loc_001EC5B3;

loc_001EC4ED: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x45B);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x410);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC519u); RECOMP_ABI_CALL(0x001EB24Cu, sub_001EB24C); /* call 0x001EB24C */

loc_001EC519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC5B3; /* jl: less (signed <) */

loc_001EC524: ;
    eax = MEM32(edi + 0xD0);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    ecx = MEM32(ebx + eax);
    edx = MEM32(ebp + -4);
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(ebx + eax + 4);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x24) = eax;
    eax = edi + 0x1854;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC550; /* jne: not equal / not zero */

loc_001EC54B: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = ecx;

loc_001EC550: ;
    eax = MEM32(eax);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    ecx = MEM32(ebp + -4);
    ebx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(ebp + -20);
    eax = MEM32(esi + eax + 0x14);
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x38) = LO8(ebx);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC58Du); RECOMP_ABI_CALL(0x001E690Du, sub_001E690D); /* call 0x001E690D */

loc_001EC58D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001EC5B3; /* jl: less (signed <) */

loc_001EC594: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC59D; /* je: equal / zero */

loc_001EC598: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC5A7; /* jne: not equal / not zero */

loc_001EC59D: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC5A7u); RECOMP_ABI_CALL(0x0020F5C4u, sub_0020F5C4); /* call 0x0020F5C4 */

loc_001EC5A7: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

loc_001EC5B3: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC5C4; /* je: equal / zero */

loc_001EC5BA: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC5C4u); RECOMP_ABI_CALL(0x001EB089u, sub_001EB089); /* call 0x001EB089 */

loc_001EC5C4: ;
    eax = MEM32(ebp + -12);

loc_001EC5C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EC5D8
 * Original: 0x001EC5D8 - 0x001EC605 (45 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC5D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001EC5D8: ;
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
    PUSH32(esp, 0x001EC601u); RECOMP_ABI_CALL(0x001EB553u, sub_001EB553); /* call 0x001EB553 */

loc_001EC601: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001EC605
 * Original: 0x001EC605 - 0x001EC614 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC605(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001EC605: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001EB804(); return; /* tail jmp 0x001EB804 */

}

/**
 * sub_001EC614
 * Original: 0x001EC614 - 0x001EC63B (39 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC614(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001EC614: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EC637u); RECOMP_ABI_CALL(0x001EB9E2u, sub_001EB9E2); /* call 0x001EB9E2 */

loc_001EC637: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EC63B
 * Original: 0x001EC63B - 0x001EC668 (45 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC63B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC63B: ;
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
    PUSH32(esp, 0x001EC662u); RECOMP_ABI_CALL(0x001EBB83u, sub_001EBB83); /* call 0x001EBB83 */

loc_001EC662: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EC668
 * Original: 0x001EC668 - 0x001EC677 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001EC668: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A4);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001EBDA2(); return; /* tail jmp 0x001EBDA2 */

}

/**
 * sub_001EC677
 * Original: 0x001EC677 - 0x001EC6B2 (59 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC677(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC677: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x2C));
    esi = ebp + 0x18;
    PUSH32(esp, MEM32(ebp + 0x28));
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
    PUSH32(esp, 0x001EC6ACu); RECOMP_ABI_CALL(0x001EC05Au, sub_001EC05A); /* call 0x001EC05A */

loc_001EC6AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001EC6B2
 * Original: 0x001EC6B2 - 0x001EC6E5 (51 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC6B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC6B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(0x9701A4);
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
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
    PUSH32(esp, 0x001EC6DFu); RECOMP_ABI_CALL(0x001EC25Cu, sub_001EC25C); /* call 0x001EC25C */

loc_001EC6DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001EC6E5
 * Original: 0x001EC6E5 - 0x001EC712 (45 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC6E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC6E5: ;
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
    PUSH32(esp, 0x001EC70Cu); RECOMP_ABI_CALL(0x001EC464u, sub_001EC464); /* call 0x001EC464 */

loc_001EC70C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EC712
 * Original: 0x001EC712 - 0x001EC72D (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC712: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC72D(); return; } /* jne: not equal / not zero */

loc_001EC71F: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_001EC734(); return; /* tail jmp 0x001EC734 */

}

/**
 * sub_001EC72D
 * Original: 0x001EC72D - 0x001EC734 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC72D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC72D: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EC734(); return; /* fallthrough 0x001EC734 */

}

/**
 * sub_001EC734
 * Original: 0x001EC734 - 0x001EC73A (6 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC734(void)
{

loc_001EC734: ;
    eax = MEM32(eax + 0xC);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC749
 * Original: 0x001EC749 - 0x001EC764 (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC749(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC749: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC764
 * Original: 0x001EC764 - 0x001EC7AA (70 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC764(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC764: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC7AA(); return; } /* jne: not equal / not zero */

loc_001EC772: ;
    eax = MEM32(esi + 0x66C);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC795; /* je: equal / zero */

loc_001EC782: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC788u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EC788: ;
    eax = MEM32(esi + 0x66C);
    MEM32(eax + 0xA8) = MEM32(eax + 0xA8) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001EC795: ;
    eax = MEM32(esi + 0x66C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    MEM32(esi + 0x66C) = MEM32(esi + 0x66C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x66C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001EC7B1(); return; /* tail jmp 0x001EC7B1 */

}

/**
 * sub_001EC7AA
 * Original: 0x001EC7AA - 0x001EC7B1 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC7AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC7AA: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001EC7B1(); return; /* fallthrough 0x001EC7B1 */

}

/**
 * sub_001EC7B1
 * Original: 0x001EC7B1 - 0x001EC7B8 (7 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC7B1(void)
{

loc_001EC7B1: ;
    eax = MEM32(esi + 0xC);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC7C2
 * Original: 0x001EC7C2 - 0x001EC80B (73 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC7C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC7C2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EC7DA; /* je: equal / zero */

loc_001EC7D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC7DAu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EC7DA: ;
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC7EC; /* je: equal / zero */

loc_001EC7E4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EC7ECu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EC7EC: ;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC7FE; /* je: equal / zero */

loc_001EC7F6: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EC7FEu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EC7FE: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EC806u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EC806: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC80B
 * Original: 0x001EC80B - 0x001EC836 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC80B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC80B: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC836(); return; } /* jne: not equal / not zero */

loc_001EC818: ;
    eax = MEM32(ecx + 0xA4);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx + 0xB0;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EC83A(); return; /* tail jmp 0x001EC83A */

}

/**
 * sub_001EC836
 * Original: 0x001EC836 - 0x001EC83A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC836(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC836: ;
    eax = MEM32(esp + 8);

    g_seh_ebp = ebp; sub_001EC83A(); return; /* fallthrough 0x001EC83A */

}

/**
 * sub_001EC83A
 * Original: 0x001EC83A - 0x001EC843 (9 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC83A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC83A: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC843
 * Original: 0x001EC843 - 0x001EC86E (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC843(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC843: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC86E(); return; } /* jne: not equal / not zero */

loc_001EC850: ;
    eax = MEM32(ecx + 0x684);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx + 0x694;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EC872(); return; /* tail jmp 0x001EC872 */

}

/**
 * sub_001EC86E
 * Original: 0x001EC86E - 0x001EC872 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC86E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC86E: ;
    eax = MEM32(esp + 8);

    g_seh_ebp = ebp; sub_001EC872(); return; /* fallthrough 0x001EC872 */

}

/**
 * sub_001EC872
 * Original: 0x001EC872 - 0x001EC87B (9 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC872(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC872: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC87B
 * Original: 0x001EC87B - 0x001EC8CD (82 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC87B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC87B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3CC), ebx (32-bit) */
    ebp = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001EC8AB; /* jbe: below or equal (unsigned <=) */

loc_001EC88E: ;
    PUSH32(esp, edi);
    edi = esi + 0x3D0;

loc_001EC895: ;
    PUSH32(esp, MEM32(edi));
    ecx = ebp;
    PUSH32(esp, 0x001EC89Eu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EC89E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x3CC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC895; /* jb: below (unsigned <) */

loc_001EC8AA: ;
    POP32(esp, edi);

loc_001EC8AB: ;
    MEM32(esi + 0x3CC) = MEM32(esi + 0x3CC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3CC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = esi + 0x298;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001EC8BE: ;
    MEM32(eax) = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EC8BE; /* jne: not equal / not zero */

loc_001EC8CA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC8CD
 * Original: 0x001EC8CD - 0x001EC8D8 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC8CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC8D8(); return; } /* jne: not equal / not zero */

loc_001EC8D1: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001EC8DF(); return; /* tail jmp 0x001EC8DF */

}

/**
 * sub_001EC8D8
 * Original: 0x001EC8D8 - 0x001EC8DF (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC8D8: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);

    g_seh_ebp = ebp; sub_001EC8DF(); return; /* fallthrough 0x001EC8DF */

}

/**
 * sub_001EC8DF
 * Original: 0x001EC8DF - 0x001EC8E2 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8DF(void)
{

loc_001EC8DF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC8E2
 * Original: 0x001EC8E2 - 0x001EC90D (43 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC8E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC8ED; /* jne: not equal / not zero */

loc_001EC8E6: ;
    eax = 0x80150005u;
    goto loc_001EC90A;

loc_001EC8ED: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC906; /* je: equal / zero */

loc_001EC8FA: ;
    PUSH32(esp, esi);
    esi = eax + 0xBC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, esi);

loc_001EC906: ;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);

loc_001EC90A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC90D
 * Original: 0x001EC90D - 0x001EC92F (34 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC90D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC90D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC918; /* jne: not equal / not zero */

loc_001EC911: ;
    eax = 0x80150005u;
    goto loc_001EC92C;

loc_001EC918: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC929; /* je: equal / zero */

loc_001EC924: ;
    edx = MEM32(ecx + 0x34);
    MEM32(eax) = edx;

loc_001EC929: ;
    eax = MEM32(ecx + 0x30);

loc_001EC92C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC92F
 * Original: 0x001EC92F - 0x001EC974 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC92F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC92F: ;
    eax = ecx + 0x604;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC944; /* je: equal / zero */

loc_001EC93C: ;
    MEM32(eax) = edx;
    MEM32(ecx + 0x60C) = edx;

loc_001EC944: ;
    eax = ecx + 0x648;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC957; /* je: equal / zero */

loc_001EC94F: ;
    MEM32(eax) = edx;
    MEM32(ecx + 0x650) = edx;

loc_001EC957: ;
    eax = ecx + 0x68C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC96A; /* je: equal / zero */

loc_001EC962: ;
    MEM32(eax) = edx;
    MEM32(ecx + 0x694) = edx;

loc_001EC96A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC974
 * Original: 0x001EC974 - 0x001EC982 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC974(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC974: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC97B; /* jne: not equal / not zero */

loc_001EC978: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001EC97B: ;
    eax = ecx + 0x6B8;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC982
 * Original: 0x001EC982 - 0x001EC989 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EC982(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC982: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EC989(); return; } /* jne: not equal / not zero */

loc_001EC986: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC989
 * Original: 0x001EC989 - 0x001EC990 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC989(void)
{

loc_001EC989: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC990
 * Original: 0x001EC990 - 0x001EC9BE (46 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC990: ;
    ecx = MEM32(ecx + 0xD0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EC998: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC9AF; /* jne: not equal / not zero */

loc_001EC9A0: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC9AF; /* jne: not equal / not zero */

loc_001EC9A9: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC9BB; /* je: equal / zero */

loc_001EC9AF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC998; /* jb: below (unsigned <) */

loc_001EC9B8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001EC9BB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC9BE
 * Original: 0x001EC9BE - 0x001EC9CE (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC9BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC9CD; /* je: equal / zero */

loc_001EC9C4: ;
    _fa = (uint32_t)(MEM32(ecx + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xD0), eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_001EC9CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC9F3
 * Original: 0x001EC9F3 - 0x001ECA0D (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EC9F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC9F3: ;
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
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA0D(); return; } /* jne: not equal / not zero */

loc_001ECA06: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_001ECA92(); return; /* tail jmp 0x001ECA92 */

}

/**
 * sub_001ECA0D
 * Original: 0x001ECA0D - 0x001ECA2A (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + -8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -7;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    esi = MEM32(ebp + -8);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = edx;
    eax = ecx + 0xD8;

    g_seh_ebp = ebp; sub_001ECA2A(); return; /* fallthrough 0x001ECA2A */

}

/**
 * sub_001ECA2A
 * Original: 0x001ECA2A - 0x001ECA4D (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA2A: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA4D(); return; } /* jne: not equal / not zero */

loc_001ECA30: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ECA89(); return; } /* jl: less (signed <) */

loc_001ECA36: ;
    edx = MEM32(eax + 0xC);
    esi = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = eax;
    eax = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_001ECA56(); return; /* tail jmp 0x001ECA56 */

}

/**
 * sub_001ECA4D
 * Original: 0x001ECA4D - 0x001ECA56 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA4D: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ECA56(); return; } /* jl: less (signed <) */

loc_001ECA53: ;
    MEM32(ebp + -12) = ebx;

    g_seh_ebp = ebp; sub_001ECA56(); return; /* fallthrough 0x001ECA56 */

}

/**
 * sub_001ECA56
 * Original: 0x001ECA56 - 0x001ECA84 (46 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA56: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ECA2A(); return; } /* jl: less (signed <) */

loc_001ECA62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA89(); return; } /* je: equal / zero */

loc_001ECA66: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA89(); return; } /* je: equal / zero */

loc_001ECA6C: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ECA73u); RECOMP_ABI_CALL(0x001DFF1Eu, sub_001DFF1E); /* call 0x001DFF1E */

loc_001ECA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA89(); return; } /* jbe: below or equal (unsigned <=) */

loc_001ECA77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA84(); return; } /* je: equal / zero */

loc_001ECA7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECA8D(); return; } /* jne: not equal / not zero */

loc_001ECA81: ;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001ECA86(); return; /* tail jmp 0x001ECA86 */

}

/**
 * sub_001ECA84
 * Original: 0x001ECA84 - 0x001ECA86 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA84: ;
    PUSH32(esp, 2);

    g_seh_ebp = ebp; sub_001ECA86(); return; /* fallthrough 0x001ECA86 */

}

/**
 * sub_001ECA86
 * Original: 0x001ECA86 - 0x001ECA89 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA86: ;
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001ECA90(); return; /* tail jmp 0x001ECA90 */

}

/**
 * sub_001ECA89
 * Original: 0x001ECA89 - 0x001ECA8D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA89: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_001ECA90(); return; /* tail jmp 0x001ECA90 */

}

/**
 * sub_001ECA8D
 * Original: 0x001ECA8D - 0x001ECA90 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA8D: ;
    eax = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_001ECA90(); return; /* fallthrough 0x001ECA90 */

}

/**
 * sub_001ECA90
 * Original: 0x001ECA90 - 0x001ECA92 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA90: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001ECA92(); return; /* fallthrough 0x001ECA92 */

}

/**
 * sub_001ECA92
 * Original: 0x001ECA92 - 0x001ECA95 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA92: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001ECA95
 * Original: 0x001ECA95 - 0x001ECAA9 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECAA9(); return; } /* jne: not equal / not zero */

loc_001ECA9F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001ECB2D(); return; /* tail jmp 0x001ECB2D */

}

/**
 * sub_001ECAA9
 * Original: 0x001ECAA9 - 0x001ECAB8 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECAA9: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ECAB8(); return; } /* jne: not equal / not zero */

loc_001ECAB1: ;
    ebp = 0x80150002u;
    g_seh_ebp = ebp; sub_001ECB2B(); return; /* tail jmp 0x001ECB2B */

}

/**
 * sub_001ECAB8
 * Original: 0x001ECAB8 - 0x001ECB2B (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECAB8: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x81;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx) = 0x4C;
    MEM8(edx + 1) = 1;
    MEM16(edx + 2) = 0x204;
    esi = MEM32(ebx + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, 0x70);
    edi = edx + 4;
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001ECAF2; /* jne: not equal / not zero */

loc_001ECAE6: ;
    esi = MEM32(ebx + 0xC8);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ECAF2: ;
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
    eax = edx + 0x1C4;
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    POP32(esp, esi);

loc_001ECB00: ;
    eax = MEM32(ebx + 0xC8);
    eax = MEM32(eax + ecx + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB20; /* je: equal / zero */

loc_001ECB11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB20; /* je: equal / zero */

loc_001ECB16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB20; /* je: equal / zero */

loc_001ECB1B: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ECB20: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x140 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ECB00; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001ECB2B(); return; /* fallthrough 0x001ECB2B */

}

/**
 * sub_001ECB2B
 * Original: 0x001ECB2B - 0x001ECB2D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECB2B: ;
    eax = ebp;

    g_seh_ebp = ebp; sub_001ECB2D(); return; /* fallthrough 0x001ECB2D */

}

/**
 * sub_001ECB2D
 * Original: 0x001ECB2D - 0x001ECB32 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECB2D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECB32
 * Original: 0x001ECB32 - 0x001ECBC4 (146 bytes, 54 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECB32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECB32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECB43; /* jne: not equal / not zero */

loc_001ECB3C: ;
    eax = 0x80150005u;
    goto loc_001ECBB7;

loc_001ECB43: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x70);
    esi = ebx + 4;
    POP32(esp, ecx);
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
    edi = MEM32(ebp + 0x10);
    ecx = 0xFF;
    MEM32(edx + 8) = MEM32(edx + 8) & ecx;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x78) = MEM32(edx + 0x78) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0xE8) = MEM32(edx + 0xE8) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0xE8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x158) = MEM32(edx + 0x158) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0x158)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0xDC) = eax;
    MEM32(edx + 0x14C) = eax;
    MEM32(edx + 0x1BC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBB1; /* je: equal / zero */

loc_001ECB8C: ;
    ecx = ebx + 0x1C4;
    ebx = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001ECB99: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBAF; /* je: equal / zero */

loc_001ECB9F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001ECBBB; /* jae: above or equal (unsigned >=) */

loc_001ECBA3: ;
    MEM32(edi + ecx) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ECB99; /* jb: below (unsigned <) */

loc_001ECBAF: ;
    MEM32(ebx) = edx;

loc_001ECBB1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001ECBB7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_001ECBBB: ;
    MEM32(ebp + -4) = 0x80070057u;
    goto loc_001ECBB1;

}

/**
 * sub_001ECBC4
 * Original: 0x001ECBC4 - 0x001ECC01 (61 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECBC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECBC4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x728;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBDD; /* je: equal / zero */

loc_001ECBD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECBDAu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001ECBDA: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECBDD: ;
    edi = esi + 0x724;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBF4; /* je: equal / zero */

loc_001ECBE9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ECBF1u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001ECBF1: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECBF4: ;
    POP32(esp, edi);
    MEM32(esi + 0x72C) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECC01
 * Original: 0x001ECC01 - 0x001ECC3E (61 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC01(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC01: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x734;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC1A; /* je: equal / zero */

loc_001ECC11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECC17u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001ECC17: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECC1A: ;
    edi = esi + 0x730;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC31; /* je: equal / zero */

loc_001ECC26: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ECC2Eu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001ECC2E: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECC31: ;
    POP32(esp, edi);
    MEM32(esi + 0x738) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECC3E
 * Original: 0x001ECC3E - 0x001ECC7B (61 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC3E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xCAC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC57; /* je: equal / zero */

loc_001ECC4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECC54u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001ECC54: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECC57: ;
    edi = esi + 0xCA8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC6E; /* je: equal / zero */

loc_001ECC63: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ECC6Bu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001ECC6B: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ECC6E: ;
    POP32(esp, edi);
    MEM32(esi + 0xCB0) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECCA8
 * Original: 0x001ECCA8 - 0x001ECCB1 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECCA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001ECCA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001CEFFA(); return; /* tail jmp 0x001CEFFA */

}

/**
 * sub_001ECCBB
 * Original: 0x001ECCBB - 0x001ECCC4 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECCBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001ECCBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001CF0E4(); return; /* tail jmp 0x001CF0E4 */

}

/**
 * sub_001ECCE2
 * Original: 0x001ECCE2 - 0x001ECD2C (74 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECCE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECCE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6950);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD04u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECD04: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -280;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD16u); RECOMP_ABI_CALL(0x00105A1Eu, sub_00105A1E); /* call 0x00105A1E */

loc_001ECD16: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -280;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD28u); RECOMP_ABI_CALL(0x00105A18u, sub_00105A18); /* call 0x00105A18 */

loc_001ECD28: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ECD2C
 * Original: 0x001ECD2C - 0x001ECDB6 (138 bytes, 48 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECD2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECD2C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD5Du); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECD5D: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD77u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECD77: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD82u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ECD82: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECD94u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ECD94: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECDB2u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ECDB2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001ECDB6
 * Original: 0x001ECDB6 - 0x001ECE42 (140 bytes, 47 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECDB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECDB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0xAA670C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECDE9u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECDE9: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE03u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECE03: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE0Eu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ECE0E: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE20u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ECE20: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE3Eu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ECE3E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ECE42
 * Original: 0x001ECE42 - 0x001ECEC9 (135 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECE42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECE42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE72u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECE72: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE8Bu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECE8B: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECE96u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ECE96: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECEA8u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ECEA8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECEC5u); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ECEC5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ECEC9
 * Original: 0x001ECEC9 - 0x001ECF4F (134 bytes, 51 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECEC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECEC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECEFAu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECEFA: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECF11u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECF11: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECF1Cu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ECF1C: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECF2Eu); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ECF2E: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -416;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECF4Au); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ECF4A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ECF93
 * Original: 0x001ECF93 - 0x001ED0E2 (335 bytes, 124 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECF93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECF93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6998);
    MEM32(ebp + -16) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECFBDu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ECFBD: ;
    _fa = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x594), ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001ED064; /* jbe: below or equal (unsigned <=) */

loc_001ECFCC: ;
    _fb = (uint32_t)(0x598) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x598;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = esi;

loc_001ECFD5: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax);
    eax = MEM32(0xAA670C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED000u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED000: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED013u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED013: ;
    PUSH32(esp, 0x18);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED01Eu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ED01E: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED030u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ED030: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED04Bu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ED04B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x594) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ECFD5; /* jb: below (unsigned <) */

loc_001ED064: ;
    ecx = MEM32(0xAA698C);
    eax = MEM32(0x22BB9C);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(0xAA6990);
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED090u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED090: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED0A3u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED0A3: ;
    PUSH32(esp, 0x18);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED0AEu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ED0AE: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED0C0u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ED0C0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED0DBu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ED0DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED0E2
 * Original: 0x001ED0E2 - 0x001ED233 (337 bytes, 130 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED0E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED0E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = MEM32(0x22BB9C);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0xAA698C);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(0xAA6990);
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -44;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED122u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED122: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED137u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED137: ;
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED142u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ED142: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED154u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ED154: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED16Eu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ED16E: ;
    eax = MEM32(esi + 0x594);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001ED207; /* js: sign (negative) */

loc_001ED17B: ;
    ecx = esi + eax * 4 + 0x598;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;

loc_001ED189: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(0xAA670C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(0xAA6710);
    MEM32(ebp + -16) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6978);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1B4u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED1B4: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1C7u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED1C7: ;
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1D2u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001ED1D2: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1E4u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001ED1E4: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1FEu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001ED1FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ED189; /* jne: not equal / not zero */

loc_001ED207: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0xAA6998);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED21Cu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001ED21C: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -64;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED233
 * Original: 0x001ED233 - 0x001ED260 (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED233: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0 (32-bit) */
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED2E5(); return; } /* jne: not equal / not zero */

loc_001ED248: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED27C(); return; } /* jne: not equal / not zero */

loc_001ED24C: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED260(); return; } /* jb: below (unsigned <) */

loc_001ED254: ;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001ED2E5(); return; /* tail jmp 0x001ED2E5 */

}

/**
 * sub_001ED260
 * Original: 0x001ED260 - 0x001ED26E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED26E(); return; } /* jne: not equal / not zero */

loc_001ED265: ;
    MEM32(ebx + 0xC) = 0x80151904u;
    g_seh_ebp = ebp; sub_001ED2E5(); return; /* tail jmp 0x001ED2E5 */

}

/**
 * sub_001ED26E
 * Original: 0x001ED26E - 0x001ED27C (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED26E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED2E5(); return; } /* jne: not equal / not zero */

loc_001ED273: ;
    MEM32(ebx + 0xC) = 0x80151903u;
    g_seh_ebp = ebp; sub_001ED2E5(); return; /* tail jmp 0x001ED2E5 */

}

/**
 * sub_001ED27C
 * Original: 0x001ED27C - 0x001ED2A6 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED27C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED27C: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2734) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2734 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED2E4(); return; } /* je: equal / zero */

loc_001ED287: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED2A6(); return; } /* jne: not equal / not zero */

loc_001ED28C: ;
    PUSH32(esp, 0xA);
    edi = eax + 0x1C;
    POP32(esp, ecx);
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
    MEM32(eax + 0x18) = 4;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001ED2D9(); return; /* tail jmp 0x001ED2D9 */

}

/**
 * sub_001ED2A6
 * Original: 0x001ED2A6 - 0x001ED2C8 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED2A6: ;
    ecx = MEM32(ecx + 0xC4);
    edi = 0x274C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED2C8(); return; } /* jne: not equal / not zero */

loc_001ED2B5: ;
    MEM32(ecx + 0x34) = edi;
    MEM32(eax + 0x18) = 2;
    MEM32(ebx + 0xC) = 0x80151904u;
    g_seh_ebp = ebp; sub_001ED2D9(); return; /* tail jmp 0x001ED2D9 */

}

/**
 * sub_001ED2C8
 * Original: 0x001ED2C8 - 0x001ED2D9 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED2C8: ;
    MEM32(ecx + 0x34) = esi;
    MEM32(eax + 0x18) = 3;
    MEM32(ebx + 0xC) = 0x80151903u;

    g_seh_ebp = ebp; sub_001ED2D9(); return; /* fallthrough 0x001ED2D9 */

}

/**
 * sub_001ED2D9
 * Original: 0x001ED2D9 - 0x001ED2E4 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED2D9: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ED2E3u); RECOMP_ABI_CALL(0x001CEF4Au, sub_001CEF4A); /* call 0x001CEF4A */

loc_001ED2E3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001ED2E4(); return; /* fallthrough 0x001ED2E4 */

}

/**
 * sub_001ED2E4
 * Original: 0x001ED2E4 - 0x001ED2E5 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED2E4: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001ED2E5(); return; /* fallthrough 0x001ED2E5 */

}

/**
 * sub_001ED2E5
 * Original: 0x001ED2E5 - 0x001ED2EC (7 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2E5(void)
{

loc_001ED2E5: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED2EC
 * Original: 0x001ED2EC - 0x001ED31E (50 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED2EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED2EC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    eax = MEM32(esi + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001ED312; /* jne: not equal / not zero */

loc_001ED2FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED30B; /* je: equal / zero */

loc_001ED2FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED304u); RECOMP_ABI_CALL(0x001CEF4Au, sub_001CEF4A); /* call 0x001CEF4A */

loc_001ED304: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ED30B: ;
    MEM32(esi + 0xC) = 0x80151904u;

loc_001ED312: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED31E
 * Original: 0x001ED31E - 0x001ED3A3 (133 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED31E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED31E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edx = ecx;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    PUSH32(esp, esi);
    ecx = edx;
    edi = eax + edx + 0x5EC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED34Cu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001ED34C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 0x18;
    MEM32(esi) = 0x1ED233;
    MEM32(esi + 4) = 0x1ED2EC;
    MEM32(esi + 0x10) = edi;
    MEM32(ebp + 8) = ebx;

loc_001ED366: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 0;
    ecx = MEM32(ebp + 0x10);
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3D0(); return; } /* je: equal / zero */

loc_001ED37F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3CB(); return; } /* je: equal / zero */

loc_001ED384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3A3(); return; } /* je: equal / zero */

loc_001ED389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3B8(); return; } /* jne: not equal / not zero */

loc_001ED38E: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 3;
    ecx = MEM32(ebp + 0x10);
    edx = 0;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    goto loc_001ED366;

}

/**
 * sub_001ED366
 * Original: 0x001ED366 - 0x001ED3A3 (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED366: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 0;
    ecx = MEM32(ebp + 0x10);
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3D0(); return; } /* je: equal / zero */

loc_001ED37F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3CB(); return; } /* je: equal / zero */

loc_001ED384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3A3(); return; } /* je: equal / zero */

loc_001ED389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED3B8(); return; } /* jne: not equal / not zero */

loc_001ED38E: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 3;
    ecx = MEM32(ebp + 0x10);
    edx = 0;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    goto loc_001ED366;

}

/**
 * sub_001ED3A3
 * Original: 0x001ED3A3 - 0x001ED3B8 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED3A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED3A3: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 2;
    ecx = MEM32(ebp + 0x10);
    edx = 0;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    g_seh_ebp = ebp; sub_001ED366(); return; /* tail jmp 0x001ED366 */

}

/**
 * sub_001ED3B8
 * Original: 0x001ED3B8 - 0x001ED3CB (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED3B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED3B8: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) { g_seh_ebp = ebp; sub_001ED400(); return; }

loc_001ED3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED400(); return; } /* ja: above (unsigned >) */

loc_001ED3BF: ;
    MEM32(esi + 0xC) = 0x1500F0;
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_001ED400(); return; /* tail jmp 0x001ED400 */

}

/**
 * sub_001ED3C6
 * Original: 0x001ED3C6 - 0x001ED3CB (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED3C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED3C6: ;
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_001ED400(); return; /* tail jmp 0x001ED400 */

}

/**
 * sub_001ED3CB
 * Original: 0x001ED3CB - 0x001ED3D0 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED3CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED3CB: ;
    MEM32(esi + 0xC) = ecx;
    g_seh_ebp = ebp; sub_001ED3C6(); return; /* tail jmp 0x001ED3C6 */

}

/**
 * sub_001ED3D0
 * Original: 0x001ED3D0 - 0x001ED40A (58 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED3D0: ;
    eax = MEM32(ebp + 0xC);
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001ED3E1u); RECOMP_ABI_CALL(0x001CEF33u, sub_001CEF33); /* call 0x001CEF33 */

loc_001ED3E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED3E9; /* jne: not equal / not zero */

loc_001ED3E5: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED3FA; /* jne: not equal / not zero */

loc_001ED3E9: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 3;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x80151903u;

loc_001ED3FA: ;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ED400
 * Original: 0x001ED400 - 0x001ED40A (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED400: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ED40A
 * Original: 0x001ED40A - 0x001ED45A (80 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED40A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED40A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x5DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5DC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x66C));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -1500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 0x34));
    MEM32(ebp + -4) = 0x5C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED43Du); RECOMP_ABI_CALL(0x00213591u, sub_00213591); /* call 0x00213591 */

loc_001ED43D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED45A(); return; } /* jge: greater or equal (signed >=) */

loc_001ED444: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = 0x80150008u;
    g_seh_ebp = ebp; sub_001ED51D(); return; /* tail jmp 0x001ED51D */

}

/**
 * sub_001ED45A
 * Original: 0x001ED45A - 0x001ED4E8 (142 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED45A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED45A: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x18);
    MEM16(ebp + -28) = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    PUSH32(esp, 0);
    eax = MEM32(ecx + edx * 4 + 8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    MEM32(ebp + -12) = eax;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = ebp + -1500;
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, 1);
    ecx = ebp + -12;
    MEM16(ebp + -26) = 0x5800;
    eax = MEM32(eax + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED4B4u); RECOMP_ABI_CALL(0x001CF0E4u, sub_001CF0E4); /* call 0x001CF0E4 */

loc_001ED4B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED4E8(); return; } /* jne: not equal / not zero */

loc_001ED4C2: ;
    ecx = ecx & 0xFFFFF3FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, 0x001ED4D6u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_001ED4D6: ;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    MEM32(ebp + 8) = 0x80151908u;
    g_seh_ebp = ebp; sub_001ED51D(); return; /* tail jmp 0x001ED51D */

}

/**
 * sub_001ED4E8
 * Original: 0x001ED4E8 - 0x001ED51D (53 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED4E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED4E8: ;
    ecx = ecx & 0xFFFFE7FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(eax + 0x30) = ecx;
    ebx = MEM32(esi + 0x18);
    ebx = ebx * 4 + 0x2F7A90;
    PUSH32(esp, 0x001ED507u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001ED507: ;
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -4) = eax;
    PUSH32(esp, MEM32(ebx));
    ecx = edi;
    PUSH32(esp, MEM32(esi + -24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ED51Cu); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001ED51C: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001ED51D(); return; /* fallthrough 0x001ED51D */

}

/**
 * sub_001ED51D
 * Original: 0x001ED51D - 0x001ED526 (9 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED51D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED51D: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED526
 * Original: 0x001ED526 - 0x001ED5D6 (176 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED526(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED526: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001ED748(); return; } /* je: equal / zero */

loc_001ED53D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* jne: not equal / not zero */

loc_001ED545: ;
    eax = esi + 0x74;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED54Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001ED54E: ;
    ebx = 0x1500F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED6DC(); return; } /* jne: not equal / not zero */

loc_001ED55B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED571u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001ED571: ;
    PUSH32(esp, MEM32(esi + 0x66C));
    eax = esi + 0xAC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED588u); RECOMP_ABI_CALL(0x002138CBu, sub_002138CB); /* call 0x002138CB */

loc_001ED588: ;
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED679(); return; } /* je: equal / zero */

loc_001ED599: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED679(); return; } /* je: equal / zero */

loc_001ED5A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000006Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000006Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED695(); return; } /* je: equal / zero */

loc_001ED5AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000009Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000009Au (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED5D6(); return; } /* jne: not equal / not zero */

loc_001ED5B4: ;
    edi = MEM32(edi + 0xC4);
    eax = MEM32(edi + 0x30);
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x1800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x30) = eax;
    MEM32(esi + 0xC) = 0x80150008u;
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED5D6
 * Original: 0x001ED5D6 - 0x001ED629 (83 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED5D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED5D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED629(); return; } /* jge: greater or equal (signed >=) */

loc_001ED5DA: ;
    ecx = MEM32(edi + 0xC4);
    ebx = MEM32(ecx + 0x30);
    ebx = ebx & 0xFFFFEFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0xC00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = ebx;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED7EB(); return; } /* jne: not equal / not zero */

loc_001ED605: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED613; /* je: equal / zero */

loc_001ED60A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED7EB(); return; } /* jne: not equal / not zero */

loc_001ED613: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = 0x80151006u;
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED629
 * Original: 0x001ED629 - 0x001ED679 (80 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED629(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED629: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFEBFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(esi + 0x66C);
    MEM32(esi + 0x10) = 0x63;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* je: equal / zero */

loc_001ED65F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED667u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001ED667: ;
    eax = MEM32(esi + 0x66C);
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED679
 * Original: 0x001ED679 - 0x001ED695 (28 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED679(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED679: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED6C3(); return; } /* jae: above or equal (unsigned >=) */

loc_001ED681: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ED68Du); RECOMP_ABI_CALL(0x001ED40Au, sub_001ED40A); /* call 0x001ED40A */

loc_001ED68D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED80B(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001ED695(); return; /* fallthrough 0x001ED695 */

}

/**
 * sub_001ED695
 * Original: 0x001ED695 - 0x001ED6C3 (46 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED695: ;
    PUSH32(esp, 0);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED6A2u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001ED6A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* jge: greater or equal (signed >=) */

loc_001ED6AA: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFF3FFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x1000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001ED6F7(); return; /* tail jmp 0x001ED6F7 */

}

/**
 * sub_001ED6C3
 * Original: 0x001ED6C3 - 0x001ED6DC (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED6C3: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFEFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0xC00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001ED6F7(); return; /* tail jmp 0x001ED6F7 */

}

/**
 * sub_001ED6DC
 * Original: 0x001ED6DC - 0x001ED701 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED6DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED701(); return; } /* jge: greater or equal (signed >=) */

loc_001ED6E0: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFF7FFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x1400;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_001ED7E8(); return; /* tail jmp 0x001ED7E8 */

}

/**
 * sub_001ED6F7
 * Original: 0x001ED6F7 - 0x001ED701 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED6F7: ;
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_001ED7E8(); return; /* tail jmp 0x001ED7E8 */

}

/**
 * sub_001ED701
 * Original: 0x001ED701 - 0x001ED733 (50 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED701(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED701: ;
    PUSH32(esp, 0x001ED706u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001ED706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* jb: below (unsigned <) */

loc_001ED70F: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F7A88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2F7A88) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED733(); return; } /* jb: below (unsigned <) */

loc_001ED71D: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x31) = MEM8(edi + 0x31) | 0x1C;
    _fa = (uint32_t)(MEM8(edi + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xC) = 0x80151909u;
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED733
 * Original: 0x001ED733 - 0x001ED748 (21 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED733(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED733: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ED73Bu); RECOMP_ABI_CALL(0x001ED40Au, sub_001ED40A); /* call 0x001ED40A */

loc_001ED73B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* jge: greater or equal (signed >=) */

loc_001ED743: ;
    g_seh_ebp = ebp; sub_001ED80B(); return; /* tail jmp 0x001ED80B */

}

/**
 * sub_001ED748
 * Original: 0x001ED748 - 0x001ED7EB (163 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED748: ;
    ebx = esi + 0x3C;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001ED753u); RECOMP_ABI_CALL(0x001ED233u, sub_001ED233); /* call 0x001ED233 */

loc_001ED753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED7FD(); return; } /* jne: not equal / not zero */

loc_001ED75E: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001ED76Au); RECOMP_ABI_CALL(0x001EC712u, sub_001EC712); /* call 0x001EC712 */

loc_001ED76A: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFBFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    ebx = esi + 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x6C;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    MEM32(esi + 0x70) = ecx;
    MEM32(eax) = 0x5C0;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = edi;
    PUSH32(esp, 0x001ED7B0u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001ED7B0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ED7B8u); RECOMP_ABI_CALL(0x001ED40Au, sub_001ED40A); /* call 0x001ED40A */

loc_001ED7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED80B(); return; } /* jl: less (signed <) */

loc_001ED7BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001ED7C6u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001ED7C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED7F4(); return; } /* jge: greater or equal (signed >=) */

loc_001ED7CA: ;
    ecx = MEM32(edi + 0xC4);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFF3FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;

    g_seh_ebp = ebp; sub_001ED7EB(); return; /* fallthrough 0x001ED7EB */

}

/**
 * sub_001ED7E8
 * Original: 0x001ED7E8 - 0x001ED7EB (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED7E8: ;
    MEM32(ecx + 0x34) = eax;

    g_seh_ebp = ebp; sub_001ED7EB(); return; /* fallthrough 0x001ED7EB */

}

/**
 * sub_001ED7EB
 * Original: 0x001ED7EB - 0x001ED7F4 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED7EB: ;
    MEM32(esi + 0xC) = 0x80151908u;
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED7F4
 * Original: 0x001ED7F4 - 0x001ED7FD (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED7F4: ;
    MEM32(esi + 0x10) = 8;
    g_seh_ebp = ebp; sub_001ED80E(); return; /* tail jmp 0x001ED80E */

}

/**
 * sub_001ED7FD
 * Original: 0x001ED7FD - 0x001ED80B (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED7FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED80E(); return; } /* jge: greater or equal (signed >=) */

loc_001ED801: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x32) = MEM8(edi + 0x32) | 0xC;
    _fa = (uint32_t)(MEM8(edi + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001ED80B(); return; /* fallthrough 0x001ED80B */

}

/**
 * sub_001ED80B
 * Original: 0x001ED80B - 0x001ED80E (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED80B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED80B: ;
    MEM32(esi + 0xC) = eax;

    g_seh_ebp = ebp; sub_001ED80E(); return; /* fallthrough 0x001ED80E */

}

/**
 * sub_001ED80E
 * Original: 0x001ED80E - 0x001ED823 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED80E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED80E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED81C; /* je: equal / zero */

loc_001ED815: ;
    MEM32(esi + 0x10) = 0x63;

loc_001ED81C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED823
 * Original: 0x001ED823 - 0x001ED8AB (136 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED823(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED823: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001ED83A; /* je: equal / zero */

loc_001ED831: ;
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED83Au); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001ED83A: ;
    eax = MEM32(edi + 0xC4);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED84E; /* je: equal / zero */

loc_001ED848: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED84Eu); RECOMP_ABI_CALL(0x001CF078u, sub_001CF078); /* call 0x001CF078 */

loc_001ED84E: ;
    eax = MEM32(esi + 0x66C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED88F; /* je: equal / zero */

loc_001ED858: ;
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED86A; /* je: equal / zero */

loc_001ED862: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED86Au); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001ED86A: ;
    eax = MEM32(esi + 0x66C);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED882; /* je: equal / zero */

loc_001ED87A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED882u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001ED882: ;
    PUSH32(esp, MEM32(esi + 0x66C));
    ecx = edi;
    PUSH32(esp, 0x001ED88Fu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001ED88F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED89Eu); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001ED89E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ED8A6u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001ED8A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED8AB
 * Original: 0x001ED8AB - 0x001ED91F (116 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED8AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED8AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2015);
    PUSH32(esp, 0x670);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED8C2u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001ED8C2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED90E; /* je: equal / zero */

loc_001ED8C8: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED8D0u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001ED8D0: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0x14);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x2014);
    PUSH32(esp, 0x568);
    ecx = edi;
    MEM32(esi) = 0x1ED526;
    MEM32(esi + 4) = 0x1ED823;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED904u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001ED904: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x66C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED91F(); return; } /* jne: not equal / not zero */

loc_001ED90E: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 0x80150008u;
    g_seh_ebp = ebp; sub_001ED979(); return; /* tail jmp 0x001ED979 */

}

/**
 * sub_001ED91F
 * Original: 0x001ED91F - 0x001ED979 (90 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED91F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED91F: ;
    ecx = MEM32(edi + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x66C);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0xA8) = ecx;
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001ED947u); RECOMP_ABI_CALL(0x001ED31Eu, sub_001ED31E); /* call 0x001ED31E */

loc_001ED947: ;
    ebx = eax;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFF7FFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x10) = 6;
    PUSH32(esp, 0x001ED970u); RECOMP_ABI_CALL(0x001ED526u, sub_001ED526); /* call 0x001ED526 */

loc_001ED970: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ED99C(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001ED979(); return; /* fallthrough 0x001ED979 */

}

/**
 * sub_001ED979
 * Original: 0x001ED979 - 0x001ED99C (35 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED979(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED979: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ED99C(); return; } /* je: equal / zero */

loc_001ED983: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED994; /* je: equal / zero */

loc_001ED989: ;
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ED994u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001ED994: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ED99Cu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

    g_seh_ebp = ebp; sub_001ED99C(); return; /* fallthrough 0x001ED99C */

}

/**
 * sub_001ED99C
 * Original: 0x001ED99C - 0x001ED9A5 (9 bytes, 6 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED99C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED99C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ED9A5
 * Original: 0x001ED9A5 - 0x001EDAB5 (272 bytes, 96 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED9A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED9A5: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x7C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ebx = ecx;
    MEM32(ebp + 0x70) = 0x5C0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001ED9C7u); RECOMP_ABI_CALL(0x001E561Bu, sub_001E561B); /* call 0x001E561B */

loc_001ED9C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED9CC; /* jge: greater or equal (signed >=) */

loc_001ED9CB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED9CC: ;
    eax = MEM32(0x22BCBC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED9D9; /* je: equal / zero */

loc_001ED9D6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED9D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDACB(); return; } /* jne: not equal / not zero */

loc_001ED9E1: ;
    esi = MEM32(0x22BB9C);
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0xAA69D0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001EDACB(); return; } /* je: equal / zero */

loc_001ED9F9: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x102);
    PUSH32(esp, 0x001EDA13u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_001EDA13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDACB(); return; } /* jne: not equal / not zero */

loc_001EDA1B: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x22BB9C));
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA6950);
    PUSH32(esp, 0x001EDA35u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001EDA35: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -396;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDA47u); RECOMP_ABI_CALL(0x00105A1Eu, sub_00105A1E); /* call 0x00105A1E */

loc_001EDA47: ;
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -396;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDA58u); RECOMP_ABI_CALL(0x00105A18u, sub_00105A18); /* call 0x00105A18 */

loc_001EDA58: ;
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -136;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = ebp + 0x10;
    edi = ebp + -124;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebp + 0x24;
    edi = ebp + -56;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = 0xAA69C0;
    edi = ebp + -80;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 0x7C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x664)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x664), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDB43(); return; } /* jne: not equal / not zero */

loc_001EDA96: ;
    PUSH32(esp, 0x2014);
    PUSH32(esp, 0x568);
    ecx = ebx;
    PUSH32(esp, 0x001EDAA7u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EDAA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x664) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDB43(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001EDAB5(); return; /* fallthrough 0x001EDAB5 */

}

/**
 * sub_001EDA58
 * Original: 0x001EDA58 - 0x001EDAB5 (93 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDA58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDA58: ;
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -136;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = ebp + 0x10;
    edi = ebp + -124;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebp + 0x24;
    edi = ebp + -56;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = 0xAA69C0;
    edi = ebp + -80;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 0x7C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x664)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x664), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDB43(); return; } /* jne: not equal / not zero */

loc_001EDA96: ;
    PUSH32(esp, 0x2014);
    PUSH32(esp, 0x568);
    ecx = ebx;
    PUSH32(esp, 0x001EDAA7u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EDAA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x664) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDB43(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001EDAB5(); return; /* fallthrough 0x001EDAB5 */

}

/**
 * sub_001EDAB5
 * Original: 0x001EDAB5 - 0x001EDACB (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDAB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDAB5: ;
    ebx = MEM32(ebx + 0xC4);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x7C) = 0x80150008u;
    g_seh_ebp = ebp; sub_001EDC2D(); return; /* tail jmp 0x001EDC2D */

}

/**
 * sub_001EDACB
 * Original: 0x001EDACB - 0x001EDB2D (98 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDACB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDACB: ;
    eax = MEM32(0x10118);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1D4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDB2D(); return; } /* je: equal / zero */

loc_001EDADA: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDAE3u); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001EDAE3: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    eax = ebp + -14;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDAFAu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001EDAFA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EDAFC: ;
    eax = ZX8(MEM8(ebp + ecx + 0x3C));
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebp + ecx + 0x10) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDAFC; /* jb: below (unsigned <) */

loc_001EDB14: ;
    MEM8(ebp + 0x19) = 0x39;
    MEM8(ebp + 0x18) = 0x39;
    esi = 0xAA69AC;
    edi = ebp + 0x24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_seh_ebp = ebp; sub_001EDA58(); return; /* tail jmp 0x001EDA58 */

}

/**
 * sub_001EDB2D
 * Original: 0x001EDB2D - 0x001EDB43 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDB2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDB2D: ;
    ebx = MEM32(ebx + 0xC4);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 2;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x7C) = 0x80151905u;
    g_seh_ebp = ebp; sub_001EDC2D(); return; /* tail jmp 0x001EDC2D */

}

/**
 * sub_001EDB43
 * Original: 0x001EDB43 - 0x001EDBFA (183 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDB43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDB43: ;
    PUSH32(esp, MEM32(esi + 0x664));
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    eax = ebp + -1868;
    PUSH32(esp, eax);
    eax = ebp + -136;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001EDB63u); RECOMP_ABI_CALL(0x00213591u, sub_00213591); /* call 0x00213591 */

loc_001EDB63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EDAB5(); return; } /* jl: less (signed <) */

loc_001EDB6E: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x18);
    MEM16(ebp + 0x50) = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    PUSH32(esp, edi);
    eax = MEM32(ecx + edx * 4 + 8);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp + 0x70);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    MEM32(ebp + 0x68) = eax;
    ecx = ebp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebp + -1868;
    MEM32(ebp + 0x6C) = eax;
    eax = MEM32(esi + 8);
    ecx = ebp + 0x70;
    PUSH32(esp, ecx);
    MEM32(esi + 0x60) = eax;
    eax = MEM32(ebx + 0xC4);
    PUSH32(esp, 1);
    ecx = ebp + 0x68;
    MEM16(ebp + 0x52) = 0x5800;
    eax = MEM32(eax + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDBC6u); RECOMP_ABI_CALL(0x001CF0E4u, sub_001CF0E4); /* call 0x001CF0E4 */

loc_001EDBC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(ebx + 0xC4);
    ecx = MEM32(eax + 0x30);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDBFA(); return; } /* jne: not equal / not zero */

loc_001EDBD4: ;
    ecx = ecx & 0xFFFFFE7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, 0x001EDBE8u); RECOMP_ABI_CALL(0x001CF8E0u, sub_001CF8E0); /* call 0x001CF8E0 */

loc_001EDBE8: ;
    ecx = MEM32(ebx + 0xC4);
    MEM32(ecx + 0x34) = eax;
    MEM32(ebp + 0x7C) = 0x80151906u;
    g_seh_ebp = ebp; sub_001EDC2D(); return; /* tail jmp 0x001EDC2D */

}

/**
 * sub_001EDBFA
 * Original: 0x001EDBFA - 0x001EDC2D (51 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDBFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDBFA: ;
    ecx = ecx & 0xFFFFFCFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    edi = MEM32(esi + 0x18);
    edi = edi * 4 + 0x2F7AA8;
    PUSH32(esp, 0x001EDC18u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EDC18: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -4) = eax;
    PUSH32(esp, MEM32(edi));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + -24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EDC2Du); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

    g_seh_ebp = ebp; sub_001EDC2D(); return; /* fallthrough 0x001EDC2D */

}

/**
 * sub_001EDC2D
 * Original: 0x001EDC2D - 0x001EDC3A (13 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDC2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDC2D: ;
    eax = MEM32(ebp + 0x7C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EDC3A
 * Original: 0x001EDC3A - 0x001EDC83 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EDC3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDC3A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EDF53(); return; } /* je: equal / zero */

loc_001EDC55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EDC83(); return; } /* je: equal / zero */

loc_001EDC59: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jne: not equal / not zero */

loc_001EDC62: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDC67u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EDC67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jb: below (unsigned <) */

loc_001EDC70: ;
    MEM32(ebx + 0x10) = 0x63;
    MEM32(ebx + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDC83
 * Original: 0x001EDC83 - 0x001EDD11 (142 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDC83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDC83: ;
    esi = ebx + 0x6C;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDC8Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001EDC8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDEE2(); return; } /* jne: not equal / not zero */

loc_001EDC99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDCACu); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001EDCAC: ;
    PUSH32(esp, MEM32(ebx + 0x664));
    eax = ebx + 0xA4;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDCC3u); RECOMP_ABI_CALL(0x002138CBu, sub_002138CB); /* call 0x002138CB */

loc_001EDCC3: ;
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDE82(); return; } /* je: equal / zero */

loc_001EDCD4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDE82(); return; } /* je: equal / zero */

loc_001EDCDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000006Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000006Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDE9E(); return; } /* je: equal / zero */

loc_001EDCE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000009Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000009Au (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDD11(); return; } /* jne: not equal / not zero */

loc_001EDCEF: ;
    edi = MEM32(edi + 0xC4);
    eax = MEM32(edi + 0x30);
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x30) = eax;
    MEM32(ebx + 0xC) = 0x80150008u;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDD11
 * Original: 0x001EDD11 - 0x001EDD51 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDD11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EDD67(); return; } /* jge: greater or equal (signed >=) */

loc_001EDD15: ;
    ecx = MEM32(edi + 0xC4);
    esi = MEM32(ecx + 0x30);
    esi = esi & 0xFFFFFDFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x180;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    MEM32(ecx + 0x30) = esi;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDD51(); return; } /* je: equal / zero */

loc_001EDD3B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDD51(); return; } /* je: equal / zero */

loc_001EDD40: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDD51(); return; } /* je: equal / zero */

loc_001EDD45: ;
    MEM32(ebx + 0xC) = 0x80151906u;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDD45
 * Original: 0x001EDD45 - 0x001EDD51 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDD45: ;
    MEM32(ebx + 0xC) = 0x80151906u;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDD51
 * Original: 0x001EDD51 - 0x001EDD67 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDD51: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 4;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xC) = 0x80151905u;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDD67
 * Original: 0x001EDD67 - 0x001EDD9D (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDD67: ;
    eax = MEM32(ebx + 0x664);
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDD9D(); return; } /* jne: not equal / not zero */

loc_001EDD77: ;
    eax = edi + 0xC4;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFDFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(eax);
    eax = 0x80151906u;
    g_seh_ebp = ebp; sub_001EDE33(); return; /* tail jmp 0x001EDE33 */

}

/**
 * sub_001EDD9D
 * Original: 0x001EDD9D - 0x001EDE33 (150 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDD9D: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x24) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x28) = eax;
    eax = MEM32(ebx + 0x664);
    esi = MEM32(eax + 0xAC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = MEM32(ebx + 0x664);
    esi = MEM32(eax + 0xAC);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = eax + 0x48;
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
    ecx = MEM32(ebx + 0x664);
    esi = MEM32(ecx + 0xAC);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    edi = eax + 0x5C;
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
    ecx = MEM32(ebx + 0x664);
    esi = MEM32(ecx + 0xAC);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x74;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x001EDE0Cu); RECOMP_ABI_CALL(0x001F272Bu, sub_001F272B); /* call 0x001F272B */

loc_001EDE0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDE3B(); return; } /* jne: not equal / not zero */

loc_001EDE10: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFDFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(eax);
    eax = 0x8015000Bu;

    g_seh_ebp = ebp; sub_001EDE33(); return; /* fallthrough 0x001EDE33 */

}

/**
 * sub_001EDE33
 * Original: 0x001EDE33 - 0x001EDE3B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDE33: ;
    MEM32(ecx + 0x34) = eax;
    g_seh_ebp = ebp; sub_001EE00F(); return; /* tail jmp 0x001EE00F */

}

/**
 * sub_001EDE3B
 * Original: 0x001EDE3B - 0x001EDE82 (71 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDE3B: ;
    esi = MEM32(ebp + -4);
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFFD7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0x10) = 0x12;
    PUSH32(esp, 0x001EDE62u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EDE62: ;
    ecx = eax;
    eax = 0x7D0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x20;
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EDE7Du); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001EDE7D: ;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDE82
 * Original: 0x001EDE82 - 0x001EDE9E (28 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDE82: ;
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDEC9(); return; } /* jae: above or equal (unsigned >=) */

loc_001EDE8A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x14) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001EDE96u); RECOMP_ABI_CALL(0x001ED9A5u, sub_001ED9A5); /* call 0x001ED9A5 */

loc_001EDE96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE00F(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001EDE9E(); return; /* fallthrough 0x001EDE9E */

}

/**
 * sub_001EDE9E
 * Original: 0x001EDE9E - 0x001EDEC9 (43 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDE9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDEA8u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001EDEA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jge: greater or equal (signed >=) */

loc_001EDEB0: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFE7Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EDEFD(); return; /* tail jmp 0x001EDEFD */

}

/**
 * sub_001EDEC9
 * Original: 0x001EDEC9 - 0x001EDEE2 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDEC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDEC9: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFDFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x180;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001EDEFD(); return; /* tail jmp 0x001EDEFD */

}

/**
 * sub_001EDEE2
 * Original: 0x001EDEE2 - 0x001EDF02 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDEE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDEE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EDF0A(); return; } /* jge: greater or equal (signed >=) */

loc_001EDEE6: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFEFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x280;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x30) = esi;
    ecx = MEM32(ecx);

    g_seh_ebp = ebp; sub_001EDF02(); return; /* fallthrough 0x001EDF02 */

}

/**
 * sub_001EDEFD
 * Original: 0x001EDEFD - 0x001EDF02 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDEFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDEFD: ;
    MEM32(edx + 0x30) = esi;
    ecx = MEM32(ecx);

    g_seh_ebp = ebp; sub_001EDF02(); return; /* fallthrough 0x001EDF02 */

}

/**
 * sub_001EDF02
 * Original: 0x001EDF02 - 0x001EDF0A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDF02: ;
    MEM32(ecx + 0x34) = eax;
    g_seh_ebp = ebp; sub_001EDD45(); return; /* tail jmp 0x001EDD45 */

}

/**
 * sub_001EDF0A
 * Original: 0x001EDF0A - 0x001EDF3E (52 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDF0A: ;
    PUSH32(esp, 0x001EDF0Fu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001EDF0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jb: below (unsigned <) */

loc_001EDF18: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F7A8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2F7A8C) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001EDF3E(); return; } /* jb: below (unsigned <) */

loc_001EDF26: ;
    edi = MEM32(edi + 0xC4);
    MEM16(edi + 0x30) = MEM16(edi + 0x30) | 0x380;
    _fa = (uint32_t)(MEM16(edi + 0x30)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM32(ebx + 0xC) = 0x80151907u;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EDF3E
 * Original: 0x001EDF3E - 0x001EDF53 (21 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDF3E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001EDF46u); RECOMP_ABI_CALL(0x001ED9A5u, sub_001ED9A5); /* call 0x001ED9A5 */

loc_001EDF46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jge: greater or equal (signed >=) */

loc_001EDF4E: ;
    g_seh_ebp = ebp; sub_001EE00F(); return; /* tail jmp 0x001EE00F */

}

/**
 * sub_001EDF53
 * Original: 0x001EDF53 - 0x001EDFF8 (165 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDF53: ;
    esi = ebx + 0x34;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDF5Eu); RECOMP_ABI_CALL(0x001ED233u, sub_001ED233); /* call 0x001ED233 */

loc_001EDF5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE001(); return; } /* jne: not equal / not zero */

loc_001EDF69: ;
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDF75u); RECOMP_ABI_CALL(0x001EC712u, sub_001EC712); /* call 0x001EC712 */

loc_001EDF75: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFEFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x20000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    esi = ebx + 0x6C;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x64;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx + 0xA4;
    MEM32(ebx + 0x68) = ecx;
    MEM32(eax) = 0x5C0;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = edi;
    PUSH32(esp, 0x001EDFBBu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001EDFBB: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001EDFC3u); RECOMP_ABI_CALL(0x001ED9A5u, sub_001ED9A5); /* call 0x001ED9A5 */

loc_001EDFC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE00F(); return; } /* jl: less (signed <) */

loc_001EDFC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDFD1u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001EDFD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EDFF8(); return; } /* jge: greater or equal (signed >=) */

loc_001EDFD5: ;
    ecx = MEM32(edi + 0xC4);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFE7Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(edi + 0xC4);
    g_seh_ebp = ebp; sub_001EDF02(); return; /* tail jmp 0x001EDF02 */

}

/**
 * sub_001EDFF8
 * Original: 0x001EDFF8 - 0x001EE001 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDFF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDFF8: ;
    MEM32(ebx + 0x10) = 8;
    g_seh_ebp = ebp; sub_001EE012(); return; /* tail jmp 0x001EE012 */

}

/**
 * sub_001EE001
 * Original: 0x001EE001 - 0x001EE00F (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE001: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE012(); return; } /* jge: greater or equal (signed >=) */

loc_001EE005: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x32) = MEM8(edi + 0x32) | 3;
    _fa = (uint32_t)(MEM8(edi + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001EE00F(); return; /* fallthrough 0x001EE00F */

}

/**
 * sub_001EE00F
 * Original: 0x001EE00F - 0x001EE012 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE00F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE00F: ;
    MEM32(ebx + 0xC) = eax;

    g_seh_ebp = ebp; sub_001EE012(); return; /* fallthrough 0x001EE012 */

}

/**
 * sub_001EE012
 * Original: 0x001EE012 - 0x001EE027 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE012(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE012: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE020; /* je: equal / zero */

loc_001EE019: ;
    MEM32(ebx + 0x10) = 0x63;

loc_001EE020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE027
 * Original: 0x001EE027 - 0x001EE0AF (136 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE027(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE027: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EE03E; /* je: equal / zero */

loc_001EE035: ;
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE03Eu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EE03E: ;
    eax = MEM32(edi + 0xC4);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE052; /* je: equal / zero */

loc_001EE04C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE052u); RECOMP_ABI_CALL(0x001CF078u, sub_001CF078); /* call 0x001CF078 */

loc_001EE052: ;
    eax = MEM32(esi + 0x664);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE093; /* je: equal / zero */

loc_001EE05C: ;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE06E; /* je: equal / zero */

loc_001EE066: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EE06Eu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE06E: ;
    eax = MEM32(esi + 0x664);
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE086; /* je: equal / zero */

loc_001EE07E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EE086u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE086: ;
    PUSH32(esp, MEM32(esi + 0x664));
    ecx = edi;
    PUSH32(esp, 0x001EE093u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE093: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EE0A2u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001EE0A2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EE0AAu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001EE0AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE0AF
 * Original: 0x001EE0AF - 0x001EE0ED (62 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE0AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE0AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2016);
    PUSH32(esp, 0x668);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE0D1u); RECOMP_ABI_CALL(0x0020C421u, sub_0020C421); /* call 0x0020C421 */

loc_001EE0D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE0ED(); return; } /* jne: not equal / not zero */

loc_001EE0D7: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = 0x80150008u;
    g_seh_ebp = ebp; sub_001EE1A5(); return; /* tail jmp 0x001EE1A5 */

}

/**
 * sub_001EE0ED
 * Original: 0x001EE0ED - 0x001EE15A (109 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE0ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE0ED: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EE0F5u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001EE0F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM32(esi) = 0x1EDC3A;
    MEM32(esi + 4) = 0x1EE027;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE15E(); return; } /* je: equal / zero */

loc_001EE112: ;
    eax = MEM32(edi + 0xC4);
    edx = MEM32(eax + 0x30);
    edx = edx & 0xFF7FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = edx;
    eax = MEM32(edi + 0x24);
    eax = eax | MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0xC4);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE15A(); return; } /* je: equal / zero */

loc_001EE138: ;
    edx = MEM32(eax + 0x30);
    edx = edx & 0xFFBFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = edx;
    MEM32(esi + 0x10) = 0x63;
    MEM32(esi + 0xC) = 0x1500F0;
    g_seh_ebp = ebp; sub_001EE15E(); return; /* tail jmp 0x001EE15E */

}

/**
 * sub_001EE15A
 * Original: 0x001EE15A - 0x001EE15E (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE15A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE15A: ;
    MEM8(eax + 0x32) = MEM8(eax + 0x32) | 0xC0;
    _fa = (uint32_t)(MEM8(eax + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001EE15E(); return; /* fallthrough 0x001EE15E */

}

/**
 * sub_001EE15E
 * Original: 0x001EE15E - 0x001EE1A5 (71 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE15E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE15E: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE19E; /* jne: not equal / not zero */

loc_001EE163: ;
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001EE172u); RECOMP_ABI_CALL(0x001ED31Eu, sub_001ED31E); /* call 0x001ED31E */

loc_001EE172: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFDFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x10) = 6;
    PUSH32(esp, 0x001EE19Cu); RECOMP_ABI_CALL(0x001EDC3Au, sub_001EDC3A); /* call 0x001EDC3A */

loc_001EE19C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EE19E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    MEM32(ebx) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE1B4(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001EE1A5(); return; /* fallthrough 0x001EE1A5 */

}

/**
 * sub_001EE1A5
 * Original: 0x001EE1A5 - 0x001EE1B4 (15 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE1A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE1A5: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE1B4(); return; } /* je: equal / zero */

loc_001EE1AC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EE1B4u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

    g_seh_ebp = ebp; sub_001EE1B4(); return; /* fallthrough 0x001EE1B4 */

}

/**
 * sub_001EE1B4
 * Original: 0x001EE1B4 - 0x001EE1BE (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE1B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE1B4: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EE1BE
 * Original: 0x001EE1BE - 0x001EE273 (181 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE1BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE1BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 2);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE46C(); return; } /* je: equal / zero */

loc_001EE1E2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE32E(); return; } /* je: equal / zero */

loc_001EE1E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE2A9(); return; } /* je: equal / zero */

loc_001EE1F0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE2C1(); return; } /* je: equal / zero */

loc_001EE1F7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EE6A2(); return; } /* jne: not equal / not zero */

loc_001EE1FF: ;
    edi = ebx + 0x88;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE27B(); return; } /* je: equal / zero */

loc_001EE20B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE213u); RECOMP_ABI_CALL(0x001ED526u, sub_001ED526); /* call 0x001ED526 */

loc_001EE213: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE273(); return; } /* jne: not equal / not zero */

loc_001EE21A: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE22Au); RECOMP_ABI_CALL(0x001EC764u, sub_001EC764); /* call 0x001EC764 */

loc_001EE22A: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE233u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EE233: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x84;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE27B(); return; } /* jae: above or equal (unsigned >=) */

loc_001EE248: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + eax * 4 + 0x598));
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE262u); RECOMP_ABI_CALL(0x001ED8ABu, sub_001ED8AB); /* call 0x001ED8AB */

loc_001EE262: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE313(); return; } /* jl: less (signed <) */

loc_001EE26A: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001EE27B(); return; /* tail jmp 0x001EE27B */

}

/**
 * sub_001EE1CF
 * Original: 0x001EE1CF - 0x001EE273 (164 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE1CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE1CF: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 2);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE46C(); return; } /* je: equal / zero */

loc_001EE1E2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE32E(); return; } /* je: equal / zero */

loc_001EE1E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE2A9(); return; } /* je: equal / zero */

loc_001EE1F0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001EE2C1(); return; } /* je: equal / zero */

loc_001EE1F7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001EE6A2(); return; } /* jne: not equal / not zero */

loc_001EE1FF: ;
    edi = ebx + 0x88;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE27B(); return; } /* je: equal / zero */

loc_001EE20B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE213u); RECOMP_ABI_CALL(0x001ED526u, sub_001ED526); /* call 0x001ED526 */

loc_001EE213: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE273(); return; } /* jne: not equal / not zero */

loc_001EE21A: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EE22Au); RECOMP_ABI_CALL(0x001EC764u, sub_001EC764); /* call 0x001EC764 */

loc_001EE22A: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001EE233u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001EE233: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x84;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x594) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001EE27B(); return; } /* jae: above or equal (unsigned >=) */

loc_001EE248: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + eax * 4 + 0x598));
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0);
    PUSH32(esp, 0x001EE262u); RECOMP_ABI_CALL(0x001ED8ABu, sub_001ED8AB); /* call 0x001ED8AB */

loc_001EE262: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE313(); return; } /* jl: less (signed <) */

loc_001EE26A: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001EE27B(); return; /* tail jmp 0x001EE27B */

}

/**
 * sub_001EE273
 * Original: 0x001EE273 - 0x001EE27B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE273(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE273: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001EE795(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001EE27B(); return; /* fallthrough 0x001EE27B */

}
