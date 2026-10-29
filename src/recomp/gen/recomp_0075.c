/**
 * DOAU1 - Recompiled code chunk 75
 * Functions: 250 (0x001F4D3D - 0x001F9191)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F4D3D
 * Original: 0x001F4D3D - 0x001F4D3F (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4D3D: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F4D3F(); return; /* fallthrough 0x001F4D3F */

}

/**
 * sub_001F4D3F
 * Original: 0x001F4D3F - 0x001F4D44 (5 bytes, 3 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4D3F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F4D44
 * Original: 0x001F4D44 - 0x001F4DE5 (161 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4D44: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4D52; /* jne: not equal / not zero */

loc_001F4D48: ;
    eax = 0x80150005u;
    goto loc_001F4DE2;

loc_001F4D52: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x21C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1500F0 (32-bit) */
    edx = 0x1500F1;
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D6D; /* je: equal / zero */

loc_001F4D69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4DDC; /* jne: not equal / not zero */

loc_001F4D6D: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D7E; /* je: equal / zero */

loc_001F4D76: ;
    edi = eax + 0x21E0;
    MEM32(ecx) = edi;

loc_001F4D7E: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D8E; /* je: equal / zero */

loc_001F4D86: ;
    edi = MEM32(eax + 0x21DC);
    MEM32(ecx) = edi;

loc_001F4D8E: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D9A; /* je: equal / zero */

loc_001F4D97: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F4D9A: ;
    _fa = (uint32_t)(MEM32(eax + 0x21C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x21C4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4DDC; /* jne: not equal / not zero */

loc_001F4DA2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4DAC; /* je: equal / zero */

loc_001F4DA6: ;
    MEM32(ecx) = 1;

loc_001F4DAC: ;
    ecx = MEM32(eax + 0x21B4);
    MEM32(eax + 0x21C4) = MEM32(eax + 0x21C4) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x21C4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x21DC) = MEM32(eax + 0x21DC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x21DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x21BC) = ecx;
    ecx = MEM32(eax + 0x21B8);
    MEM32(eax + 0x160) = 9;
    MEM32(eax + 0x21C0) = ecx;

loc_001F4DDC: ;
    eax = MEM32(eax + 0x21C4);

loc_001F4DE2: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F4DE5
 * Original: 0x001F4DE5 - 0x001F4E11 (44 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4DE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4DE5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4DF0; /* jne: not equal / not zero */

loc_001F4DE9: ;
    eax = 0x80150005u;
    goto loc_001F4E0E;

loc_001F4DF0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4DFD; /* jne: not equal / not zero */

loc_001F4DF8: ;
    ecx = 0x1F40;

loc_001F4DFD: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0xE));
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F4E0E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F4E11
 * Original: 0x001F4E11 - 0x001F50C5 (692 bytes, 199 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F4E11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4E11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, edi);
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F50BB; /* je: equal / zero */

loc_001F4E2E: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4E3E; /* je: equal / zero */

loc_001F4E39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4E7C; /* jne: not equal / not zero */

loc_001F4E3E: ;
    PUSH32(esp, MEM32(esi + 0x164));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4E4Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F4E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4E74; /* jne: not equal / not zero */

loc_001F4E52: ;
    ecx = MEM32(esi + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4E69; /* jne: not equal / not zero */

loc_001F4E5D: ;
    MEM32(esi + 0x16C) = 2;
    goto loc_001F4E7C;

loc_001F4E69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4E7C; /* jne: not equal / not zero */

loc_001F4E6E: ;
    MEM32(esi + 0x16C) = edi;

loc_001F4E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4FC3; /* jl: less (signed <) */

loc_001F4E7C: ;
    ecx = MEM32(esi + 0x160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4EC2; /* je: equal / zero */

loc_001F4E86: ;
    eax = MEM32(esi + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4EC2; /* jl: less (signed <) */

loc_001F4E91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F4EC2; /* jg: greater (signed >) */

loc_001F4E96: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4E9Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F4E9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1510F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1510F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4EBA; /* jne: not equal / not zero */

loc_001F4EA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4EC2; /* jne: not equal / not zero */

loc_001F4EAE: ;
    MEM32(esi + 0x174) = 2;
    goto loc_001F4EC2;

loc_001F4EBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4FC3; /* jl: less (signed <) */

loc_001F4EC2: ;
    eax = MEM32(esi + 0x174);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001F4F96; /* jne: not equal / not zero */

loc_001F4ED2: ;
    _fa = (uint32_t)(MEM32(esi + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x16C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4FB9; /* jne: not equal / not zero */

loc_001F4EDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x280);
    MEM32(ebp + -56) = eax;
    SET_LO8(eax, MEM8(esi + 0x294));
    MEM8(ebp + -52) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ebp + -56;
    MEM32(ebp + -20) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x168));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4F1Cu); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F4F1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4FC3; /* jl: less (signed <) */

loc_001F4F24: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4F6B; /* je: equal / zero */

loc_001F4F2A: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4F33u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F4F33: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F50BB; /* ja: above (unsigned >) */

loc_001F4F3F: ;
    if (CMP_B(_fa, _fb)) goto loc_001F4F4D; /* jb: below (unsigned <) */

loc_001F4F41: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F50BB; /* ja: above (unsigned >) */

loc_001F4F4D: ;
    eax = MEM32(ebp + -44);
    MEM32(esi + 0x28C) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esi + 0x290) = eax;
    MEM32(esi + 0x170) = 1;
    goto loc_001F4F7F;

loc_001F4F6B: ;
    MEM32(esi + 0x28C) = 0x9BBD8600u;
    MEM32(esi + 0x290) = 0x1C16D68;

loc_001F4F7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x160), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x174) = eax;
    goto loc_001F4EC2;

loc_001F4F96: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F506F; /* je: equal / zero */

loc_001F4F9E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4FDA; /* je: equal / zero */

loc_001F4FA1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4FB9; /* jne: not equal / not zero */

loc_001F4FA4: ;
    _fa = (uint32_t)(MEM32(esi + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x16C), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4FB9; /* jne: not equal / not zero */

loc_001F4FAD: ;
    eax = MEM32(esi + 0x17C);
    MEM32(esi + 0x178) = eax;

loc_001F4FB9: ;
    eax = MEM32(esi + 0x178);

loc_001F4FBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4FD3; /* je: equal / zero */

loc_001F4FC3: ;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x174) = 5;

loc_001F4FD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001F4FDA: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F4FE5u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F4FE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4FB9; /* je: equal / zero */

loc_001F4FE9: ;
    ecx = 0x153101;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4FBF; /* jne: not equal / not zero */

loc_001F4FF2: ;
    _fa = (uint32_t)(MEM32(esi + 0x170)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x170), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4FC3; /* je: equal / zero */

loc_001F4FFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 7);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x17C) = ecx;
    POP32(esp, ecx);
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x280);
    MEM32(ebp + -56) = eax;
    SET_LO8(eax, MEM8(esi + 0x294));
    MEM8(ebp + -52) = LO8(eax);
    eax = ebp + -56;
    MEM32(ebp + -20) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    edi = esi + 0x168;
    PUSH32(esp, MEM32(edi));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F503Fu); RECOMP_ABI_CALL(0x0020A728u, sub_0020A728); /* call 0x0020A728 */

loc_001F503F: ;
    PUSH32(esp, MEM32(esi + 0x164));
    ecx = ebx;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F504Eu); RECOMP_ABI_CALL(0x0020A63Au, sub_0020A63A); /* call 0x0020A63A */

loc_001F504E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4FC3; /* jl: less (signed <) */

loc_001F5056: ;
    MEM32(esi + 0x16C) = 5;
    MEM32(esi + 0x174) = 4;
    goto loc_001F4FB9;

loc_001F506F: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x280;
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    eax = esi + 0x180;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6D0C);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F50A4u); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001F50A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4FBF; /* jl: less (signed <) */

loc_001F50AC: ;
    MEM32(esi + 0x174) = 3;
    goto loc_001F4FB9;

loc_001F50BB: ;
    eax = 0x153102;
    goto loc_001F4FC3;

}

/**
 * sub_001F50C5
 * Original: 0x001F50C5 - 0x001F512F (106 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F50C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F50C5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F512A; /* je: equal / zero */

loc_001F50D1: ;
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F50E1; /* je: equal / zero */

loc_001F50DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F50E1u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F50E1: ;
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F50F3; /* je: equal / zero */

loc_001F50EB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F50F3u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F50F3: ;
    eax = MEM32(esi + 0x160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5105; /* je: equal / zero */

loc_001F50FD: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F5105u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F5105: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F5110u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F5110: ;
    eax = edi + 0x1398;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F511D; /* jne: not equal / not zero */

loc_001F511A: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F511D: ;
    PUSH32(esp, 0x8044);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F512Au); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F512A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F512F
 * Original: 0x001F512F - 0x001F5163 (52 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F512F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F512F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    eax = edx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + -68));
    edi = 0x1500F0;
    PUSH32(esp, 0x001F514Cu); RECOMP_ABI_CALL(0x002162B1u, sub_002162B1); /* call 0x002162B1 */

loc_001F514C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F515C; /* jl: less (signed <) */

loc_001F5150: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F515C; /* jb: below (unsigned <) */

loc_001F515B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F515C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5163
 * Original: 0x001F5163 - 0x001F517B (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F5163(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5163: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F516E; /* jne: not equal / not zero */

loc_001F5167: ;
    eax = 0x80150005u;
    goto loc_001F5178;

loc_001F516E: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F5178: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F517B
 * Original: 0x001F517B - 0x001F51A9 (46 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F517B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F517B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5186; /* jne: not equal / not zero */

loc_001F517F: ;
    eax = 0x80150005u;
    goto loc_001F51A6;

loc_001F5186: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5197; /* je: equal / zero */

loc_001F5192: ;
    edx = MEM32(eax + 0x64);
    MEM32(ecx) = edx;

loc_001F5197: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F51A4; /* je: equal / zero */

loc_001F519F: ;
    eax = MEM32(eax + 0x68);
    MEM32(ecx) = eax;

loc_001F51A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F51A6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F51B0
 * Original: 0x001F51B0 - 0x001F51D8 (40 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F51B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001F51B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F51D4u); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F51D4: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F51D8
 * Original: 0x001F51D8 - 0x001F5205 (45 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F51D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F51D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F51E6; /* jne: not equal / not zero */

loc_001F51DF: ;
    eax = 0x80150005u;
    goto loc_001F5201;

loc_001F51E6: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5201u); RECOMP_ABI_CALL(0x001F4B3Au, sub_001F4B3A); /* call 0x001F4B3A */

loc_001F5201: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F5205
 * Original: 0x001F5205 - 0x001F53AC (423 bytes, 136 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F5205: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x8C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x8C8));
    esp = esp - 0x8C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F521F; /* jne: not equal / not zero */

loc_001F5215: ;
    eax = 0x80150005u;
    goto loc_001F53A7;

loc_001F521F: ;
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8044;
    PUSH32(esp, edi);
    PUSH32(esp, 0x298);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5239u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F5239: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001F524C; /* jne: not equal / not zero */

loc_001F5242: ;
    eax = 0x80150008u;
    goto loc_001F53A5;

loc_001F524C: ;
    eax = ebx + 0x1398;
    MEM32(ebp + -4) = eax;
    eax = 0;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F527A; /* je: equal / zero */

loc_001F5269: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5270u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F5270: ;
    eax = 0x80150009u;
    goto loc_001F53A5;

loc_001F527A: ;
    PUSH32(esp, esi);
    MEM32(ebx + 0x139C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F528Au); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F528A: ;
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1F4E11;
    MEM32(esi + 4) = 0x1F50C5;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x174) = edi;
    MEM32(esi + 0x178) = edi;
    SET_LO8(eax, MEM8(ebx + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F52CC; /* jne: not equal / not zero */

loc_001F52B5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F52BAu); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_001F52BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F52C2; /* je: equal / zero */

loc_001F52BE: ;
    SET_LO8(eax, 0x23);
    goto loc_001F52CC;

loc_001F52C2: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x67) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x67)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x67);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_001F52CC: ;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x280) = ecx;
    MEM8(esi + 0x294) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F52E0u); RECOMP_ABI_CALL(0x000B188Cu, sub_000B188C); /* call 0x000B188C */

loc_001F52E0: ;
    MEM32(esi + 0x284) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebx;
    MEM32(esi + 0x288) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F52F6u); RECOMP_ABI_CALL(0x001EC9BEu, sub_001EC9BE); /* call 0x001EC9BE */

loc_001F52F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F5360; /* jne: not equal / not zero */

loc_001F52FA: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -2248;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5313u); RECOMP_ABI_CALL(0x001F2393u, sub_001F2393); /* call 0x001F2393 */

loc_001F5313: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_001F531F; /* jl: less (signed <) */

loc_001F531A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F5325; /* jne: not equal / not zero */

loc_001F531F: ;
    MEM32(esi + 0x174) = ecx;

loc_001F5325: ;
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5360; /* je: equal / zero */

loc_001F532D: ;
    PUSH32(esp, 0x70);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -456;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0x160;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebp + -456;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5358u); RECOMP_ABI_CALL(0x001F0D97u, sub_001F0D97); /* call 0x001F0D97 */

loc_001F5358: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001F5395; /* jl: less (signed <) */

loc_001F535E: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F5360: ;
    eax = esi + 0x164;
    PUSH32(esp, eax);
    eax = esi + 0x168;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F537Cu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F537C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001F5395; /* jl: less (signed <) */

loc_001F5382: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x16C) = 1;
    MEM32(eax) = esi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F53A3;

loc_001F5395: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F539Du); RECOMP_ABI_CALL(0x001F50C5u, sub_001F50C5); /* call 0x001F50C5 */

loc_001F539D: ;
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F53A3: ;
    eax = edi;

loc_001F53A5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F53A7: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F53AC
 * Original: 0x001F53AC - 0x001F5480 (212 bytes, 81 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F53AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F53AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F53C1; /* jne: not equal / not zero */

loc_001F53B7: ;
    eax = 0x80150005u;
    goto loc_001F547C;

loc_001F53C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x200A);
    eax = ebx * 4 + 0x270;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F53D9u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F53D9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F53E9; /* jne: not equal / not zero */

loc_001F53DF: ;
    edi = 0x8007000Eu;
    goto loc_001F5477;

loc_001F53E9: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x70;
    edi = esi + 0x58;
    PUSH32(esp, edi);
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x6C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F540Bu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F540B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x1F512F;
    MEM32(esi + 0x60) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F5421; /* je: equal / zero */

loc_001F541B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5421u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F5421: ;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, 0x200);
    ebx = eax + ebx * 4;
    PUSH32(esp, 0xAA6D28);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5437u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_001F5437: ;
    eax = ebx;
    ecx = eax + 1;

loc_001F543C: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F543C; /* jne: not equal / not zero */

loc_001F5443: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5461u); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F5461: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5472; /* jge: greater or equal (signed >=) */

loc_001F5467: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5470u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F5470: ;
    goto loc_001F5477;

loc_001F5472: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;

loc_001F5477: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001F547C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F5480
 * Original: 0x001F5480 - 0x001F54BB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5480: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4643534D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x4643534D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F54B4; /* jne: not equal / not zero */

loc_001F548C: ;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x18), 0x103 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F54B4; /* jne: not equal / not zero */

loc_001F5494: ;
    SET_LO8(ecx, MEM8(eax + 0x1E));
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F54B4; /* jne: not equal / not zero */

loc_001F549F: ;
    _fa = (uint32_t)(MEM16(eax + 0x22)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x22), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F54B4; /* jne: not equal / not zero */

loc_001F54A6: ;
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0x158) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), 0x158 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F54B4; /* jne: not equal / not zero */

loc_001F54AE: ;
    _fa = (uint32_t)(MEM8(eax + 0x26)) & 0xFFu; _fb = (uint32_t)(0x1C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x26), 0x1C (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F54BB(); return; } /* je: equal / zero */

loc_001F54B4: ;
    eax = 0x8007000Du;
    g_seh_ebp = ebp; sub_001F54BD(); return; /* tail jmp 0x001F54BD */

}

/**
 * sub_001F54BB
 * Original: 0x001F54BB - 0x001F54BD (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F54BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F54BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F54BD(); return; /* fallthrough 0x001F54BD */

}

/**
 * sub_001F54BD
 * Original: 0x001F54BD - 0x001F54C0 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F54BD(void)
{

loc_001F54BD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F54C0
 * Original: 0x001F54C0 - 0x001F553A (122 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F54C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F54C0: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x74);
    eax = ebp + -28;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x22C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = 0x7C;
    PUSH32(esp, 0x001F54E5u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_001F54E5: ;
    PUSH32(esp, 4);
    eax = ebp + 0x74;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F54F4u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_001F54F4: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -28;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5503u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_001F5503: ;
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5510u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_001F5510: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F5516u); RECOMP_ABI_CALL(0x00105A36u, sub_00105A36); /* call 0x00105A36 */

loc_001F5516: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F5533; /* ja: above (unsigned >) */

loc_001F5522: ;
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0x001F552Fu); RECOMP_ABI_CALL(0x00105A12u, sub_00105A12); /* call 0x00105A12 */

loc_001F552F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F553A(); return; } /* jne: not equal / not zero */

loc_001F5533: ;
    eax = 0x8007000Du;
    g_seh_ebp = ebp; sub_001F553C(); return; /* tail jmp 0x001F553C */

}

/**
 * sub_001F553A
 * Original: 0x001F553A - 0x001F553C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F553A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F553A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F553C(); return; /* fallthrough 0x001F553C */

}

/**
 * sub_001F553C
 * Original: 0x001F553C - 0x001F5544 (8 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F553C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F553C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F5544
 * Original: 0x001F5544 - 0x001F5591 (77 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5544(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5544: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = edi + 0x140;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5576u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F5576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F55AD(); return; } /* jl: less (signed <) */

loc_001F557A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F5591(); return; } /* je: equal / zero */

loc_001F5583: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F55AD(); return; } /* jl: less (signed <) */

loc_001F558A: ;
    eax = 0x8007042Au;
    g_seh_ebp = ebp; sub_001F55AD(); return; /* tail jmp 0x001F55AD */

}

/**
 * sub_001F5591
 * Original: 0x001F5591 - 0x001F559E (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5591(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5591: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F559E(); return; } /* jne: not equal / not zero */

loc_001F5597: ;
    eax = 0x80070490u;
    g_seh_ebp = ebp; sub_001F55AD(); return; /* tail jmp 0x001F55AD */

}

/**
 * sub_001F559E
 * Original: 0x001F559E - 0x001F55AD (15 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F559E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F559E: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F55ADu); RECOMP_ABI_CALL(0x002164FFu, sub_002164FF); /* call 0x002164FF */

    g_seh_ebp = ebp; sub_001F55AD(); return; /* fallthrough 0x001F55AD */

}

/**
 * sub_001F55AD
 * Original: 0x001F55AD - 0x001F55B3 (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F55AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F55AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F55B3
 * Original: 0x001F55B3 - 0x001F5646 (147 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F55B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F55B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x290;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F55D7u); RECOMP_ABI_CALL(0x001F54C0u, sub_001F54C0); /* call 0x001F54C0 */

loc_001F55D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F563F; /* jl: less (signed <) */

loc_001F55DB: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    edi = ebx + 0x378;
    MEM32(ebp + 8) = edi;
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
    edi = MEM32(ebp + -4);
    esi = ebx + 0x3FC;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x21C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F560Eu); RECOMP_ABI_CALL(0x002174B0u, sub_002174B0); /* call 0x002174B0 */

loc_001F560E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F563F; /* jl: less (signed <) */

loc_001F5612: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F561Fu); RECOMP_ABI_CALL(0x00217565u, sub_00217565); /* call 0x00217565 */

