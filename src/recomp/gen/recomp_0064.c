/**
 * DOAU1 - Recompiled code chunk 64
 * Functions: 250 (0x001D173E - 0x001D3B17)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D173E
 * Original: 0x001D173E - 0x001D1740 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D173E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D173E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1740(); return; /* fallthrough 0x001D1740 */

}

/**
 * sub_001D1740
 * Original: 0x001D1740 - 0x001D1750 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1750(); return; } /* jne: not equal / not zero */

loc_001D1746: ;
    eax = 0x8007277Bu;
    g_seh_ebp = ebp; sub_001D17E3(); return; /* tail jmp 0x001D17E3 */

}

/**
 * sub_001D1750
 * Original: 0x001D1750 - 0x001D1775 (37 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1750: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1775(); return; } /* jb: below (unsigned <) */

loc_001D1758: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1789(); return; } /* je: equal / zero */

loc_001D175C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1766u); RECOMP_ABI_CALL(0x001D0736u, sub_001D0736); /* call 0x001D0736 */

loc_001D1766: ;
    ebx = eax;
    eax = 0x800703E5u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D17E3(); return; } /* je: equal / zero */

loc_001D1771: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D17BA(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001D1775(); return; /* fallthrough 0x001D1775 */

}

/**
 * sub_001D1775
 * Original: 0x001D1775 - 0x001D1789 (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1775(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1775: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D17B3(); return; } /* jne: not equal / not zero */

loc_001D1782: ;
    PUSH32(esp, 0x001D1787u); RECOMP_ABI_CALL(0x001E28C8u, sub_001E28C8); /* call 0x001E28C8 */

loc_001D1787: ;
    g_seh_ebp = ebp; sub_001D17B8(); return; /* tail jmp 0x001D17B8 */

}

/**
 * sub_001D1789
 * Original: 0x001D1789 - 0x001D17AC (35 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1789: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D17AC(); return; } /* jne: not equal / not zero */

loc_001D178F: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D17AC(); return; } /* jne: not equal / not zero */

loc_001D1795: ;
    PUSH32(esp, MEM32(esi + 0x50));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D17A6u); RECOMP_ABI_CALL(0x001D098Fu, sub_001D098F); /* call 0x001D098F */

loc_001D17A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1775(); return; } /* jge: greater or equal (signed >=) */

loc_001D17AA: ;
    g_seh_ebp = ebp; sub_001D17E3(); return; /* tail jmp 0x001D17E3 */

}

/**
 * sub_001D17AC
 * Original: 0x001D17AC - 0x001D17B3 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17AC: ;
    eax = 0x80072733u;
    g_seh_ebp = ebp; sub_001D17E3(); return; /* tail jmp 0x001D17E3 */

}

/**
 * sub_001D17B3
 * Original: 0x001D17B3 - 0x001D17B8 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17B3: ;
    PUSH32(esp, 0x001D17B8u); RECOMP_ABI_CALL(0x001E19F4u, sub_001E19F4); /* call 0x001E19F4 */

    g_seh_ebp = ebp; sub_001D17B8(); return; /* fallthrough 0x001D17B8 */

}

/**
 * sub_001D17B8
 * Original: 0x001D17B8 - 0x001D17BA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17B8: ;
    ebx = eax;

    g_seh_ebp = ebp; sub_001D17BA(); return; /* fallthrough 0x001D17BA */

}

/**
 * sub_001D17BA
 * Original: 0x001D17BA - 0x001D17E4 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17BA: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D17E1; /* je: equal / zero */

loc_001D17C3: ;
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ebx;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D17D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D17D3u); } /* indirect call */
    }

loc_001D17D9: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D17E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D17DBu); } /* indirect call */
    }

loc_001D17E1: ;
    eax = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D17E4(); return; /* fallthrough 0x001D17E4 */

}

/**
 * sub_001D17E3
 * Original: 0x001D17E3 - 0x001D17E4 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17E3: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D17E4(); return; /* fallthrough 0x001D17E4 */

}

/**
 * sub_001D17E4
 * Original: 0x001D17E4 - 0x001D17EA (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D17E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D17EA
 * Original: 0x001D17EA - 0x001D187C (146 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D17EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D17EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    esi = ecx + 0xD38;
    PUSH32(esp, 3);
    POP32(esp, ebx);
    MEM32(ebp + 0x14) = edx;
    edx = MEM32(esi);
    ecx = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D187F(); return; } /* je: equal / zero */

loc_001D1814: ;
    PUSH32(esp, edi);

loc_001D1815: ;
    edx = MEM32(ecx + 0xC);
    edi = edx;
    if (1) _cf = (int)(((edi) >> ((1) - 1)) & 1);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D186A; /* jne: not equal / not zero */

loc_001D1826: ;
    SET_LO16(edi, MEM16(ecx + 0x4A));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ebp + 8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D186A; /* jne: not equal / not zero */

loc_001D1830: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D183F; /* je: equal / zero */

loc_001D1837: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D186A; /* jne: not equal / not zero */

loc_001D183F: ;
    edx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D184E; /* je: equal / zero */

loc_001D1847: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D186A; /* jne: not equal / not zero */

loc_001D184B: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D184E: ;
    SET_LO16(edx, MEM16(ecx + 0x48));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D185E; /* je: equal / zero */

loc_001D1858: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D186A; /* jne: not equal / not zero */

loc_001D185D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D185E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D187C(); return; } /* je: equal / zero */

loc_001D1862: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D186A; /* jae: above or equal (unsigned >=) */

loc_001D1866: ;
    eax = ecx;
    ebx = edi;

loc_001D186A: ;
    ecx = MEM32(ecx);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx;
    if ((_fa != 0)) goto loc_001D1815; /* jne: not equal / not zero */

loc_001D187A: ;
    g_seh_ebp = ebp; sub_001D187E(); return; /* tail jmp 0x001D187E */

}

/**
 * sub_001D187C
 * Original: 0x001D187C - 0x001D187E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D187C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D187C: ;
    eax = ecx;

    g_seh_ebp = ebp; sub_001D187E(); return; /* fallthrough 0x001D187E */

}

/**
 * sub_001D187E
 * Original: 0x001D187E - 0x001D187F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D187E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D187E: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D187F(); return; /* fallthrough 0x001D187F */

}

/**
 * sub_001D187F
 * Original: 0x001D187F - 0x001D1885 (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D187F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D187F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D1885
 * Original: 0x001D1885 - 0x001D18C3 (62 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1885(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1885: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D1890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D188Au); } /* indirect call */
    }

loc_001D1890: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D18C3(); return; } /* je: equal / zero */

loc_001D189C: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D18A8u); RECOMP_ABI_CALL(0x001E20F5u, sub_001E20F5); /* call 0x001E20F5 */

loc_001D18A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D18C3(); return; } /* jne: not equal / not zero */

loc_001D18AC: ;
    PUSH32(esp, 0x1000018);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D18BAu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D18BA: ;
    MEM32(esi + 8) = 0x2D636F73;
    g_seh_ebp = ebp; sub_001D18F3(); return; /* tail jmp 0x001D18F3 */

}

/**
 * sub_001D18C3
 * Original: 0x001D18C3 - 0x001D18EB (40 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D18C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D18C3: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D18D5u); RECOMP_ABI_CALL(0x001D0B05u, sub_001D0B05); /* call 0x001D0B05 */

loc_001D18D5: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D18EB(); return; } /* je: equal / zero */

loc_001D18DB: ;
    PUSH32(esp, 0x800000);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D18E9u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D18E9: ;
    g_seh_ebp = ebp; sub_001D18F3(); return; /* tail jmp 0x001D18F3 */

}

/**
 * sub_001D18EB
 * Original: 0x001D18EB - 0x001D18F3 (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D18EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D18EB: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D18F3u); RECOMP_ABI_CALL(0x001CFE8Du, sub_001CFE8D); /* call 0x001CFE8D */

    g_seh_ebp = ebp; sub_001D18F3(); return; /* fallthrough 0x001D18F3 */

}

/**
 * sub_001D18F3
 * Original: 0x001D18F3 - 0x001D1903 (16 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D18F3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D18F3: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D18FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D18F5u); } /* indirect call */
    }

loc_001D18FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D1903
 * Original: 0x001D1903 - 0x001D1994 (145 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1903(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1903: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D191A; /* je: equal / zero */

loc_001D1910: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D1929; /* ja: above (unsigned >) */

loc_001D191A: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1924u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1924: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D198F;

loc_001D1929: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1932u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1932: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D193D; /* jne: not equal / not zero */

loc_001D1938: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D198E;

loc_001D193D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = ebp + 8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1969u); RECOMP_ABI_CALL(0x001D1515u, sub_001D1515); /* call 0x001D1515 */

loc_001D1969: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1971; /* jl: less (signed <) */

loc_001D196D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D1978;

loc_001D1971: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1972u); } /* indirect call */
    }

loc_001D1978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D198B; /* je: equal / zero */

loc_001D1983: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1989u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1989: ;
    goto loc_001D1938;

loc_001D198B: ;
    eax = MEM32(ebp + 8);

loc_001D198E: ;
    POP32(esp, esi);

loc_001D198F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D1994
 * Original: 0x001D1994 - 0x001D19BA (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1994(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1994: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D19AB; /* je: equal / zero */

loc_001D19A1: ;
    _fa = (uint32_t)(MEM16(ebx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D19BA(); return; } /* ja: above (unsigned >) */

loc_001D19AB: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D19B5u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D19B5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1A2C(); return; /* tail jmp 0x001D1A2C */

}

/**
 * sub_001D19BA
 * Original: 0x001D19BA - 0x001D19CE (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D19BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D19C3u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D19C3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D19CE(); return; } /* jne: not equal / not zero */

loc_001D19C9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1A2B(); return; /* tail jmp 0x001D1A2B */

}

/**
 * sub_001D19C9
 * Original: 0x001D19C9 - 0x001D19CE (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D19C9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1A2B(); return; /* tail jmp 0x001D1A2B */

}

/**
 * sub_001D19CE
 * Original: 0x001D19CE - 0x001D1A0F (65 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D19CE: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -24) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001D1A01u); RECOMP_ABI_CALL(0x001D1515u, sub_001D1515); /* call 0x001D1515 */

loc_001D1A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + -20);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1A0F(); return; } /* jl: less (signed <) */

loc_001D1A0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1A16(); return; /* tail jmp 0x001D1A16 */

}

/**
 * sub_001D1A0F
 * Original: 0x001D1A0F - 0x001D1A16 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A0F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1A10u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D1A16(); return; /* fallthrough 0x001D1A16 */

}

/**
 * sub_001D1A16
 * Original: 0x001D1A16 - 0x001D1A29 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1A29(); return; } /* je: equal / zero */

loc_001D1A21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1A27u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1A27: ;
    g_seh_ebp = ebp; sub_001D19C9(); return; /* tail jmp 0x001D19C9 */

}

/**
 * sub_001D1A29
 * Original: 0x001D1A29 - 0x001D1A2B (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D1A29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1A2B(); return; /* fallthrough 0x001D1A2B */

}

/**
 * sub_001D1A2B
 * Original: 0x001D1A2B - 0x001D1A2C (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A2B: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D1A2C(); return; /* fallthrough 0x001D1A2C */

}

/**
 * sub_001D1A2C
 * Original: 0x001D1A2C - 0x001D1A31 (5 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A2C: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001D1A31
 * Original: 0x001D1A31 - 0x001D1A5A (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1A31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1A31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1A48; /* je: equal / zero */

loc_001D1A3E: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1A5A(); return; } /* ja: above (unsigned >) */

loc_001D1A48: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1A52u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1A52: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1AEB(); return; /* tail jmp 0x001D1AEB */

}

/**
 * sub_001D1A5A
 * Original: 0x001D1A5A - 0x001D1A6E (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D1A63u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1A63: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1A6E(); return; } /* jne: not equal / not zero */

loc_001D1A69: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1AEA(); return; /* tail jmp 0x001D1AEA */

}

/**
 * sub_001D1A69
 * Original: 0x001D1A69 - 0x001D1A6E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A69: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1AEA(); return; /* tail jmp 0x001D1AEA */

}

/**
 * sub_001D1A6E
 * Original: 0x001D1A6E - 0x001D1ACE (96 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1A6E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1AB3; /* je: equal / zero */

loc_001D1A9B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = 0x10;
    MEM16(ecx) = 2;
    POP32(esp, edi);

loc_001D1AB3: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1AC0u); RECOMP_ABI_CALL(0x001D1515u, sub_001D1515); /* call 0x001D1515 */

loc_001D1AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + -24);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1ACE(); return; } /* jl: less (signed <) */

loc_001D1ACA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1AD5(); return; /* tail jmp 0x001D1AD5 */

}