loc_001F561F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F563F; /* jl: less (signed <) */

loc_001F5623: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F562Bu); RECOMP_ABI_CALL(0x002175C4u, sub_002175C4); /* call 0x002175C4 */

loc_001F562B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F563F; /* jl: less (signed <) */

loc_001F562F: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5639u); RECOMP_ABI_CALL(0x001F5480u, sub_001F5480); /* call 0x001F5480 */

loc_001F5639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F563F; /* jl: less (signed <) */

loc_001F563D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F563F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5646
 * Original: 0x001F5646 - 0x001F56F0 (170 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5646(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5646: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    SET_LO16(ecx, MEM16(ebx + 0x622));
    eax = ZX16(LO16(ecx));
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x64 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001F56E9; /* ja: above (unsigned >) */

loc_001F566C: ;
    esi = MEM32(ebp + 0xC);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x12F8;
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
    esi = ebx + 0x68C;
    PUSH32(esp, esi);
    ecx = ebx + 0x630;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0x5F3));
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = ebx + 0x4AC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F56B1u); RECOMP_ABI_CALL(0x002174B0u, sub_002174B0); /* call 0x002174B0 */

loc_001F56B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F56F2(); return; } /* jl: less (signed <) */

loc_001F56B5: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    edi = ebx + 0x12F8;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F56C8u); RECOMP_ABI_CALL(0x00217565u, sub_00217565); /* call 0x00217565 */

loc_001F56C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F56F2(); return; } /* jl: less (signed <) */

loc_001F56CC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F56D5u); RECOMP_ABI_CALL(0x002175C4u, sub_002175C4); /* call 0x002175C4 */

loc_001F56D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F56F2(); return; } /* jl: less (signed <) */

loc_001F56D9: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x618)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x618) (32-bit) */
    MEM32(ebx + 0x5E4) = edi;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F56F0(); return; } /* jae: above or equal (unsigned >=) */

loc_001F56E9: ;
    eax = 0x8007000Du;
    g_seh_ebp = ebp; sub_001F56F2(); return; /* tail jmp 0x001F56F2 */

}

/**
 * sub_001F56F0
 * Original: 0x001F56F0 - 0x001F56F2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F56F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F56F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F56F2(); return; /* fallthrough 0x001F56F2 */

}

/**
 * sub_001F56F2
 * Original: 0x001F56F2 - 0x001F56F9 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F56F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F56F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F56F9
 * Original: 0x001F56F9 - 0x001F5724 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F56F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F56F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebx + ebx * 8;
    MEM32(ebp + -4) = ecx;
    ecx = esi + eax * 4 + 0x1068;
    eax = ZX16(MEM16(esi + 0x392));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F5724(); return; } /* jb: below (unsigned <) */

loc_001F571D: ;
    eax = 0x8007000Du;
    g_seh_ebp = ebp; sub_001F57A1(); return; /* tail jmp 0x001F57A1 */

}

/**
 * sub_001F5724
 * Original: 0x001F5724 - 0x001F5751 (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5724(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5724: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x3F0;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ZX16(MEM16(esi + 0x392));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esi + 0x3F8) = edi;
    MEM32(esi + 0x35C) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F5751(); return; } /* jne: not equal / not zero */

loc_001F5749: ;
    eax = MEM32(esi + 0x380);
    g_seh_ebp = ebp; sub_001F5754(); return; /* tail jmp 0x001F5754 */

}

/**
 * sub_001F5751
 * Original: 0x001F5751 - 0x001F5754 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5751(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5751: ;
    eax = MEM32(ecx + 0x24);

    g_seh_ebp = ebp; sub_001F5754(); return; /* fallthrough 0x001F5754 */

}

/**
 * sub_001F5754
 * Original: 0x001F5754 - 0x001F57A1 (77 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5754(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5754: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + 0x3FC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x363));
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F577Fu); RECOMP_ABI_CALL(0x002174B0u, sub_002174B0); /* call 0x002174B0 */

loc_001F577F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F57A0; /* jl: less (signed <) */

loc_001F5783: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x12078;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5792u); RECOMP_ABI_CALL(0x00217702u, sub_00217702); /* call 0x00217702 */

loc_001F5792: ;
    MEM32(esi + 0x3D8) = ebx;
    MEM32(esi + 0x3DC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F57A0: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F57A1(); return; /* fallthrough 0x001F57A1 */

}

/**
 * sub_001F57A1
 * Original: 0x001F57A1 - 0x001F57A7 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F57A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F57A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F57CB
 * Original: 0x001F57CB - 0x001F5812 (71 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F57CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F57CB: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x354) = MEM32(eax + 0x354) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x354)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x358) = MEM32(eax + 0x358) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x358)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x3E0) = MEM32(eax + 0x3E0) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3E0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + 0x628;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F57FE; /* je: equal / zero */

loc_001F57F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F57FE; /* je: equal / zero */

loc_001F57F5: ;
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x5B8) = edx;

loc_001F57FE: ;
    MEM8(eax + 0x363) = MEM8(eax + 0x363) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x363)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 0x350) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5812
 * Original: 0x001F5812 - 0x001F5856 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5812(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5812: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0x5F3)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x5F3), 0x40 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    edi = ebx + 0x21E9C;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F5871(); return; } /* je: equal / zero */

loc_001F5830: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0x8B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5843u); RECOMP_ABI_CALL(0x000AAC6Au, sub_000AAC6A); /* call 0x000AAC6A */

loc_001F5843: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F5856(); return; } /* jne: not equal / not zero */

loc_001F5847: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F584Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F584C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5851u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F5851: ;
    g_seh_ebp = ebp; sub_001F592F(); return; /* tail jmp 0x001F592F */

}

/**
 * sub_001F5856
 * Original: 0x001F5856 - 0x001F5871 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5856(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5856: ;
    eax = ebp + -40;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx + 0x668);
    eax = eax + eax * 8;
    eax = MEM32(ebx + eax * 4 + 0x12F8);
    MEM32(ebp + -32) = eax;
    g_seh_ebp = ebp; sub_001F5879(); return; /* tail jmp 0x001F5879 */

}

/**
 * sub_001F5871
 * Original: 0x001F5871 - 0x001F592F (190 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5871(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5871: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + 0x604);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x600) (32-bit) */
    MEM32(ebp + -8) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_001F5923; /* jae: above or equal (unsigned >=) */

loc_001F5898: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;

loc_001F589E: ;
    eax = ZX16(MEM16(edi + -2));
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0x001F58B7u); RECOMP_ABI_CALL(0x0020B9D9u, sub_0020B9D9); /* call 0x0020B9D9 */

loc_001F58B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F590A; /* jl: less (signed <) */

loc_001F58BB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F590A; /* je: equal / zero */

loc_001F58C0: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F590A; /* je: equal / zero */

loc_001F58C7: ;
    esi = MEM32(ebp + -16);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x2AC;
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
    ecx = edx;
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001F5900u); RECOMP_ABI_CALL(0x0020BA11u, sub_0020BA11); /* call 0x0020BA11 */

loc_001F5900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F5939(); return; } /* jge: greater or equal (signed >=) */

loc_001F5904: ;
    edi = MEM32(ebp + -4);
    esi = MEM32(ebp + -8);

loc_001F590A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x600) (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001F589E; /* jb: below (unsigned <) */

loc_001F5923: ;
    eax = MEM32(ebx + 0x600);
    MEM32(ebx + 0x604) = eax;

    g_seh_ebp = ebp; sub_001F592F(); return; /* fallthrough 0x001F592F */

}

/**
 * sub_001F5879
 * Original: 0x001F5879 - 0x001F592F (182 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5879(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5879: ;
    esi = MEM32(ebx + 0x604);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x600) (32-bit) */
    MEM32(ebp + -8) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_001F5923; /* jae: above or equal (unsigned >=) */

loc_001F5898: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;

loc_001F589E: ;
    eax = ZX16(MEM16(edi + -2));
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0x001F58B7u); RECOMP_ABI_CALL(0x0020B9D9u, sub_0020B9D9); /* call 0x0020B9D9 */

loc_001F58B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F590A; /* jl: less (signed <) */

loc_001F58BB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F590A; /* je: equal / zero */

loc_001F58C0: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F590A; /* je: equal / zero */

loc_001F58C7: ;
    esi = MEM32(ebp + -16);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x2AC;
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
    ecx = edx;
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001F5900u); RECOMP_ABI_CALL(0x0020BA11u, sub_0020BA11); /* call 0x0020BA11 */

loc_001F5900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F5939(); return; } /* jge: greater or equal (signed >=) */

loc_001F5904: ;
    edi = MEM32(ebp + -4);
    esi = MEM32(ebp + -8);

loc_001F590A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x600) (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001F589E; /* jb: below (unsigned <) */

loc_001F5923: ;
    eax = MEM32(ebx + 0x600);
    MEM32(ebx + 0x604) = eax;

    g_seh_ebp = ebp; sub_001F592F(); return; /* fallthrough 0x001F592F */

}

/**
 * sub_001F592F
 * Original: 0x001F592F - 0x001F5939 (10 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F592F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F592F: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5932
 * Original: 0x001F5932 - 0x001F5939 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5932(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5932: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5939
 * Original: 0x001F5939 - 0x001F5996 (93 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5939(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5939: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x30) = ecx;
    MEM16(ebx + 0x3A) = LO16(ecx);
    MEM32(ebx + 0x604) = eax;
    edx = MEM32(ebx + 0xB4);
    eax = ebx + 0xA8;
    MEM32(eax) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -32));
    MEM32(ebx + 0xB8) = ecx;
    PUSH32(esp, MEM32(ebp + -20));
    MEM32(ebx + 0x10) = ecx;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xAC));
    eax = ebx + 0x2AC;
    PUSH32(esp, MEM32(ebx + 0x34));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x30));
    PUSH32(esp, 0x001F598Bu); RECOMP_ABI_CALL(0x0020B56Du, sub_0020B56D); /* call 0x0020B56D */

loc_001F598B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F592F(); return; } /* jl: less (signed <) */

loc_001F598F: ;
    eax = 0x15FFFE;
    g_seh_ebp = ebp; sub_001F5932(); return; /* tail jmp 0x001F5932 */

}

/**
 * sub_001F5996
 * Original: 0x001F5996 - 0x001F5ABB (293 bytes, 76 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5996(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F5996: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xB8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC8));
    eax = eax - 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = esi + 0x290;
    if ((_fa == 0)) goto loc_001F5A35; /* je: equal / zero */

loc_001F59B8: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(6));
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F59ED; /* je: equal / zero */

loc_001F59BD: ;
    _fb = (uint32_t)(0xD2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xD2));
    eax = eax - 0xD2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F59D7; /* je: equal / zero */

loc_001F59C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8007003Au);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F59CFu); RECOMP_ABI_CALL(0x001F5812u, sub_001F5812); /* call 0x001F5812 */

loc_001F59CF: ;
    MEM32(ebp + -4) = eax;
    goto loc_001F5AB1;

loc_001F59D7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x363) = MEM8(edi + 0x363) | 0x80;
    _fa = (uint32_t)(MEM8(edi + 0x363)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 0x350) = 0x10;
    goto loc_001F5AB1;

loc_001F59ED: ;
    edx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0x5F8);
    edi = MEM32(esi + 0xD0);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001F5AB1; /* jb: below (unsigned <) */

loc_001F5A09: ;
    if (CMP_A(_fa, _fb)) goto loc_001F5A13; /* ja: above (unsigned >) */

loc_001F5A0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F5AB1; /* jbe: below or equal (unsigned <=) */

loc_001F5A13: ;
    ebx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = edi;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = ecx;
    goto loc_001F5AB1;

loc_001F5A35: ;
    eax = MEM32(edi + 0x360);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F5A9A; /* je: equal / zero */

loc_001F5A42: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15C013) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0x15C013 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F5A9A; /* jne: not equal / not zero */

loc_001F5A4B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x5F3) = MEM8(esi + 0x5F3) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(edi + 0x5B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5A67; /* je: equal / zero */

loc_001F5A5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5A67; /* je: equal / zero */

loc_001F5A61: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5A67u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F5A67: ;
    eax = MEM32(esi + 0xFC);
    MEM32(esi + 0xD8) = eax;
    eax = MEM32(esi + 0x100);
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = ebx;
    MEM32(edi + 0x350) = 0x11;
    MEM32(esi + 0x10) = ebx;
    goto loc_001F5AB1;

loc_001F5A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 0x350) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_001F5AB1; /* je: equal / zero */

loc_001F5AAB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5AB1u); RECOMP_ABI_CALL(0x001F57CBu, sub_001F57CB); /* call 0x001F57CB */

loc_001F5AB1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5ABB
 * Original: 0x001F5ABB - 0x001F5ACF (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5ABB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F5ABB: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0xF4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5ACF
 * Original: 0x001F5ACF - 0x001F5AE4 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5ACF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5ACF: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x5F0);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5AE4
 * Original: 0x001F5AE4 - 0x001F5B35 (81 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5AE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5AE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x140;
    PUSH32(esp, esi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5AFCu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F5AFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5B2E; /* je: equal / zero */

loc_001F5B00: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5B10u); RECOMP_ABI_CALL(0x00217933u, sub_00217933); /* call 0x00217933 */

loc_001F5B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5B2E; /* jl: less (signed <) */

loc_001F5B14: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5B2E; /* jne: not equal / not zero */

loc_001F5B1A: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5B2E; /* jl: less (signed <) */

loc_001F5B22: ;
    MEM32(edi + 0x5E0) = 0xA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F5B2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5B35
 * Original: 0x001F5B35 - 0x001F5F36 (1025 bytes, 277 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5B35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5B35: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ebx = ecx + 0x290;
    esi = ebx + 0x3E0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001F5D8A; /* jne: not equal / not zero */

loc_001F5B60: ;
    ecx = MEM32(ebp + -8);
    eax = ebx + 0x3E8;
    PUSH32(esp, eax);
    eax = ebx + 0x3E4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    edi = ebx + 0x628;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5B82u); RECOMP_ABI_CALL(0x00217C15u, sub_00217C15); /* call 0x00217C15 */

loc_001F5B82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5B9D; /* jne: not equal / not zero */

loc_001F5B94: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001F5F23;

loc_001F5B9D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x103 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5C07; /* jne: not equal / not zero */

loc_001F5BA6: ;
    ecx = MEM32(ebp + -8);
    eax = ebx + 0x3FC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5BB5u); RECOMP_ABI_CALL(0x002175C4u, sub_002175C4); /* call 0x002175C4 */

loc_001F5BB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5BC0: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5BC9u); RECOMP_ABI_CALL(0x00217B5Eu, sub_00217B5E); /* call 0x00217B5E */

loc_001F5BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5BD4: ;
    MEM8(ebx + 0x363) = MEM8(ebx + 0x363) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0x363)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ebx + 0x5B8;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5BF1; /* je: equal / zero */

loc_001F5BE8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5BEEu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F5BEE: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F5BF1: ;
    MEM32(ebx + 0x350) = 0x10;

loc_001F5BFB: ;
    MEM32(ebp + -4) = 0x1500F0;
    goto loc_001F5F23;

loc_001F5C07: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 0x80 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_001F5C20; /* je: equal / zero */

loc_001F5C11: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x354) = MEM32(ebx + 0x354) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x354)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + 0x363) = MEM8(ebx + 0x363) | 0x20;
    _fa = (uint32_t)(MEM8(ebx + 0x363)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001F5C37;

loc_001F5C20: ;
    MEM32(ebx + 0x358) = MEM32(ebx + 0x358) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x358)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x354) = eax;
    MEM32(ebx + 0x350) = 0xB;

loc_001F5C37: ;
    eax = ZX16(MEM16(esi + 8));
    esi = ebx + 0x3D8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F5D7A; /* je: equal / zero */

loc_001F5C4C: ;
    ecx = MEM32(ebp + -8);
    eax = ebx + 0x3FC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5C5Bu); RECOMP_ABI_CALL(0x002175C4u, sub_002175C4); /* call 0x002175C4 */

loc_001F5C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5C66: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5D54; /* jne: not equal / not zero */

loc_001F5C6F: ;
    esi = ebx + 0x5B8;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = 0x104;
    MEM32(ebp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F5C8D; /* je: equal / zero */

loc_001F5C84: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5C8Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F5C8A: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F5C8D: ;
    eax = ebp + -280;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x18));
    MEM32(ebp + 8) = edi;
    PUSH32(esp, MEM32(ebx + 0x364));
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, MEM32(ebx + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5CB2u); RECOMP_ABI_CALL(0x00215D38u, sub_00215D38); /* call 0x00215D38 */

loc_001F5CB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5CBD: ;
    PUSH32(esp, 1);
    eax = ebp + -280;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5CD0u); RECOMP_ABI_CALL(0x000B102Eu, sub_000B102E); /* call 0x000B102E */

loc_001F5CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5D2D; /* je: equal / zero */

loc_001F5CD4: ;
    _fa = (uint32_t)(MEM8(ebx + 0x363)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x363), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5D54; /* je: equal / zero */

loc_001F5CDD: ;
    eax = ebp + -280;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x18));
    MEM32(ebp + 8) = 0x200;
    PUSH32(esp, 0xAA6D90);
    PUSH32(esp, MEM32(ebx + 0x364));
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, MEM32(ebx + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D0Bu); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F5D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5D16: ;
    PUSH32(esp, 3);
    eax = ebp + -280;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D29u); RECOMP_ABI_CALL(0x000B0E16u, sub_000B0E16); /* call 0x000B0E16 */

loc_001F5D29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5D54; /* jne: not equal / not zero */

loc_001F5D2D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D32u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F5D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F5D3D; /* jg: greater (signed >) */

loc_001F5D36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D3Bu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F5D3B: ;
    goto loc_001F5D4C;

loc_001F5D3D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D42u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F5D42: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F5D4C: ;
    MEM32(ebp + -4) = eax;
    goto loc_001F5F23;

loc_001F5D54: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5D60u); RECOMP_ABI_CALL(0x001F56F9u, sub_001F56F9); /* call 0x001F56F9 */

loc_001F5D60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5D6B: ;
    MEM32(ebx + 0x350) = 0xD;
    goto loc_001F5F23;

loc_001F5D7A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x350), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5F23; /* jne: not equal / not zero */

loc_001F5D87: ;
    ecx = MEM32(ebp + 8);

loc_001F5D8A: ;
    _fa = (uint32_t)(MEM16(ebx + 0x3F6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x3F6), 0 (16-bit) */
    esi = MEM32(ecx + 0xB0);
    eax = MEM32(ecx + 0xF0);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F5DF0; /* jne: not equal / not zero */

loc_001F5DA6: ;
    PUSH32(esp, 8);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F5BFB; /* jb: below (unsigned <) */

loc_001F5DB1: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebx + 0x3FC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5DC2u); RECOMP_ABI_CALL(0x00217565u, sub_00217565); /* call 0x00217565 */

loc_001F5DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5DCD: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - edi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x3F0) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x3F8) = MEM32(ebx + 0x3F8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x3F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x3F4) = eax;
    MEM32(ebp + -20) = esi;

loc_001F5DF0: ;
    edi = ebx + 0x3F8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5F00; /* jne: not equal / not zero */

loc_001F5DFF: ;
    eax = ZX16(MEM16(ebx + 0x3F4));
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F5F2D; /* jb: below (unsigned <) */

loc_001F5E0F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebx + 0x3FC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5E20u); RECOMP_ABI_CALL(0x00217565u, sub_00217565); /* call 0x00217565 */

loc_001F5E20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F5F23; /* jl: less (signed <) */

loc_001F5E2B: ;
    eax = MEM32(ebx + 0x3D8);
    eax = eax + eax * 8;
    ecx = ZX16(MEM16(ebx + eax * 4 + 0x106E));
    eax = ecx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001F5EA9; /* je: equal / zero */

loc_001F5E43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E54; /* je: equal / zero */

loc_001F5E48: ;
    MEM32(ebp + -4) = 0x8007000Du;
    goto loc_001F5F23;

loc_001F5E54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001F5E48; /* ja: above (unsigned >) */

loc_001F5E69: ;
    eax = MEM32(ebx + 0x35C);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    eax = eax + ebx + 0x19A0C;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0x3F4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0x3F6));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebx + 0x12078;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5E98u); RECOMP_ABI_CALL(0x00217792u, sub_00217792); /* call 0x00217792 */

loc_001F5E98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E48; /* je: equal / zero */

loc_001F5E9C: ;
    eax = ZX16(MEM16(ebx + 0x3F6));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5ED4; /* je: equal / zero */

loc_001F5EA7: ;
    goto loc_001F5E48;

loc_001F5EA9: ;
    ecx = ZX16(MEM16(ebx + 0x3F4));
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x19A0C;
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
    eax = ZX16(MEM16(ebx + 0x3F4));
    esi = MEM32(ebp + -20);
    MEM32(ebx + 0x3F8) = eax;

loc_001F5ED4: ;
    ecx = ebx + 0x35C;
    edx = MEM32(ecx);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);
    eax = ebx + 0x3F8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax));
    MEM16(ebx + 0x3F6) = LO16(eax);
    eax = ZX16(MEM16(ebx + 0x3F4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001F5F00: ;
    MEM32(ebx + 0x350) = 0xC;

loc_001F5F0A: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 0xB0));
    MEM32(ecx + 0xF0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F5F20u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F5F20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F5F23: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001F5F2D: ;
    MEM32(ebp + -4) = 0x1500F0;
    goto loc_001F5F0A;

}

/**
 * sub_001F5F5D
 * Original: 0x001F5F5D - 0x001F5FB7 (90 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5F5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5F5D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0x1000000;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x5F0), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F5F7B; /* je: equal / zero */

loc_001F5F73: ;
    eax = MEM32(esi + 0x29FB0);
    goto loc_001F5F81;

loc_001F5F7B: ;
    eax = esi + 0x140;

loc_001F5F81: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F5F89u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F5F89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5FB1; /* je: equal / zero */

loc_001F5F8D: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F5FB1; /* jl: less (signed <) */

loc_001F5F8F: ;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x5F0), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5FA5; /* jne: not equal / not zero */

loc_001F5F97: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F5F9Fu); RECOMP_ABI_CALL(0x001F5544u, sub_001F5544); /* call 0x001F5544 */

loc_001F5F9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5FA7; /* jge: greater or equal (signed >=) */

loc_001F5FA3: ;
    goto loc_001F5FB1;

loc_001F5FA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F5FA7: ;
    MEM32(esi + 0x5E0) = 1;

loc_001F5FB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5FB7
 * Original: 0x001F5FB7 - 0x001F5FF9 (66 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5FB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5FB7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x29FA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5FD2; /* je: equal / zero */

loc_001F5FC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5FCCu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F5FCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5FF5; /* je: equal / zero */

loc_001F5FD0: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F5FF5; /* jl: less (signed <) */

loc_001F5FD2: ;
    eax = MEM32(esi + 0x29FAC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x5E0) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFF00F1u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x15FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x15FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_001F5FF5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5FF9
 * Original: 0x001F5FF9 - 0x001F60A0 (167 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5FF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5FF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F3), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001F6059; /* jne: not equal / not zero */

loc_001F600A: ;
    edi = esi + 0x19C9C;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    MEM32(ebp + 8) = 0x8200;
    PUSH32(esp, MEM32(esi + 0x5F4));
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F603Fu); RECOMP_ABI_CALL(0x00215D38u, sub_00215D38); /* call 0x00215D38 */

loc_001F603F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6059; /* jl: less (signed <) */

loc_001F6043: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM8(edi + eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6055u); RECOMP_ABI_CALL(0x000B13D8u, sub_000B13D8); /* call 0x000B13D8 */

loc_001F6055: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F607E; /* jne: not equal / not zero */

loc_001F6059: ;
    MEM8(esi + 0x5F3) = MEM8(esi + 0x5F3) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    MEM32(esi + 0x5E0) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001F6098; /* je: equal / zero */

loc_001F6077: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F607Cu); RECOMP_ABI_CALL(0x000AC57Cu, sub_000AC57C); /* call 0x000AC57C */

loc_001F607C: ;
    goto loc_001F6098;

loc_001F607E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6084u); RECOMP_ABI_CALL(0x000B16FFu, sub_000B16FF); /* call 0x000B16FF */

loc_001F6084: ;
    MEM32(esi + 0x29FAC) = 0x12;
    MEM32(esi + 0x5E0) = 7;

loc_001F6098: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F60A0
 * Original: 0x001F60A0 - 0x001F614E (174 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F60A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F60A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x290)) >> 32) & 1);
    esi = esi + 0x290;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x628;
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x001F60BBu); RECOMP_ABI_CALL(0x00217E18u, sub_00217E18); /* call 0x00217E18 */

loc_001F60BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001F613E; /* jl: less (signed <) */

loc_001F60BF: ;
    if (CMP_NE(_fa, _fb)) goto loc_001F6146; /* jne: not equal / not zero */

loc_001F60C5: ;
    ecx = MEM32(esi + 0x388);
    eax = MEM32(esi + 0x354);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x3BC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x360);
    if (0x16) _cf = (int)(((eax) >> ((0x16) - 1)) & 1);
    eax = eax >> 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x394));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi));
    ecx = ebx;
    PUSH32(esp, 0x001F610Du); RECOMP_ABI_CALL(0x00217AD2u, sub_00217AD2); /* call 0x00217AD2 */

loc_001F610D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001F613E; /* jl: less (signed <) */

loc_001F6111: ;
    eax = MEM32(esi + 0x360);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001F612A; /* je: equal / zero */

loc_001F611E: ;
    MEM32(esi + 0x350) = 5;
    goto loc_001F6146;

loc_001F612A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA)) >> 32) & 1);
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x350) = eax;
    goto loc_001F6146;

loc_001F613E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F6146u); RECOMP_ABI_CALL(0x001F57CBu, sub_001F57CB); /* call 0x001F57CB */

loc_001F6146: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F614E
 * Original: 0x001F614E - 0x001F61E8 (154 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F614E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F614E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x19C9C;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    ebx = ecx;
    PUSH32(esp, MEM32(esi + 0x5F4));
    MEM32(ebp + 8) = 0x8200;
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F618Eu); RECOMP_ABI_CALL(0x00215D38u, sub_00215D38); /* call 0x00215D38 */

loc_001F618E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F61E1; /* jl: less (signed <) */

loc_001F6192: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F61A2u); RECOMP_ABI_CALL(0x000B102Eu, sub_000B102E); /* call 0x000B102E */

loc_001F61A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F61C7; /* jne: not equal / not zero */

loc_001F61A6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F61ABu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F61AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F61B6; /* jg: greater (signed >) */

loc_001F61AF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F61B4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F61B4: ;
    goto loc_001F61E1;

loc_001F61B6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F61BBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F61BB: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F61E1;

loc_001F61C7: ;
    eax = esi + 0x8B8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F61D5u); RECOMP_ABI_CALL(0x00217BF8u, sub_00217BF8); /* call 0x00217BF8 */

loc_001F61D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x5E0) = 0x12;

loc_001F61E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F61E8
 * Original: 0x001F61E8 - 0x001F6215 (45 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F61E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F61E8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x29FA8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6207; /* je: equal / zero */

loc_001F61F9: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F61FFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F61FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6211; /* je: equal / zero */

loc_001F6203: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F6211; /* jl: less (signed <) */

loc_001F6205: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F6207: ;
    MEM32(esi + 0x5E0) = 0x11;

loc_001F6211: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6215
 * Original: 0x001F6215 - 0x001F62A2 (141 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6215(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6215: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x8B8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6229u); RECOMP_ABI_CALL(0x00217BF8u, sub_00217BF8); /* call 0x00217BF8 */

loc_001F6229: ;
    edi = esi + 0x12108;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    MEM32(ebp + 8) = 0x200;
    PUSH32(esp, 0xAA6D9C);
    PUSH32(esp, MEM32(esi + 0x5F4));
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6263u); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F6263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F629C; /* jl: less (signed <) */

loc_001F6267: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F626Du); RECOMP_ABI_CALL(0x000AE317u, sub_000AE317); /* call 0x000AE317 */

loc_001F626D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6290; /* jne: not equal / not zero */

loc_001F6271: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6276u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6276: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6290; /* je: equal / zero */

loc_001F627B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6290; /* je: equal / zero */

loc_001F6280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F629C; /* jle: less or equal (signed <=) */

loc_001F6284: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F629C;

loc_001F6290: ;
    MEM32(esi + 0x5E0) = 0x13;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F629C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F62A2
 * Original: 0x001F62A2 - 0x001F62EE (76 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F62A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F62A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F62B3; /* jne: not equal / not zero */

loc_001F62AC: ;
    eax = 0x80150005u;
    goto loc_001F62EA;

loc_001F62B3: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F62C6u); RECOMP_ABI_CALL(0x001FE520u, sub_001FE520); /* call 0x001FE520 */

loc_001F62C6: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F62D8; /* je: equal / zero */

loc_001F62CD: ;
    edx = MEM32(ebp + -8);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + -4);
    MEM32(ecx + 4) = edx;

loc_001F62D8: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F62EA; /* je: equal / zero */

loc_001F62DF: ;
    edx = MEM32(ebp + -16);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + -12);
    MEM32(ecx + 4) = edx;

loc_001F62EA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F632D
 * Original: 0x001F632D - 0x001F6335 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F632D(void)
{

loc_001F632D: ;
    eax = 0x80004001u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6335
 * Original: 0x001F6335 - 0x001F633E (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6335(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001F6335: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000AA2FC(); return; /* tail jmp 0x000AA2FC */

}

/**
 * sub_001F638A
 * Original: 0x001F638A - 0x001F63AC (34 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F638A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F638A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F63A8u); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F63A8: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F63AC
 * Original: 0x001F63AC - 0x001F63D3 (39 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F63AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001F63AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F63CFu); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F63CF: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F63D3
 * Original: 0x001F63D3 - 0x001F63EC (25 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F63D3: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x5F3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x5F3), 1 (8-bit) */
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F63EC(); return; } /* je: equal / zero */

loc_001F63E5: ;
    PUSH32(esp, 0x001F63EAu); RECOMP_ABI_CALL(0x0020CB23u, sub_0020CB23); /* call 0x0020CB23 */

loc_001F63EA: ;
    g_seh_ebp = ebp; sub_001F63F1(); return; /* tail jmp 0x001F63F1 */

}

/**
 * sub_001F63EC
 * Original: 0x001F63EC - 0x001F63F1 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F63EC: ;
    PUSH32(esp, 0x001F63F1u); RECOMP_ABI_CALL(0x001F55B3u, sub_001F55B3); /* call 0x001F55B3 */

    g_seh_ebp = ebp; sub_001F63F1(); return; /* fallthrough 0x001F63F1 */

}

/**
 * sub_001F63F1
 * Original: 0x001F63F1 - 0x001F63F4 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63F1(void)
{

loc_001F63F1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F63F4
 * Original: 0x001F63F4 - 0x001F648F (155 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F63F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F63F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x290;
    esi = edi + 0x5B8;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F641D; /* je: equal / zero */

loc_001F6414: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F641Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F641A: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F641D: ;
    ecx = MEM32(ebp + -4);
    eax = edi + 0x628;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F642Cu); RECOMP_ABI_CALL(0x00217BF8u, sub_00217BF8); /* call 0x00217BF8 */

loc_001F642C: ;
    esi = MEM32(ebp + -4);
    eax = ebx + 0x140;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F643Du); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001F643D: ;
    ecx = edi + 0x360;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6468; /* je: equal / zero */

loc_001F644C: ;
    eax = eax & 0xFDFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = esi + 0x13A0;
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

loc_001F6468: ;
    _fb = (uint32_t)(0x29FB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x29FB0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F647F; /* je: equal / zero */

loc_001F6474: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F647Cu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F647C: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F647F: ;
    ecx = 0xA748;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F648F
 * Original: 0x001F648F - 0x001F6494 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F648F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F648F: ;
    g_seh_ebp = ebp; sub_001F63F4(); return; /* tail jmp 0x001F63F4 */

}

/**
 * sub_001F6494
 * Original: 0x001F6494 - 0x001F6735 (673 bytes, 177 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6494(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6494: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x290;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x354)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x354), ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F6571; /* jne: not equal / not zero */

loc_001F64B5: ;
    _fa = (uint32_t)(MEM32(edi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xD4), ebx (32-bit) */
    eax = 0xF90;
    if (CMP_A(_fa, _fb)) goto loc_001F64D2; /* ja: above (unsigned >) */

loc_001F64C2: ;
    if (CMP_B(_fa, _fb)) goto loc_001F64CC; /* jb: below (unsigned <) */

loc_001F64C4: ;
    _fa = (uint32_t)(MEM32(edi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xD0), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F64D2; /* jae: above or equal (unsigned >=) */

loc_001F64CC: ;
    eax = MEM32(edi + 0xD0);

loc_001F64D2: ;
    _fa = (uint32_t)(MEM32(edi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xF0), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F66A1; /* jb: below (unsigned <) */

loc_001F64DE: ;
    PUSH32(esp, MEM32(edi + 0xB0));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F64EAu); RECOMP_ABI_CALL(0x001F63D3u, sub_001F63D3); /* call 0x001F63D3 */

loc_001F64EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F64F2: ;
    eax = MEM32(edi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x380)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x380) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6537; /* jne: not equal / not zero */

loc_001F6500: ;
    eax = MEM32(edi + 0xB0);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6515u); RECOMP_ABI_CALL(0x001F5646u, sub_001F5646); /* call 0x001F5646 */

loc_001F6515: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F651D: ;
    eax = MEM32(esi + 0x354);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xD4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F6541; /* jb: below (unsigned <) */

loc_001F652D: ;
    if (CMP_A(_fa, _fb)) goto loc_001F6537; /* ja: above (unsigned >) */

loc_001F652F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xD0) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F6541; /* jbe: below or equal (unsigned <=) */

loc_001F6537: ;
    eax = 0x8007000Du;
    goto loc_001F672E;

loc_001F6541: ;
    eax = MEM32(edi + 0xB0);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0x7C) = ebx;
    eax = MEM32(esi + 0x354);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x5B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6569u); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_001F6569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F6571: ;
    _fa = (uint32_t)(MEM8(esi + 0x360)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x360), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F66B4; /* je: equal / zero */

loc_001F657E: ;
    ecx = MEM32(ebp + -4);
    ebx = esi + 0x59C;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F658Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F658D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F66AB; /* je: equal / zero */

loc_001F6595: ;
    MEM32(esi + 0x360) = MEM32(esi + 0x360) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0x360)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F65A4: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F65B3u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001F65B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F65BB: ;
    eax = MEM32(esi + 0x35C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0xF0) = MEM32(edi + 0xF0) - eax;
    _fa = (uint32_t)(MEM32(edi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(edi + 0xB0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x35C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F65E3u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F65E3: ;
    edx = MEM32(esi + 0x35C);
    eax = esi + 0x358;
    ecx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x354)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x354) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F66A1; /* jb: below (unsigned <) */

loc_001F660A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6615u); RECOMP_ABI_CALL(0x001F56F9u, sub_001F56F9); /* call 0x001F56F9 */

loc_001F6615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F661D: ;
    ecx = MEM32(esi + 0x388);
    eax = MEM32(esi + 0x354);
    edx = esi + 0x628;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x3BC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8200);
    MEM32(ebp + 8) = eax;
    edx = esi + 0x19A0C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x360);
    eax = eax >> 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x394));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x5B8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F667Bu); RECOMP_ABI_CALL(0x00217AD2u, sub_00217AD2); /* call 0x00217AD2 */

loc_001F667B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F6683: ;
    MEM32(esi + 0x5B8) = MEM32(esi + 0x5B8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x5B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x350) = 0xF;
    _fa = (uint32_t)(MEM32(edi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xF0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F672C; /* jne: not equal / not zero */

loc_001F66A1: ;
    eax = 0x1500F0;
    goto loc_001F672E;

loc_001F66AB: ;
    _fa = (uint32_t)(MEM8(esi + 0x360)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x360), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F672C; /* jne: not equal / not zero */

loc_001F66B4: ;
    ecx = MEM32(esi + 0x358);
    eax = MEM32(edi + 0xF0);
    edx = MEM32(esi + 0x354);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ebx = esi + 0x59C;
    if (CMP_B(_fa, _fb)) goto loc_001F66EC; /* jb: below (unsigned <) */

loc_001F66D2: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(esi + 0x358)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x35C) = eax;
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001F66F7;

loc_001F66EC: ;
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x35C) = eax;

loc_001F66F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x358));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xB0));
    PUSH32(esp, MEM32(ebx + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6716u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001F6716: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6721u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001F6721: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F672E; /* jl: less (signed <) */

loc_001F6725: ;
    MEM32(esi + 0x360) = MEM32(esi + 0x360) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x360)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F672C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F672E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6735
 * Original: 0x001F6735 - 0x001F68D0 (411 bytes, 121 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6735(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6735: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x670);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF), 0x80 (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001F681F; /* jne: not equal / not zero */

loc_001F6756: ;
    eax = MEM32(esi + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F676E; /* je: equal / zero */

loc_001F6761: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6767u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F6767: ;
    MEM32(esi + 0x848) = MEM32(esi + 0x848) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x848)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F676E: ;
    eax = MEM32(esi + 0x2A8);
    edi = esi + 0x12108;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x674));
    MEM32(ebp + 8) = 0x200;
    PUSH32(esp, MEM32(esi + 0x5F4));
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F67AAu); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F67AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F68C9; /* jl: less (signed <) */

loc_001F67B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x68000080);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F67C8u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001F67C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x848) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F6832; /* jne: not equal / not zero */

loc_001F67D3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F67D8u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F67D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6815; /* jne: not equal / not zero */

loc_001F67DD: ;
    eax = MEM32(esi + 0x298);
    ecx = esi + 0x860;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F67FEu); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F67FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F68C9; /* jl: less (signed <) */

loc_001F6806: ;
    MEM32(esi + 0x5E0) = 0xE;
    goto loc_001F68C7;

loc_001F6815: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F68C9; /* jle: less or equal (signed <=) */

loc_001F681D: ;
    goto loc_001F685A;

loc_001F681F: ;
    _fa = (uint32_t)(MEM32(esi + 0x848)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x848), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6832; /* jne: not equal / not zero */

loc_001F6828: ;
    eax = 0x80004005u;
    goto loc_001F68C9;

loc_001F6832: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x848));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6841u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_001F6841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6866; /* jne: not equal / not zero */

loc_001F6845: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F684Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F684A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F6855; /* jg: greater (signed >) */

loc_001F684E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6853u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6853: ;
    goto loc_001F68C9;

loc_001F6855: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F685Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F685A: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F68C9;

loc_001F6866: ;
    edi = MEM32(esi + 0x5E4);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFE00u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F68A4; /* jg: greater (signed >) */

loc_001F6882: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F6889; /* jl: less (signed <) */

loc_001F6884: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F68A4; /* jae: above or equal (unsigned >=) */

loc_001F6889: ;
    edx = edi;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x200000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F68A4; /* jbe: below or equal (unsigned <=) */