/**
 * sub_001D1ACE
 * Original: 0x001D1ACE - 0x001D1AD5 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1ACE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1AD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1ACFu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D1AD5(); return; /* fallthrough 0x001D1AD5 */

}

/**
 * sub_001D1AD5
 * Original: 0x001D1AD5 - 0x001D1AE8 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1AD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1AD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1AE8(); return; } /* je: equal / zero */

loc_001D1AE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1AE6u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1AE6: ;
    g_seh_ebp = ebp; sub_001D1A69(); return; /* tail jmp 0x001D1A69 */

}

/**
 * sub_001D1AE8
 * Original: 0x001D1AE8 - 0x001D1AEA (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D1AE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1AE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1AEA(); return; /* fallthrough 0x001D1AEA */

}

/**
 * sub_001D1AEA
 * Original: 0x001D1AEA - 0x001D1AEB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1AEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1AEA: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D1AEB(); return; /* fallthrough 0x001D1AEB */

}

/**
 * sub_001D1AEB
 * Original: 0x001D1AEB - 0x001D1AEF (4 bytes, 2 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1AEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1AEB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001D1AEF
 * Original: 0x001D1AEF - 0x001D1B84 (149 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1AEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1AEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B06; /* je: equal / zero */

loc_001D1AFC: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D1B15; /* ja: above (unsigned >) */

loc_001D1B06: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1B10u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1B10: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D1B7F;

loc_001D1B15: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1B1Eu); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1B1E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1B29; /* jne: not equal / not zero */

loc_001D1B24: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001D1B7E;

loc_001D1B29: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -24) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(ebp + -20) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1B59u); RECOMP_ABI_CALL(0x001D16D1u, sub_001D16D1); /* call 0x001D16D1 */

loc_001D1B59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1B61; /* jl: less (signed <) */

loc_001D1B5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D1B68;

loc_001D1B61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1B62u); } /* indirect call */
    }

loc_001D1B68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B7B; /* je: equal / zero */

loc_001D1B73: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1B79u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1B79: ;
    goto loc_001D1B24;

loc_001D1B7B: ;
    eax = MEM32(ebp + -16);

loc_001D1B7E: ;
    POP32(esp, esi);

loc_001D1B7F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D1B84
 * Original: 0x001D1B84 - 0x001D1BAA (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1B84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1B84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B9B; /* je: equal / zero */

loc_001D1B91: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1BAA(); return; } /* ja: above (unsigned >) */

loc_001D1B9B: ;
    PUSH32(esp, 0x276D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1BA5u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1BA5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1C1A(); return; /* tail jmp 0x001D1C1A */

}

/**
 * sub_001D1BAA
 * Original: 0x001D1BAA - 0x001D1BBE (20 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1BAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1BAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D1BB3u); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1BB3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1BBE(); return; } /* jne: not equal / not zero */

loc_001D1BB9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1C19(); return; /* tail jmp 0x001D1C19 */

}

/**
 * sub_001D1BB9
 * Original: 0x001D1BB9 - 0x001D1BBE (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1BB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1BB9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1C19(); return; /* tail jmp 0x001D1C19 */

}

/**
 * sub_001D1BBE
 * Original: 0x001D1BBE - 0x001D1BFD (63 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1BBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1BBE: ;
    eax = MEM32(ebp + 0x1C);
    ecx = ZX16(MEM16(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, 0x001D1BDAu); RECOMP_ABI_CALL(0x001CF85Du, sub_001CF85D); /* call 0x001CF85D */

loc_001D1BDA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D1BEDu); RECOMP_ABI_CALL(0x001D16D1u, sub_001D16D1); /* call 0x001D16D1 */

loc_001D1BED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1BFD(); return; } /* jl: less (signed <) */

loc_001D1BF1: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1C04(); return; /* tail jmp 0x001D1C04 */

}

/**
 * sub_001D1BFD
 * Original: 0x001D1BFD - 0x001D1C04 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1BFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1BFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1BFEu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D1C04(); return; /* fallthrough 0x001D1C04 */

}

/**
 * sub_001D1C04
 * Original: 0x001D1C04 - 0x001D1C17 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1C04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1C17(); return; } /* je: equal / zero */

loc_001D1C0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1C15u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1C15: ;
    g_seh_ebp = ebp; sub_001D1BB9(); return; /* tail jmp 0x001D1BB9 */

}

/**
 * sub_001D1C17
 * Original: 0x001D1C17 - 0x001D1C19 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D1C17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1C17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1C19(); return; /* fallthrough 0x001D1C19 */

}

/**
 * sub_001D1C19
 * Original: 0x001D1C19 - 0x001D1C1A (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1C19: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D1C1A(); return; /* fallthrough 0x001D1C1A */

}

/**
 * sub_001D1C1A
 * Original: 0x001D1C1A - 0x001D1C1F (5 bytes, 3 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1C1A: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001D1C1F
 * Original: 0x001D1C1F - 0x001D1C42 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1C1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1C1F: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C38; /* je: equal / zero */

loc_001D1C2E: ;
    _fa = (uint32_t)(MEM16(ebx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1C42(); return; } /* ja: above (unsigned >) */

loc_001D1C38: ;
    PUSH32(esp, 0x276D);
    g_seh_ebp = ebp; sub_001D1D1F(); return; /* tail jmp 0x001D1D1F */

}

/**
 * sub_001D1C42
 * Original: 0x001D1C42 - 0x001D1CC8 (134 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1C42: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D1C4Au); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1C4A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1D24(); return; } /* je: equal / zero */

loc_001D1C54: ;
    eax = MEM32(ebp + 0x24);
    ecx = ZX16(MEM16(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, 0x001D1C70u); RECOMP_ABI_CALL(0x001CF85Du, sub_001CF85D); /* call 0x001CF85D */

loc_001D1C70: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CEC(); return; } /* jne: not equal / not zero */

loc_001D1C7B: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CEC(); return; } /* je: equal / zero */

loc_001D1C82: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CE5(); return; } /* je: equal / zero */

loc_001D1C89: ;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CE5(); return; } /* je: equal / zero */

loc_001D1C90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1C9B; /* jne: not equal / not zero */

loc_001D1C94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100007F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100007F (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CE5(); return; } /* jne: not equal / not zero */

loc_001D1C9B: ;
    edx = eax;
    SET_LO16(edx, LO16(edx) & 0xF0);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1CB4; /* jne: not equal / not zero */

loc_001D1CA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1CB9; /* je: equal / zero */

loc_001D1CAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CE5(); return; } /* je: equal / zero */

loc_001D1CB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CC8(); return; } /* jne: not equal / not zero */

loc_001D1CB9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1CC8(); return; } /* jne: not equal / not zero */

loc_001D1CC1: ;
    eax = 0x271D;
    g_seh_ebp = ebp; sub_001D1D13(); return; /* tail jmp 0x001D1D13 */

}

/**
 * sub_001D1CC8
 * Original: 0x001D1CC8 - 0x001D1CE5 (29 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1CC8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D1CE0; /* jne: not equal / not zero */

loc_001D1CCD: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D1CDCu); RECOMP_ABI_CALL(0x001D0342u, sub_001D0342); /* call 0x001D0342 */

loc_001D1CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1D0C(); return; } /* jl: less (signed <) */

loc_001D1CE0: ;
    MEM32(ebp + -4) = edi;
    g_seh_ebp = ebp; sub_001D1CF0(); return; /* tail jmp 0x001D1CF0 */

}

/**
 * sub_001D1CE5
 * Original: 0x001D1CE5 - 0x001D1CEC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1CE5: ;
    eax = 0x2741;
    g_seh_ebp = ebp; sub_001D1D13(); return; /* tail jmp 0x001D1D13 */

}

/**
 * sub_001D1CEC
 * Original: 0x001D1CEC - 0x001D1D0C (32 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1CEC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D1CFCu); RECOMP_ABI_CALL(0x001D16D1u, sub_001D16D1); /* call 0x001D16D1 */

loc_001D1CFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1D0C(); return; } /* jl: less (signed <) */

loc_001D1D00: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1D13(); return; /* tail jmp 0x001D1D13 */

}

/**
 * sub_001D1CF0
 * Original: 0x001D1CF0 - 0x001D1D0C (28 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1CF0: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D1CFCu); RECOMP_ABI_CALL(0x001D16D1u, sub_001D16D1); /* call 0x001D16D1 */

loc_001D1CFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1D0C(); return; } /* jl: less (signed <) */

loc_001D1D00: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1D13(); return; /* tail jmp 0x001D1D13 */

}

/**
 * sub_001D1D0C
 * Original: 0x001D1D0C - 0x001D1D13 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1D13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1D0Du); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D1D13(); return; /* fallthrough 0x001D1D13 */

}

/**
 * sub_001D1D13
 * Original: 0x001D1D13 - 0x001D1D1F (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0x2B434F53;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1D29(); return; } /* je: equal / zero */

loc_001D1D1E: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D1D1F(); return; /* fallthrough 0x001D1D1F */

}

/**
 * sub_001D1D1F
 * Original: 0x001D1D1F - 0x001D1D24 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D1F: ;
    PUSH32(esp, 0x001D1D24u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

    g_seh_ebp = ebp; sub_001D1D24(); return; /* fallthrough 0x001D1D24 */

}

/**
 * sub_001D1D24
 * Original: 0x001D1D24 - 0x001D1D29 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D24: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1D2B(); return; /* tail jmp 0x001D1D2B */

}

/**
 * sub_001D1D29
 * Original: 0x001D1D29 - 0x001D1D2B (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D1D29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1D2B(); return; /* fallthrough 0x001D1D2B */

}

/**
 * sub_001D1D2B
 * Original: 0x001D1D2B - 0x001D1D32 (7 bytes, 5 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001D1D32
 * Original: 0x001D1D32 - 0x001D1D4D (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D32: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 3), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1D80(); return; } /* je: equal / zero */

loc_001D1D3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D1D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1D3Du); } /* indirect call */
    }

loc_001D1D43: ;
    SET_LO8(ebx, LO8(eax));
    esi = edi + 0xD38;
    g_seh_ebp = ebp; sub_001D1D57(); return; /* tail jmp 0x001D1D57 */

}

/**
 * sub_001D1D4D
 * Original: 0x001D1D4D - 0x001D1D57 (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D4D: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D1D57u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

    g_seh_ebp = ebp; sub_001D1D57(); return; /* fallthrough 0x001D1D57 */

}

/**
 * sub_001D1D57
 * Original: 0x001D1D57 - 0x001D1D65 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D57: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1D4D(); return; } /* jne: not equal / not zero */

loc_001D1D5D: ;
    esi = edi + 0xD40;
    g_seh_ebp = ebp; sub_001D1D6F(); return; /* tail jmp 0x001D1D6F */

}

/**
 * sub_001D1D65
 * Original: 0x001D1D65 - 0x001D1D6F (10 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D65: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D1D6Fu); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

    g_seh_ebp = ebp; sub_001D1D6F(); return; /* fallthrough 0x001D1D6F */

}

/**
 * sub_001D1D6F
 * Original: 0x001D1D6F - 0x001D1D80 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D6F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1D65(); return; } /* jne: not equal / not zero */

loc_001D1D75: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BC50)); return; /* indirect tail jmp */

}

/**
 * sub_001D1D80
 * Original: 0x001D1D80 - 0x001D1D82 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D80(void)
{

loc_001D1D80: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1D82
 * Original: 0x001D1D82 - 0x001D1DAF (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1D82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D1D82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x88;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x29000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    _fb = (uint32_t)(0x3854454E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x3854454E)) >> 32) & 1);
    ebx = ebx + 0x3854454E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D1E17(); return; /* tail jmp 0x001D1E17 */

}

/**
 * sub_001D1DAF
 * Original: 0x001D1DAF - 0x001D1E17 (104 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1DAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1DAF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xD38;
    edx = MEM32(ecx);
    eax = edx;
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
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D1E25(); return; } /* je: equal / zero */

loc_001D1DC7: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D1DEF; /* je: equal / zero */

loc_001D1DCF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001D1DEF; /* je: equal / zero */

loc_001D1DD7: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1DEC; /* je: equal / zero */

loc_001D1DDE: ;
    edx = MEM32(eax + 0x94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x94) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D1DEF; /* jae: above or equal (unsigned >=) */

loc_001D1DEC: ;
    MEM32(ebp + -4) = eax;

loc_001D1DEF: ;
    eax = MEM32(eax);
    edx = eax;
    ecx = esi + 0xD38;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    if ((_fa != 0)) goto loc_001D1DC7; /* jne: not equal / not zero */

loc_001D1E05: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1E25(); return; } /* je: equal / zero */

loc_001D1E0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0x001D1E17u); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

    g_seh_ebp = ebp; sub_001D1E17(); return; /* fallthrough 0x001D1E17 */

}