loc_001F6897: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F68A4: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x848));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F68B3u); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_001F68B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F68C9; /* jl: less (signed <) */

loc_001F68B7: ;
    MEM32(esi + 0x67C) = edi;
    MEM32(esi + 0x5E0) = 0xA;

loc_001F68C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F68C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F68D0
 * Original: 0x001F68D0 - 0x001F6A7D (429 bytes, 120 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F68D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F68D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x5F0)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F0), 2 (8-bit) */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = esi + 0x82C;
    if (TEST_Z(_fa, _fb)) goto loc_001F69BA; /* je: equal / zero */

loc_001F68F2: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F68F8u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F68F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6A74; /* je: equal / zero */

loc_001F6900: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6A76; /* jl: less (signed <) */

loc_001F690F: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F691Du); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001F691D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6A76; /* jl: less (signed <) */

loc_001F6925: ;
    eax = MEM32(esi + 0x5EC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x688) = MEM32(esi + 0x688) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x688)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x688);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x66C) = MEM32(esi + 0x66C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x66C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = eax + esi + 0x19C9C;
    PUSH32(esp, eax);
    eax = esi + 0x19C9C;
    SET_LO16(edx, LO16(ecx));
    PUSH32(esp, eax);
    MEM16(esi + 0x686) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F695Cu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F695C: ;
    eax = MEM32(esi + 0x688);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x5EC) = eax;
    eax = esi + 0x5E8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x5E4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F69A3; /* jb: below (unsigned <) */

loc_001F6982: ;
    if (CMP_BE(_fa, _fb)) goto loc_001F699A; /* jbe: below or equal (unsigned <=) */

loc_001F6984: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x848));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6992u); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_001F6992: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6A76; /* jl: less (signed <) */

loc_001F699A: ;
    MEM32(esi + 0x670) = MEM32(esi + 0x670) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x670)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001F69AB;

loc_001F69A3: ;
    MEM16(esi + 0x686) = MEM16(esi + 0x686) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x686)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_001F69AB: ;
    MEM32(esi + 0x5E0) = 0xA;
    goto loc_001F6A74;

loc_001F69BA: ;
    ebx = MEM32(esi + 0x5E4);
    edx = MEM32(esi + 0x5E8);
    edi = MEM32(esi + 0x688);
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F69E9; /* jb: below (unsigned <) */

loc_001F69D4: ;
    edi = eax + 0x1FF;
    MEM32(esi + 0x5EC) = eax;
    eax = 0xFFFFFE00u;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001F69F6;

loc_001F69E9: ;
    eax = 0xFFFFFE00u;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x5EC) = edi;

loc_001F69F6: ;
    ecx = MEM32(esi + 0x67C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F6A34; /* jae: above or equal (unsigned >=) */

loc_001F6A02: ;
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1FF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F6A1B; /* jbe: below or equal (unsigned <=) */

loc_001F6A15: ;
    ebx = ecx + 0x200000;

loc_001F6A1B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x848));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6A2Au); RECOMP_ABI_CALL(0x00216197u, sub_00216197); /* call 0x00216197 */

loc_001F6A2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6A76; /* jl: less (signed <) */

loc_001F6A2E: ;
    MEM32(esi + 0x67C) = ebx;

loc_001F6A34: ;
    eax = MEM32(esi + 0x5E8);
    ebx = esi + 0x82C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x298));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi + 0x19C9C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6A5Eu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001F6A5E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6A69u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001F6A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6A76; /* jl: less (signed <) */

loc_001F6A6D: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F6A74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F6A76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6A7D
 * Original: 0x001F6A7D - 0x001F6B1C (159 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6A7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6A7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x860;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6A95u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F6A95: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6B16; /* je: equal / zero */

loc_001F6A9B: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F6B16; /* jl: less (signed <) */

loc_001F6A9D: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x12108;
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    MEM32(ebp + 8) = 0x200;
    PUSH32(esp, 0xAA6D9C);
    PUSH32(esp, MEM32(esi + 0x5F4));
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6AD8u); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F6AD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6B15; /* jl: less (signed <) */

loc_001F6ADC: ;
    eax = MEM32(esi + 0x298);
    ecx = esi + 0x860;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6AFDu); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F6AFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6B15; /* jl: less (signed <) */

loc_001F6B01: ;
    MEM32(esi + 0x29FAC) = 8;
    MEM32(esi + 0x5E0) = 4;

loc_001F6B15: ;
    POP32(esp, ebx);

loc_001F6B16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6B1C
 * Original: 0x001F6B1C - 0x001F6BA1 (133 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6B1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6B1C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x860;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6B2Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F6B2E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6B9A; /* je: equal / zero */

loc_001F6B34: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F6B9A; /* jl: less (signed <) */

loc_001F6B36: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    eax = esi + 0x12108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6B54u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001F6B54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x848) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F6B86; /* jne: not equal / not zero */

loc_001F6B5F: ;
    PUSH32(esp, 0x001F6B64u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6B64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F6B71; /* jg: greater (signed >) */

loc_001F6B68: ;
    PUSH32(esp, 0x001F6B6Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6B6D: ;
    edi = eax;
    goto loc_001F6B9A;

loc_001F6B71: ;
    PUSH32(esp, 0x001F6B76u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6B76: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F6B9A;

loc_001F6B86: ;
    MEM32(esi + 0x29FAC) = 8;
    MEM32(esi + 0x5E0) = 7;

loc_001F6B9A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6BA1
 * Original: 0x001F6BA1 - 0x001F6E7A (729 bytes, 201 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6BA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6BA1: ;
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
    eax = esi + 0x12108;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0xAA6D9C);
    PUSH32(esp, MEM32(esi + 0x5F4));
    edi = esi + 0x82C;
    PUSH32(esp, MEM32(esi + 0x2A4));
    MEM32(ebp + -4) = 0x200;
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6BF0u); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F6BF0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6BFD: ;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F3), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6CF6; /* jne: not equal / not zero */

loc_001F6C0A: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6C1A; /* je: equal / zero */

loc_001F6C11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6D00; /* jne: not equal / not zero */

loc_001F6C1A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x68000080);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    eax = esi + 0x12108;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6C36u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001F6C36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F6CCF; /* je: equal / zero */

loc_001F6C42: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6C4Cu); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_001F6C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6CF6; /* je: equal / zero */

loc_001F6C54: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x180 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F6D00; /* jbe: below or equal (unsigned <=) */

loc_001F6C63: ;
    eax = 0xF90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x5E4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001F6C78; /* jae: above or equal (unsigned >=) */

loc_001F6C72: ;
    MEM32(esi + 0x5E4) = ecx;

loc_001F6C78: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x298));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5E4);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = esi + 0x19C9C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6CA6u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001F6CA6: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6CB1u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001F6CB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6CBC: ;
    MEM8(esi + 0x5F3) = MEM8(esi + 0x5F3) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x5E0) = 2;
    goto loc_001F6D00;

loc_001F6CCF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6CD4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6CD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6CDE; /* je: equal / zero */

loc_001F6CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6CF6; /* jne: not equal / not zero */

loc_001F6CDE: ;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F3), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6CF6; /* jne: not equal / not zero */

loc_001F6CE7: ;
    MEM32(esi + 0x5E0) = 6;
    goto loc_001F6E70;

loc_001F6CF6: ;
    MEM8(esi + 0x5F3) = MEM8(esi + 0x5F3) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebp + 8) = ebx;

loc_001F6D00: ;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F3), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6E70; /* jne: not equal / not zero */

loc_001F6D0D: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6D1F; /* je: equal / zero */

loc_001F6D15: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6D1Bu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F6D1B: ;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F6D1F: ;
    _fa = (uint32_t)(MEM8(esi + 0x5F3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5F3), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6DF3; /* jne: not equal / not zero */

loc_001F6D2C: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x34));
    eax = esi + 0x2AC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x30));
    MEM32(esi + 0xAC) = ecx;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6D63u); RECOMP_ABI_CALL(0x0020B56Du, sub_0020B56D); /* call 0x0020B56D */

loc_001F6D63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6D6E: ;
    eax = esi + 0x12108;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    edi = 0x200;
    PUSH32(esp, MEM32(esi + 0x5F4));
    MEM32(ebp + -4) = edi;
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6DA4u); RECOMP_ABI_CALL(0x00215D38u, sub_00215D38); /* call 0x00215D38 */

loc_001F6DA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6DAF: ;
    eax = MEM32(esi + 0x298);
    ecx = esi + 0x860;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x19C9C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    eax = esi + 0x12108;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6DDCu); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F6DDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6DE7: ;
    MEM32(esi + 0x5E0) = 3;
    goto loc_001F6E70;

loc_001F6DF3: ;
    edi = esi + 0x12108;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2A8));
    MEM32(ebp + -4) = 0x200;
    PUSH32(esp, 0xAA6D9C);
    PUSH32(esp, MEM32(esi + 0x5F4));
    PUSH32(esp, MEM32(esi + 0x2A4));
    PUSH32(esp, MEM32(esi + 0x2A0));
    PUSH32(esp, MEM32(esi + 0x29C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6E2Du); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F6E2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6E34: ;
    eax = MEM32(esi + 0x298);
    ecx = esi + 0x860;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6E55u); RECOMP_ABI_CALL(0x00216D1Fu, sub_00216D1F); /* call 0x00216D1F */

loc_001F6E55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F6E70; /* jl: less (signed <) */

loc_001F6E5C: ;
    MEM32(esi + 0x29FAC) = 8;
    MEM32(esi + 0x5E0) = 4;

loc_001F6E70: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6E7A
 * Original: 0x001F6E7A - 0x001F7002 (392 bytes, 128 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F6E7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6E7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x290;
    ebx = esi + 0x59C;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6E9Fu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F6E9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6F38; /* je: equal / zero */

loc_001F6EA7: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6EAD: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6EBEu); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001F6EBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6EC2: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6ECEu); RECOMP_ABI_CALL(0x001F63D3u, sub_001F63D3); /* call 0x001F63D3 */

loc_001F6ECE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6ED2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6EE4u); RECOMP_ABI_CALL(0x001F5646u, sub_001F5646); /* call 0x001F5646 */

loc_001F6EE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6EE8: ;
    eax = MEM32(ebp + -8);
    ebx = MEM32(eax + 0x7C);
    eax = ZX16(MEM16(esi + 0x392));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F6F2D; /* jae: above or equal (unsigned >=) */

loc_001F6EF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F6F2D; /* jae: above or equal (unsigned >=) */

loc_001F6EFE: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F08u); RECOMP_ABI_CALL(0x001F56F9u, sub_001F56F9); /* call 0x001F56F9 */

loc_001F6F08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6F0C: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x5B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F1Fu); RECOMP_ABI_CALL(0x000AAC6Au, sub_000AAC6A); /* call 0x000AAC6A */

loc_001F6F1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6F3F; /* jne: not equal / not zero */

loc_001F6F23: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F28u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6F28: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F2Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001F6F2D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F36u); RECOMP_ABI_CALL(0x001F57CBu, sub_001F57CB); /* call 0x001F57CB */

loc_001F6F36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F6F38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001F6F3F: ;
    ecx = MEM32(esi + 0x388);
    eax = MEM32(esi + 0x354);
    edx = esi + 0x628;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x3BC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8200);
    MEM32(ebp + 8) = eax;
    edx = esi + 0x19A0C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x360);
    eax = eax >> 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x394));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x5B8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6F9Du); RECOMP_ABI_CALL(0x00217AD2u, sub_00217AD2); /* call 0x00217AD2 */

loc_001F6F9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6FA1: ;
    MEM32(esi + 0x5B8) = MEM32(esi + 0x5B8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x5B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(edi + 0xB4);
    eax = edi + 0xA8;
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0xB0);
    edx = ebx + ebx * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(edi + 0xAC) = ecx;
    edx = MEM32(esi + edx * 4 + 0x1068);
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 0x34));
    ecx = MEM32(ebp + -4);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F6FEBu); RECOMP_ABI_CALL(0x0020B56Du, sub_0020B56D); /* call 0x0020B56D */

loc_001F6FEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6F2D; /* jl: less (signed <) */

loc_001F6FF3: ;
    MEM32(esi + 0x350) = 0xF;
    goto loc_001F6F38;

}

/**
 * sub_001F7002
 * Original: 0x001F7002 - 0x001F712B (297 bytes, 88 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7002: ;
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
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x290;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x3E8;
    PUSH32(esp, eax);
    ebx = esi + 0x3E4;
    PUSH32(esp, ebx);
    edi = esi + 0x3E0;
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = esi + 0x628;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F703Bu); RECOMP_ABI_CALL(0x00217C15u, sub_00217C15); /* call 0x00217C15 */

loc_001F703B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F70F7; /* jl: less (signed <) */

loc_001F7043: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7122; /* je: equal / zero */

loc_001F704E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F70F7; /* je: equal / zero */

loc_001F7059: ;
    eax = MEM32(edi);
    ecx = ZX16(MEM16(eax + 8));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x3D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7122; /* jne: not equal / not zero */

loc_001F706B: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x358) = MEM32(esi + 0x358) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x358)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x354) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F710E; /* je: equal / zero */

loc_001F7084: ;
    edi = ZX16(MEM16(eax + 0xC));
    eax = ZX16(MEM16(eax + 0xA));
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi + 0x11E78;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(ebp + 8) = 0x200;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(esi + 0x364));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F70BCu); RECOMP_ABI_CALL(0x00215F0Du, sub_00215F0D); /* call 0x00215F0D */

loc_001F70BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F70F7; /* jl: less (signed <) */

loc_001F70C0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x68000080);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    eax = esi + 0x11E78;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F70DEu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001F70DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x5B8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F70F7; /* je: equal / zero */

loc_001F70E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F70F2u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_001F70F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7102; /* jne: not equal / not zero */

loc_001F70F7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7100u); RECOMP_ABI_CALL(0x001F57CBu, sub_001F57CB); /* call 0x001F57CB */

loc_001F7100: ;
    goto loc_001F7122;

loc_001F7102: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x354) = MEM32(esi + 0x354) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x354)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x358) = MEM32(esi + 0x358) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x358)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F710E: ;
    MEM32(esi + 0x29D1C) = 0xB;
    MEM32(esi + 0x350) = 7;

loc_001F7122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F712B
 * Original: 0x001F712B - 0x001F7282 (343 bytes, 108 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F712B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F712B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(esi + 0x5F0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    edi = esi + 0x12BC;
    eax = esi + 0x12108;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F71E5; /* je: equal / zero */

loc_001F7156: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F715Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F715D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7279; /* je: equal / zero */

loc_001F7165: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F7174: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7184u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001F7184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F718C: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F71A0; /* je: equal / zero */

loc_001F7196: ;
    eax = 0x8007000Du;
    goto loc_001F727B;

loc_001F71A0: ;
    ecx = MEM32(esi + 0x668);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(edx + 0x7C) = ecx;
    PUSH32(esp, MEM32(esi + 0x298));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F71C7u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001F71C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F71D1u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001F71D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F71D9: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F7279;

loc_001F71E5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7248; /* je: equal / zero */

loc_001F71EA: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F71F1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F71F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7279; /* je: equal / zero */

loc_001F71F9: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F7204: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7214u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001F7214: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F7218: ;
    eax = MEM32(esi + 0x5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F723C; /* je: equal / zero */

loc_001F7225: ;
    eax = eax & 0xDFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x5E0) = 0xA;
    MEM32(esi + 0x5F0) = eax;
    goto loc_001F7279;

loc_001F723C: ;
    MEM32(esi + 0x5E0) = 0xB;
    goto loc_001F7279;

loc_001F7248: ;
    PUSH32(esp, MEM32(esi + 0x298));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7264u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001F7264: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F726Eu); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001F726E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F727B; /* jl: less (signed <) */

loc_001F7272: ;
    MEM32(esi + 0x5F0) = MEM32(esi + 0x5F0) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x5F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F7279: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F727B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7282
 * Original: 0x001F7282 - 0x001F72F9 (119 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7282(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7282: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x350);
    _fb = (uint32_t)(0xFFFFFD70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFD70u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    ebx = ecx;
    ebp = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001F72AD; /* jge: greater or equal (signed >=) */

loc_001F72A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp * 4 + 0xAA6D40); PUSH32(esp, 0x001F72A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F72A2u); } /* indirect call */
    }

loc_001F72A9: ;
    edi = eax;
    goto loc_001F72B4;

loc_001F72AD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001F72CD; /* je: equal / zero */

loc_001F72AF: ;
    edi = 0x80004005u;

loc_001F72B4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F72CD; /* jge: greater or equal (signed >=) */

loc_001F72B8: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F72C0u); RECOMP_ABI_CALL(0x001F63F4u, sub_001F63F4); /* call 0x001F63F4 */

loc_001F72C0: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x5E0) = 0x13;

loc_001F72CD: ;
    eax = MEM32(esi + 0x5E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F72E4; /* jne: not equal / not zero */

loc_001F72D8: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F72E4; /* jl: less (signed <) */

loc_001F72DF: ;
    edi = 0x1500F0;

loc_001F72E4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F72F0; /* je: equal / zero */

loc_001F72E8: ;
    PUSH32(esp, 0x001F72EDu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001F72ED: ;
    MEM32(esi + 0x20) = eax;

loc_001F72F0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F72F9
 * Original: 0x001F72F9 - 0x001F7396 (157 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F72F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F72F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA7F0;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    edi = esi + 0x290;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7320u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F7320: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = edi + 0x1E78;
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = 0x10000;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7381u); RECOMP_ABI_CALL(0x0020BFB0u, sub_0020BFB0); /* call 0x0020BFB0 */

loc_001F7381: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F7396(); return; } /* jge: greater or equal (signed >=) */

loc_001F738B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7391u); RECOMP_ABI_CALL(0x001F63F4u, sub_001F63F4); /* call 0x001F63F4 */

loc_001F7391: ;
    g_seh_ebp = ebp; sub_001F74A3(); return; /* tail jmp 0x001F74A3 */

}

/**
 * sub_001F7396
 * Original: 0x001F7396 - 0x001F74A3 (269 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7396(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7396: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F739Cu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F739C: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x28);
    MEM32(edi + 8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x14) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(edi + 0x18) = eax;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    MEM32(edi + 0x29D14) = ecx;
    ecx = MEM32(ebp + 0x2C);
    MEM32(edi) = 0x1F7282;
    MEM32(edi + 0x350) = ebx;
    MEM32(edi + 0x29D1C) = 0x13;
    MEM32(edi + 0x368) = ebx;
    MEM32(edi + 0x36C) = ebx;
    MEM32(edi + 0x370) = ebx;
    MEM32(edi + 0x374) = ebx;
    MEM32(edi + 0x360) = eax;
    MEM32(edi + 0x29D18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F7414; /* je: equal / zero */

loc_001F740A: ;
    MEM32(edi + 0x350) = 1;

loc_001F7414: ;
    eax = edi + 0x12078;
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = 0x1F5812;
    MEM32(esi + 0x108) = 0x1F5996;
    MEM32(esi + 0x10C) = 0x1F5ABB;
    MEM32(esi + 0x110) = 0x1F5ACF;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = 0x1F648F;
    MEM32(esi + 0x11C) = edi;
    MEM32(esi + 0x120) = edi;
    MEM32(esi + 0x124) = edi;
    esi = MEM32(ebp + -4);
    PUSH32(esp, 0x8000);
    eax = edi + 0x21C0C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F747Bu); RECOMP_ABI_CALL(0x00217724u, sub_00217724); /* call 0x00217724 */

loc_001F747B: ;
    edx = 0x2000000;
    _fa = (uint32_t)(MEM32(edi + 0x360)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x360), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F74A3(); return; } /* jne: not equal / not zero */

loc_001F7488: ;
    _fb = (uint32_t)(0x13A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x13A0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    eax = 1;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x360) = MEM32(edi + 0x360) | edx;
    _fa = (uint32_t)(MEM32(edi + 0x360)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001F74A3(); return; /* fallthrough 0x001F74A3 */

}

/**
 * sub_001F74A3
 * Original: 0x001F74A3 - 0x001F74AD (10 bytes, 6 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F74A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F74A3: ;
    eax = MEM32(ebp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001F74AD
 * Original: 0x001F74AD - 0x001F7558 (171 bytes, 70 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F74AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F74AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F74C4; /* jne: not equal / not zero */

loc_001F74BA: ;
    eax = 0x80150005u;
    goto loc_001F7552;

loc_001F74C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2008);
    PUSH32(esp, 0x29FC0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F74D6u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F74D6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F74E5; /* jne: not equal / not zero */

loc_001F74DC: ;
    MEM32(ebp + 0x10) = 0x8007000Eu;
    goto loc_001F754E;

loc_001F74E5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7530);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7504u); RECOMP_ABI_CALL(0x001F72F9u, sub_001F72F9); /* call 0x001F72F9 */

loc_001F7504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F753F; /* jl: less (signed <) */

loc_001F750B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7519u); RECOMP_ABI_CALL(0x0021644Fu, sub_0021644F); /* call 0x0021644F */

loc_001F7519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F753F; /* jl: less (signed <) */

loc_001F7520: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x236550);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7538u); RECOMP_ABI_CALL(0x001FEA96u, sub_001FEA96); /* call 0x001FEA96 */

loc_001F7538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001F7549; /* jge: greater or equal (signed >=) */

loc_001F753F: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7547u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F7547: ;
    goto loc_001F754E;

loc_001F7549: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_001F754E: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, esi);

loc_001F7552: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F7558
 * Original: 0x001F7558 - 0x001F7636 (222 bytes, 85 insns)
 * Category: game_network
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7558(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7558: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001F7570; /* jne: not equal / not zero */

loc_001F7566: ;
    eax = 0x80150005u;
    goto loc_001F7631;

loc_001F7570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2008);
    PUSH32(esp, 0x29FC0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7583u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F7583: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7593; /* jne: not equal / not zero */

loc_001F7589: ;
    esi = 0x8007000Eu;
    goto loc_001F7614;

loc_001F7593: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F759Bu); RECOMP_ABI_CALL(0x001F192Cu, sub_001F192C); /* call 0x001F192C */

loc_001F759B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7614; /* jl: less (signed <) */

loc_001F75A1: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x8000000);
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F75C7u); RECOMP_ABI_CALL(0x001F72F9u, sub_001F72F9); /* call 0x001F72F9 */

loc_001F75C7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7614; /* jl: less (signed <) */

loc_001F75CD: ;
    MEM32(ebx + 0x5F4) = MEM32(ebx + 0x5F4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x5F4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x28);
    edi = ebx + 0x4AC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + 0x24);
    edi = ebx + 0x4BC;
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
    PUSH32(esp, ebx);
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F760Eu); RECOMP_ABI_CALL(0x002181E7u, sub_002181E7); /* call 0x002181E7 */

loc_001F760E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7628; /* jge: greater or equal (signed >=) */

loc_001F7614: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7619u); RECOMP_ABI_CALL(0x001F1942u, sub_001F1942); /* call 0x001F1942 */

loc_001F7619: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F762D; /* je: equal / zero */

loc_001F761D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7626u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F7626: ;
    goto loc_001F762D;

loc_001F7628: ;
    eax = MEM32(ebp + 0x30);
    MEM32(eax) = ebx;

loc_001F762D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001F7631: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001F7636
 * Original: 0x001F7636 - 0x001F7681 (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7636: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, esi);
    ebx = eax + 0x1B7C;
    PUSH32(esp, edi);
    edi = ebx;
    MEM32(ebp + -8) = edi;

loc_001F764F: ;
    ecx = MEM32(edi);
    ecx = ecx | MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F7662; /* je: equal / zero */

loc_001F7656: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    esi = ebp + 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001F7681(); return; } /* je: equal / zero */

loc_001F7662: ;
    edi = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001F764F; /* jb: below (unsigned <) */

loc_001F7674: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F768A(); return; } /* jne: not equal / not zero */

loc_001F767A: ;
    eax = 0x80155100u;
    g_seh_ebp = ebp; sub_001F76A8(); return; /* tail jmp 0x001F76A8 */

}

/**
 * sub_001F7681
 * Original: 0x001F7681 - 0x001F768A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7681(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7681: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_001F768C(); return; /* tail jmp 0x001F768C */

}

/**
 * sub_001F768A
 * Original: 0x001F768A - 0x001F76A8 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F768A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F768A: ;
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x1B84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7698u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F7698: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F76A8(); return; /* fallthrough 0x001F76A8 */

}

/**
 * sub_001F768C
 * Original: 0x001F768C - 0x001F76A8 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F768C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F768C: ;
    _fb = (uint32_t)(0x1B84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7698u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F7698: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F76A8(); return; /* fallthrough 0x001F76A8 */

}

/**
 * sub_001F76A8
 * Original: 0x001F76A8 - 0x001F76AF (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F76A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F76A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F76AF
 * Original: 0x001F76AF - 0x001F770A (91 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F76AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F76AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM8(ebp + -12) = LO8(eax);
    MEM8(ebp + -11) = LO8(eax);
    MEM8(ebp + -10) = LO8(eax);
    MEM8(ebp + -9) = LO8(eax);
    MEM8(ebp + -8) = LO8(eax);
    MEM8(ebp + -7) = LO8(eax);
    MEM8(ebp + -6) = LO8(eax);
    MEM8(ebp + -5) = LO8(eax);
    MEM32(ebp + -4) = eax;
    edx = ebx + 0x1B7C;

loc_001F76DD: ;
    eax = MEM32(edx);
    eax = eax | MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F76F2; /* je: equal / zero */

loc_001F76E4: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx;
    esi = ebp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001F770A(); return; } /* je: equal / zero */

loc_001F76F2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F76DD; /* jb: below (unsigned <) */

loc_001F76FE: ;
    eax = 0x80155100u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7703
 * Original: 0x001F7703 - 0x001F770A (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7703: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F770A
 * Original: 0x001F770A - 0x001F7745 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F770A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F770A: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 3);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + eax * 8;
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = ecx + 0x1B84;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1B7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F772Cu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F772C: ;
    eax = MEM32(ebp + -12);
    MEM32(ebx + 0x1B94) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1B98) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F7703(); return; /* tail jmp 0x001F7703 */

}

/**
 * sub_001F7745
 * Original: 0x001F7745 - 0x001F7750 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7745: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7750(); return; } /* jne: not equal / not zero */

loc_001F7749: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F7774(); return; /* tail jmp 0x001F7774 */

}

/**
 * sub_001F7750
 * Original: 0x001F7750 - 0x001F7774 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7750: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;
    esi = eax + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F7774(); return; /* fallthrough 0x001F7774 */

}

/**
 * sub_001F7774
 * Original: 0x001F7774 - 0x001F7777 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7774(void)
{

loc_001F7774: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F7777
 * Original: 0x001F7777 - 0x001F7789 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7777(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7777: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7789(); return; } /* jne: not equal / not zero */

loc_001F7782: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F77EC(); return; /* tail jmp 0x001F77EC */

}

/**
 * sub_001F7789
 * Original: 0x001F7789 - 0x001F77A6 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7789: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0xC8 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F77A6(); return; } /* je: equal / zero */

loc_001F779D: ;
    MEM32(ebp + -4) = 0x8015511Eu;
    g_seh_ebp = ebp; sub_001F77E9(); return; /* tail jmp 0x001F77E9 */

}

/**
 * sub_001F77A6
 * Original: 0x001F77A6 - 0x001F77E9 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F77A6: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), ebx (32-bit) */
    edx = edi + 0xC;
    if (CMP_BE(_fa, _fb)) goto loc_001F77DA; /* jbe: below or equal (unsigned <=) */

loc_001F77B8: ;
    edi = edx + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F77DA; /* ja: above (unsigned >) */

loc_001F77BF: ;
    edi = MEM32(edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F77D2; /* ja: above (unsigned >) */

loc_001F77C7: ;
    eax = MEM32(ecx + 0x3C);
    MEM32(eax + ebx * 4) = edx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F77D2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x34) (32-bit) */
    edx = edi;
    if (CMP_B(_fa, _fb)) goto loc_001F77B8; /* jb: below (unsigned <) */

loc_001F77DA: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0x3C);
    MEM32(esi) = edx;
    eax = MEM32(eax);
    POP32(esp, edi);
    MEM32(ecx + 0x38) = eax;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F77E9(); return; /* fallthrough 0x001F77E9 */

}

/**
 * sub_001F77E9
 * Original: 0x001F77E9 - 0x001F77EC (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F77E9: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001F77EC(); return; /* fallthrough 0x001F77EC */

}

/**
 * sub_001F77EC
 * Original: 0x001F77EC - 0x001F77F1 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F77EC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F77F1
 * Original: 0x001F77F1 - 0x001F7806 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F77F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F77F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7806(); return; } /* jne: not equal / not zero */

loc_001F77FC: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F78EE(); return; /* tail jmp 0x001F78EE */

}

/**
 * sub_001F7806
 * Original: 0x001F7806 - 0x001F782C (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7806(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7806: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), edx (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F78EB(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F7819: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x54;
    MEM32(ebp + 0x14) = edi;
    MEM32(ebp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_001F782E(); return; /* tail jmp 0x001F782E */

}

/**
 * sub_001F782C
 * Original: 0x001F782C - 0x001F782E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F782C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F782C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F782E(); return; /* fallthrough 0x001F782E */

}

/**
 * sub_001F782E
 * Original: 0x001F782E - 0x001F7867 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F782E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F782E: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F78BF(); return; } /* je: equal / zero */

loc_001F783F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7891(); return; } /* je: equal / zero */

loc_001F7847: ;
    edx = 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7867(); return; } /* je: equal / zero */

loc_001F7850: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF00000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F78CD(); return; } /* jne: not equal / not zero */

loc_001F7858: ;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7863; /* jne: not equal / not zero */

loc_001F785D: ;
    MEM16(ebx) = MEM16(ebx) & 0;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F7863: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F78CD(); return; /* tail jmp 0x001F78CD */

}

/**
 * sub_001F7867
 * Original: 0x001F7867 - 0x001F7891 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7867(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7867: ;
    SET_LO16(eax, MEM16(esi + 4));
    MEM16(ebx) = LO16(eax);
    ecx = ZX16(MEM16(esi + 4));
    eax = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
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
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001F78CD(); return; /* tail jmp 0x001F78CD */

}

/**
 * sub_001F7887
 * Original: 0x001F7887 - 0x001F7891 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7887(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7887: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001F78CD(); return; /* tail jmp 0x001F78CD */

}

/**
 * sub_001F7891
 * Original: 0x001F7891 - 0x001F78BF (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7891(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7891: ;
    ecx = ZX16(MEM16(esi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esi + 6;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edi = 0xFDE9;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x001F78ABu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001F78AB: ;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F78BDu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001F78BD: ;
    g_seh_ebp = ebp; sub_001F7887(); return; /* tail jmp 0x001F7887 */

}

/**
 * sub_001F78BF
 * Original: 0x001F78BF - 0x001F78CD (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78BF: ;
    ecx = MEM32(esi + 4);
    MEM32(ebx) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(ebx + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001F78CD(); return; /* fallthrough 0x001F78CD */

}

/**
 * sub_001F78CD
 * Original: 0x001F78CD - 0x001F78EB (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78CD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x50) (32-bit) */
    MEM32(ebp + 0x14) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F782C(); return; } /* jb: below (unsigned <) */

loc_001F78E9: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F78EB(); return; /* fallthrough 0x001F78EB */

}

/**
 * sub_001F78EB
 * Original: 0x001F78EB - 0x001F78EE (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F78EE(); return; /* fallthrough 0x001F78EE */

}

/**
 * sub_001F78EE
 * Original: 0x001F78EE - 0x001F78F2 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78EE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F78F2
 * Original: 0x001F78F2 - 0x001F78FD (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F78FD(); return; } /* jne: not equal / not zero */

loc_001F78F6: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F794C(); return; /* tail jmp 0x001F794C */

}

/**
 * sub_001F78FD
 * Original: 0x001F78FD - 0x001F7910 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F78FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F78FD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, 0x54);
    POP32(esp, eax);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7943(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F7909: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001F7910(); return; /* fallthrough 0x001F7910 */

}

/**
 * sub_001F7910
 * Original: 0x001F7910 - 0x001F7932 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7910: ;
    edx = MEM32(ecx + -4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F793A(); return; } /* je: equal / zero */

loc_001F791A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7932(); return; } /* je: equal / zero */

loc_001F7922: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F793D(); return; } /* jne: not equal / not zero */

loc_001F792A: ;
    edx = MEM32(ecx);
    eax = eax + edx + 2;
    g_seh_ebp = ebp; sub_001F793D(); return; /* tail jmp 0x001F793D */

}

/**
 * sub_001F7932
 * Original: 0x001F7932 - 0x001F793A (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7932(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7932: ;
    edx = MEM32(ecx);
    eax = eax + edx * 2 + 2;
    g_seh_ebp = ebp; sub_001F793D(); return; /* tail jmp 0x001F793D */

}

/**
 * sub_001F793A
 * Original: 0x001F793A - 0x001F793D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F793A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F793A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001F793D(); return; /* fallthrough 0x001F793D */

}

/**
 * sub_001F793D
 * Original: 0x001F793D - 0x001F7943 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F793D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F793D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F7910(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F7943(); return; /* fallthrough 0x001F7943 */

}

/**
 * sub_001F7943
 * Original: 0x001F7943 - 0x001F794C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7943(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7943: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F794C(); return; /* fallthrough 0x001F794C */

}

/**
 * sub_001F794C
 * Original: 0x001F794C - 0x001F794F (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F794C(void)
{

loc_001F794C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F794F
 * Original: 0x001F794F - 0x001F7969 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F794F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F794F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F79BF(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F795F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

    g_seh_ebp = ebp; sub_001F7969(); return; /* fallthrough 0x001F7969 */

}

/**
 * sub_001F7969
 * Original: 0x001F7969 - 0x001F7997 (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7969(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7969: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7973; /* je: equal / zero */

loc_001F796E: ;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F79B6(); return; } /* je: equal / zero */

loc_001F7973: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F79B3(); return; } /* je: equal / zero */

loc_001F7980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7997(); return; } /* je: equal / zero */

loc_001F7987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F79B6(); return; } /* jne: not equal / not zero */

loc_001F798E: ;
    eax = MEM32(esi + 4);
    edi = edi + eax + 2;
    g_seh_ebp = ebp; sub_001F79B6(); return; /* tail jmp 0x001F79B6 */

}

/**
 * sub_001F7991
 * Original: 0x001F7991 - 0x001F7997 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7991(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7991: ;
    edi = edi + eax + 2;
    g_seh_ebp = ebp; sub_001F79B6(); return; /* tail jmp 0x001F79B6 */

}

/**
 * sub_001F7997
 * Original: 0x001F7997 - 0x001F79B3 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7997(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7997: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001F79A2u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001F79A2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001F79B1u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001F79B1: ;
    g_seh_ebp = ebp; sub_001F7991(); return; /* tail jmp 0x001F7991 */

}

/**
 * sub_001F79B3
 * Original: 0x001F79B3 - 0x001F79B6 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F79B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F79B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001F79B6(); return; /* fallthrough 0x001F79B6 */

}

/**
 * sub_001F79B6
 * Original: 0x001F79B6 - 0x001F79BF (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F79B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F79B6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F7969(); return; } /* jne: not equal / not zero */

loc_001F79BE: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F79BF(); return; /* fallthrough 0x001F79BF */

}

/**
 * sub_001F79BF
 * Original: 0x001F79BF - 0x001F79C7 (8 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F79BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F79BF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F79C7
 * Original: 0x001F79C7 - 0x001F79E3 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F79C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F79C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7B19(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F79D8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;

    g_seh_ebp = ebp; sub_001F79E3(); return; /* fallthrough 0x001F79E3 */

}

/**
 * sub_001F79E3
 * Original: 0x001F79E3 - 0x001F7A37 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F79E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F79E3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F79F1; /* je: equal / zero */

loc_001F79E8: ;
    _fa = (uint32_t)(MEM32(ebx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7B0B(); return; } /* je: equal / zero */

loc_001F79F1: ;
    eax = MEM32(ebx + -8);
    ecx = 0xF00000;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F7AE2(); return; } /* je: equal / zero */

loc_001F7A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7A83(); return; } /* je: equal / zero */

loc_001F7A08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7A37(); return; } /* je: equal / zero */

loc_001F7A0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7B0B(); return; } /* jne: not equal / not zero */

loc_001F7A17: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebx + -8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001F7B0B(); return; /* tail jmp 0x001F7B0B */

}

/**
 * sub_001F7A37
 * Original: 0x001F7A37 - 0x001F7A83 (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7A37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7A37: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + -8);
    MEM32(eax) = ecx;
    SET_LO16(ecx, MEM16(ebx + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ecx);
    esi = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7B0B(); return; } /* je: equal / zero */

loc_001F7A66: ;
    ecx = MEM32(ebx + 4);
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
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F7B08(); return; /* tail jmp 0x001F7B08 */

}

/**
 * sub_001F7A83
 * Original: 0x001F7A83 - 0x001F7AE2 (95 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7A83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7A83: ;
    esi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esi;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x001F7A9Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001F7A9F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, edi);
    edi = 0xFDE9;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F7AAFu); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001F7AAF: ;
    ecx = MEM32(ebx + -8);
    MEM32(esi) = ecx;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx));
    MEM32(ebp + 0x1C) = eax;
    PUSH32(esp, 0x001F7ACCu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001F7ACC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F7AD8u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001F7AD8: ;
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x1C) = esi;
    g_seh_ebp = ebp; sub_001F7B0B(); return; /* tail jmp 0x001F7B0B */

}

/**
 * sub_001F7AE2
 * Original: 0x001F7AE2 - 0x001F7B0B (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7AE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7AE2: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x1C) = eax;

    g_seh_ebp = ebp; sub_001F7B0B(); return; /* fallthrough 0x001F7B0B */

}

/**
 * sub_001F7B08
 * Original: 0x001F7B08 - 0x001F7B0B (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7B08: ;
    MEM32(ebp + 0x1C) = eax;

    g_seh_ebp = ebp; sub_001F7B0B(); return; /* fallthrough 0x001F7B0B */

}

/**
 * sub_001F7B0B
 * Original: 0x001F7B0B - 0x001F7B19 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7B0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7B0B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001F79E3(); return; } /* jne: not equal / not zero */

loc_001F7B17: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F7B19(); return; /* fallthrough 0x001F7B19 */

}

/**
 * sub_001F7B19
 * Original: 0x001F7B19 - 0x001F7B1E (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7B19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7B19: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F7B1E
 * Original: 0x001F7B1E - 0x001F7C16 (248 bytes, 94 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7B1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7B1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001F7B4A; /* jne: not equal / not zero */

loc_001F7B3E: ;
    MEM32(ebp + 8) = 0x1500F0;
    goto loc_001F7C0D;

loc_001F7B4A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7B53u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F7B53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7BFC; /* je: equal / zero */

loc_001F7B5E: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F7BE9; /* jl: less (signed <) */

loc_001F7B64: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7B84u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F7B84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F7BE9; /* jl: less (signed <) */

loc_001F7B8B: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7BE2; /* je: equal / zero */

loc_001F7B98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7BE2; /* jne: not equal / not zero */