/**
 * sub_001D1E17
 * Original: 0x001D1E17 - 0x001D1E25 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1E17: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0xA)));
    _fa = (uint32_t)(MEM16(esi + 0xD34)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD34), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1DAF(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001D1E25(); return; /* fallthrough 0x001D1E25 */

}

/**
 * sub_001D1E25
 * Original: 0x001D1E25 - 0x001D1E3A (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1E25: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0xA)));
    _fa = (uint32_t)(MEM16(esi + 0xD34)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD34), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1E3A(); return; } /* jb: below (unsigned <) */

loc_001D1E33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1F4C(); return; /* tail jmp 0x001D1F4C */

}

/**
 * sub_001D1E3A
 * Original: 0x001D1E3A - 0x001D1E4D (19 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1E3A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1E4D(); return; } /* je: equal / zero */

loc_001D1E42: ;
    ecx = esi;
    PUSH32(esp, 0x001D1E49u); RECOMP_ABI_CALL(0x001D7FCFu, sub_001D7FCF); /* call 0x001D7FCF */

loc_001D1E49: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1E74(); return; /* tail jmp 0x001D1E74 */

}

/**
 * sub_001D1E4D
 * Original: 0x001D1E4D - 0x001D1E74 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1E4D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D1E53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1E4Du); } /* indirect call */
    }

loc_001D1E53: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1E71; /* je: equal / zero */

loc_001D1E5C: ;
    ecx = edi;
    edi = MEM32(ebp + -4);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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

loc_001D1E71: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D1E74(); return; /* fallthrough 0x001D1E74 */

}

/**
 * sub_001D1E74
 * Original: 0x001D1E74 - 0x001D1F53 (223 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F4C; /* je: equal / zero */

loc_001D1E7C: ;
    ecx = MEM32(ebp + 8);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 8) = 0x2B434F53;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    if (0xA) _cf = (int)(((ecx) >> (32 - (0xA))) & 1);
    ecx = ecx << 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x58) = ecx;
    ecx = ZX8(MEM8(esi + 0xB));
    if (0xA) _cf = (int)(((ecx) >> (32 - (0xA))) & 1);
    ecx = ecx << 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0x5C) = ecx;
    ecx = eax + 0x24;
    MEM32(eax + 0x28) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x34;
    MEM32(eax + 0x38) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x18;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0x12) = 4;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(ecx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F45; /* je: equal / zero */

loc_001D1EDB: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x36)));
    MEM16(eax + 0x82) = LO16(ecx);
    ecx = 0x200;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xCC) = ecx;
    ecx = 0xFFFF;
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0xB8) = ecx;
    MEM16(eax + 0x80) = LO16(edx);
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0xD4) = edx;
    ecx = ZX8(MEM8(esi + 0x38));
    ecx = ecx + ecx * 4;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    ecx = eax + 0x64;
    MEM32(eax + 0x68) = ecx;
    MEM32(ecx) = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x74) = MEM32(eax + 0x74) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x78) = 0x1E167A;

loc_001D1F45: ;
    MEM16(esi + 0xD34) = MEM16(esi + 0xD34) + 1;
    _fa = (uint32_t)(MEM16(esi + 0xD34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001D1F4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D1F4C
 * Original: 0x001D1F4C - 0x001D1F53 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1F4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D1F53
 * Original: 0x001D1F53 - 0x001D1F73 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1F53: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F64; /* je: equal / zero */

loc_001D1F5A: ;
    _fa = (uint32_t)(MEM16(edi + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1F73(); return; } /* ja: above (unsigned >) */

loc_001D1F64: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001D1F6Eu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1F6E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1FE0(); return; /* tail jmp 0x001D1FE0 */

}

/**
 * sub_001D1F73
 * Original: 0x001D1F73 - 0x001D1F88 (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1F73: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001D1F7Du); RECOMP_ABI_CALL(0x001CF93Au, sub_001CF93A); /* call 0x001CF93A */

loc_001D1F7D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1F88(); return; } /* jne: not equal / not zero */

loc_001D1F83: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1FDF(); return; /* tail jmp 0x001D1FDF */

}

/**
 * sub_001D1F83
 * Original: 0x001D1F83 - 0x001D1F88 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1F83: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D1FDF(); return; /* tail jmp 0x001D1FDF */

}

/**
 * sub_001D1F88
 * Original: 0x001D1F88 - 0x001D1FA3 (27 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1F88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D1F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1F89u); } /* indirect call */
    }

loc_001D1F8F: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x80 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1FA3(); return; } /* je: equal / zero */

loc_001D1F97: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D1F9Fu); RECOMP_ABI_CALL(0x001CFE8Du, sub_001CFE8D); /* call 0x001CFE8D */

loc_001D1F9F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D1FBD(); return; /* tail jmp 0x001D1FBD */

}

/**
 * sub_001D1FA3
 * Original: 0x001D1FA3 - 0x001D1FBD (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1FA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1FA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFBFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D1FB1u); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D1FB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D1FBBu); RECOMP_ABI_CALL(0x001D1885u, sub_001D1885); /* call 0x001D1885 */

loc_001D1FBB: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001D1FBD(); return; /* fallthrough 0x001D1FBD */

}

/**
 * sub_001D1FBD
 * Original: 0x001D1FBD - 0x001D1FDD (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1FBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1FBD: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D1FC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1FBFu); } /* indirect call */
    }

loc_001D1FC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D1FDD(); return; } /* jge: greater or equal (signed >=) */

loc_001D1FCA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001D1FD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1FCBu); } /* indirect call */
    }

loc_001D1FD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D1FDD(); return; } /* je: equal / zero */

loc_001D1FD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1FDBu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D1FDB: ;
    g_seh_ebp = ebp; sub_001D1F83(); return; /* tail jmp 0x001D1F83 */

}

/**
 * sub_001D1FDD
 * Original: 0x001D1FDD - 0x001D1FDF (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D1FDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1FDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D1FDF(); return; /* fallthrough 0x001D1FDF */

}

/**
 * sub_001D1FDF
 * Original: 0x001D1FDF - 0x001D1FE0 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1FDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1FDF: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D1FE0(); return; /* fallthrough 0x001D1FE0 */

}

/**
 * sub_001D1FE0
 * Original: 0x001D1FE0 - 0x001D1FE4 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1FE0(void)
{

loc_001D1FE0: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1FE4
 * Original: 0x001D1FE4 - 0x001D201E (58 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1FE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1FE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2015u); RECOMP_ABI_CALL(0x001D1A31u, sub_001D1A31); /* call 0x001D1A31 */

loc_001D2015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D201E(); return; } /* jne: not equal / not zero */

loc_001D2019: ;
    eax = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_001D2021(); return; /* tail jmp 0x001D2021 */

}

/**
 * sub_001D201E
 * Original: 0x001D201E - 0x001D2021 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D201E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D201E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001D2021(); return; /* fallthrough 0x001D2021 */

}

/**
 * sub_001D2021
 * Original: 0x001D2021 - 0x001D2025 (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2021: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D2025
 * Original: 0x001D2025 - 0x001D205E (57 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2025(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2025: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -4) = eax;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2055u); RECOMP_ABI_CALL(0x001D1C1Fu, sub_001D1C1F); /* call 0x001D1C1F */

loc_001D2055: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D205E(); return; } /* jne: not equal / not zero */

loc_001D2059: ;
    eax = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_001D2061(); return; /* tail jmp 0x001D2061 */

}

/**
 * sub_001D205E
 * Original: 0x001D205E - 0x001D2061 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D205E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D205E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001D2061(); return; /* fallthrough 0x001D2061 */

}

/**
 * sub_001D2061
 * Original: 0x001D2061 - 0x001D2065 (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2061(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2061: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D2065
 * Original: 0x001D2065 - 0x001D20A9 (68 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2065(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2065: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D206Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2069u); } /* indirect call */
    }

loc_001D206F: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 2 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_001D2085; /* je: equal / zero */

loc_001D2077: ;
    ecx = esi;
    PUSH32(esp, 0x001D207Eu); RECOMP_ABI_CALL(0x001D4DF3u, sub_001D4DF3); /* call 0x001D4DF3 */

loc_001D207E: ;
    ecx = esi;
    PUSH32(esp, 0x001D2085u); RECOMP_ABI_CALL(0x001D1D32u, sub_001D1D32); /* call 0x001D1D32 */

loc_001D2085: ;
    PUSH32(esp, 0x20000000);
    ecx = esi;
    PUSH32(esp, 0x001D2091u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D2091: ;
    ecx = esi;
    PUSH32(esp, 0x001D2098u); RECOMP_ABI_CALL(0x001D52E2u, sub_001D52E2); /* call 0x001D52E2 */

loc_001D2098: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D20A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D209Au); } /* indirect call */
    }

loc_001D20A0: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001D21E0(); return; /* tail jmp 0x001D21E0 */

}

/**
 * sub_001D20A9
 * Original: 0x001D20A9 - 0x001D20CD (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D20A9: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D20BB; /* je: equal / zero */

loc_001D20B1: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD32)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD32), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20CD(); return; } /* ja: above (unsigned >) */

loc_001D20BB: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0x001D20C5u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D20C5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D21DC(); return; /* tail jmp 0x001D21DC */

}

/**
 * sub_001D20CD
 * Original: 0x001D20CD - 0x001D20E7 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D20CD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20E7(); return; } /* je: equal / zero */

loc_001D20DA: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20E7(); return; } /* je: equal / zero */

loc_001D20E0: ;
    eax = 0x273F;
    g_seh_ebp = ebp; sub_001D215B(); return; /* tail jmp 0x001D215B */

}

/**
 * sub_001D20E7
 * Original: 0x001D20E7 - 0x001D20FF (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D20E7: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20FF(); return; } /* je: equal / zero */

loc_001D20EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20FF(); return; } /* je: equal / zero */

loc_001D20F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D20FF(); return; } /* je: equal / zero */

loc_001D20F8: ;
    eax = 0x273C;
    g_seh_ebp = ebp; sub_001D215B(); return; /* tail jmp 0x001D215B */

}

/**
 * sub_001D20FF
 * Original: 0x001D20FF - 0x001D212A (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D20FF: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = 0xFE;
    if (CMP_EQ(_fa, _fb)) goto loc_001D211A; /* je: equal / zero */

loc_001D210C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D211A; /* je: equal / zero */

loc_001D2111: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D211A; /* je: equal / zero */

loc_001D2116: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2156(); return; } /* jne: not equal / not zero */

loc_001D211A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D212C(); return; } /* jne: not equal / not zero */

loc_001D211E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D212A(); return; } /* je: equal / zero */

loc_001D2123: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D212A(); return; } /* je: equal / zero */

loc_001D2127: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D212C(); return; /* tail jmp 0x001D212C */

}

/**
 * sub_001D212A
 * Original: 0x001D212A - 0x001D212C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D212A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D212A: ;
    eax = ecx;

    g_seh_ebp = ebp; sub_001D212C(); return; /* fallthrough 0x001D212C */

}

/**
 * sub_001D212C
 * Original: 0x001D212C - 0x001D2156 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D212C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D212C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2140; /* jne: not equal / not zero */

loc_001D2130: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx;

loc_001D2140: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2166(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D2156(); return; /* fallthrough 0x001D2156 */

}

/**
 * sub_001D2156
 * Original: 0x001D2156 - 0x001D215B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2156(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2156: ;
    eax = 0x273B;

    g_seh_ebp = ebp; sub_001D215B(); return; /* fallthrough 0x001D215B */

}

/**
 * sub_001D215B
 * Original: 0x001D215B - 0x001D2166 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D215B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D215B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2161u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D2161: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D21D9(); return; /* tail jmp 0x001D21D9 */

}

/**
 * sub_001D2166
 * Original: 0x001D2166 - 0x001D21C3 (93 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2166(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2166: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D216Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2167u); } /* indirect call */
    }

loc_001D216D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D217Bu); RECOMP_ABI_CALL(0x001D1D82u, sub_001D1D82); /* call 0x001D1D82 */

loc_001D217B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D21C3(); return; } /* je: equal / zero */

loc_001D2181: ;
    PUSH32(esp, 0x400000);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D218Fu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D218F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D219E; /* jne: not equal / not zero */

loc_001D2193: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x001D219Eu); RECOMP_ABI_CALL(0x001CF9D9u, sub_001CF9D9); /* call 0x001CF9D9 */

loc_001D219E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xD3C);
    _fb = (uint32_t)(0xD38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    MEM32(esi) = eax;
    MEM32(ecx) = esi;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax + 4) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D21BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D21B9u); } /* indirect call */
    }

loc_001D21BF: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001D21D8(); return; /* tail jmp 0x001D21D8 */

}

/**
 * sub_001D21C3
 * Original: 0x001D21C3 - 0x001D21D9 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D21C3: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D21CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D21C5u); } /* indirect call */
    }

loc_001D21CB: ;
    PUSH32(esp, 0x2747);
    PUSH32(esp, 0x001D21D5u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001D21D5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D21D9(); return; /* fallthrough 0x001D21D9 */

}

/**
 * sub_001D21D8
 * Original: 0x001D21D8 - 0x001D21D9 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D21D8: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D21D9(); return; /* fallthrough 0x001D21D9 */

}

/**
 * sub_001D21D9
 * Original: 0x001D21D9 - 0x001D21DC (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D21D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_001D21DC(); return; /* fallthrough 0x001D21DC */

}

/**
 * sub_001D21DC
 * Original: 0x001D21DC - 0x001D21E0 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21DC(void)
{

loc_001D21DC: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D21E0
 * Original: 0x001D21E0 - 0x001D21F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D21E0: ;
    eax = MEM32(ecx + 0xD1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21F0; /* je: equal / zero */

loc_001D21EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D21F0u); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_001D21F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2215
 * Original: 0x001D2215 - 0x001D223F (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2215(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2215: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + esi + 0x44;
    SET_LO8(ecx, MEM8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x38)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D223F
 * Original: 0x001D223F - 0x001D2273 (52 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D223F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D223F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x8BC;
    PUSH32(esp, 0x001D2253u); RECOMP_ABI_CALL(0x001D7B07u, sub_001D7B07); /* call 0x001D7B07 */

loc_001D2253: ;
    MEM32(esi + 0x8C4) = MEM32(esi + 0x8C4) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x8C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D2266u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D2266: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D226Eu); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

loc_001D226E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2273
 * Original: 0x001D2273 - 0x001D2283 (16 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2273(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2273: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2280u); RECOMP_ABI_CALL(0x001D223Fu, sub_001D223F); /* call 0x001D223F */

loc_001D2280: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2294
 * Original: 0x001D2294 - 0x001D22C0 (44 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2294(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2294: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = edx + 8;
    PUSH32(esp, esi);
    esi = ecx;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D22BB; /* jne: not equal / not zero */

loc_001D22B3: ;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D22BBu); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001D22BB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D22C0
 * Original: 0x001D22C0 - 0x001D22E7 (39 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D22C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x001D22D0u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D22D0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 0x001D22DDu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D22DD: ;
    MEM8(esi) = MEM8(esi) & 0xF;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D22E7
 * Original: 0x001D22E7 - 0x001D22F9 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D22E7: ;
    eax = MEM32(ecx + 0xAC8);
    edx = ZX16(MEM16(ecx + 0xAD4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001D230E(); return; /* tail jmp 0x001D230E */

}

/**
 * sub_001D22F9
 * Original: 0x001D22F9 - 0x001D230E (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D22F9: ;
    edi = MEM32(esp + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    POP32(esp, ecx);
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001D2314(); return; } /* je: equal / zero */

loc_001D2309: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D230E(); return; /* fallthrough 0x001D230E */

}

/**
 * sub_001D230E
 * Original: 0x001D230E - 0x001D2314 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D230E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D230E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D22F9(); return; } /* ja: above (unsigned >) */

loc_001D2312: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D2314(); return; /* fallthrough 0x001D2314 */

}

/**
 * sub_001D2314
 * Original: 0x001D2314 - 0x001D231A (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2314(void)
{

loc_001D2314: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D231A
 * Original: 0x001D231A - 0x001D23AE (148 bytes, 63 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D231A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D231A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0xE0 (8-bit) */
    edx = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    edi = ecx + 0xA98;
    if (TEST_Z(_fa, _fb)) goto loc_001D233E; /* je: equal / zero */

loc_001D233B: ;
    edi = MEM32(ebp + 0xC);

loc_001D233E: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2356u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D2356: ;
    MEM8(ebp + -8) = MEM8(ebp + -8) + 1;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D236Eu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D236E: ;
    eax = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + -48;
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
    ecx = MEM32(ebp + 0x1C);
    edi = MEM32(ebp + 0x18);
    esi = ebp + eax + -48;
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
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
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
    PUSH32(esp, 0x001D23A8u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D23A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D23AE
 * Original: 0x001D23AE - 0x001D2403 (85 bytes, 31 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D23AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D23AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x188;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 8 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esi = eax;
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D23D3u); RECOMP_ABI_CALL(0x001059F4u, sub_001059F4); /* call 0x001059F4 */

loc_001D23D3: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D23FEu); RECOMP_ABI_CALL(0x001059EEu, sub_001059EE); /* call 0x001059EE */

loc_001D23FE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D2403
 * Original: 0x001D2403 - 0x001D242A (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2403: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = esi + 0x86;
    if (CMP_NE(_fa, _fb)) goto loc_001D241E; /* jne: not equal / not zero */

loc_001D241B: ;
    ebx = esi + 0x54;

loc_001D241E: ;
    edi = MEM32(ebp + 0x14);
    SET_LO8(eax, MEM8(edi));
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + 0xB) = LO8(eax);

    g_seh_ebp = ebp; sub_001D242A(); return; /* fallthrough 0x001D242A */

}

/**
 * sub_001D242A
 * Original: 0x001D242A - 0x001D2450 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D242A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D242A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001D2440u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D2440: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = MEM8(edi) + 1;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2450(); return; } /* jne: not equal / not zero */

loc_001D244B: ;
    ebx = ebp + -20;
    g_seh_ebp = ebp; sub_001D2465(); return; /* tail jmp 0x001D2465 */

}

/**
 * sub_001D2450
 * Original: 0x001D2450 - 0x001D2465 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2450: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2465(); return; } /* je: equal / zero */

loc_001D2456: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    ebx = esi + 0x54;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2465(); return; } /* jne: not equal / not zero */

loc_001D245F: ;
    ebx = esi + 0x86;

    g_seh_ebp = ebp; sub_001D2465(); return; /* fallthrough 0x001D2465 */

}

/**
 * sub_001D2465
 * Original: 0x001D2465 - 0x001D24CA (101 bytes, 34 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2465(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2465: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D242A(); return; } /* jl: less (signed <) */

loc_001D246E: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x18);
    eax = esi + 0x96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2481u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D2481: ;
    PUSH32(esp, 0x18);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D248Cu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D248C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    eax = ebp + -20;
    if (CMP_NE(_fa, _fb)) goto loc_001D2498; /* jne: not equal / not zero */

loc_001D2495: ;
    eax = ebp + -12;

loc_001D2498: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esi + 0xB2) = eax;
    MEM32(esi + 0xAE) = ecx;
    eax = ebp + -12;
    if (CMP_NE(_fa, _fb)) goto loc_001D24B5; /* jne: not equal / not zero */

loc_001D24B2: ;
    eax = ebp + -20;

loc_001D24B5: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D24CA
 * Original: 0x001D24CA - 0x001D24E5 (27 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D24CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D24CA: ;
    PUSH32(esp, ebp);
    RECOMP_UNIMPL("pushfd", 0x001D24CBu); /* TODO: pushfd */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebp = ecx;
    edi = ebp + -256;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x001D24D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D24D7u); } /* indirect call */
    }

loc_001D24D9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    RECOMP_UNIMPL("popfd", 0x001D24DCu); /* TODO: popfd */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D24E5
 * Original: 0x001D24E5 - 0x001D250D (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D24E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D24E5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2509; /* je: equal / zero */

loc_001D24F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D24FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D24F6u); } /* indirect call */
    }

loc_001D24FC: ;
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D2505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D24FFu); } /* indirect call */
    }

loc_001D2505: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D2509: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D250D
 * Original: 0x001D250D - 0x001D254D (64 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D250D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D250D: ;
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
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2527u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D2527: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2538u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001D2538: ;
    edx = edx ^ MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + 0x10);
    eax = eax ^ MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D254D
 * Original: 0x001D254D - 0x001D255C (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D254D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D254D: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D255C(); return; } /* je: equal / zero */

loc_001D2554: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D255Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2554u); } /* indirect call */
    }

loc_001D255A: ;
    g_seh_ebp = ebp; sub_001D2564(); return; /* tail jmp 0x001D2564 */

}

/**
 * sub_001D255C
 * Original: 0x001D255C - 0x001D2564 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D255C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D255C: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D2564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D255Eu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D2564(); return; /* fallthrough 0x001D2564 */

}

/**
 * sub_001D2564
 * Original: 0x001D2564 - 0x001D2567 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2564(void)
{

loc_001D2564: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2598
 * Original: 0x001D2598 - 0x001D25B0 (24 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2598(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2598: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 3);
    esi = ecx;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2841
 * Original: 0x001D2841 - 0x001D284A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2841(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001D2841: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E2DE9(); return; /* tail jmp 0x001E2DE9 */

}

/**
 * sub_001D284A
 * Original: 0x001D284A - 0x001D2853 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D284A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001D284A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001E2490(); return; /* tail jmp 0x001E2490 */

}

/**
 * sub_001D2858
 * Original: 0x001D2858 - 0x001D2934 (220 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2858: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2869u); RECOMP_ABI_CALL(0x001DFB78u, sub_001DFB78); /* call 0x001DFB78 */

loc_001D2869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D2A20(); return; } /* jl: less (signed <) */

loc_001D2871: ;
    PUSH32(esp, 0x100000);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D287Du); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D287D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2884u); RECOMP_ABI_CALL(0x001DF0A3u, sub_001DF0A3); /* call 0x001DF0A3 */

loc_001D2884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D2A20(); return; } /* jl: less (signed <) */

loc_001D288C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x22BCD4);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0xD));
    edi = (uint32_t)((int32_t)edi * (int32_t)0xF4);
    eax = ebx + 0xA80;
    PUSH32(esp, 0x6F54454E);
    PUSH32(esp, edi);
    MEM32(ebx + 0xA84) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D28B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D28B2u); } /* indirect call */
    }

loc_001D28B4: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D28D4; /* je: equal / zero */

loc_001D28BD: ;
    ecx = edi;
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001D28D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebx + 0xAC8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D292A; /* je: equal / zero */

loc_001D28DE: ;
    edi = ZX8(MEM8(ebx + 0xE));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x130);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7054454E);
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D28F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D28EEu); } /* indirect call */
    }

loc_001D28F0: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D290A; /* je: equal / zero */

loc_001D28F6: ;
    ecx = edi;
    esi = ecx;
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

loc_001D290A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebx + 0xACC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D292A; /* je: equal / zero */

loc_001D2914: ;
    PUSH32(esp, 0xA54);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2920u); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_001D2920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xD1C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2934(); return; } /* jne: not equal / not zero */

loc_001D292A: ;
    eax = 0x2747;
    g_seh_ebp = ebp; sub_001D2A1E(); return; /* tail jmp 0x001D2A1E */

}

/**
 * sub_001D2934
 * Original: 0x001D2934 - 0x001D2A1E (234 bytes, 78 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D2934(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2934: ;
    esi = MEM32(0x10118);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + -19;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -60;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BD7C));
    MEM8(ebp + -20) = 0;
    PUSH32(esp, 0x001D2966u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D2966: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BD7C));
    MEM8(ebp + -20) = 1;
    PUSH32(esp, 0x001D2983u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D2983: ;
    edi = ebx + 0xA98;
    esi = ebp + -60;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebx + 0xAA8;
    PUSH32(esp, 0x18);
    edi = eax;
    esi = ebp + -44;
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
    PUSH32(esp, 0x001D29A8u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D29A8: ;
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x22BD7C));
    MEM8(ebp + -20) = 2;
    PUSH32(esp, 0x001D29C7u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D29C7: ;
    eax = MEM32(ebp + -60);
    MEM32(ebx + 0xAC0) = eax;
    eax = MEM32(ebp + -56);
    MEM32(ebx + 0xAC4) = eax;
    PUSH32(esp, 2);
    eax = ebx + 0xAD6;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D29E9u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D29E9: ;
    eax = ZX8(MEM8(ebx + 0x42));
    eax = eax + eax * 4;
    MEM32(ebx + 0xADC) = eax;
    eax = ebx + 0xAE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001D2A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D29FDu); } /* indirect call */
    }

loc_001D2A03: ;
    PUSH32(esp, 4);
    eax = ebx + 0x8B8;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(ebx + 0x8CE) = 0x20C;
    PUSH32(esp, 0x001D2A1Cu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D2A1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D2A1E(); return; /* fallthrough 0x001D2A1E */

}

/**
 * sub_001D2A1E
 * Original: 0x001D2A1E - 0x001D2A20 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2A1E: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D2A20(); return; /* fallthrough 0x001D2A20 */

}

/**
 * sub_001D2A20
 * Original: 0x001D2A20 - 0x001D2A25 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2A20: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2A28
 * Original: 0x001D2A28 - 0x001D2B0B (227 bytes, 78 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2A28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2A28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x1000000 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001D2B07; /* jne: not equal / not zero */

loc_001D2A43: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B06; /* je: equal / zero */

loc_001D2A53: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D2B05; /* jb: below (unsigned <) */