loc_001F7BA0: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7BD5; /* jne: not equal / not zero */

loc_001F7BA7: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F7BE9; /* jbe: below or equal (unsigned <=) */

loc_001F7BAC: ;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebx + 0x14) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x18) = ecx;
    esi = eax + 8;
    edi = ebx + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 1);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0x14));
    ecx = MEM32(ebp + -4);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7BD0u); RECOMP_ABI_CALL(0x001F7636u, sub_001F7636); /* call 0x001F7636 */

loc_001F7BD0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    goto loc_001F7BE9;

loc_001F7BD5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7BE9; /* je: equal / zero */

loc_001F7BDA: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x2C) = eax;
    goto loc_001F7BE9;

loc_001F7BE2: ;
    MEM32(ebp + 8) = 0x8015511Eu;

loc_001F7BE9: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7BFC; /* je: equal / zero */

loc_001F7BF0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7BF9u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F7BF9: ;
    MEM32(ebx + 0xC) = esi;

loc_001F7BFC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7C0D; /* jl: less (signed <) */

loc_001F7C01: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C0D; /* je: equal / zero */

loc_001F7C0A: ;
    MEM32(ebp + 8) = esi;

loc_001F7C0D: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7C16
 * Original: 0x001F7C16 - 0x001F7C50 (58 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7C16(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7C16: ;
    eax = MEM32(esp + 0xC);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = eax + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x40));
    eax = MEM32(esp + 0x38);
    PUSH32(esp, MEM32(eax * 4 + 0x2F7B20));
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001F7C4Du); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F7C4D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F7C55
 * Original: 0x001F7C55 - 0x001F7CC0 (107 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7C55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7C55: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C6E; /* je: equal / zero */

loc_001F7C64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7C6Au); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F7C6A: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F7C6E: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C7F; /* je: equal / zero */

loc_001F7C75: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7C7Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7C7F: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C90; /* je: equal / zero */

loc_001F7C86: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7C90u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7C90: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7CA1; /* je: equal / zero */

loc_001F7C97: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7CA1u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7CA1: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7CAE; /* je: equal / zero */

loc_001F7CA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7CAEu); RECOMP_ABI_CALL(0x001CEF80u, sub_001CEF80); /* call 0x001CEF80 */

loc_001F7CAE: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F7CBBu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7CBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7CC0
 * Original: 0x001F7CC0 - 0x001F7D4E (142 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x801B);
    PUSH32(esp, 0x50);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7CD9u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F7CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7D80(); return; } /* je: equal / zero */

loc_001F7CE6: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7CEEu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F7CEE: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax) = 0x1F7B1E;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x1F7C55;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(eax + 8) = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7D13u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001F7D13: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7D80(); return; } /* je: equal / zero */

loc_001F7D20: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7D4E(); return; } /* je: equal / zero */

loc_001F7D27: ;
    eax = 0x118;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F7D32; /* jae: above or equal (unsigned >=) */

loc_001F7D30: ;
    ebx = eax;

loc_001F7D32: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7D3Cu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F7D3C: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x40) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7D80(); return; } /* je: equal / zero */

loc_001F7D49: ;
    MEM32(eax + 0x44) = ebx;
    g_seh_ebp = ebp; sub_001F7D5B(); return; /* tail jmp 0x001F7D5B */

}

/**
 * sub_001F7D4E
 * Original: 0x001F7D4E - 0x001F7D5B (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7D4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7D4E: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    MEM32(eax + 0x44) = 0x118;

    g_seh_ebp = ebp; sub_001F7D5B(); return; /* fallthrough 0x001F7D5B */

}

/**
 * sub_001F7D5B
 * Original: 0x001F7D5B - 0x001F7D80 (37 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7D5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7D5B: ;
    ebx = MEM32(ebp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7DDB(); return; } /* je: equal / zero */

loc_001F7D64: ;
    eax = ebx;
    PUSH32(esp, 0x1E);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7D73u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F7D73: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7DE2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001F7D80(); return; /* fallthrough 0x001F7D80 */

}

/**
 * sub_001F7D80
 * Original: 0x001F7D80 - 0x001F7DDB (91 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7D80: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = 0x8007000Eu;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7E13(); return; } /* je: equal / zero */

loc_001F7D91: ;
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7DA2; /* je: equal / zero */

loc_001F7D98: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7DA2u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7DA2: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7DB5; /* je: equal / zero */

loc_001F7DAB: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7DB5u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7DB5: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7DC8; /* je: equal / zero */

loc_001F7DBE: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F7DC8u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7DC8: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0x001F7DD6u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F7DD6: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001F7E13(); return; /* tail jmp 0x001F7E13 */

}

/**
 * sub_001F7DDB
 * Original: 0x001F7DDB - 0x001F7DE2 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7DDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7DDB: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x3C) = eax;
    g_seh_ebp = ebp; sub_001F7DE4(); return; /* tail jmp 0x001F7DE4 */

}

/**
 * sub_001F7DE2
 * Original: 0x001F7DE2 - 0x001F7E13 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7DE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7DE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x24);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x34) = ebx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x4C) = eax;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x18) = ecx;

    g_seh_ebp = ebp; sub_001F7E13(); return; /* fallthrough 0x001F7E13 */

}

/**
 * sub_001F7DE4
 * Original: 0x001F7DE4 - 0x001F7E13 (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7DE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7DE4: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x24);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x34) = ebx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x4C) = eax;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x18) = ecx;

    g_seh_ebp = ebp; sub_001F7E13(); return; /* fallthrough 0x001F7E13 */

}

/**
 * sub_001F7E13
 * Original: 0x001F7E13 - 0x001F7E1D (10 bytes, 6 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7E13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7E13: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F7E1D
 * Original: 0x001F7E1D - 0x001F7E32 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7E1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7E1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F7E32(); return; } /* jne: not equal / not zero */

loc_001F7E2B: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F7E9B(); return; /* tail jmp 0x001F7E9B */

}

/**
 * sub_001F7E32
 * Original: 0x001F7E32 - 0x001F7E9B (105 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7E32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7E32: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    MEM32(ebp + -4) = esi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x001F7E47u); RECOMP_ABI_CALL(0x001F76AFu, sub_001F76AF); /* call 0x001F76AF */

loc_001F7E47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F7E9B(); return; } /* jl: less (signed <) */

loc_001F7E4B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7E65u); RECOMP_ABI_CALL(0x001F7CC0u, sub_001F7CC0); /* call 0x001F7CC0 */

loc_001F7E65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F7E9B(); return; } /* jl: less (signed <) */

loc_001F7E69: ;
    esi = MEM32(ebp + -4);
    eax = MEM32(esi + 0x48);
    MEM32(eax) = 0x10;
    ecx = MEM32(edi + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esi + 0x48));
    ecx = edi;
    PUSH32(esp, 0x001F7E96u); RECOMP_ABI_CALL(0x001F7C16u, sub_001F7C16); /* call 0x001F7C16 */

loc_001F7E96: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = esi;

    g_seh_ebp = ebp; sub_001F7E9B(); return; /* fallthrough 0x001F7E9B */

}

/**
 * sub_001F7E9B
 * Original: 0x001F7E9B - 0x001F7EA1 (6 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7E9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7E9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F7EA1
 * Original: 0x001F7EA1 - 0x001F7F9D (252 bytes, 99 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7EA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7EA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001F7ED5; /* jbe: below or equal (unsigned <=) */

loc_001F7EBE: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F7EC7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7ECF; /* jne: not equal / not zero */

loc_001F7ECC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F7ECF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F7EC7; /* jne: not equal / not zero */

loc_001F7ED5: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7EE5u); RECOMP_ABI_CALL(0x001F794Fu, sub_001F794F); /* call 0x001F794F */

loc_001F7EE5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x28));
    edi = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7F03u); RECOMP_ABI_CALL(0x001F7CC0u, sub_001F7CC0); /* call 0x001F7CC0 */

loc_001F7F03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7F97; /* jl: less (signed <) */

loc_001F7F0B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -12);
    esi = MEM32(ebx + 0x48);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7F1Bu); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001F7F1B: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi) = edi;
    edi = MEM32(ebp + -4);
    eax = MEM32(edi + 4);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x48);
    ecx = eax + ecx * 4 + 0x48;
    PUSH32(esp, ecx);
    ecx = eax + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7F6Cu); RECOMP_ABI_CALL(0x001F79C7u, sub_001F79C7); /* call 0x001F79C7 */

loc_001F7F6C: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F7F82; /* jbe: below or equal (unsigned <=) */

loc_001F7F73: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F7F79: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F7F79; /* jne: not equal / not zero */

loc_001F7F82: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7F91u); RECOMP_ABI_CALL(0x001F7C16u, sub_001F7C16); /* call 0x001F7C16 */

loc_001F7F91: ;
    ecx = MEM32(ebp + 0x2C);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);

loc_001F7F97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001F7F9D
 * Original: 0x001F7F9D - 0x001F8092 (245 bytes, 93 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F7F9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7F9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -17) = LO8(ebx);
    MEM8(ebp + -16) = LO8(ebx);
    MEM8(ebp + -15) = LO8(ebx);
    MEM8(ebp + -14) = LO8(ebx);
    MEM8(ebp + -13) = LO8(ebx);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7FD5u); RECOMP_ABI_CALL(0x001F794Fu, sub_001F794F); /* call 0x001F794F */

loc_001F7FD5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -12) = eax;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F7FF9u); RECOMP_ABI_CALL(0x001F7CC0u, sub_001F7CC0); /* call 0x001F7CC0 */

loc_001F7FF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F808D; /* jl: less (signed <) */

loc_001F8001: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -8);
    esi = MEM32(edi + 0x48);
    MEM32(esi) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8026u); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001F8026: ;
    ecx = MEM32(ebp + -4);
    MEM16(esi + 0x30) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8032u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_001F8032: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F804A; /* je: equal / zero */

loc_001F8036: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);

loc_001F8039: ;
    edx = MEM32(eax);
    edx = edx | MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F8044; /* je: equal / zero */

loc_001F8040: ;
    MEM16(esi + 0x30) = MEM16(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001F8044: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F8039; /* jne: not equal / not zero */

loc_001F804A: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8052u); RECOMP_ABI_CALL(0x001EC9F3u, sub_001EC9F3); /* call 0x001EC9F3 */

loc_001F8052: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x34) = ecx;
    MEM16(esi + 0x32) = LO16(eax);
    eax = MEM32(edi + 0x48);
    edx = eax + ecx * 4 + 0x38;
    PUSH32(esp, edx);
    edx = eax + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8076u); RECOMP_ABI_CALL(0x001F79C7u, sub_001F79C7); /* call 0x001F79C7 */

loc_001F8076: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8086u); RECOMP_ABI_CALL(0x001F7C16u, sub_001F7C16); /* call 0x001F7C16 */

loc_001F8086: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F808D: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F8092
 * Original: 0x001F8092 - 0x001F80A8 (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8092(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8092: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F80A8(); return; } /* jne: not equal / not zero */

loc_001F80A1: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F8107(); return; /* tail jmp 0x001F8107 */

}

/**
 * sub_001F80A8
 * Original: 0x001F80A8 - 0x001F8107 (95 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F80A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F80A8: ;
    ecx = esi;
    MEM8(ebp + -7) = LO8(ebx);
    MEM8(ebp + -6) = LO8(ebx);
    MEM8(ebp + -5) = LO8(ebx);
    MEM8(ebp + -4) = LO8(ebx);
    MEM8(ebp + -3) = LO8(ebx);
    MEM8(ebp + -2) = LO8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    PUSH32(esp, 0x001F80C4u); RECOMP_ABI_CALL(0x001EC9F3u, sub_001EC9F3); /* call 0x001EC9F3 */

loc_001F80C4: ;
    ecx = MEM32(ebp + 0x1C);
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    MEM8(ebp + -8) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_001F80E4; /* jbe: below or equal (unsigned <=) */

loc_001F80D2: ;
    edx = MEM32(ebp + 0x18);
    eax = ecx + 4;

loc_001F80D8: ;
    MEM32(eax) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F80D8; /* jne: not equal / not zero */

loc_001F80E4: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001F8107u); RECOMP_ABI_CALL(0x001F7EA1u, sub_001F7EA1); /* call 0x001F7EA1 */

    g_seh_ebp = ebp; sub_001F8107(); return; /* fallthrough 0x001F8107 */

}

/**
 * sub_001F8107
 * Original: 0x001F8107 - 0x001F810D (6 bytes, 4 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8107(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8107: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F810D
 * Original: 0x001F810D - 0x001F811E (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F810D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F810D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F811E(); return; } /* jne: not equal / not zero */

loc_001F8117: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F815D(); return; /* tail jmp 0x001F815D */

}

/**
 * sub_001F811E
 * Original: 0x001F811E - 0x001F8138 (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F811E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F811E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001F812Du); RECOMP_ABI_CALL(0x001F7636u, sub_001F7636); /* call 0x001F7636 */

loc_001F812D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8138(); return; } /* jge: greater or equal (signed >=) */

loc_001F8131: ;
    eax = 0x80155100u;
    g_seh_ebp = ebp; sub_001F815D(); return; /* tail jmp 0x001F815D */

}

/**
 * sub_001F8138
 * Original: 0x001F8138 - 0x001F815D (37 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8138: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001F815Du); RECOMP_ABI_CALL(0x001F7EA1u, sub_001F7EA1); /* call 0x001F7EA1 */

    g_seh_ebp = ebp; sub_001F815D(); return; /* fallthrough 0x001F815D */

}

/**
 * sub_001F815D
 * Original: 0x001F815D - 0x001F8162 (5 bytes, 3 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F815D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F815D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001F8162
 * Original: 0x001F8162 - 0x001F8172 (16 bytes, 7 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8162(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8162: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8172(); return; } /* jne: not equal / not zero */

loc_001F8169: ;
    eax = 0x80150005u;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F8172
 * Original: 0x001F8172 - 0x001F8178 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8172: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001F7F9D(); return; /* tail jmp 0x001F7F9D */

}

/**
 * sub_001F8178
 * Original: 0x001F8178 - 0x001F8189 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8178: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8189(); return; } /* jne: not equal / not zero */

loc_001F8182: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F81B3(); return; /* tail jmp 0x001F81B3 */

}

/**
 * sub_001F8189
 * Original: 0x001F8189 - 0x001F81B3 (42 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8189(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8189: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x118);
    MEM32(ebp + -4) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001F81B3u); RECOMP_ABI_CALL(0x001F7F9Du, sub_001F7F9D); /* call 0x001F7F9D */

    g_seh_ebp = ebp; sub_001F81B3(); return; /* fallthrough 0x001F81B3 */

}

/**
 * sub_001F81B3
 * Original: 0x001F81B3 - 0x001F81B7 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F81B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F81B3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F81B7
 * Original: 0x001F81B7 - 0x001F82FE (327 bytes, 123 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F81B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F81B7: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F81D6; /* jne: not equal / not zero */

loc_001F81CC: ;
    eax = 0x80150005u;
    goto loc_001F82F5;

loc_001F81D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x64) = edi;
    MEM32(ebp + 0x68) = edi;
    PUSH32(esp, 0x001F81E7u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001F81E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F81F8; /* jne: not equal / not zero */

loc_001F81EE: ;
    esi = 0x80004005u;
    goto loc_001F82C7;

loc_001F81F8: ;
    ecx = ebp + 0x68;
    PUSH32(esp, ecx);
    ecx = ebp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    ecx = ebx;
    PUSH32(esp, 0x001F820Cu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F820C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F82C7; /* jl: less (signed <) */

loc_001F8216: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001F8220u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F8220: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, 0x001F822Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F822A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8216; /* je: equal / zero */

loc_001F8230: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F82C7; /* jl: less (signed <) */

loc_001F8236: ;
    PUSH32(esp, 0x1E);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x7C));
    edi = ebp + -24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + -24) = eax;
    SET_LO16(eax, MEM16(ebp + 0x78));
    MEM16(ebp + -20) = LO16(eax);
    eax = ebp + -18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F825Au); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_001F825A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 1);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x001F8270u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F8270: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F82C5; /* jl: less (signed <) */

loc_001F8276: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001F8280u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F8280: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, 0x001F828Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F828A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8276; /* je: equal / zero */

loc_001F8290: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F82C5; /* jl: less (signed <) */

loc_001F8292: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x001F829Fu); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F829F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F82C5; /* jl: less (signed <) */

loc_001F82A5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001F82AFu); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F82AF: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, 0x001F82B9u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F82B9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F82A5; /* je: equal / zero */

loc_001F82BF: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F82C5; /* jl: less (signed <) */

loc_001F82C1: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F82C5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F82C7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F82D6; /* je: equal / zero */

loc_001F82CC: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ecx = ebx;
    PUSH32(esp, 0x001F82D6u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F82D6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F82E5; /* je: equal / zero */

loc_001F82DB: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    ecx = ebx;
    PUSH32(esp, 0x001F82E5u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F82E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F82F2; /* je: equal / zero */

loc_001F82EA: ;
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x001F82F2u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F82F2: ;
    eax = esi;
    POP32(esp, esi);

loc_001F82F5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F82FE
 * Original: 0x001F82FE - 0x001F8403 (261 bytes, 102 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F82FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F82FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8318; /* jne: not equal / not zero */

loc_001F830E: ;
    eax = 0x80150005u;
    goto loc_001F83FF;

loc_001F8318: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8329u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001F8329: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F833A; /* jne: not equal / not zero */

loc_001F8330: ;
    esi = 0x80004005u;
    goto loc_001F83D1;

loc_001F833A: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F834Eu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F834E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F8354: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F835Eu); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F835E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8368u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F8368: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8354; /* je: equal / zero */

loc_001F836E: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F8370: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F837Du); RECOMP_ABI_CALL(0x0020AB59u, sub_0020AB59); /* call 0x0020AB59 */

loc_001F837D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F8383: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F838Du); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F838D: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8397u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F8397: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8383; /* je: equal / zero */

loc_001F839D: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F839F: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83ACu); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F83AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F83B2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83BCu); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_001F83BC: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83C6u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F83C6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F83B2; /* je: equal / zero */

loc_001F83CC: ;
    if (CMP_L(_fas, _fbs)) goto loc_001F83D1; /* jl: less (signed <) */

loc_001F83CE: ;
    MEM32(ebp + -8) = ebx;

loc_001F83D1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F83E0; /* je: equal / zero */

loc_001F83D6: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83E0u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F83E0: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F83EF; /* je: equal / zero */

loc_001F83E5: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83EFu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F83EF: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F83FC; /* je: equal / zero */

loc_001F83F4: ;
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F83FCu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F83FC: ;
    eax = esi;
    POP32(esp, esi);

loc_001F83FF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001F8403
 * Original: 0x001F8403 - 0x001F847B (120 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8403(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8403: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(edx + 0x10) = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x14CC) = eax;
    MEM32(edx + 0x14D0) = eax;
    MEM32(edx + 0x1560) = eax;
    MEM32(edx + 0x1564) = eax;
    MEM32(edx + 0x1568) = eax;
    MEM32(edx + 0x156C) = eax;
    MEM32(edx + 0x1570) = eax;
    MEM32(edx + 0x1578) = eax;
    MEM32(edx + 0x157C) = eax;
    MEM32(edx + 8) = 7;
    ecx = 0x12C;
    edi = edx + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x400;
    edi = edx + 0x4CC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F848B
 * Original: 0x001F848B - 0x001F84B1 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F848B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F848B: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F84A1; /* jne: not equal / not zero */

loc_001F8491: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A1; /* je: equal / zero */

loc_001F8497: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 7;

loc_001F84A1: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84B0; /* je: equal / zero */

loc_001F84A8: ;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x001F84B0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F84B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F84B1
 * Original: 0x001F84B1 - 0x001F84CA (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F84B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F84B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F84CA(); return; } /* jne: not equal / not zero */

loc_001F84C0: ;
    eax = 0x8000FFFFu;
    g_seh_ebp = ebp; sub_001F8568(); return; /* tail jmp 0x001F8568 */

}