loc_001D2A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xC));
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001D2B04; /* jb: below (unsigned <) */

loc_001D2A7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D2B04; /* ja: above (unsigned >) */

loc_001D2A83: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B04; /* je: equal / zero */

loc_001D2A8A: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B04; /* je: equal / zero */

loc_001D2A90: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2AD3; /* jne: not equal / not zero */

loc_001D2A98: ;
    eax = MEM32(ebx + 0xC);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = ecx;
    SET_LO16(eax, LO16(edi));
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM8(ebp + -8) = 0;
    MEM8(ebp + -7) = 6;
    SET_LO8(ecx, HI8(eax));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM16(ebp + -6) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2AC3u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D2AC3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2AC9u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D2AC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2B04; /* jne: not equal / not zero */

loc_001D2AD0: ;
    eax = MEM32(ebp + 0xC);

loc_001D2AD3: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B04; /* je: equal / zero */

loc_001D2AD9: ;
    SET_LO16(ecx, MEM16(esi + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM16(ebp + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + 0x14) = LO16(ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2B04u); RECOMP_ABI_CALL(0x001E2490u, sub_001E2490); /* call 0x001E2490 */

loc_001D2B04: ;
    POP32(esp, esi);

loc_001D2B05: ;
    POP32(esp, edi);

loc_001D2B06: ;
    POP32(esp, ebx);

loc_001D2B07: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D2B0E
 * Original: 0x001D2B0E - 0x001D2B64 (86 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2B0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(edx) = 0x45;
    SET_LO8(eax, MEM8(esi + 0x16));
    MEM16(edx + 2) = MEM16(edx + 2) & 0;
    _fa = (uint32_t)(MEM16(edx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM8(edx + 1) = LO8(eax);
    eax = esi + 0x8B8;
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
    MEM16(edx + 6) = MEM16(edx + 6) & 0;
    _fa = (uint32_t)(MEM16(edx + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO8(eax, MEM8(esi + 0x17));
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edx + 8) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x10));
    MEM8(edx + 9) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(edx + 0x10) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2B64
 * Original: 0x001D2B64 - 0x001D2B70 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2B64: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x8C4;
    g_seh_ebp = ebp; sub_001D2B7D(); return; /* tail jmp 0x001D2B7D */

}

/**
 * sub_001D2B70
 * Original: 0x001D2B70 - 0x001D2B7D (13 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2B70: ;
    PUSH32(esp, MEM32(esi + 0x8BC));
    ecx = esi;
    PUSH32(esp, 0x001D2B7Du); RECOMP_ABI_CALL(0x001D223Fu, sub_001D223F); /* call 0x001D223F */

    g_seh_ebp = ebp; sub_001D2B7D(); return; /* fallthrough 0x001D2B7D */

}

/**
 * sub_001D2B7D
 * Original: 0x001D2B7D - 0x001D2B85 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2B7D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2B70(); return; } /* ja: above (unsigned >) */

loc_001D2B82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2B94
 * Original: 0x001D2B94 - 0x001D2BBF (43 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B94(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B94: ;
    MEM32(ecx + 0xA88) = MEM32(ecx + 0xA88) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xA88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xA8C) = MEM32(ecx + 0xA8C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xA8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 1;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2BBBu); RECOMP_ABI_CALL(0x001D2294u, sub_001D2294); /* call 0x001D2294 */

loc_001D2BBB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2BBF
 * Original: 0x001D2BBF - 0x001D2BD0 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2BBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2BBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2BD0(); return; } /* jne: not equal / not zero */

loc_001D2BCC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D2C40(); return; /* tail jmp 0x001D2C40 */

}

/**
 * sub_001D2BD0
 * Original: 0x001D2BD0 - 0x001D2BFA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2BD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xA88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0xA88) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2BFA(); return; } /* jne: not equal / not zero */

loc_001D2BD8: ;
    _fb = (uint32_t)(0xA8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2BF6; /* je: equal / zero */

loc_001D2BE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
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

loc_001D2BF6: ;
    eax = MEM32(edx);
    g_seh_ebp = ebp; sub_001D2C40(); return; /* tail jmp 0x001D2C40 */

}

/**
 * sub_001D2BFA
 * Original: 0x001D2BFA - 0x001D2C1C (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2BFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2BFA: ;
    ecx = edx + 0xA80;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2C31(); return; } /* je: equal / zero */

loc_001D2C09: ;
    PUSH32(esp, ebx);

loc_001D2C0A: ;
    ebx = MEM32(eax + 0x14);
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2C1C(); return; } /* je: equal / zero */

loc_001D2C14: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2C0A; /* jne: not equal / not zero */

loc_001D2C1A: ;
    g_seh_ebp = ebp; sub_001D2C30(); return; /* tail jmp 0x001D2C30 */

}

/**
 * sub_001D2C1C
 * Original: 0x001D2C1C - 0x001D2C30 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C1C: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
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

    g_seh_ebp = ebp; sub_001D2C30(); return; /* fallthrough 0x001D2C30 */

}

/**
 * sub_001D2C30
 * Original: 0x001D2C30 - 0x001D2C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C30: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D2C31(); return; /* fallthrough 0x001D2C31 */

}

/**
 * sub_001D2C31
 * Original: 0x001D2C31 - 0x001D2C40 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C31: ;
    MEM32(edx + 0xA8C) = esi;
    eax = esi;
    MEM32(edx + 0xA88) = edi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D2C40(); return; /* fallthrough 0x001D2C40 */

}

/**
 * sub_001D2C40
 * Original: 0x001D2C40 - 0x001D2C45 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C40: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2C45
 * Original: 0x001D2C45 - 0x001D2D01 (188 bytes, 62 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2C45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2C45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2C5Au); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D2C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2C68; /* jne: not equal / not zero */

loc_001D2C5E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D39(); return; } /* je: equal / zero */

loc_001D2C68: ;
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2C70u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D2C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D39(); return; } /* je: equal / zero */

loc_001D2C78: ;
    eax = ebx;
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D39(); return; } /* jne: not equal / not zero */

loc_001D2C89: ;
    PUSH32(esp, edi);
    edi = esi + 0xA80;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2CB7; /* je: equal / zero */

loc_001D2C96: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D2CB1; /* jne: not equal / not zero */

loc_001D2CA0: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2CB1; /* jne: not equal / not zero */

loc_001D2CA5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D01(); return; } /* jne: not equal / not zero */

loc_001D2CA9: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D01(); return; } /* je: equal / zero */

loc_001D2CB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D2C96; /* jne: not equal / not zero */

loc_001D2CB7: ;
    PUSH32(esp, 0x3754454E);
    PUSH32(esp, 0x1C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2CC5u); RECOMP_ABI_CALL(0x001D7FCFu, sub_001D7FCF); /* call 0x001D7FCF */

loc_001D2CC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D38(); return; } /* je: equal / zero */

loc_001D2CC9: ;
    MEM32(eax + 8) = 1;
    MEM32(esi + 0xA88) = MEM32(esi + 0xA88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xA8C) = MEM32(esi + 0xA8C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, MEM16(ebp + 0x14));
    SET_LO16(edx, MEM16(ebp + 0x18));
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xE) = LO16(edx);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ebx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edi);
    g_seh_ebp = ebp; sub_001D2D24(); return; /* tail jmp 0x001D2D24 */

}

/**
 * sub_001D2CD0
 * Original: 0x001D2CD0 - 0x001D2D01 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2CD0: ;
    MEM32(esi + 0xA88) = MEM32(esi + 0xA88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xA8C) = MEM32(esi + 0xA8C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, MEM16(ebp + 0x14));
    SET_LO16(edx, MEM16(ebp + 0x18));
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xE) = LO16(edx);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ebx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edi);
    g_seh_ebp = ebp; sub_001D2D24(); return; /* tail jmp 0x001D2D24 */

}

/**
 * sub_001D2D01
 * Original: 0x001D2D01 - 0x001D2D0D (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D01: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    g_seh_ebp = ebp; sub_001D2CD0(); return; /* tail jmp 0x001D2CD0 */

}

/**
 * sub_001D2D0D
 * Original: 0x001D2D0D - 0x001D2D24 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D0D: ;
    esi = MEM32(ecx);
    MEM32(ebp + 0x14) = esi;
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D28(); return; } /* ja: above (unsigned >) */

loc_001D2D19: ;
    if (CMP_NE(_fa, _fb)) goto loc_001D2D21; /* jne: not equal / not zero */

loc_001D2D1B: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0xE) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D28(); return; } /* jb: below (unsigned <) */

loc_001D2D21: ;
    ecx = MEM32(ebp + 0x14);

    g_seh_ebp = ebp; sub_001D2D24(); return; /* fallthrough 0x001D2D24 */

}

/**
 * sub_001D2D24
 * Original: 0x001D2D24 - 0x001D2D28 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D0D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D2D28(); return; /* fallthrough 0x001D2D28 */

}

/**
 * sub_001D2D28
 * Original: 0x001D2D28 - 0x001D2D38 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D28: ;
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = eax;
    MEM32(ecx + 4) = eax;

    g_seh_ebp = ebp; sub_001D2D38(); return; /* fallthrough 0x001D2D38 */

}

/**
 * sub_001D2D38
 * Original: 0x001D2D38 - 0x001D2D39 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D38: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D2D39(); return; /* fallthrough 0x001D2D39 */

}

/**
 * sub_001D2D39
 * Original: 0x001D2D39 - 0x001D2D3F (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D39: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D2D3F
 * Original: 0x001D2D3F - 0x001D2D94 (85 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2D3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2D3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2D4Du); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D2D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2DAB(); return; } /* je: equal / zero */

loc_001D2D51: ;
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2D59u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D2D59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2DAB(); return; } /* je: equal / zero */

loc_001D2D5D: ;
    eax = MEM32(esi + 0x26C);
    ecx = MEM32(esi + 0x268);
    edx = eax;
    eax = eax & MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2DAB(); return; } /* jne: not equal / not zero */

loc_001D2D74: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2D7Eu); RECOMP_ABI_CALL(0x001D2BBFu, sub_001D2BBF); /* call 0x001D2BBF */

loc_001D2D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2DAB(); return; } /* je: equal / zero */

loc_001D2D82: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2D94(); return; } /* je: equal / zero */

loc_001D2D8A: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2D92u); RECOMP_ABI_CALL(0x001D2294u, sub_001D2294); /* call 0x001D2294 */

loc_001D2D92: ;
    g_seh_ebp = ebp; sub_001D2DAB(); return; /* tail jmp 0x001D2DAB */

}

/**
 * sub_001D2D94
 * Original: 0x001D2D94 - 0x001D2DB0 (28 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D94: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0x001D2DABu); RECOMP_ABI_CALL(0x001D2C45u, sub_001D2C45); /* call 0x001D2C45 */

loc_001D2DAB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2DAB
 * Original: 0x001D2DAB - 0x001D2DB0 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DAB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2DB0
 * Original: 0x001D2DB0 - 0x001D2DD8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D2DD8(); return; } /* je: equal / zero */

loc_001D2DC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2E09(); return; } /* je: equal / zero */

loc_001D2DCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2DD8(); return; } /* je: equal / zero */

loc_001D2DCE: ;
    eax = 0x2726;
    g_seh_ebp = ebp; sub_001D2EA6(); return; /* tail jmp 0x001D2EA6 */

}

/**
 * sub_001D2DD8
 * Original: 0x001D2DD8 - 0x001D2E09 (49 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2E09(); return; } /* je: equal / zero */

loc_001D2DDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2E09(); return; } /* je: equal / zero */

loc_001D2DE0: ;
    PUSH32(esp, 0x60);
    eax = ebp + -96;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D2DEDu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D2DED: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x1E3810);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E3870);
    eax = ebp + -192;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2E09u); RECOMP_ABI_CALL(0x001059FAu, sub_001059FA); /* call 0x001059FA */

    g_seh_ebp = ebp; sub_001D2E09(); return; /* fallthrough 0x001D2E09 */

}

/**
 * sub_001D2E09
 * Original: 0x001D2E09 - 0x001D2E25 (28 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E09: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D2E0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2E09u); } /* indirect call */
    }

loc_001D2E0F: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(ebp + 8) = LO8(eax);
    PUSH32(esp, 0x001D2E1Au); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D2E1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2E25(); return; } /* je: equal / zero */

loc_001D2E1E: ;
    esi = 0x2735;
    g_seh_ebp = ebp; sub_001D2E9B(); return; /* tail jmp 0x001D2E9B */

}

/**
 * sub_001D2E25
 * Original: 0x001D2E25 - 0x001D2E3D (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E25: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0xD)));
    SET_LO16(eax, MEM16(esi + 0xAD4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2E3D(); return; } /* jne: not equal / not zero */

loc_001D2E36: ;
    esi = 0x2776;
    g_seh_ebp = ebp; sub_001D2E9B(); return; /* tail jmp 0x001D2E9B */

}

/**
 * sub_001D2E3D
 * Original: 0x001D2E3D - 0x001D2E9B (94 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E3D: ;
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(eax));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xF4);
    _fb = (uint32_t)(MEM32(esi + 0xAC8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 0xAC8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 0xAD4) = LO16(eax);
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0x18);
    MEM32(ebx + 4) = eax;
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D2E76u); RECOMP_ABI_CALL(0x001D231Au, sub_001D231A); /* call 0x001D231A */

loc_001D2E76: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    edi = ebx + 0x30;
    esi = ebp + -96;
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
    PUSH32(esp, 0x18);
    edi = ebx + 0x90;
    POP32(esp, ecx);
    esi = ebp + -192;
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
    MEM32(ebx + 0xF0) = esi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D2E9B(); return; /* fallthrough 0x001D2E9B */

}

/**
 * sub_001D2E9B
 * Original: 0x001D2E9B - 0x001D2EA6 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E9B: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D2EA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2E9Eu); } /* indirect call */
    }

loc_001D2EA4: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001D2EA6(); return; /* fallthrough 0x001D2EA6 */

}

/**
 * sub_001D2EA6
 * Original: 0x001D2EA6 - 0x001D2EAC (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2EA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2EA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2EAC
 * Original: 0x001D2EAC - 0x001D2F02 (86 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2EAC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2EAC: ;
    edx = ZX8(MEM8(ecx + 0xE));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ecx + 0xACC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001D2EFA; /* jbe: below or equal (unsigned <=) */

loc_001D2EBD: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2EF2; /* je: equal / zero */

loc_001D2EC3: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2EF2; /* jne: not equal / not zero */

loc_001D2EC8: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 3);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esi = eax + 0xCE;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_001D2EF2; /* jne: not equal / not zero */

loc_001D2EDF: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(eax + 0xC0);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001D2EFC; /* je: equal / zero */

loc_001D2EF2: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2EBD; /* jne: not equal / not zero */

loc_001D2EFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2EFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2F02
 * Original: 0x001D2F02 - 0x001D2F15 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX8(MEM8(edi + 0xE));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(edi + 0xACC);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F6B(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001D2F15(); return; /* fallthrough 0x001D2F15 */

}

/**
 * sub_001D2F15
 * Original: 0x001D2F15 - 0x001D2F4A (53 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F15: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F62(); return; } /* je: equal / zero */

loc_001D2F1B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F62(); return; } /* je: equal / zero */

loc_001D2F20: ;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F62(); return; } /* jne: not equal / not zero */

loc_001D2F2C: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F73(); return; } /* je: equal / zero */

loc_001D2F38: ;
    ecx = MEM32(edi + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F4A(); return; } /* je: equal / zero */

loc_001D2F42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2F48u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D2F48: ;
    g_seh_ebp = ebp; sub_001D2F4C(); return; /* tail jmp 0x001D2F4C */

}

/**
 * sub_001D2F4A
 * Original: 0x001D2F4A - 0x001D2F4C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D2F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D2F4C(); return; /* fallthrough 0x001D2F4C */

}

/**
 * sub_001D2F4C
 * Original: 0x001D2F4C - 0x001D2F62 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F62(); return; } /* je: equal / zero */

loc_001D2F50: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D2F73(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D2F62(); return; /* fallthrough 0x001D2F62 */

}

/**
 * sub_001D2F62
 * Original: 0x001D2F62 - 0x001D2F6B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F62: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x130;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D2F15(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D2F6B(); return; /* fallthrough 0x001D2F6B */

}

/**
 * sub_001D2F6B
 * Original: 0x001D2F6B - 0x001D2F73 (8 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F6B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2F6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2F6D
 * Original: 0x001D2F6D - 0x001D2F73 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F6D(void)
{

loc_001D2F6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2F73
 * Original: 0x001D2F73 - 0x001D2F77 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2F73: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001D2F6D(); return; /* tail jmp 0x001D2F6D */

}

/**
 * sub_001D2F77
 * Original: 0x001D2F77 - 0x001D2FEF (120 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2F77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX8(MEM8(edi + 0xE));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(edi + 0xACC);
    if (CMP_BE(_fa, _fb)) goto loc_001D2FE3; /* jbe: below or equal (unsigned <=) */

loc_001D2F8A: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2FDA; /* je: equal / zero */

loc_001D2F90: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2FDA; /* je: equal / zero */

loc_001D2F95: ;
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2FDA; /* jne: not equal / not zero */

loc_001D2FA4: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2FEB; /* je: equal / zero */

loc_001D2FB0: ;
    ecx = MEM32(edi + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2FC2; /* je: equal / zero */

loc_001D2FBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2FC0u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D2FC0: ;
    goto loc_001D2FC4;

loc_001D2FC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2FDA; /* je: equal / zero */

loc_001D2FC8: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2FEB; /* je: equal / zero */

loc_001D2FDA: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x130;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2F8A; /* jne: not equal / not zero */

loc_001D2FE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001D2FEB: ;
    eax = esi;
    goto loc_001D2FE5;

}

/**
 * sub_001D2FEF
 * Original: 0x001D2FEF - 0x001D302C (61 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2FEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2FEF: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xACC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3028; /* je: equal / zero */

loc_001D2FFC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3027; /* je: equal / zero */

loc_001D3005: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3027; /* jne: not equal / not zero */

loc_001D3009: ;
    ecx = ZX8(MEM8(ecx + 0xE));
    edx = ebx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D3027; /* jae: above or equal (unsigned >=) */

loc_001D3016: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x130);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3027; /* je: equal / zero */

loc_001D3025: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D3027: ;
    POP32(esp, ebx);

loc_001D3028: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D302C
 * Original: 0x001D302C - 0x001D305E (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D302C(void)
{

loc_001D302C: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x1D8;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(edx);
    MEM32(eax + 0x1C) = esi;
    edx = MEM32(edx);
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(ecx + 0x43));
    edx = edx + edx * 4;
    MEM32(eax + 0x24) = edx;
    ecx = ZX8(MEM8(ecx + 0x44));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x32);
    MEM32(eax + 0x28) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D305E
 * Original: 0x001D305E - 0x001D30AA (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D305E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D305E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D30AA(); return; } /* je: equal / zero */

loc_001D306F: ;
    edi = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0xC);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFFDCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x24)) >> 32) & 1);
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + edi + -116;
    PUSH32(esp, 9);
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
    edi = MEM32(ebp + 0x24);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 9);
    esi = ebx + 0xC4;
    edi = ebp + edi + -116;
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
    MEM32(ebp + 8) = 0x48;
    g_seh_ebp = ebp; sub_001D30E3(); return; /* tail jmp 0x001D30E3 */

}

/**
 * sub_001D30AA
 * Original: 0x001D30AA - 0x001D30C8 (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D30AA: ;
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    edi = 0x1E3870;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    PUSH32(esp, 0x18);
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D30C8(); return; } /* jne: not equal / not zero */

loc_001D30BD: ;
    esi = MEM32(ebp + 0x1C);
    POP32(esp, ecx);
    edi = ebp + -116;
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
    g_seh_ebp = ebp; sub_001D30DC(); return; /* tail jmp 0x001D30DC */

}

/**
 * sub_001D30C8
 * Original: 0x001D30C8 - 0x001D30DC (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D30C8: ;
    PUSH32(esp, 0x1E3810);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D30DCu); RECOMP_ABI_CALL(0x001059FAu, sub_001059FA); /* call 0x001059FA */

    g_seh_ebp = ebp; sub_001D30DC(); return; /* fallthrough 0x001D30DC */

}

/**
 * sub_001D30DC
 * Original: 0x001D30DC - 0x001D30E3 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D30DC: ;
    MEM32(ebp + 8) = 0x60;

    g_seh_ebp = ebp; sub_001D30E3(); return; /* fallthrough 0x001D30E3 */

}

/**
 * sub_001D30E3
 * Original: 0x001D30E3 - 0x001D30F9 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D30E3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    esi = ebx + 0x86;
    if (CMP_NE(_fa, _fb)) goto loc_001D30F2; /* jne: not equal / not zero */

loc_001D30EF: ;
    esi = ebx + 0x54;

loc_001D30F2: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebx + 0x44;

    g_seh_ebp = ebp; sub_001D30F9(); return; /* fallthrough 0x001D30F9 */

}

/**
 * sub_001D30F9
 * Original: 0x001D30F9 - 0x001D3120 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D30F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x001D310Fu); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D310F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -116) = MEM8(ebp + -116) + 1;
    _fa = (uint32_t)(MEM8(ebp + -116)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3120(); return; } /* jne: not equal / not zero */

loc_001D311B: ;
    esi = ebp + -20;
    g_seh_ebp = ebp; sub_001D3135(); return; /* tail jmp 0x001D3135 */

}

/**
 * sub_001D3120
 * Original: 0x001D3120 - 0x001D3135 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3120: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3135(); return; } /* je: equal / zero */

loc_001D3126: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    esi = ebx + 0x54;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3135(); return; } /* jne: not equal / not zero */

loc_001D312F: ;
    esi = ebx + 0x86;

    g_seh_ebp = ebp; sub_001D3135(); return; /* fallthrough 0x001D3135 */

}

/**
 * sub_001D3135
 * Original: 0x001D3135 - 0x001D3195 (96 bytes, 32 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3135(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3135: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D30F9(); return; } /* jl: less (signed <) */

loc_001D313E: ;
    PUSH32(esp, 0x18);
    eax = ebx + 0x96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D314Cu); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D314C: ;
    PUSH32(esp, 0x18);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D3157u); RECOMP_ABI_CALL(0x001059E8u, sub_001059E8); /* call 0x001059E8 */

loc_001D3157: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    eax = ebp + -20;
    if (CMP_NE(_fa, _fb)) goto loc_001D3163; /* jne: not equal / not zero */

loc_001D3160: ;
    eax = ebp + -12;

loc_001D3163: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebx + 0xB2) = eax;
    MEM32(ebx + 0xAE) = ecx;
    eax = ebp + -12;
    if (CMP_NE(_fa, _fb)) goto loc_001D3180; /* jne: not equal / not zero */

loc_001D317D: ;
    eax = ebp + -20;

loc_001D3180: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x7C) = ecx;
    MEM32(ebx + 0x80) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D3195
 * Original: 0x001D3195 - 0x001D31C6 (49 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3195: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D31D6(); return; } /* je: equal / zero */

loc_001D31A3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D31D6(); return; } /* jne: not equal / not zero */

loc_001D31A7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D31ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D31A7u); } /* indirect call */
    }

loc_001D31AD: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(ebp + 8) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D31B8u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D31B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D31C6(); return; } /* je: equal / zero */

loc_001D31BC: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D31C6(); return; } /* je: equal / zero */

loc_001D31C2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D31C9(); return; /* tail jmp 0x001D31C9 */

}

/**
 * sub_001D31C6
 * Original: 0x001D31C6 - 0x001D31C9 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D31C6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D31C9(); return; /* fallthrough 0x001D31C9 */

}

/**
 * sub_001D31C9
 * Original: 0x001D31C9 - 0x001D31D6 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D31C9: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D31D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D31CCu); } /* indirect call */
    }

loc_001D31D2: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001D31D8(); return; /* tail jmp 0x001D31D8 */

}

/**
 * sub_001D31D6
 * Original: 0x001D31D6 - 0x001D31DE (8 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D31D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31D8
 * Original: 0x001D31D8 - 0x001D31DE (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D31D8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31DE
 * Original: 0x001D31DE - 0x001D3203 (37 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D31DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D31DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D31EFu); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D31EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D31FC; /* je: equal / zero */

loc_001D31F6: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3203(); return; } /* jae: above or equal (unsigned >=) */

loc_001D31FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D32F4(); return; /* tail jmp 0x001D32F4 */

}

/**
 * sub_001D3203
 * Original: 0x001D3203 - 0x001D32B6 (179 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3203(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3203: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D3210u); RECOMP_ABI_CALL(0x001D819Au, sub_001D819A); /* call 0x001D819A */

loc_001D3210: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = ZX16(MEM16(esi + 4));
    PUSH32(esp, 0);
    ebx = eax + ecx + -12;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 8) = edi;
    PUSH32(esp, 0x001D323Eu); RECOMP_ABI_CALL(0x001D79E0u, sub_001D79E0); /* call 0x001D79E0 */

loc_001D323E: ;
    eax = ZX16(MEM16(esi + 6));
    ecx = ZX16(MEM16(ebx));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edi + 0xC;
    edx = ebx + 2;
    esi = edx;
    edi = ebp + -48;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -24) = eax;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0xA);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = edi;
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ebp + -16);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edx + esi + 0xB;
    esi = MEM32(ebp + -20);
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    MEM32(ebp + -32) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    eax = esi + 0x86;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D32A3u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D32A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D32B2; /* je: equal / zero */