/**
 * sub_001F84CA
 * Original: 0x001F84CA - 0x001F853A (112 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F84CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F84CA: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_001F84E2;

loc_001F84CC: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + edi * 2;
    eax = esi + eax * 4 + 0x1C;

loc_001F84D6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84E2; /* je: equal / zero */

loc_001F84DA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F84D6; /* ja: above (unsigned >) */

loc_001F84E2: ;
    eax = edi + edi * 2 + 9;
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F853A(); return; } /* je: equal / zero */

loc_001F84F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F84F7u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F84F7: ;
    ecx = MEM32(esi + 0x18);
    ebx = eax + eax + 2;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + esi + 0x4CC;
    PUSH32(esp, ecx);
    ecx = eax + ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8517u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F8517: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F853C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F8521: ;
    ecx = esi + 0x24;

loc_001F8524: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F852F; /* jbe: below or equal (unsigned <=) */

loc_001F852B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;

loc_001F852F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F8524; /* jb: below (unsigned <) */

loc_001F8538: ;
    g_seh_ebp = ebp; sub_001F853C(); return; /* tail jmp 0x001F853C */

}

/**
 * sub_001F853A
 * Original: 0x001F853A - 0x001F853C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F853A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F853A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F853C(); return; /* fallthrough 0x001F853C */

}

/**
 * sub_001F853C
 * Original: 0x001F853C - 0x001F8568 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F853C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F853C: ;
    eax = edi + edi * 2;
    ecx = esi + eax * 4;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ecx + 0x28;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F855Cu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F855C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - ebx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F8568(); return; /* fallthrough 0x001F8568 */

}

/**
 * sub_001F8568
 * Original: 0x001F8568 - 0x001F856C (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8568: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001F856D
 * Original: 0x001F856D - 0x001F8597 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F856D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F856D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8590; /* je: equal / zero */

loc_001F857B: ;
    edx = MEM32(esp + 0xC);

loc_001F857F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F858C; /* je: equal / zero */

loc_001F8583: ;
    ecx = eax;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F857F; /* jne: not equal / not zero */

loc_001F858C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8597(); return; } /* jne: not equal / not zero */

loc_001F8590: ;
    eax = 0x8000FFFFu;
    g_seh_ebp = ebp; sub_001F8605(); return; /* tail jmp 0x001F8605 */

}

/**
 * sub_001F8597
 * Original: 0x001F8597 - 0x001F85A4 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8597(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8597: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F85A4(); return; } /* je: equal / zero */

loc_001F859C: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edi;
    g_seh_ebp = ebp; sub_001F85A9(); return; /* tail jmp 0x001F85A9 */

}

/**
 * sub_001F85A4
 * Original: 0x001F85A4 - 0x001F85A9 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F85A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F85A4: ;
    ecx = MEM32(eax + 0xC);
    MEM32(esi) = ecx;

    g_seh_ebp = ebp; sub_001F85A9(); return; /* fallthrough 0x001F85A9 */

}

/**
 * sub_001F85A9
 * Original: 0x001F85A9 - 0x001F8605 (92 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F85A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F85A9: ;
    MEM32(eax + 0xC) = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F85FD; /* jne: not equal / not zero */

loc_001F85B1: ;
    edi = esi + 0x14D0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F85C8; /* je: equal / zero */

loc_001F85BD: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F85C6u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F85C6: ;
    MEM32(edi) = ebx;

loc_001F85C8: ;
    edi = esi + 0x14CC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F85DF; /* je: equal / zero */

loc_001F85D4: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F85DDu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F85DD: ;
    MEM32(edi) = ebx;

loc_001F85DF: ;
    edi = esi + 0x1564;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F85F6; /* je: equal / zero */

loc_001F85EB: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F85F4u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F85F4: ;
    MEM32(edi) = ebx;

loc_001F85F6: ;
    ecx = esi;
    PUSH32(esp, 0x001F85FDu); RECOMP_ABI_CALL(0x001F848Bu, sub_001F848B); /* call 0x001F848B */

loc_001F85FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

    g_seh_ebp = ebp; sub_001F8605(); return; /* fallthrough 0x001F8605 */

}

/**
 * sub_001F8605
 * Original: 0x001F8605 - 0x001F860A (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8605(void)
{

loc_001F8605: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F860A
 * Original: 0x001F860A - 0x001F8654 (74 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F860A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F860A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F861C; /* jb: below (unsigned <) */

loc_001F8613: ;
    PUSH32(esp, 0x001F8618u); RECOMP_ABI_CALL(0x001F84B1u, sub_001F84B1); /* call 0x001F84B1 */

loc_001F8618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F8650; /* jl: less (signed <) */

loc_001F861C: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edi = esi + 0x1C;
    eax = esi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8634u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001F8634: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    SET_LO16(eax, MEM16(esp + 0x1C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 0x20) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001F8650: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F8654
 * Original: 0x001F8654 - 0x001F86B0 (92 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8654(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8654: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F8664u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001F8664: ;
    esi = eax + eax + 2;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001F8683; /* jbe: below or equal (unsigned <=) */

loc_001F8678: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F867Fu); RECOMP_ABI_CALL(0x001F84B1u, sub_001F84B1); /* call 0x001F84B1 */

loc_001F867F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F86AA; /* jl: less (signed <) */

loc_001F8683: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F86A7; /* jbe: below or equal (unsigned <=) */

loc_001F868A: ;
    ecx = ebx + 0x20;

loc_001F868D: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F869E; /* jne: not equal / not zero */

loc_001F8695: ;
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0xC) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F86B0(); return; } /* je: equal / zero */

loc_001F869E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F868D; /* jb: below (unsigned <) */

loc_001F86A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F86AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F86AA
 * Original: 0x001F86AA - 0x001F86B0 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F86AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F86AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F86B0
 * Original: 0x001F86B0 - 0x001F86EA (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F86B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F86B0: ;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    ecx = esi;
    esi = MEM32(ebp + 0x10);
    edi = edx + ebx + 0x4CC;
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
    ecx = MEM32(ebx + 0x18);
    eax = eax + eax * 2 + 9;
    ecx = ecx + ebx + 0x4CC;
    MEM32(ebx + eax * 4) = ecx;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001F86AA(); return; /* tail jmp 0x001F86AA */

}

/**
 * sub_001F86EA
 * Original: 0x001F86EA - 0x001F872E (68 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F86EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F86EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0x18A4);
    PUSH32(esp, 0x001F86FCu); RECOMP_ABI_CALL(0x001F856Du, sub_001F856D); /* call 0x001F856D */

loc_001F86FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F871A; /* jne: not equal / not zero */

loc_001F8701: ;
    PUSH32(esp, 0x802B);
    PUSH32(esp, MEM32(esi + 0x18A4));
    ecx = esi;
    PUSH32(esp, 0x001F8713u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F8713: ;
    MEM32(esi + 0x18A4) = MEM32(esi + 0x18A4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F871A: ;
    PUSH32(esp, 0x802C);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x001F872Au); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F872A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F872E
 * Original: 0x001F872E - 0x001F8783 (85 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F872E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F872E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F875D; /* jbe: below or equal (unsigned <=) */

loc_001F8748: ;
    eax = edi + 0x20;

loc_001F874B: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8755; /* jne: not equal / not zero */

loc_001F8750: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8783(); return; } /* je: equal / zero */

loc_001F8755: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F874B; /* jb: below (unsigned <) */

loc_001F875D: ;
    eax = MEM32(ebp + 0x14);
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F876Du); RECOMP_ABI_CALL(0x001F860Au, sub_001F860A); /* call 0x001F860A */

loc_001F876D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F877A; /* jl: less (signed <) */

loc_001F8773: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F877Au); RECOMP_ABI_CALL(0x001F848Bu, sub_001F848B); /* call 0x001F848B */

loc_001F877A: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F877C
 * Original: 0x001F877C - 0x001F8783 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F877C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F877C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F8783
 * Original: 0x001F8783 - 0x001F87A9 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8783(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8783: ;
    eax = esi + esi * 2 + 9;
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F87A9(); return; } /* je: equal / zero */

loc_001F878E: ;
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x001F879Bu); RECOMP_ABI_CALL(0x001528C5u, sub_001528C5); /* call 0x001528C5 */

loc_001F879B: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + ebx * 2 + -2) = MEM16(eax + ebx * 2 + -2) & 0;
    _fa = (uint32_t)(MEM16(eax + ebx * 2 + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001F87B0(); return; /* tail jmp 0x001F87B0 */

}

/**
 * sub_001F87A9
 * Original: 0x001F87A9 - 0x001F87B0 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F87A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F87A9: ;
    eax = MEM32(ebp + 0x14);
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001F87B0(); return; /* fallthrough 0x001F87B0 */

}

/**
 * sub_001F87B0
 * Original: 0x001F87B0 - 0x001F87DB (43 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F87B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F87B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F87D7; /* jbe: below or equal (unsigned <=) */

loc_001F87B4: ;
    eax = esi + esi * 2;
    eax = edi + eax * 4;
    ecx = eax + 0x10;
    esi = ecx;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebp + -12;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001F87D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F877C(); return; /* tail jmp 0x001F877C */

}

/**
 * sub_001F87DB
 * Original: 0x001F87DB - 0x001F8812 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F87DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F87DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F87FC; /* je: equal / zero */

loc_001F87F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F8D74(); return; /* tail jmp 0x001F8D74 */

loc_001F87FC: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    POP32(esp, ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D71(); return; } /* ja: above (unsigned >) */

loc_001F880B: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1F8E34)); return; /* indirect tail jmp */

}

/**
 * sub_001F8812
 * Original: 0x001F8812 - 0x001F883E (44 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8812(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8812: ;
    eax = esi + 0x14D0;
    PUSH32(esp, eax);
    eax = esi + 0x14CC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ecx + 8));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F882Fu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F882F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE3(); return; } /* jl: less (signed <) */

loc_001F8837: ;
    MEM32(esi + 8) = 1;

    g_seh_ebp = ebp; sub_001F883E(); return; /* fallthrough 0x001F883E */

}

/**
 * sub_001F883E
 * Original: 0x001F883E - 0x001F886F (49 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F883E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F883E: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -20) = edi;
    PUSH32(esp, 0x001F884Fu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F884F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jne: not equal / not zero */

loc_001F885D: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F895C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F8869: ;
    edx = esi + 0x1C;
    MEM32(ebp + -12) = edx;

    g_seh_ebp = ebp; sub_001F886F(); return; /* fallthrough 0x001F886F */

}

/**
 * sub_001F886F
 * Original: 0x001F886F - 0x001F88F9 (138 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F886F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F886F: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8916(); return; } /* jne: not equal / not zero */

loc_001F8878: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x14E8;
    PUSH32(esp, 0x1E);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(edx);
    MEM32(ebx) = eax;
    SET_LO16(eax, MEM16(edx + 4));
    MEM16(esi + 0x14EC) = LO16(eax);
    ecx = esi + 0x14D4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x14CC));
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x14DC) = ebx;
    MEM32(esi + 0x14E4) = ebx;
    MEM32(esi + 0x14E0) = 0x78;
    PUSH32(esp, 0x001F88CAu); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F88CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE1(); return; } /* jl: less (signed <) */

loc_001F88D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x14D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F88E7; /* je: equal / zero */

loc_001F88DE: ;
    _fa = (uint32_t)(MEM32(esi + 0x14D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F892D(); return; } /* jne: not equal / not zero */

loc_001F88E7: ;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1560), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F88F9(); return; } /* jae: above or equal (unsigned >=) */

loc_001F88F0: ;
    MEM32(ebp + -20) = 1;
    g_seh_ebp = ebp; sub_001F8911(); return; /* tail jmp 0x001F8911 */

}

/**
 * sub_001F88F9
 * Original: 0x001F88F9 - 0x001F8911 (24 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F88F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F88F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x14EC));
    PUSH32(esp, 0x236518);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x001F8911u); RECOMP_ABI_CALL(0x001F8654u, sub_001F8654); /* call 0x001F8654 */

    g_seh_ebp = ebp; sub_001F8911(); return; /* fallthrough 0x001F8911 */

}

/**
 * sub_001F8911
 * Original: 0x001F8911 - 0x001F8916 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8911(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8911: ;
    edx = MEM32(ebp + -12);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F8916(); return; /* fallthrough 0x001F8916 */

}

/**
 * sub_001F8916
 * Original: 0x001F8916 - 0x001F892D (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8916(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8916: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F886F(); return; } /* jb: below (unsigned <) */

loc_001F892B: ;
    g_seh_ebp = ebp; sub_001F895C(); return; /* tail jmp 0x001F895C */

}

/**
 * sub_001F892D
 * Original: 0x001F892D - 0x001F895C (47 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F892D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F892D: ;
    ecx = MEM32(esi + 0xC);
    eax = esi + 0x14D4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14D0));
    PUSH32(esp, MEM32(esi + 0x14CC));
    PUSH32(esp, 0x001F8948u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001F8948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE1(); return; } /* jl: less (signed <) */

loc_001F8953: ;
    MEM32(esi + 8) = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F895C(); return; /* fallthrough 0x001F895C */

}

/**
 * sub_001F895C
 * Original: 0x001F895C - 0x001F897E (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F895C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F895C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F89AD(); return; } /* jb: below (unsigned <) */

loc_001F8964: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F897E(); return; } /* je: equal / zero */

loc_001F8969: ;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1560), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F897E(); return; } /* jae: above or equal (unsigned >=) */

loc_001F8972: ;
    MEM32(esi + 8) = 3;
    g_seh_ebp = ebp; sub_001F8D45(); return; /* tail jmp 0x001F8D45 */

}

/**
 * sub_001F897E
 * Original: 0x001F897E - 0x001F89AD (47 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F897E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F897E: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    ebx = esi + 0x14CC;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x001F8994u); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F8994: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebx) = edi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE3(); return; } /* jl: less (signed <) */

loc_001F89A1: ;
    MEM32(esi + 8) = 6;
    g_seh_ebp = ebp; sub_001F8D45(); return; /* tail jmp 0x001F8D45 */

}

/**
 * sub_001F89AD
 * Original: 0x001F89AD - 0x001F8A07 (90 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F89AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F89AD: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001F89BBu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F89BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jne: not equal / not zero */

loc_001F89C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x14EC));
    ebx = esi + 0x14EE;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14E8));
    PUSH32(esp, 0x001F89E7u); RECOMP_ABI_CALL(0x001F8654u, sub_001F8654); /* call 0x001F8654 */

loc_001F89E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE3(); return; } /* jl: less (signed <) */

loc_001F89F2: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D3E(); return; } /* je: equal / zero */

loc_001F89FB: ;
    MEM32(ebp + -16) = 1;
    g_seh_ebp = ebp; sub_001F8D3E(); return; /* tail jmp 0x001F8D3E */

}

/**
 * sub_001F8A07
 * Original: 0x001F8A07 - 0x001F8ACD (198 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8A07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8A07: ;
    edx = esi + 0x1580;
    MEM32(esi + 0x156C) = edx;
    eax = esi + 0x1586;
    MEM32(esi + 0x1570) = eax;
    MEM32(ebp + -20) = 0x1EE;
    MEM32(esi + 0x1568) = 6;
    MEM16(edx) = 1;
    eax = MEM32(esi + 0x156C);
    MEM16(eax + 4) = LO16(edi);
    eax = MEM32(esi + 0x156C);
    MEM16(eax + 2) = LO16(edi);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001F8AB2; /* jbe: below or equal (unsigned <=) */

loc_001F8A51: ;
    eax = esi + 0x20;

loc_001F8A54: ;
    ecx = MEM32(esi + 0x156C);
    SET_LO16(ebx, MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 4 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F8AAF; /* jae: above or equal (unsigned >=) */

loc_001F8A64: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8AA1; /* jne: not equal / not zero */

loc_001F8A69: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8A77; /* je: equal / zero */

loc_001F8A6E: ;
    SET_LO16(ebx, MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8AA1; /* jne: not equal / not zero */

loc_001F8A77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1568) = MEM32(esi + 0x1568) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x1568)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ebx, MEM16(eax));
    MEM16(ecx + 2) = LO16(ebx);
    ecx = MEM32(esi + 0x156C);
    MEM16(ecx + 4) = MEM16(ecx + 4) + 1;
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x1570);
    ebx = MEM32(eax + -4);
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1570) = MEM32(esi + 0x1570) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x1570)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F8AA1: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F8A54; /* jb: below (unsigned <) */

loc_001F8AAF: ;
    ecx = MEM32(ebp + 8);

loc_001F8AB2: ;
    eax = MEM32(esi + 0x156C);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8ACD(); return; } /* jne: not equal / not zero */

loc_001F8ABE: ;
    MEM32(esi + 8) = 1;
    PUSH32(esp, MEM32(ecx + 8));
    g_seh_ebp = ebp; sub_001F8D6C(); return; /* tail jmp 0x001F8D6C */

}

/**
 * sub_001F8ACD
 * Original: 0x001F8ACD - 0x001F8B09 (60 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8ACD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8ACD: ;
    eax = esi + 0x1564;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ecx + 8));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0xEA60);
    PUSH32(esp, MEM32(esi + 0x1568));
    eax = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi + 0x1596;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAA6DFC);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001F8B02u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F8B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8B14(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001F8B09(); return; /* fallthrough 0x001F8B09 */

}

/**
 * sub_001F8B09
 * Original: 0x001F8B09 - 0x001F8B14 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8B09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8B09: ;
    MEM32(esi + 0x1560) = MEM32(esi + 0x1560) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F8DD0(); return; /* tail jmp 0x001F8DD0 */

}

/**
 * sub_001F8B14
 * Original: 0x001F8B14 - 0x001F8B27 (19 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8B14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8B14: ;
    eax = esi + 0x1586;
    MEM32(esi + 0x1570) = eax;
    MEM32(esi + 8) = 4;

    g_seh_ebp = ebp; sub_001F8B27(); return; /* fallthrough 0x001F8B27 */

}

/**
 * sub_001F8B27
 * Original: 0x001F8B27 - 0x001F8BEF (200 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8B27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8B27: ;
    PUSH32(esp, MEM32(esi + 0x1564));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0x001F8B3Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F8B3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001F8B4B; /* jge: greater or equal (signed >=) */

loc_001F8B45: ;
    MEM32(esi + 0x1560) = MEM32(esi + 0x1560) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F8B4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jne: not equal / not zero */

loc_001F8B56: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1564));
    PUSH32(esp, 0x001F8B79u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F8B79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8B09(); return; } /* jl: less (signed <) */

loc_001F8B80: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8B09(); return; } /* je: equal / zero */

loc_001F8B87: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8B09(); return; } /* jne: not equal / not zero */

loc_001F8B94: ;
    PUSH32(esp, MEM32(esi + 0x1564));
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x1574) = eax;
    eax = MEM32(ebp + -8);
    ebx = esi + 0x1578;
    MEM32(ebx) = eax;
    MEM32(esi + 0x157C) = edi;
    PUSH32(esp, 0x001F8BB9u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F8BB9: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 2 (32-bit) */
    MEM32(esi + 0x1564) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D38(); return; } /* jb: below (unsigned <) */

loc_001F8BC8: ;
    ecx = MEM32(esi + 0x1574);
    eax = MEM32(esi + 0x156C);
    SET_LO16(ecx, MEM16(ecx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 4) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D38(); return; } /* jne: not equal / not zero */