loc_001D32A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D32EE(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D32AC: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D32B6(); return; } /* je: equal / zero */

loc_001D32B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D32F1(); return; /* tail jmp 0x001D32F1 */

}

/**
 * sub_001D32B6
 * Original: 0x001D32B6 - 0x001D32EE (56 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D32B6: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    eax = esi + 0xAE;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D32CCu); RECOMP_ABI_CALL(0x001D250Du, sub_001D250D); /* call 0x001D250D */

loc_001D32CC: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + -32));
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0xB6));
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x96;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D32EEu); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

    g_seh_ebp = ebp; sub_001D32EE(); return; /* fallthrough 0x001D32EE */

}

/**
 * sub_001D32EE
 * Original: 0x001D32EE - 0x001D32F8 (10 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D32EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D32F1
 * Original: 0x001D32F1 - 0x001D32F8 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D32F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D32F4
 * Original: 0x001D32F4 - 0x001D32F8 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D32F4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D32F8
 * Original: 0x001D32F8 - 0x001D334F (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D32F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D32F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3301u); } /* indirect call */
    }

loc_001D3307: ;
    edx = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, 9);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x268);
    MEM32(edx) = eax;
    esi = ebx + 0x1E0;
    edi = edx + 0xA;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebx + 0xA78)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA78), 1 (8-bit) */
    MEM32(ebp + 8) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D33F3(); return; } /* je: equal / zero */

loc_001D333C: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D334F(); return; } /* jne: not equal / not zero */

loc_001D3346: ;
    MEM32(ebp + 8) = 4;
    g_seh_ebp = ebp; sub_001D3374(); return; /* tail jmp 0x001D3374 */

}

/**
 * sub_001D334F
 * Original: 0x001D334F - 0x001D336D (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D334F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D334F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D336D(); return; } /* je: equal / zero */

loc_001D3353: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D336D(); return; } /* je: equal / zero */

loc_001D3357: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D336D(); return; } /* je: equal / zero */

loc_001D335B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x16 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x2E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ecx;
    g_seh_ebp = ebp; sub_001D3374(); return; /* tail jmp 0x001D3374 */

}

/**
 * sub_001D336D
 * Original: 0x001D336D - 0x001D3374 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D336D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D336D: ;
    MEM32(ebp + 8) = 8;

    g_seh_ebp = ebp; sub_001D3374(); return; /* fallthrough 0x001D3374 */

}

/**
 * sub_001D3374
 * Original: 0x001D3374 - 0x001D33F3 (127 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3374: ;
    _fa = (uint32_t)(MEM32(ebx + 0x8D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x8D0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3380; /* je: equal / zero */

loc_001D337C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0x20;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D3380: ;
    _fa = (uint32_t)(MEM32(ebx + 0x8E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x8E0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D338C; /* je: equal / zero */

loc_001D3388: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D338C: ;
    _fa = (uint32_t)(MEM32(ebx + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xAF0), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D33E6; /* jb: below (unsigned <) */

loc_001D3395: ;
    eax = MEM32(ebx + 0xAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D33E6; /* je: equal / zero */

loc_001D339F: ;
    eax = MEM32(eax + 0xD8);
    MEM32(edx + 4) = eax;
    eax = ebx + 0x91E;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D33BC; /* je: equal / zero */

loc_001D33B3: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CD), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D33C7; /* jne: not equal / not zero */

loc_001D33BC: ;
    eax = MEM32(ebx + 0xAF4);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xDC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D33C7: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 8) = LO16(eax);
    esi = MEM32(ebx + 0xAF4);
    PUSH32(esp, 5);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = edx + 0x10;
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

loc_001D33E6: ;
    _fa = (uint32_t)(MEM8(ebx + 0xA7B)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA7B), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D33F3(); return; } /* je: equal / zero */

loc_001D33EF: ;
    MEM8(ebp + 9) = MEM8(ebp + 9) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + 9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001D33F3(); return; /* fallthrough 0x001D33F3 */

}

/**
 * sub_001D33F3
 * Original: 0x001D33F3 - 0x001D3406 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D33F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D33F3: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D33FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D33F6u); } /* indirect call */
    }

loc_001D33FC: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3406
 * Original: 0x001D3406 - 0x001D345D (87 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3406: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D341Au); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D341A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3449; /* je: equal / zero */

loc_001D341E: ;
    eax = MEM32(esi + 4);
    ecx = ebp + 8;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D342Cu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D342C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3449; /* je: equal / zero */

loc_001D3430: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3449; /* je: equal / zero */

loc_001D3437: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D3458;

loc_001D3449: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2726;

loc_001D3458: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D345D
 * Original: 0x001D345D - 0x001D34B0 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D345D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D345D: ;
    _fa = (uint32_t)(MEM32(ecx + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xAF0), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D34AF; /* jne: not equal / not zero */

loc_001D3466: ;
    eax = MEM32(ecx + 0xACC);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0xE));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D3494; /* jbe: below or equal (unsigned <=) */

loc_001D3475: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D348C; /* je: equal / zero */

loc_001D347A: ;
    SET_LO8(edx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D34AE; /* je: equal / zero */

loc_001D3482: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D348C; /* jb: below (unsigned <) */

loc_001D3487: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D34AE; /* jbe: below or equal (unsigned <=) */

loc_001D348C: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3475; /* jne: not equal / not zero */

loc_001D3494: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ecx + 0xAF8));
    MEM32(ecx + 0xAF0) = 6;
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D34AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D34A8u); } /* indirect call */
    }

loc_001D34AE: ;
    POP32(esp, esi);

loc_001D34AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D34B0
 * Original: 0x001D34B0 - 0x001D34CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D34B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D34B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D34B3u); } /* indirect call */
    }

loc_001D34B9: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D34CE(); return; } /* jae: above or equal (unsigned >=) */

loc_001D34C2: ;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + esi + 0xB0C);
    g_seh_ebp = ebp; sub_001D34D0(); return; /* tail jmp 0x001D34D0 */

}

/**
 * sub_001D34CE
 * Original: 0x001D34CE - 0x001D34D0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D34CE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D34D0(); return; /* fallthrough 0x001D34D0 */

}

/**
 * sub_001D34D0
 * Original: 0x001D34D0 - 0x001D34DE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34D0(void)
{

loc_001D34D0: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D34D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D34D2u); } /* indirect call */
    }

loc_001D34D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D34DE
 * Original: 0x001D34DE - 0x001D351C (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D34DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D34DE: ;
    { uint32_t _icall_esp = g_esp;
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
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D34EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D34E8u); } /* indirect call */
    }

loc_001D34EE: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B9(); return; } /* jae: above or equal (unsigned >=) */

loc_001D34FD: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x16;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B3(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D351A: ;
    g_seh_ebp = ebp; sub_001D351F(); return; /* tail jmp 0x001D351F */

}

/**
 * sub_001D351C
 * Original: 0x001D351C - 0x001D351F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D351C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D351C: ;
    edi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001D351F(); return; /* fallthrough 0x001D351F */

}

/**
 * sub_001D351F
 * Original: 0x001D351F - 0x001D357D (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D351F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D351F: ;
    ecx = MEM32(edi);
    eax = ecx;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    esi = ebx + eax * 4 + 8;
    MEM32(ebp + -8) = esi;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B3(); return; } /* ja: above (unsigned >) */

loc_001D353B: ;
    esi = edx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B3(); return; } /* ja: above (unsigned >) */

loc_001D3543: ;
    esi = MEM32(ebp + -8);
    esi = MEM32(esi);
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0xFFFFFF00u;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = esi;
    if ((_fa == 0)) goto loc_001D356E; /* jbe: below or equal (unsigned <=) */

loc_001D3557: ;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B3(); return; } /* jne: not equal / not zero */

loc_001D3561: ;
    eax = MEM32(ebp + -4);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35B3(); return; } /* jne: not equal / not zero */

loc_001D356E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D357D(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D3574: ;
    esi = MEM32(ebp + -8);
    ecx = edx;
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
    g_seh_ebp = ebp; sub_001D35A1(); return; /* tail jmp 0x001D35A1 */

}

/**
 * sub_001D357D
 * Original: 0x001D357D - 0x001D35A1 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D357D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D357D: ;
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(edi) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D35A4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D3587: ;
    ecx = edx * 4 + -4;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

    g_seh_ebp = ebp; sub_001D35A1(); return; /* fallthrough 0x001D35A1 */

}

/**
 * sub_001D35A1
 * Original: 0x001D35A1 - 0x001D35A4 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D35A1: ;
    edi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001D35A4(); return; /* fallthrough 0x001D35A4 */

}

/**
 * sub_001D35A4
 * Original: 0x001D35A4 - 0x001D35B3 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D35A4: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + edx * 4;
    MEM32(ebp + 8) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D351C(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D35B3(); return; /* fallthrough 0x001D35B3 */

}

/**
 * sub_001D35B3
 * Original: 0x001D35B3 - 0x001D35B9 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D35B3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001D35BB(); return; /* tail jmp 0x001D35BB */

}

/**
 * sub_001D35B9
 * Original: 0x001D35B9 - 0x001D35CC (19 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D35B9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D35C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D35BEu); } /* indirect call */
    }

loc_001D35C4: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D35BB
 * Original: 0x001D35BB - 0x001D35CC (17 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D35BB: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D35C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D35BEu); } /* indirect call */
    }

loc_001D35C4: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D35CC
 * Original: 0x001D35CC - 0x001D360E (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D35CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D35CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D35DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D35D5u); } /* indirect call */
    }

loc_001D35DB: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3694(); return; } /* jae: above or equal (unsigned >=) */

loc_001D35EA: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x16;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D368F(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D360A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001D3611(); return; /* tail jmp 0x001D3611 */

}

/**
 * sub_001D360E
 * Original: 0x001D360E - 0x001D3611 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D360E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D360E: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001D3611(); return; /* fallthrough 0x001D3611 */

}

/**
 * sub_001D3611
 * Original: 0x001D3611 - 0x001D368F (126 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3611: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    edi = edx + ecx * 4 + 8;
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edi;
    edi = 0xFFFFFF00u;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001D366A; /* ja: above (unsigned >) */

loc_001D3637: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D365F; /* je: equal / zero */

loc_001D363B: ;
    eax = ebx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D365F; /* ja: above (unsigned >) */

loc_001D3643: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D365F; /* jbe: below or equal (unsigned <=) */

loc_001D364F: ;
    ecx = ebx;
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
    esi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = 1;

loc_001D365F: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ebx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebx * 4;
    MEM32(ebp + 8) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D360E(); return; } /* jne: not equal / not zero */

loc_001D366A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D368D; /* je: equal / zero */

loc_001D3670: ;
    PUSH32(esp, 3);
    esi = edx + 0x48;
    POP32(esp, edi);

loc_001D3676: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3687; /* je: equal / zero */

loc_001D367C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D3687u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3681u); } /* indirect call */
    }

loc_001D3687: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3676; /* jne: not equal / not zero */

loc_001D368D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D368F(); return; /* fallthrough 0x001D368F */

}

/**
 * sub_001D368F
 * Original: 0x001D368F - 0x001D3694 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D368F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D368F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D3696(); return; /* tail jmp 0x001D3696 */

}

/**
 * sub_001D3694
 * Original: 0x001D3694 - 0x001D36A6 (18 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3694: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D369Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3699u); } /* indirect call */
    }

loc_001D369F: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D3696
 * Original: 0x001D3696 - 0x001D36A6 (16 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3696(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3696: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D369Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3699u); } /* indirect call */
    }

loc_001D369F: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D36A6
 * Original: 0x001D36A6 - 0x001D36E9 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D36A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D36A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D36B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D36AEu); } /* indirect call */
    }

loc_001D36B4: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3702(); return; } /* jae: above or equal (unsigned >=) */

loc_001D36BE: ;
    esi = eax + 0x16;
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D36E9(); return; } /* je: equal / zero */

loc_001D36CD: ;
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D36E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D36DAu); } /* indirect call */
    }

loc_001D36E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D36E9(); return; } /* jne: not equal / not zero */

loc_001D36E4: ;
    ecx = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_001D36EB(); return; /* tail jmp 0x001D36EB */

}

/**
 * sub_001D36E9
 * Original: 0x001D36E9 - 0x001D36EB (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D36E9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D36EB(); return; /* fallthrough 0x001D36EB */

}

/**
 * sub_001D36EB
 * Original: 0x001D36EB - 0x001D3702 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D36EB: ;
    eax = esi + 0x48;

loc_001D36EE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3713(); return; } /* je: equal / zero */

loc_001D36F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D36EE; /* jl: less (signed <) */

loc_001D36FC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D3702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D36FCu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D3702(); return; /* fallthrough 0x001D3702 */

}

/**
 * sub_001D3702
 * Original: 0x001D3702 - 0x001D3713 (17 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3702(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3702: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D370Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3704u); } /* indirect call */
    }

loc_001D370A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D370C
 * Original: 0x001D370C - 0x001D3713 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D370C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D370C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D3713
 * Original: 0x001D3713 - 0x001D3724 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3713(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3713: ;
    MEM32(esi + edi * 4 + 0x48) = ecx;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D371Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3719u); } /* indirect call */
    }

loc_001D371F: ;
    eax = edi + 1;
    g_seh_ebp = ebp; sub_001D370C(); return; /* tail jmp 0x001D370C */

}

/**
 * sub_001D3724
 * Original: 0x001D3724 - 0x001D3766 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3724(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3724: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D372Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3728u); } /* indirect call */
    }

loc_001D372E: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3766(); return; } /* jae: above or equal (unsigned >=) */

loc_001D3739: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3766(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D3741: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3766(); return; } /* ja: above (unsigned >) */

loc_001D3746: ;
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + ecx * 4 + 0x44;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3766(); return; } /* je: equal / zero */

loc_001D3758: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D375Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3758u); } /* indirect call */
    }

loc_001D375E: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D3768(); return; /* tail jmp 0x001D3768 */

}

/**
 * sub_001D3766
 * Original: 0x001D3766 - 0x001D3768 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3766: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D3768(); return; /* fallthrough 0x001D3768 */

}

/**
 * sub_001D3768
 * Original: 0x001D3768 - 0x001D3777 (15 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3768(void)
{

loc_001D3768: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D3770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D376Au); } /* indirect call */
    }

loc_001D3770: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D3777
 * Original: 0x001D3777 - 0x001D37AA (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3777(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3777: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D377Cu); } /* indirect call */
    }

loc_001D3782: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D37AE(); return; } /* je: equal / zero */

loc_001D378C: ;
    edx = 0xFA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    eax = edi;
    if (CMP_A(_fa, _fb)) goto loc_001D3799; /* ja: above (unsigned >) */

loc_001D3797: ;
    eax = edx;

loc_001D3799: ;
    esi = 0x5F5E100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D37AA(); return; } /* jae: above or equal (unsigned >=) */

loc_001D37A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D37B0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D37A6: ;
    edx = edi;
    g_seh_ebp = ebp; sub_001D37B0(); return; /* tail jmp 0x001D37B0 */

}

/**
 * sub_001D37AA
 * Original: 0x001D37AA - 0x001D37AE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D37AA: ;
    edx = esi;
    g_seh_ebp = ebp; sub_001D37B0(); return; /* tail jmp 0x001D37B0 */

}

/**
 * sub_001D37AE
 * Original: 0x001D37AE - 0x001D37B0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D37AE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D37B0(); return; /* fallthrough 0x001D37B0 */

}

/**
 * sub_001D37B0
 * Original: 0x001D37B0 - 0x001D37D6 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D37B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xD10) = edx;
    edx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    edi = edx;
    if (CMP_A(_fa, _fb)) goto loc_001D37C5; /* ja: above (unsigned >) */

loc_001D37C3: ;
    edi = eax;

loc_001D37C5: ;
    esi = 0xE10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D37D6(); return; } /* jae: above or equal (unsigned >=) */

loc_001D37CE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D37D8(); return; } /* ja: above (unsigned >) */

loc_001D37D2: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001D37D8(); return; /* tail jmp 0x001D37D8 */

}

/**
 * sub_001D37D6
 * Original: 0x001D37D6 - 0x001D37D8 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D37D6: ;
    edx = esi;

    g_seh_ebp = ebp; sub_001D37D8(); return; /* fallthrough 0x001D37D8 */

}

/**
 * sub_001D37D8
 * Original: 0x001D37D8 - 0x001D37FD (37 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37D8(void)
{

loc_001D37D8: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3E8);
    MEM32(ebx + 0xD14) = edx;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    MEM32(ebx + 0xD18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D37F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D37F1u); } /* indirect call */
    }

loc_001D37F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D37FD
 * Original: 0x001D37FD - 0x001D3820 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D37FD: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D3807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3801u); } /* indirect call */
    }

loc_001D3807: ;
    _fb = (uint32_t)(0xAE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001D3816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3810u); } /* indirect call */
    }

loc_001D3816: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BC50)); return; /* indirect tail jmp */

}

/**
 * sub_001D3820
 * Original: 0x001D3820 - 0x001D3886 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3820: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D382Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3829u); } /* indirect call */
    }

loc_001D382F: ;
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D3849; /* jne: not equal / not zero */

loc_001D383C: ;
    MEM32(edi + 8) = MEM32(edi + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = esi;
    MEM32(edi + 0xC) = 0x1D24E5;

loc_001D3849: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3859; /* je: equal / zero */

loc_001D3850: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D3856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3850u); } /* indirect call */
    }

loc_001D3856: ;
    MEM32(edi + 0x10) = esi;

loc_001D3859: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D38CB(); return; } /* je: equal / zero */

loc_001D3861: ;
    eax = MEM32(0x22BAE8);
    ecx = MEM32(eax);
    _fb = (uint32_t)(MEM32(ebx + 0x1DC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + 0x1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xC8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D3879; /* jbe: below or equal (unsigned <=) */

loc_001D3877: ;
    ecx = eax;

loc_001D3879: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x19;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3886(); return; } /* jae: above or equal (unsigned >=) */

loc_001D3882: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D389A(); return; /* tail jmp 0x001D389A */

}

/**
 * sub_001D3886
 * Original: 0x001D3886 - 0x001D389A (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3886: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + esi * 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

    g_seh_ebp = ebp; sub_001D389A(); return; /* fallthrough 0x001D389A */

}

/**
 * sub_001D389A
 * Original: 0x001D389A - 0x001D38C6 (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D389A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D389A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ecx = MEM32(ebx + 0x1D8);
    esi = eax + ecx + 1;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D38C6(); return; } /* je: equal / zero */

loc_001D38AA: ;
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D38BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D38B7u); } /* indirect call */
    }

loc_001D38BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D38C6(); return; } /* jne: not equal / not zero */

loc_001D38C1: ;
    eax = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_001D38C8(); return; /* tail jmp 0x001D38C8 */

}

/**
 * sub_001D38C6
 * Original: 0x001D38C6 - 0x001D38C8 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D38C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D38C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D38C8(); return; /* fallthrough 0x001D38C8 */

}

/**
 * sub_001D38C8
 * Original: 0x001D38C8 - 0x001D38CB (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D38C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D38C8: ;
    MEM32(edi + 0x10) = eax;

    g_seh_ebp = ebp; sub_001D38CB(); return; /* fallthrough 0x001D38CB */

}

/**
 * sub_001D38CB
 * Original: 0x001D38CB - 0x001D38E4 (25 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D38CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D38CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001D38D4u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D38D4: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D38DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D38D7u); } /* indirect call */
    }

loc_001D38DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D38E4
 * Original: 0x001D38E4 - 0x001D390D (41 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D38E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D38E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D38EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D38E7u); } /* indirect call */
    }

loc_001D38ED: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    edx = esi + 0xAE8;
    esi = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D38FF; /* je: equal / zero */

loc_001D38FC: ;
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D38FF: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D3907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3901u); } /* indirect call */
    }

loc_001D3907: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D390D
 * Original: 0x001D390D - 0x001D39C3 (182 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D390D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D390D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = ZX16(MEM16(ebx + 4));
    MEM16(esi + 0xA) = MEM16(esi + 0xA) & 0;
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ebp + 8) = eax;
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(ecx, HI8(eax));
    MEM16(esi + 2) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D394Du); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D394D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - edi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ~eax;
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(ebx + 8);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D39C3(); return; } /* je: equal / zero */

loc_001D3961: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D39C3(); return; } /* je: equal / zero */

loc_001D3966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D39C3(); return; } /* jae: above or equal (unsigned >=) */

loc_001D396B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3979; /* je: equal / zero */

loc_001D3970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3A17(); return; } /* jne: not equal / not zero */

loc_001D3979: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    MEM8(ebp + -12) = 0;
    MEM8(ebp + -11) = 6;
    SET_LO8(ecx, HI8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -10) = LO16(ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM16(edi + 0x12) = LO16(eax);
    MEM16(edi + 0x10) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D39B5u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D39B5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D39BBu); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D39BB: ;
    eax = ~eax;
    MEM16(edi + 0x10) = LO16(eax);
    g_seh_ebp = ebp; sub_001D3A17(); return; /* tail jmp 0x001D3A17 */

}

/**
 * sub_001D39C3
 * Original: 0x001D39C3 - 0x001D3A17 (84 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D39C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D39C3: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM8(ebp + -12) = 0;
    MEM8(ebp + -11) = 0x11;
    PUSH32(esp, 0xC);
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    MEM16(ebp + -10) = LO16(eax);
    MEM16(edi + 6) = MEM16(edi + 6) & 0;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(edi + 4) = LO16(eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D3A02u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D3A02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D3A08u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D3A08: ;
    eax = ~eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(edi + 6) = LO16(eax);

    g_seh_ebp = ebp; sub_001D3A17(); return; /* fallthrough 0x001D3A17 */

}

/**
 * sub_001D3A17
 * Original: 0x001D3A17 - 0x001D3A34 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3A17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3A17: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) { g_seh_ebp = ebp; sub_001D3A34(); return; } /* jns: not sign (positive) */

loc_001D3A1E: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    MEM32(ebx + 8) = eax;
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D3B34(); return; /* tail jmp 0x001D3B34 */

}

/**
 * sub_001D3A34
 * Original: 0x001D3A34 - 0x001D3ADC (168 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3A34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3A34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    esi = MEM32(ebp + -8);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* jne: not equal / not zero */

loc_001D3A42: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x268) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* je: equal / zero */

loc_001D3A51: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* je: equal / zero */

loc_001D3A5A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* je: equal / zero */

loc_001D3A63: ;
    SET_LO16(ecx, LO16(ecx) & 0xF0);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* je: equal / zero */

loc_001D3A71: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8C8), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3ADC(); return; } /* jne: not equal / not zero */

loc_001D3A7A: ;
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebx;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x001D3A89u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D3A89: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(0xA54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = ecx + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    SET_LO16(edx, MEM16(ecx + 0xA5C));
    MEM16(eax + 0xC) = LO16(edx);
    esi = MEM32(ebp + -8);
    MEM8(eax + 0xE) = 0x11;
    MEM8(eax + 0xF) = 0;
    SET_LO16(ecx, MEM16(ecx + 0xA5A));
    MEM16(eax + 0x10) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx + 4));
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_HI8(edx, LO8(ecx));
    MEM16(eax + 0x14) = 0x2100;
    SET_LO8(edx, HI8(ecx));
    MEM16(eax + 0x12) = LO16(edx);
    g_seh_ebp = ebp; sub_001D3B2F(); return; /* tail jmp 0x001D3B2F */

}

/**
 * sub_001D3ADC
 * Original: 0x001D3ADC - 0x001D3AE7 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3ADC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3ADC: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3AE7(); return; } /* je: equal / zero */

loc_001D3AE3: ;
    eax = MEM32(edi);
    g_seh_ebp = ebp; sub_001D3AE9(); return; /* tail jmp 0x001D3AE9 */

}

/**
 * sub_001D3AE7
 * Original: 0x001D3AE7 - 0x001D3AE9 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D3AE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3AE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D3AE9(); return; /* fallthrough 0x001D3AE9 */

}

/**
 * sub_001D3AE9
 * Original: 0x001D3AE9 - 0x001D3B17 (46 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3AE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3AE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3AFB; /* je: equal / zero */

loc_001D3AED: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B17(); return; } /* je: equal / zero */

loc_001D3AF3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D3AFBu); RECOMP_ABI_CALL(0x001D2294u, sub_001D2294); /* call 0x001D2294 */

loc_001D3AFB: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0x001D3B05u); RECOMP_ABI_CALL(0x001D2BBFu, sub_001D2BBF); /* call 0x001D2BBF */

loc_001D3B05: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B0B; /* je: equal / zero */

loc_001D3B09: ;
    MEM32(edi) = eax;

loc_001D3B0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B17(); return; } /* jne: not equal / not zero */

loc_001D3B0F: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D3B32(); return; /* tail jmp 0x001D3B32 */

}

/**
 * sub_001D3B17
 * Original: 0x001D3B17 - 0x001D3B2F (24 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3B17: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D3B23; /* jne: not equal / not zero */

loc_001D3B1D: ;
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + -4) = ecx;

loc_001D3B23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D3B2F(); return; } /* jne: not equal / not zero */

loc_001D3B27: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D3B2Fu); RECOMP_ABI_CALL(0x001D2294u, sub_001D2294); /* call 0x001D2294 */

    g_seh_ebp = ebp; sub_001D3B2F(); return; /* fallthrough 0x001D3B2F */

}