loc_001F8BE1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x157C) = MEM32(esi + 0x157C) + 2;
    _fa = (uint32_t)(MEM32(esi + 0x157C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 5;

    g_seh_ebp = ebp; sub_001F8BEF(); return; /* fallthrough 0x001F8BEF */

}

/**
 * sub_001F8BEF
 * Original: 0x001F8BEF - 0x001F8D38 (329 bytes, 85 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8BEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8BEF: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001F8BFDu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F8BFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jne: not equal / not zero */

loc_001F8C0B: ;
    eax = MEM32(esi + 0x1578);
    ecx = MEM32(esi + 0x157C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D4F(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F8C1F: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D4D(); return; } /* jb: below (unsigned <) */

loc_001F8C2C: ;
    ebx = MEM32(esi + 0x1574);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x157C) = ecx;
    ecx = ZX16(MEM16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D5F(); return; } /* jb: below (unsigned <) */

loc_001F8C4A: ;
    eax = MEM32(esi + 0x1568);
    _fb = (uint32_t)(MEM32(esi + 0x156C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x156C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x1570)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1570), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D5F(); return; } /* jae: above or equal (unsigned >=) */

loc_001F8C62: ;
    PUSH32(esp, 0x1E);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edx = esi + 0x14E8;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x1570);
    eax = MEM32(eax);
    MEM32(edx) = eax;
    eax = MEM32(esi + 0x156C);
    SET_LO16(eax, MEM16(eax + 2));
    PUSH32(esp, 0x27);
    MEM16(esi + 0x14EC) = LO16(eax);
    eax = ZX16(MEM16(ebx));
    edi = esi + 0x14EE;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x157C);
    eax = eax + esi + 0x1596;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001F8CB3u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001F8CB3: ;
    MEM16(esi + eax * 2 + 0x14EE) = MEM16(esi + eax * 2 + 0x14EE) & 0;
    _fa = (uint32_t)(MEM16(esi + eax * 2 + 0x14EE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x157C) = MEM32(esi + 0x157C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x157C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1570) = MEM32(esi + 0x1570) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x1570)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x14EC));
    PUSH32(esp, edi);
    ebx = esi + 0x14E8;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x001F8CE6u); RECOMP_ABI_CALL(0x001F8654u, sub_001F8654); /* call 0x001F8654 */

loc_001F8CE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE1(); return; } /* jl: less (signed <) */

loc_001F8CF1: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8D1F; /* je: equal / zero */

loc_001F8CF7: ;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x14D0));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, MEM32(esi + 0x14CC));
    PUSH32(esp, 0x001F8D14u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F8D14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE1(); return; } /* jl: less (signed <) */

loc_001F8D1F: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = 5;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001F8D31u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F8D31: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F8DD0(); return; /* tail jmp 0x001F8DD0 */

}

/**
 * sub_001F8D38
 * Original: 0x001F8D38 - 0x001F8D3E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D38: ;
    MEM32(esi + 0x1560) = MEM32(esi + 0x1560) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001F8D3E(); return; /* fallthrough 0x001F8D3E */

}

/**
 * sub_001F8D3E
 * Original: 0x001F8D3E - 0x001F8D4D (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D3E: ;
    MEM32(esi + 8) = 1;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 8));
    g_seh_ebp = ebp; sub_001F8DCB(); return; /* tail jmp 0x001F8DCB */

}

/**
 * sub_001F8D45
 * Original: 0x001F8D45 - 0x001F8D4D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D45: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 8));
    g_seh_ebp = ebp; sub_001F8DCB(); return; /* tail jmp 0x001F8DCB */

}

/**
 * sub_001F8D4D
 * Original: 0x001F8D4D - 0x001F8D4F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

    g_seh_ebp = ebp; sub_001F8D4F(); return; /* fallthrough 0x001F8D4F */

}

/**
 * sub_001F8D4F
 * Original: 0x001F8D4F - 0x001F8D59 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D4F: ;
    if (_flags /* je: equal / zero */) { g_seh_ebp = ebp; sub_001F8D59(); return; }

loc_001F8D51: ;
    MEM32(esi + 0x1560) = MEM32(esi + 0x1560) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1560)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F8D5F(); return; /* tail jmp 0x001F8D5F */

}

/**
 * sub_001F8D59
 * Original: 0x001F8D59 - 0x001F8D5F (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D59: ;
    MEM32(esi + 0x1560) = edi;

    g_seh_ebp = ebp; sub_001F8D5F(); return; /* fallthrough 0x001F8D5F */

}

/**
 * sub_001F8D5F
 * Original: 0x001F8D5F - 0x001F8D6C (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D5F: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = 1;
    PUSH32(esp, MEM32(eax + 8));

    g_seh_ebp = ebp; sub_001F8D6C(); return; /* fallthrough 0x001F8D6C */

}

/**
 * sub_001F8D6C
 * Original: 0x001F8D6C - 0x001F8D7A (14 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D6C: ;
    PUSH32(esp, 0x001F8D71u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F8D71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8D71
 * Original: 0x001F8D71 - 0x001F8D7A (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8D73
 * Original: 0x001F8D73 - 0x001F8D7A (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D73: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8D74
 * Original: 0x001F8D74 - 0x001F8D7A (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8D7A
 * Original: 0x001F8D7A - 0x001F8DAC (50 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8D7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8D7A: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001F8D88u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F8D88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jne: not equal / not zero */

loc_001F8D92: ;
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001F8DA0u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F8DA0: ;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x14D0) = edi;
    MEM32(esi + 8) = ebx;

    g_seh_ebp = ebp; sub_001F8DAC(); return; /* fallthrough 0x001F8DAC */

}

/**
 * sub_001F8DAC
 * Original: 0x001F8DAC - 0x001F8DC5 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DAC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DD0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F8DB3: ;
    eax = esi + 0x24;

loc_001F8DB6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8DC5(); return; } /* je: equal / zero */

loc_001F8DBA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F8DB6; /* jb: below (unsigned <) */

loc_001F8DC3: ;
    g_seh_ebp = ebp; sub_001F8DD0(); return; /* tail jmp 0x001F8DD0 */

}

/**
 * sub_001F8DC5
 * Original: 0x001F8DC5 - 0x001F8DD0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DC5: ;
    MEM32(esi + 8) = edi;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x001F8DD0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001F8DD0(); return; /* fallthrough 0x001F8DD0 */

}

/**
 * sub_001F8DCB
 * Original: 0x001F8DCB - 0x001F8DD0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DCB: ;
    PUSH32(esp, 0x001F8DD0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001F8DD0(); return; /* fallthrough 0x001F8DD0 */

}

/**
 * sub_001F8DD0
 * Original: 0x001F8DD0 - 0x001F8DE1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DD0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F8DE3(); return; } /* jl: less (signed <) */

loc_001F8DD5: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8D71(); return; } /* je: equal / zero */

loc_001F8DDA: ;
    eax = 0x1500F1;
    g_seh_ebp = ebp; sub_001F8D73(); return; /* tail jmp 0x001F8D73 */

}

/**
 * sub_001F8DE1
 * Original: 0x001F8DE1 - 0x001F8DE3 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DE1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F8DE3(); return; /* fallthrough 0x001F8DE3 */

}

/**
 * sub_001F8DE3
 * Original: 0x001F8DE3 - 0x001F8E54 (113 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8DE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8DE3: ;
    ebx = esi + 0x14D0;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F8DFA; /* je: equal / zero */

loc_001F8DEF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8DF8u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F8DF8: ;
    MEM32(ebx) = edi;

loc_001F8DFA: ;
    ebx = esi + 0x14CC;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F8E11; /* je: equal / zero */

loc_001F8E06: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8E0Fu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F8E0F: ;
    MEM32(ebx) = edi;

loc_001F8E11: ;
    ebx = esi + 0x1564;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F8E28; /* je: equal / zero */

loc_001F8E1D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8E26u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F8E26: ;
    MEM32(ebx) = edi;

loc_001F8E28: ;
    MEM32(esi + 8) = 7;
    g_seh_ebp = ebp; sub_001F8D71(); return; /* tail jmp 0x001F8D71 */

    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(eax + -2009202657)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x7001F89)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + 0x7001F89) = MEM8(ebp + 0x7001F89) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x7001F89)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(edi));
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = MEM32(edi);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = MEM32(edi);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -115)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx + -115) = MEM8(edx + -115) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + -115)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */

    g_seh_ebp = ebp; sub_001F8E54(); return; /* fallthrough 0x001F8E54 */

}

/**
 * sub_001F8E54
 * Original: 0x001F8E54 - 0x001F8E64 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8E54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8E54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8E64(); return; } /* jne: not equal / not zero */

loc_001F8E5D: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F8E84(); return; /* tail jmp 0x001F8E84 */

}

/**
 * sub_001F8E64
 * Original: 0x001F8E64 - 0x001F8E79 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8E64: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8E79(); return; } /* je: equal / zero */

loc_001F8E69: ;
    ecx = MEM32(ecx + 0x18A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8E79(); return; } /* je: equal / zero */

loc_001F8E73: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001F872E(); return; /* tail jmp 0x001F872E */

}

/**
 * sub_001F8E79
 * Original: 0x001F8E79 - 0x001F8E84 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8E79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8E79: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8E84(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F8E7E: ;
    ecx = MEM32(ebp + 0x14);
    MEM16(ecx) = LO16(eax);

    g_seh_ebp = ebp; sub_001F8E84(); return; /* fallthrough 0x001F8E84 */

}

/**
 * sub_001F8E84
 * Original: 0x001F8E84 - 0x001F8E88 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8E84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8E84: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F8E88
 * Original: 0x001F8E88 - 0x001F8E93 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8E88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8E88: ;
    ecx = MEM32(ecx + 0x18A4);
    g_seh_ebp = ebp; sub_001F87DB(); return; /* tail jmp 0x001F87DB */

}

/**
 * sub_001F8E93
 * Original: 0x001F8E93 - 0x001F8EA8 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8E93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8E93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8EA8(); return; } /* jne: not equal / not zero */

loc_001F8E9E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F8F4F(); return; /* tail jmp 0x001F8F4F */

}

/**
 * sub_001F8EA8
 * Original: 0x001F8EA8 - 0x001F8ED1 (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8EA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8EA8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x802C);
    PUSH32(esp, 0x10);
    ecx = edi;
    PUSH32(esp, 0x001F8EC2u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F8EC2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8ED1(); return; } /* jne: not equal / not zero */

loc_001F8EC8: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F8F4A(); return; /* tail jmp 0x001F8F4A */

}

/**
 * sub_001F8ED1
 * Original: 0x001F8ED1 - 0x001F8F1D (76 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8ED1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8ED1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F8ED9u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001F8ED9: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x1F8E88;
    MEM32(esi + 4) = 0x1F86EA;
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x18A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18A4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8F28(); return; } /* jne: not equal / not zero */

loc_001F8EF9: ;
    PUSH32(esp, 0x802B);
    PUSH32(esp, 0x1784);
    ecx = edi;
    PUSH32(esp, 0x001F8F0Au); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F8F0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x18A4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8F1D(); return; } /* jne: not equal / not zero */

loc_001F8F14: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F8F39(); return; /* tail jmp 0x001F8F39 */

}

/**
 * sub_001F8F1D
 * Original: 0x001F8F1D - 0x001F8F28 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F1D: ;
    PUSH32(esp, MEM32(edi + 4));
    ecx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F8F28u); RECOMP_ABI_CALL(0x001F8403u, sub_001F8403); /* call 0x001F8403 */

    g_seh_ebp = ebp; sub_001F8F28(); return; /* fallthrough 0x001F8F28 */

}

/**
 * sub_001F8F28
 * Original: 0x001F8F28 - 0x001F8F39 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F28: ;
    eax = MEM32(edi + 0x18A4);
    ecx = MEM32(eax);
    MEM32(esi + 0xC) = ecx;
    MEM32(eax) = esi;
    MEM32(ebx) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F8F39(); return; /* fallthrough 0x001F8F39 */

}

/**
 * sub_001F8F39
 * Original: 0x001F8F39 - 0x001F8F4A (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8F4A(); return; } /* je: equal / zero */

loc_001F8F3D: ;
    PUSH32(esp, 0x802C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F8F4Au); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_001F8F4A(); return; /* fallthrough 0x001F8F4A */

}

/**
 * sub_001F8F4A
 * Original: 0x001F8F4A - 0x001F8F4F (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F4A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F8F4F(); return; /* fallthrough 0x001F8F4F */

}

/**
 * sub_001F8F4F
 * Original: 0x001F8F4F - 0x001F8F54 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F4F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F8F54
 * Original: 0x001F8F54 - 0x001F8F6C (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F54: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x407) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x407;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F8F75(); return; } /* je: equal / zero */

loc_001F8F5F: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F8F71(); return; } /* je: equal / zero */

loc_001F8F64: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001F8F6C(); return; } /* je: equal / zero */

loc_001F8F67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F8F77(); return; /* tail jmp 0x001F8F77 */

}

/**
 * sub_001F8F6C
 * Original: 0x001F8F6C - 0x001F8F71 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F6C: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001F8F77(); return; /* tail jmp 0x001F8F77 */

}

/**
 * sub_001F8F6E
 * Original: 0x001F8F6E - 0x001F8F71 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F6E: ;
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_001F8F77(); return; /* tail jmp 0x001F8F77 */

}

/**
 * sub_001F8F71
 * Original: 0x001F8F71 - 0x001F8F75 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F71: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_001F8F6E(); return; /* tail jmp 0x001F8F6E */

}

/**
 * sub_001F8F75
 * Original: 0x001F8F75 - 0x001F8F77 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F8F75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F8F77(); return; /* fallthrough 0x001F8F77 */

}

/**
 * sub_001F8F77
 * Original: 0x001F8F77 - 0x001F8F7A (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F77(void)
{

loc_001F8F77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8F7A
 * Original: 0x001F8F7A - 0x001F8F80 (6 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F7A(void)
{

loc_001F8F7A: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8F80
 * Original: 0x001F8F80 - 0x001F8F92 (18 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F80: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F8F92(); return; } /* jne: not equal / not zero */

loc_001F8F87: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001F8F90u); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001F8F90: ;
    g_seh_ebp = ebp; sub_001F8F95(); return; /* tail jmp 0x001F8F95 */

}

/**
 * sub_001F8F92
 * Original: 0x001F8F92 - 0x001F8F95 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8F92: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

    g_seh_ebp = ebp; sub_001F8F95(); return; /* fallthrough 0x001F8F95 */

}

/**
 * sub_001F8F95
 * Original: 0x001F8F95 - 0x001F8F98 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F95(void)
{

loc_001F8F95: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F8F98
 * Original: 0x001F8F98 - 0x001F8FA7 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8F98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8F98: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8FA7
 * Original: 0x001F8FA7 - 0x001F8FBB (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8FA7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F8FA7: ;
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_001F8FCF
 * Original: 0x001F8FCF - 0x001F9045 (118 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F8FCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F8FCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9084(); return; } /* je: equal / zero */

loc_001F8FE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    POP32(esp, edx);
    ecx = edx;
    edi = ebp + -64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -64) = 1;
    MEM32(ebp + -56) = 8;
    MEM32(ebp + -52) = edx;
    MEM32(ebp + -36) = 0x1F;
    MEM32(ebp + -20) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9021u); RECOMP_ABI_CALL(0x001DFC5Eu, sub_001DFC5E); /* call 0x001DFC5E */

loc_001F9021: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9045(); return; } /* jge: greater or equal (signed >=) */

loc_001F9029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9045(); return; } /* jl: less (signed <) */

loc_001F902D: ;
    ecx = MEM32(eax * 4 + 0x2F7B34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9045(); return; } /* je: equal / zero */

loc_001F9038: ;
    ebx = MEM32(ebp + -60);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    g_seh_ebp = ebp; sub_001F907F(); return; /* tail jmp 0x001F907F */

}

/**
 * sub_001F9045
 * Original: 0x001F9045 - 0x001F906E (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F907F(); return; } /* jne: not equal / not zero */

loc_001F904A: ;
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0xFFFFFF00u;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_001F906E(); return; } /* jns: not sign (positive) */

loc_001F9056: ;
    ebx = MEM32(ebp + -4);
    edi = eax;
    edx = esi + esi * 8;
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edx * 8 + 0x13CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + edx * 8 + 0x13CC) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F906E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F9069: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001F9070(); return; /* tail jmp 0x001F9070 */

}

/**
 * sub_001F906E
 * Original: 0x001F906E - 0x001F9070 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F906E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F906E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F9070(); return; /* fallthrough 0x001F9070 */

}

/**
 * sub_001F9070
 * Original: 0x001F9070 - 0x001F907F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9070: ;
    edx = MEM32(ebp + -4);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + esi * 8;
    MEM32(edx + ecx * 8 + 0x13CC) = eax;

    g_seh_ebp = ebp; sub_001F907F(); return; /* fallthrough 0x001F907F */

}

/**
 * sub_001F907F
 * Original: 0x001F907F - 0x001F9084 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F907F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F907F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001F9084(); return; /* fallthrough 0x001F9084 */

}

/**
 * sub_001F9084
 * Original: 0x001F9084 - 0x001F9088 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9084(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9084: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F9088
 * Original: 0x001F9088 - 0x001F90D2 (74 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F9088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9088: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x40), eax (32-bit) */
    ebx = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F917C(); return; } /* je: equal / zero */

loc_001F90A2: ;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), 0x34 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F917C(); return; } /* jne: not equal / not zero */

loc_001F90AC: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F917C(); return; } /* je: equal / zero */

loc_001F90B5: ;
    PUSH32(esp, 0x8021);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F90C1u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_001F90C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F90D2(); return; } /* jne: not equal / not zero */

loc_001F90C8: ;
    esi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F9181(); return; /* tail jmp 0x001F9181 */

}

/**
 * sub_001F90D2
 * Original: 0x001F90D2 - 0x001F917C (170 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F90D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F90D2: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = 1;
    esi = MEM32(edi + 0x40);
    eax = ebx + 0x14C8;
    MEM32(esi) = 8;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9107u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001F9107: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    eax = eax + eax * 8;
    ecx = MEM32(ebx + eax * 8 + 0x13A8);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax * 8 + 0x13AC);
    MEM32(esi + 0x24) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    PUSH32(esp, 1);
    MEM16(esi + 0x28) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2A) = eax;
    MEM16(esi + 0x2E) = 0x14;
    MEM32(esi + 0x30) = 0x800;
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(edi + 0x44));
    PUSH32(esp, MEM32(edi + 0x40));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x48));
    PUSH32(esp, MEM32(0x2F7B30));
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F9168u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F9168: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9181(); return; } /* jl: less (signed <) */

loc_001F916E: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    MEM32(edi + 0x18) = eax;
    g_seh_ebp = ebp; sub_001F9191(); return; /* tail jmp 0x001F9191 */

}

/**
 * sub_001F917C
 * Original: 0x001F917C - 0x001F9181 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F917C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F917C: ;
    esi = 0x80150007u;

    g_seh_ebp = ebp; sub_001F9181(); return; /* fallthrough 0x001F9181 */

}

/**
 * sub_001F9181
 * Original: 0x001F9181 - 0x001F91A7 (38 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9181: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9191; /* je: equal / zero */

loc_001F9187: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0x001F9191u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9191: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80072747u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80072747u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F919E; /* jne: not equal / not zero */

loc_001F9199: ;
    esi = 0x80152006u;

loc_001F919E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F9191
 * Original: 0x001F9191 - 0x001F91A7 (22 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9191(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9191: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80072747u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80072747u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F919E; /* jne: not equal / not zero */

loc_001F9199: ;
    esi = 0x80152006u;

loc_001F919E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
