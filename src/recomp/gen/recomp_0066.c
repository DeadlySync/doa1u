/**
 * DOAU1 - Recompiled code chunk 66
 * Functions: 250 (0x001D6A66 - 0x001D92CD)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D6A66
 * Original: 0x001D6A66 - 0x001D6B2B (197 bytes, 73 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D6A66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6A66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6A7Fu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001D6A7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6B1F; /* je: equal / zero */

loc_001D6A87: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x268) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6B1F; /* je: equal / zero */

loc_001D6A96: ;
    edi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6B1F; /* jne: not equal / not zero */

loc_001D6AA1: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6B1F; /* jne: not equal / not zero */

loc_001D6AA6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D6AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6AA6u); } /* indirect call */
    }

loc_001D6AAC: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(ebp + 0x10) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6AB7u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001D6AB7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6AC4; /* jne: not equal / not zero */

loc_001D6ABD: ;
    esi = 0x2726;
    goto loc_001D6B12;

loc_001D6AC4: ;
    ecx = MEM32(esi + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6AD8; /* je: equal / zero */

loc_001D6ACE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6AD6u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001D6AD6: ;
    goto loc_001D6ADA;

loc_001D6AD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D6ADA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6ABD; /* je: equal / zero */

loc_001D6ADE: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6AEAu); RECOMP_ABI_CALL(0x001D2F77u, sub_001D2F77); /* call 0x001D2F77 */

loc_001D6AEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6B05; /* jne: not equal / not zero */

loc_001D6AEE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6AFAu); RECOMP_ABI_CALL(0x001D5DFBu, sub_001D5DFB); /* call 0x001D5DFB */

loc_001D6AFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6B05; /* jne: not equal / not zero */

loc_001D6AFE: ;
    esi = 0x2776;
    goto loc_001D6B12;

loc_001D6B05: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D6B12: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D6B1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6B15u); } /* indirect call */
    }

loc_001D6B1B: ;
    eax = esi;
    goto loc_001D6B24;

loc_001D6B1F: ;
    eax = 0x2726;

loc_001D6B24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D6B2B
 * Original: 0x001D6B2B - 0x001D6B93 (104 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D6B2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6B2B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    ebx = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2D(); return; } /* jb: below (unsigned <) */

loc_001D6B3E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6B49u); RECOMP_ABI_CALL(0x001D7D79u, sub_001D7D79); /* call 0x001D7D79 */

loc_001D6B49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2C(); return; } /* je: equal / zero */

loc_001D6B51: ;
    SET_LO16(edx, MEM16(esi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5800 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C1A(); return; } /* je: equal / zero */

loc_001D6B5F: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5801) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5801 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C1A(); return; } /* je: equal / zero */

loc_001D6B6A: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5803) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5803 (16-bit) */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6B93(); return; } /* jne: not equal / not zero */

loc_001D6B77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6B93(); return; } /* je: equal / zero */

loc_001D6B7B: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6B93(); return; } /* je: equal / zero */

loc_001D6B80: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6B8Eu); RECOMP_ABI_CALL(0x001D63CCu, sub_001D63CC); /* call 0x001D63CC */

loc_001D6B8E: ;
    g_seh_ebp = ebp; sub_001D6C2C(); return; /* tail jmp 0x001D6C2C */

}

/**
 * sub_001D6B93
 * Original: 0x001D6B93 - 0x001D6BC3 (48 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6B93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6B93: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5804) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5804 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6BA3; /* jne: not equal / not zero */

loc_001D6B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6BA3; /* jne: not equal / not zero */

loc_001D6B9E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6BB3; /* je: equal / zero */

loc_001D6BA3: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5805) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5805 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6BC3(); return; } /* jne: not equal / not zero */

loc_001D6BAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6BC3(); return; } /* je: equal / zero */

loc_001D6BAE: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6BC3(); return; } /* je: equal / zero */

loc_001D6BB3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D6BC1u); RECOMP_ABI_CALL(0x001D53A3u, sub_001D53A3); /* call 0x001D53A3 */

loc_001D6BC1: ;
    g_seh_ebp = ebp; sub_001D6C2C(); return; /* tail jmp 0x001D6C2C */

}

/**
 * sub_001D6BC3
 * Original: 0x001D6BC3 - 0x001D6BE3 (32 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6BC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6BC3: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5809) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5809 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6BE3(); return; } /* jne: not equal / not zero */

loc_001D6BCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2C(); return; } /* je: equal / zero */

loc_001D6BCE: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6BE3(); return; } /* je: equal / zero */

loc_001D6BD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D6BE1u); RECOMP_ABI_CALL(0x001D66C5u, sub_001D66C5); /* call 0x001D66C5 */

loc_001D6BE1: ;
    g_seh_ebp = ebp; sub_001D6C2C(); return; /* tail jmp 0x001D6C2C */

}

/**
 * sub_001D6BE3
 * Original: 0x001D6BE3 - 0x001D6C03 (32 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6BE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6BE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2C(); return; } /* je: equal / zero */

loc_001D6BE7: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2C(); return; } /* je: equal / zero */

loc_001D6BEC: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5806) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5806 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C03(); return; } /* jne: not equal / not zero */

loc_001D6BF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D6C01u); RECOMP_ABI_CALL(0x001DAA5Bu, sub_001DAA5B); /* call 0x001DAA5B */

loc_001D6C01: ;
    g_seh_ebp = ebp; sub_001D6C2C(); return; /* tail jmp 0x001D6C2C */

}

/**
 * sub_001D6C03
 * Original: 0x001D6C03 - 0x001D6C1A (23 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6C03: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5807) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5807 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C2C(); return; } /* jne: not equal / not zero */

loc_001D6C0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D6C18u); RECOMP_ABI_CALL(0x001DB283u, sub_001DB283); /* call 0x001DB283 */

loc_001D6C18: ;
    g_seh_ebp = ebp; sub_001D6C2C(); return; /* tail jmp 0x001D6C2C */

}

/**
 * sub_001D6C1A
 * Original: 0x001D6C1A - 0x001D6C2D (19 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6C1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D6C2Cu); RECOMP_ABI_CALL(0x001D5EC7u, sub_001D5EC7); /* call 0x001D5EC7 */

loc_001D6C2C: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D6C2D(); return; /* fallthrough 0x001D6C2D */

}

/**
 * sub_001D6C2C
 * Original: 0x001D6C2C - 0x001D6C2D (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6C2C: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D6C2D(); return; /* fallthrough 0x001D6C2D */

}

/**
 * sub_001D6C2D
 * Original: 0x001D6C2D - 0x001D6C33 (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6C2D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D6C33
 * Original: 0x001D6C33 - 0x001D6C98 (101 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D6C33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6C33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jb: below (unsigned <) */

loc_001D6C4D: ;
    edi = MEM32(ebp + 0x14);
    eax = ZX16(MEM16(edi + 2));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6C5C: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5300) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5300 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6C98(); return; } /* jne: not equal / not zero */

loc_001D6C65: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6C6E: ;
    esi = MEM32(ebp + 0xC);
    MEM8(esi) = MEM8(esi) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6C7Bu); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001D6C7B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6C8A: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 0xD0C) = ecx;
    g_seh_ebp = ebp; sub_001D6E8E(); return; /* tail jmp 0x001D6E8E */

}

/**
 * sub_001D6C98
 * Original: 0x001D6C98 - 0x001D6D04 (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6C98: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5301) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5301 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* je: equal / zero */

loc_001D6CA2: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5309) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5309 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6DBA(); return; } /* jne: not equal / not zero */

loc_001D6CAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jb: below (unsigned <) */

loc_001D6CB5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6CBE: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6CCD: ;
    eax = edx + 0xD04;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D6CE8; /* jbe: below or equal (unsigned <=) */

loc_001D6CD9: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D6CE8; /* jb: below (unsigned <) */

loc_001D6CDE: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0xD00) = MEM32(edx + 0xD00) & 0;
    _fa = (uint32_t)(MEM32(edx + 0xD00)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D6CE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 8;
    if ((_fa == 0)) goto loc_001D6CF9; /* je: equal / zero */

loc_001D6CF0: ;
    eax = MEM32(ebp + 0x10);
    MEM32(edx + 0xD08) = eax;

loc_001D6CF9: ;
    eax = esi + ebx;
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001D6DAD(); return; /* tail jmp 0x001D6DAD */

}

/**
 * sub_001D6D04
 * Original: 0x001D6D04 - 0x001D6D4C (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6D04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jb: below (unsigned <) */

loc_001D6D0D: ;
    eax = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 8;
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -8) = eax;
    esi = ecx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6D54(); return; } /* jae: above or equal (unsigned >=) */

loc_001D6D29: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6D4C(); return; } /* je: equal / zero */

loc_001D6D2F: ;
    edi = MEM32(ebp + 0xC);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6D51(); return; } /* ja: above (unsigned >) */

loc_001D6D3F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D6D29; /* jb: below (unsigned <) */

loc_001D6D4A: ;
    g_seh_ebp = ebp; sub_001D6D54(); return; /* tail jmp 0x001D6D54 */

}

/**
 * sub_001D6D4C
 * Original: 0x001D6D4C - 0x001D6D51 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6D4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D6D54(); return; /* tail jmp 0x001D6D54 */

}

/**
 * sub_001D6D51
 * Original: 0x001D6D51 - 0x001D6D54 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6D51: ;
    esi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001D6D54(); return; /* fallthrough 0x001D6D54 */

}

/**
 * sub_001D6D54
 * Original: 0x001D6D54 - 0x001D6D93 (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6D54: ;
    eax = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6DAD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D6D60: ;
    eax = edx + 0xB00;
    edi = edx + 0xD00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6DAD(); return; } /* jae: above or equal (unsigned >=) */

loc_001D6D70: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6D7F; /* jne: not equal / not zero */

loc_001D6D77: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6D93(); return; } /* je: equal / zero */

loc_001D6D7F: ;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D6D70; /* jb: below (unsigned <) */

loc_001D6D91: ;
    g_seh_ebp = ebp; sub_001D6DAA(); return; /* tail jmp 0x001D6DAA */

}

/**
 * sub_001D6D93
 * Original: 0x001D6D93 - 0x001D6DAA (23 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6D93: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((7) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D6DAAu); RECOMP_ABI_CALL(0x001D35CCu, sub_001D35CC); /* call 0x001D35CC */

    g_seh_ebp = ebp; sub_001D6DAA(); return; /* fallthrough 0x001D6DAA */

}

/**
 * sub_001D6DAA
 * Original: 0x001D6DAA - 0x001D6DAD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6DAA: ;
    edx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D6DAD(); return; /* fallthrough 0x001D6DAD */

}

/**
 * sub_001D6DAD
 * Original: 0x001D6DAD - 0x001D6DBA (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6DAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6D04(); return; } /* ja: above (unsigned >) */

loc_001D6DB5: ;
    g_seh_ebp = ebp; sub_001D6E8E(); return; /* tail jmp 0x001D6E8E */

}

/**
 * sub_001D6DBA
 * Original: 0x001D6DBA - 0x001D6DFC (66 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6DBA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5304) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5304 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6DFC(); return; } /* jne: not equal / not zero */

loc_001D6DC0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jb: below (unsigned <) */

loc_001D6DC9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xAF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xAF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6DD8: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx;
    PUSH32(esp, 0x001D6DF7u); RECOMP_ABI_CALL(0x001D6B2Bu, sub_001D6B2B); /* call 0x001D6B2B */

loc_001D6DF7: ;
    g_seh_ebp = ebp; sub_001D6E8E(); return; /* tail jmp 0x001D6E8E */

}

/**
 * sub_001D6DFC
 * Original: 0x001D6DFC - 0x001D6E13 (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6DFC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5308) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5308 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E13(); return; } /* jne: not equal / not zero */

loc_001D6E02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D6E11u); RECOMP_ABI_CALL(0x001DB65Du, sub_001DB65D); /* call 0x001DB65D */

loc_001D6E11: ;
    g_seh_ebp = ebp; sub_001D6E8E(); return; /* tail jmp 0x001D6E8E */

}

/**
 * sub_001D6E13
 * Original: 0x001D6E13 - 0x001D6E5C (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6E13: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5306) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5306 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E77(); return; } /* jne: not equal / not zero */

loc_001D6E19: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6E1E: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6E27: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(eax + 0xE0);
    ecx = eax + 0xE8;

loc_001D6E37: ;
    PUSH32(esp, 8);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D6E40; /* jae: above or equal (unsigned >=) */

loc_001D6E3E: ;
    esi = ebx;

loc_001D6E40: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jae: above or equal (unsigned >=) */

loc_001D6E45: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6E54; /* jne: not equal / not zero */

loc_001D6E4C: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E5C(); return; } /* je: equal / zero */

loc_001D6E54: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D6E37;

}

/**
 * sub_001D6E5C
 * Original: 0x001D6E5C - 0x001D6E77 (27 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6E5C: ;
    MEM8(eax + 2) = 7;
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x001D6E6Du); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D6E6D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001D6E75u); RECOMP_ABI_CALL(0x001D345Du, sub_001D345D); /* call 0x001D345D */

loc_001D6E75: ;
    g_seh_ebp = ebp; sub_001D6E8E(); return; /* tail jmp 0x001D6E8E */

}

/**
 * sub_001D6E77
 * Original: 0x001D6E77 - 0x001D6E8E (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6E77: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x530C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x530C (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6E7D: ;
    eax = edx + 0xD20;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6E8E(); return; } /* jne: not equal / not zero */

loc_001D6E88: ;
    MEM32(eax) = 1;

    g_seh_ebp = ebp; sub_001D6E8E(); return; /* fallthrough 0x001D6E8E */

}

/**
 * sub_001D6E8E
 * Original: 0x001D6E8E - 0x001D6E95 (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6E8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D6E95
 * Original: 0x001D6E95 - 0x001D6EEA (85 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D6E95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7424(); return; } /* je: equal / zero */

loc_001D6EAB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7424(); return; } /* jb: below (unsigned <) */

loc_001D6EB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6EEA(); return; } /* jne: not equal / not zero */

loc_001D6EC4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7422(); return; } /* jne: not equal / not zero */

loc_001D6ED1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = esi + 0xC;
    esi = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edx + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D6EE5u); RECOMP_ABI_CALL(0x001D6B2Bu, sub_001D6B2B); /* call 0x001D6B2B */

loc_001D6EE5: ;
    g_seh_ebp = ebp; sub_001D7422(); return; /* tail jmp 0x001D7422 */

}

/**
 * sub_001D6EEA
 * Original: 0x001D6EEA - 0x001D6F7A (144 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6EEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6EEA: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + 8);
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = edi;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0xC (32-bit) */
    MEM32(ebp + -36) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7422(); return; } /* jb: below (unsigned <) */

loc_001D6F0E: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 0xFFFFFFFFu (32-bit) */
    edx = ZX16(MEM16(ecx + 4));
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -40) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    ebx = MEM32(ecx);
    edx = edx + ebx + -12;
    ebx = ZX16(MEM16(edx));
    MEM32(ebp + -44) = edx;
    edx = esi + 0xC;
    MEM32(ebp + -80) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D6F7A(); return; } /* je: equal / zero */

loc_001D6F3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D6F47: ;
    eax = MEM32(ebp + -12);
    edx = eax + 0xA98;
    MEM32(ebp + -56) = edx;
    edx = eax + 0xAA8;
    _fb = (uint32_t)(0xAC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -60) = eax;
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -68) = edx;
    MEM32(ebp + -64) = 0x18;
    MEM32(ebp + -48) = ebx;
    g_seh_ebp = ebp; sub_001D6FFB(); return; /* tail jmp 0x001D6FFB */

}

/**
 * sub_001D6F7A
 * Original: 0x001D6F7A - 0x001D6FFB (129 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6F7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6F7A: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D6F83u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001D6F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* je: equal / zero */

loc_001D6F8E: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jb: below (unsigned <) */

loc_001D6F98: ;
    ecx = ZX16(MEM16(eax + 0xC));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D6FA6; /* jae: above or equal (unsigned >=) */

loc_001D6FA0: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D6FA6: ;
    edx = MEM32(eax + 0xC);
    ecx = edx;
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -72) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* ja: above (unsigned >) */

loc_001D6FC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D6FDC; /* jae: above or equal (unsigned >=) */

loc_001D6FCE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x10), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D6FDC: ;
    ecx = eax + 0x54;
    MEM32(ebp + -56) = ecx;
    ecx = eax + 0x64;
    MEM32(ebp + -68) = ecx;
    ecx = ZX16(MEM16(eax + 0x84));
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -64) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;

    g_seh_ebp = ebp; sub_001D6FFB(); return; /* fallthrough 0x001D6FFB */

}

/**
 * sub_001D6FFB
 * Original: 0x001D6FFB - 0x001D704D (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6FFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6FFB: ;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 6) = LO16(ebx);
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    MEM32(ebp + -76) = ebx;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* ja: above (unsigned >) */

loc_001D7019: ;
    esi = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = eax;
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D704D(); return; } /* jne: not equal / not zero */

loc_001D703C: ;
    ebx = MEM32(ebp + 0x14);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = eax;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D70FC(); return; /* tail jmp 0x001D70FC */

}

/**
 * sub_001D704D
 * Original: 0x001D704D - 0x001D70AD (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D704D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D704D: ;
    eax = ZX8(LO8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edx;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -52) = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(ecx);
    MEM32(ebp + -28) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001D707B; /* jne: not equal / not zero */

loc_001D7071: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 5;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = edx;

loc_001D707B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001D7085; /* jb: below (unsigned <) */

loc_001D7082: ;
    MEM32(ebp + -16) = edx;

loc_001D7085: ;
    ebx = MEM32(ebp + 0x14);
    edi = edx;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + esi + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jb: below (unsigned <) */

loc_001D7099: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    ebx = eax + ebx + -12;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D70AD(); return; } /* jne: not equal / not zero */

loc_001D70A7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 6;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D70F9(); return; /* tail jmp 0x001D70F9 */

}

/**
 * sub_001D70AD
 * Original: 0x001D70AD - 0x001D70EF (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D70AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D70AD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D70F9(); return; } /* jb: below (unsigned <) */

loc_001D70B2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 7;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D70EF(); return; } /* jne: not equal / not zero */

loc_001D70BB: ;
    ecx = MEM32(ebp + -44);
    ecx = ZX8(MEM8(ecx + -1));
    edx = ecx;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx;
    ecx = MEM32(ebp + 0x14);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + ebx + 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jb: below (unsigned <) */

loc_001D70E4: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ecx + -12;
    MEM32(ebp + -24) = eax;
    g_seh_ebp = ebp; sub_001D70F9(); return; /* tail jmp 0x001D70F9 */

}

/**
 * sub_001D70EF
 * Original: 0x001D70EF - 0x001D70F9 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D70EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D70EF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D70F9(); return; } /* jne: not equal / not zero */

loc_001D70F4: ;
    MEM32(ebp + -24) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D70F9(); return; /* fallthrough 0x001D70F9 */

}

/**
 * sub_001D70F9
 * Original: 0x001D70F9 - 0x001D70FC (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D70F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D70F9: ;
    edi = MEM32(ebp + -36);

    g_seh_ebp = ebp; sub_001D70FC(); return; /* fallthrough 0x001D70FC */

}

/**
 * sub_001D70FC
 * Original: 0x001D70FC - 0x001D71D8 (220 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D70FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D70FC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D7105: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jb: below (unsigned <) */

loc_001D710D: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + ebx + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D7125: ;
    edi = edi | MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001D714B; /* je: equal / zero */

loc_001D7134: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D714B: ;
    eax = MEM32(ebp + -44);
    SET_LO16(edx, MEM16(ebp + -76));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = ebp + -96;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = MEM32(ebp + -80);
    MEM16(eax) = LO16(edx);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + -44);
    PUSH32(esp, 0xA);
    MEM32(eax + 4) = edx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = esi;
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = ebx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -56));
    PUSH32(esp, 0x001D7192u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001D7192: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D71ED(); return; } /* jne: not equal / not zero */

loc_001D7196: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* je: equal / zero */

loc_001D719F: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x10118);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jne: not equal / not zero */

loc_001D71BD: ;
    ecx = MEM32(ecx + 0xAC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D71D8(); return; } /* jae: above or equal (unsigned >=) */

loc_001D71C9: ;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xAE8) = MEM32(eax + 0xAE8) | 1;
    _fa = (uint32_t)(MEM32(eax + 0xAE8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D7421(); return; /* tail jmp 0x001D7421 */

}

/**
 * sub_001D71D8
 * Original: 0x001D71D8 - 0x001D71ED (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D71D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D71D8: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) { g_seh_ebp = ebp; sub_001D7421(); return; }

loc_001D71DE: ;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xAE8) = MEM32(eax + 0xAE8) | 2;
    _fa = (uint32_t)(MEM32(eax + 0xAE8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D7421(); return; /* tail jmp 0x001D7421 */

}

/**
 * sub_001D71ED
 * Original: 0x001D71ED - 0x001D725D (112 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D71ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D71ED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D723D; /* jbe: below or equal (unsigned <=) */

loc_001D71F1: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0x001D7203u); RECOMP_ABI_CALL(0x001D250Du, sub_001D250D); /* call 0x001D250D */

loc_001D7203: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D7218u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001D7218: ;
    ecx = MEM32(ebp + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -16) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D723D; /* jbe: below or equal (unsigned <=) */

loc_001D7220: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D723D; /* je: equal / zero */

loc_001D722C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7235; /* jne: not equal / not zero */

loc_001D7232: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D722C; /* jne: not equal / not zero */

loc_001D7235: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* ja: above (unsigned >) */

loc_001D723D: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D730E(); return; } /* jne: not equal / not zero */

loc_001D7246: ;
    edx = MEM32(ebp + -72);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D725D(); return; } /* jae: above or equal (unsigned >=) */

loc_001D724E: ;
    esi = MEM32(ebp + -20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D728B(); return; /* tail jmp 0x001D728B */

}

/**
 * sub_001D725D
 * Original: 0x001D725D - 0x001D726E (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D725D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D725D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3F (32-bit) */
    eax = MEM32(ebp + -20);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D726E(); return; } /* jb: below (unsigned <) */

loc_001D7265: ;
    MEM32(eax + 0x10) = 0x80000000u;
    g_seh_ebp = ebp; sub_001D7282(); return; /* tail jmp 0x001D7282 */

}

/**
 * sub_001D726E
 * Original: 0x001D726E - 0x001D7282 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D726E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D726E: ;
    esi = MEM32(eax + 0x10);
    ecx = edx + -31;
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = esi;
    eax = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_001D7282(); return; /* fallthrough 0x001D7282 */

}

/**
 * sub_001D7282
 * Original: 0x001D7282 - 0x001D728B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7282(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7282: ;
    esi = MEM32(ebp + -20);
    _fb = (uint32_t)(0xFFFFFFE1u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFE1u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D728B(); return; /* fallthrough 0x001D728B */

}

/**
 * sub_001D728B
 * Original: 0x001D728B - 0x001D730E (131 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D728B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D728B: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D72F7; /* jae: above or equal (unsigned >=) */

loc_001D7292: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D72BE; /* jne: not equal / not zero */

loc_001D7296: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D72A1u); RECOMP_ABI_CALL(0x001D5E72u, sub_001D5E72); /* call 0x001D5E72 */

loc_001D72A1: ;
    eax = MEM32(ebp + -12);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 0xAF8));
    MEM32(eax + 0xAF0) = 6;
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D72BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D72B8u); } /* indirect call */
    }

loc_001D72BE: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D72DC; /* je: equal / zero */

loc_001D72C3: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0xB8) = eax;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0xBC) = LO16(eax);

loc_001D72DC: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    MEM8(esi + 2) = 7;
    PUSH32(esp, 0x001D72EEu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D72EE: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D72F7u); RECOMP_ABI_CALL(0x001D5E4Au, sub_001D5E4A); /* call 0x001D5E4A */

loc_001D72F7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x1D8);
    MEM32(esi + 0x18) = eax;
    g_seh_ebp = ebp; sub_001D7311(); return; /* tail jmp 0x001D7311 */

}

/**
 * sub_001D730E
 * Original: 0x001D730E - 0x001D7330 (34 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D730E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D730E: ;
    esi = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7330(); return; } /* jne: not equal / not zero */

loc_001D7317: ;
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D732Bu); RECOMP_ABI_CALL(0x001D6C33u, sub_001D6C33); /* call 0x001D6C33 */

loc_001D732B: ;
    g_seh_ebp = ebp; sub_001D7421(); return; /* tail jmp 0x001D7421 */

}

/**
 * sub_001D7311
 * Original: 0x001D7311 - 0x001D7330 (31 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7311(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7311: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7330(); return; } /* jne: not equal / not zero */

loc_001D7317: ;
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D732Bu); RECOMP_ABI_CALL(0x001D6C33u, sub_001D6C33); /* call 0x001D6C33 */

loc_001D732B: ;
    g_seh_ebp = ebp; sub_001D7421(); return; /* tail jmp 0x001D7421 */

}

/**
 * sub_001D7330
 * Original: 0x001D7330 - 0x001D7347 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7330: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7347(); return; } /* jne: not equal / not zero */

loc_001D7336: ;
    SET_LO16(eax, 0x3E8);
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(esi, LO16(ecx));
    MEM16(ebp + 0x14) = LO16(esi);
    g_seh_ebp = ebp; sub_001D7382(); return; /* tail jmp 0x001D7382 */

}

/**
 * sub_001D7347
 * Original: 0x001D7347 - 0x001D7377 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7347(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7347: ;
    esi = ebx;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7377(); return; } /* jne: not equal / not zero */

loc_001D7354: ;
    SET_LO16(ecx, ZX8(MEM8(esi)));
    eax = 0x3E8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(ebp + 0x14) = LO16(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_HI8(eax, LO8(ecx));
    SET_LO8(eax, HI8(ecx));
    SET_LO16(esi, LO16(eax));
    g_seh_ebp = ebp; sub_001D7382(); return; /* tail jmp 0x001D7382 */

}

/**
 * sub_001D7377
 * Original: 0x001D7377 - 0x001D7382 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7377(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7377: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO16(esi, MEM16(esi + 2));
    MEM16(ebp + 0x14) = LO16(eax);

    g_seh_ebp = ebp; sub_001D7382(); return; /* fallthrough 0x001D7382 */

}

/**
 * sub_001D7382
 * Original: 0x001D7382 - 0x001D73F0 (110 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7382: ;
    _fa = (uint32_t)(MEM16(ebp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x14), 0 (16-bit) */
    MEM16(ebp + 0x10) = LO16(esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* je: equal / zero */

loc_001D7391: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* je: equal / zero */

loc_001D739A: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D73AD; /* je: equal / zero */

loc_001D73A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D73F0(); return; } /* jne: not equal / not zero */

loc_001D73AD: ;
    ecx = MEM32(ebp + -44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + -4));
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* jb: below (unsigned <) */

loc_001D73C3: ;
    edx = ebx;
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -32);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7421(); return; } /* ja: above (unsigned >) */

loc_001D73CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D73EEu); RECOMP_ABI_CALL(0x001E2490u, sub_001E2490); /* call 0x001E2490 */

loc_001D73EE: ;
    g_seh_ebp = ebp; sub_001D7421(); return; /* tail jmp 0x001D7421 */

}

/**
 * sub_001D73F0
 * Original: 0x001D73F0 - 0x001D7421 (49 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D73F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D73F0: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -24);
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D7421u); RECOMP_ABI_CALL(0x001E2DE9u, sub_001E2DE9); /* call 0x001E2DE9 */

    g_seh_ebp = ebp; sub_001D7421(); return; /* fallthrough 0x001D7421 */

}

/**
 * sub_001D7421
 * Original: 0x001D7421 - 0x001D7422 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7421: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D7422(); return; /* fallthrough 0x001D7422 */

}

/**
 * sub_001D7422
 * Original: 0x001D7422 - 0x001D7424 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7422(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7422: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D7424(); return; /* fallthrough 0x001D7424 */

}

/**
 * sub_001D7424
 * Original: 0x001D7424 - 0x001D7428 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7424(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7424: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D7428
 * Original: 0x001D7428 - 0x001D748D (101 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7428: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7549(); return; } /* jb: below (unsigned <) */

loc_001D743E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(esi + 4));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7548(); return; } /* jne: not equal / not zero */

loc_001D7455: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7548(); return; } /* je: equal / zero */

loc_001D7462: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7548(); return; } /* je: equal / zero */

loc_001D746C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x20C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x20C (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D747B; /* je: equal / zero */

loc_001D7472: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x8CE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x8CE) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D748D(); return; } /* jne: not equal / not zero */

loc_001D747B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7488u); RECOMP_ABI_CALL(0x001D6E95u, sub_001D6E95); /* call 0x001D6E95 */

loc_001D7488: ;
    g_seh_ebp = ebp; sub_001D7548(); return; /* tail jmp 0x001D7548 */

}

/**
 * sub_001D748D
 * Original: 0x001D748D - 0x001D7501 (116 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D748D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D748D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7547(); return; } /* je: equal / zero */

loc_001D74A0: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xB), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7519(); return; } /* jne: not equal / not zero */

loc_001D74A9: ;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D74E5; /* je: equal / zero */

loc_001D74B0: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, esi);
    MEM16(ebp + -6) = LO16(eax);
    PUSH32(esp, 0xC);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(ebp + -12) = ecx;
    MEM8(ebp + -8) = 0;
    MEM8(ebp + -7) = 0x11;
    PUSH32(esp, 0x001D74D8u); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D74D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D74DEu); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D74DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7547(); return; } /* jne: not equal / not zero */

loc_001D74E5: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4400 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7501(); return; } /* jne: not equal / not zero */

loc_001D74EF: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D74FFu); RECOMP_ABI_CALL(0x001DDB8Eu, sub_001DDB8E); /* call 0x001DDB8E */

loc_001D74FF: ;
    g_seh_ebp = ebp; sub_001D7547(); return; /* tail jmp 0x001D7547 */

}

/**
 * sub_001D7501
 * Original: 0x001D7501 - 0x001D7519 (24 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7501(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7501: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xE804) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xE804 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7519(); return; } /* jne: not equal / not zero */

loc_001D7507: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D7517u); RECOMP_ABI_CALL(0x001D99ADu, sub_001D99AD); /* call 0x001D99AD */

loc_001D7517: ;
    g_seh_ebp = ebp; sub_001D7547(); return; /* tail jmp 0x001D7547 */

}

/**
 * sub_001D7519
 * Original: 0x001D7519 - 0x001D7549 (48 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7519: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7547; /* je: equal / zero */

loc_001D7520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM16(ebp + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(esi));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + 0x14) = LO16(eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001D7547u); RECOMP_ABI_CALL(0x001E2DE9u, sub_001E2DE9); /* call 0x001E2DE9 */

loc_001D7547: ;
    POP32(esp, ebx);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D7549(); return; /* fallthrough 0x001D7549 */

}

/**
 * sub_001D7547
 * Original: 0x001D7547 - 0x001D7549 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7547(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7547: ;
    POP32(esp, ebx);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D7549(); return; /* fallthrough 0x001D7549 */

}

/**
 * sub_001D7548
 * Original: 0x001D7548 - 0x001D7549 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7548: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D7549(); return; /* fallthrough 0x001D7549 */

}

/**
 * sub_001D7549
 * Original: 0x001D7549 - 0x001D754E (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7549(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7549: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D754E
 * Original: 0x001D754E - 0x001D76C7 (377 bytes, 113 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D754E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D754E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x14 (16-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771E(); return; } /* jb: below (unsigned <) */

loc_001D7566: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    SET_LO16(ecx, MEM16(esi + 2));
    eax = ZX8(MEM8(esi));
    SET_HI8(edx, LO8(ecx));
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x40 (8-bit) */
    SET_LO8(edx, HI8(ecx));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + 8) = ecx;
    edx = ZX16(LO16(edx));
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D7595: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jb: below (unsigned <) */

loc_001D75A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* ja: above (unsigned >) */

loc_001D75B1: ;
    eax = ZX16(MEM16(edi + 4));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* ja: above (unsigned >) */

loc_001D75BD: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D75D9; /* je: equal / zero */

loc_001D75C7: ;
    edx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x268) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D75D6: ;
    edx = MEM32(ebp + -12);

loc_001D75D9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    MEM16(edi + 4) = LO16(edx);
    if (CMP_BE(_fa, _fb)) goto loc_001D75F5; /* jbe: below or equal (unsigned <=) */

loc_001D75E2: ;
    ecx = ebx + -20;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0FFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = ecx;

loc_001D75F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D75FEu); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D75FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D7609: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* je: equal / zero */

loc_001D7613: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001D762A; /* je: equal / zero */

loc_001D7620: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D762A: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* je: equal / zero */

loc_001D7634: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D76A2; /* jne: not equal / not zero */

loc_001D763B: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0x7F (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* je: equal / zero */

loc_001D7645: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -8), 0x7F (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* je: equal / zero */

loc_001D764F: ;
    edx = MEM32(ebp + -4);
    edx = MEM32(edx + 0x268);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7667; /* jne: not equal / not zero */

loc_001D765D: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D7667: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D76A2; /* jne: not equal / not zero */

loc_001D766B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D76A2; /* je: equal / zero */

loc_001D7671: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D76A2; /* je: equal / zero */

loc_001D7676: ;
    SET_LO8(ecx, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D768F; /* jne: not equal / not zero */

loc_001D767E: ;
    ecx = ebx + 8;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D768F; /* jb: below (unsigned <) */

loc_001D7686: ;
    _fa = (uint32_t)(MEM16(ebx + esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0x4400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + esi + 2), 0x4400 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D76A2; /* je: equal / zero */

loc_001D768F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D769C: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D76A2: ;
    SET_LO16(ecx, 0x3FFF);
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 6), LO16(edx) (16-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D76C7(); return; } /* je: equal / zero */

loc_001D76B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D771C(); return; } /* jne: not equal / not zero */

loc_001D76B7: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D76C5u); RECOMP_ABI_CALL(0x001D7723u, sub_001D7723); /* call 0x001D7723 */

loc_001D76C5: ;
    g_seh_ebp = ebp; sub_001D771C(); return; /* tail jmp 0x001D771C */

}

/**
 * sub_001D76C7
 * Original: 0x001D76C7 - 0x001D76EF (40 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D76C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D76C7: ;
    SET_LO8(edx, MEM8(esi + 9));
    ecx = ebx + esi;
    ebx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D76EF(); return; } /* jne: not equal / not zero */

loc_001D76D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x001D76EDu); RECOMP_ABI_CALL(0x001D7428u, sub_001D7428); /* call 0x001D7428 */

loc_001D76ED: ;
    g_seh_ebp = ebp; sub_001D771C(); return; /* tail jmp 0x001D771C */

}

/**
 * sub_001D76EF
 * Original: 0x001D76EF - 0x001D770B (28 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D76EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D76EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D770B(); return; } /* jne: not equal / not zero */

loc_001D76F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x001D7709u); RECOMP_ABI_CALL(0x001D2A28u, sub_001D2A28); /* call 0x001D2A28 */

loc_001D7709: ;
    g_seh_ebp = ebp; sub_001D771C(); return; /* tail jmp 0x001D771C */

}

/**
 * sub_001D770B
 * Original: 0x001D770B - 0x001D771E (19 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D770B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D770B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D771C; /* jne: not equal / not zero */

loc_001D7710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D771Cu); RECOMP_ABI_CALL(0x001E3235u, sub_001E3235); /* call 0x001E3235 */

loc_001D771C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D771E(); return; /* fallthrough 0x001D771E */

}

/**
 * sub_001D771C
 * Original: 0x001D771C - 0x001D771E (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D771C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D771C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D771E(); return; /* fallthrough 0x001D771E */

}

/**
 * sub_001D771E
 * Original: 0x001D771E - 0x001D7723 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D771E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D771E: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7723
 * Original: 0x001D7723 - 0x001D787E (347 bytes, 117 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7723(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7723: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(edi + 6));
    SET_HI8(ecx, LO8(eax));
    ebx = MEM32(esi + 0x8BC);
    MEM32(ebp + -4) = esi;
    SET_LO8(ecx, HI8(eax));
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(edi + 4));
    SET_HI8(edx, LO8(eax));
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ecx;
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    edx = ZX8(MEM8(edi + 9));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D7798; /* je: equal / zero */

loc_001D7774: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7789; /* jne: not equal / not zero */

loc_001D7779: ;
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7789; /* jne: not equal / not zero */

loc_001D7781: ;
    edx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7790; /* je: equal / zero */

loc_001D7789: ;
    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7774; /* jne: not equal / not zero */

loc_001D7790: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7863; /* jne: not equal / not zero */

loc_001D7798: ;
    eax = ZX8(MEM8(esi + 8));
    _fa = (uint32_t)(MEM32(esi + 0x8C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D9(); return; } /* jae: above or equal (unsigned >=) */

loc_001D77A8: ;
    ecx = ZX8(MEM8(esi + 9));
    PUSH32(esp, 8);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, 0x1D223F);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(0x47) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40001);
    PUSH32(esp, 0x6C54454E);
    ecx = esi;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D77E0u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D77E0: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D9(); return; } /* je: equal / zero */

loc_001D77EC: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x20) = 0x1D2273;
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + 0x24) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(ebx + 0x2C) = ecx;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xFFFFFFBCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFBCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x38) = eax;
    MEM32(ebx + 0x3C) = eax;
    MEM32(ebx + 0x40) = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = ZX8(MEM8(esi + 0x15));
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D784Bu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D784B: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x8BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7857u); RECOMP_ABI_CALL(0x001D7AD7u, sub_001D7AD7); /* call 0x001D7AD7 */

loc_001D7857: ;
    MEM32(esi + 0x8C4) = MEM32(esi + 0x8C4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x8C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);

loc_001D7863: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D78A3(); return; } /* jne: not equal / not zero */

loc_001D786A: ;
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D787E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7871: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D1(); return; } /* jne: not equal / not zero */

loc_001D7879: ;
    g_seh_ebp = ebp; sub_001D79D9(); return; /* tail jmp 0x001D79D9 */

}

/**
 * sub_001D787E
 * Original: 0x001D787E - 0x001D78A3 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D787E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D787E: ;
    esi = edi;
    edi = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
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
    esi = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x30) = edx;

    g_seh_ebp = ebp; sub_001D78A3(); return; /* fallthrough 0x001D78A3 */

}

/**
 * sub_001D78A3
 * Original: 0x001D78A3 - 0x001D78BB (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D78A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D78A3: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = eax;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D7971(); return; } /* je: equal / zero */

loc_001D78B1: ;
    edx = ecx;
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -16) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

}

/**
 * sub_001D78BA
 * Original: 0x001D78BA - 0x001D78E4 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D78BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D78BA: ;
    MEM8(ebx + -390002752) = ROL8(MEM8(ebx + -390002752), 1);
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -1223750579) = ROR32(MEM32(ecx + -1223750579), 0x4B);
    _fb = (uint32_t)(0x89) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x89);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    RECOMP_UNIMPL("hlt", 0x001D78CCu); /* TODO: hlt */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D1(); return; } /* ja: above (unsigned >) */

loc_001D78D8: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D78E4(); return; } /* je: equal / zero */

loc_001D78DE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 7 (8-bit) */
    g_seh_ebp = ebp; sub_001D7902(); return; /* tail jmp 0x001D7902 */

}

/**
 * sub_001D78E4
 * Original: 0x001D78E4 - 0x001D78FF (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D78E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D78E4: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D78FF(); return; } /* jne: not equal / not zero */

loc_001D78EB: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D1(); return; } /* jae: above or equal (unsigned >=) */

loc_001D78F4: ;
    ecx = MEM32(ebp + -12);
    MEM32(ebx + 0x34) = ecx;
    MEM32(ebx + 0x3C) = eax;
    g_seh_ebp = ebp; sub_001D7908(); return; /* tail jmp 0x001D7908 */

}

/**
 * sub_001D78FF
 * Original: 0x001D78FF - 0x001D7902 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D78FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D78FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */

    g_seh_ebp = ebp; sub_001D7902(); return; /* fallthrough 0x001D7902 */

}

/**
 * sub_001D7902
 * Original: 0x001D7902 - 0x001D7971 (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7902(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7902: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_001D79D1(); return; }

loc_001D7908: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    esi = edi + edx;
    edx = MEM32(ebx);
    edi = MEM32(ebp + -16);
    edi = edi + edx + 0x3C;
    edx = ecx;
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
    ecx = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7937; /* je: equal / zero */

loc_001D792F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79CE(); return; } /* ja: above (unsigned >) */

loc_001D7937: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D793F; /* jae: above or equal (unsigned >=) */

loc_001D793C: ;
    MEM32(ebx + 0x40) = eax;

loc_001D793F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D796E; /* jae: above or equal (unsigned >=) */

loc_001D7944: ;
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ebx + 0x44;
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
    SET_LO8(ecx, MEM8(esi));
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
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x38)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D7944; /* jb: below (unsigned <) */

loc_001D796E: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D7971(); return; /* fallthrough 0x001D7971 */

}

/**
 * sub_001D7908
 * Original: 0x001D7908 - 0x001D7971 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7908: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    esi = edi + edx;
    edx = MEM32(ebx);
    edi = MEM32(ebp + -16);
    edi = edi + edx + 0x3C;
    edx = ecx;
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
    ecx = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7937; /* je: equal / zero */

loc_001D792F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79CE(); return; } /* ja: above (unsigned >) */

loc_001D7937: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D793F; /* jae: above or equal (unsigned >=) */

loc_001D793C: ;
    MEM32(ebx + 0x40) = eax;

loc_001D793F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D796E; /* jae: above or equal (unsigned >=) */

loc_001D7944: ;
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ebx + 0x44;
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
    SET_LO8(ecx, MEM8(esi));
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
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x38)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D7944; /* jb: below (unsigned <) */

loc_001D796E: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D7971(); return; /* fallthrough 0x001D7971 */

}

/**
 * sub_001D7971
 * Original: 0x001D7971 - 0x001D79CE (93 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7971(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7971: ;
    eax = MEM32(ebx + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D9(); return; } /* je: equal / zero */

loc_001D797A: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D9(); return; } /* je: equal / zero */

loc_001D7981: ;
    edi = MEM32(ebx + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D79D9(); return; } /* jne: not equal / not zero */

loc_001D7989: ;
    PUSH32(esp, 0x3C);
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + edi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 8);
    ecx = ecx & 0xFFFFFFF9u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = ecx;
    MEM16(ebx + 4) = LO16(eax);
    SET_HI8(ecx, LO8(eax));
    MEM16(edi + 6) = LO16(edx);
    MEM16(edi + 0xA) = LO16(edx);
    SET_LO8(ecx, HI8(eax));
    MEM16(edi + 2) = LO16(ecx);
    PUSH32(esp, MEM32(ebx + 0x30));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D79BEu); RECOMP_ABI_CALL(0x001E2F34u, sub_001E2F34); /* call 0x001E2F34 */

loc_001D79BE: ;
    eax = ~eax;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM16(edi + 0xA) = LO16(eax);
    PUSH32(esp, 0x001D79CCu); RECOMP_ABI_CALL(0x001D754Eu, sub_001D754E); /* call 0x001D754E */

loc_001D79CC: ;
    g_seh_ebp = ebp; sub_001D79D1(); return; /* tail jmp 0x001D79D1 */

}

/**
 * sub_001D79CE
 * Original: 0x001D79CE - 0x001D79D1 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D79CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D79CE: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D79D1(); return; /* fallthrough 0x001D79D1 */

}

/**
 * sub_001D79D1
 * Original: 0x001D79D1 - 0x001D79E0 (15 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D79D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D79D1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D79D9u); RECOMP_ABI_CALL(0x001D223Fu, sub_001D223F); /* call 0x001D223F */

loc_001D79D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D79D9
 * Original: 0x001D79D9 - 0x001D79E0 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D79D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D79D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D79E0
 * Original: 0x001D79E0 - 0x001D7A33 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D79E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D79E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    SET_LO8(edx, MEM8(edi + 8));
    esi = eax;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    esi = esi >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = ecx;
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = esi & 0x7F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) << 5);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7A7B(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7A19: ;
    eax = MEM32(edi + 8);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7A33(); return; } /* jne: not equal / not zero */

loc_001D7A2E: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D7A40(); return; /* tail jmp 0x001D7A40 */

}

/**
 * sub_001D7A33
 * Original: 0x001D7A33 - 0x001D7A40 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A33: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7A40(); return; } /* jne: not equal / not zero */

loc_001D7A38: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_001D7A40(); return; /* fallthrough 0x001D7A40 */

}

/**
 * sub_001D7A40
 * Original: 0x001D7A40 - 0x001D7A6F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A40: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    eax = MEM32(ebp + -8);
    if (CMP_B(_fa, _fb)) goto loc_001D7A4E; /* jb: below (unsigned <) */

loc_001D7A4B: ;
    eax = MEM32(ebp + -4);

loc_001D7A4E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7A7B(); return; } /* jne: not equal / not zero */

loc_001D7A53: ;
    edx = ZX16(MEM16(edi + 4));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx + eax + -44;
    MEM32(ebp + -12) = edx;
    edx = MEM32(edi + 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_001D7A6F(); return; } /* jns: not sign (positive) */

loc_001D7A6A: ;
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D7A7B(); return; /* tail jmp 0x001D7A7B */

}

/**
 * sub_001D7A6F
 * Original: 0x001D7A6F - 0x001D7A78 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7A78(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7A73: ;
    _fb = (uint32_t)(0xD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D7A7B(); return; /* tail jmp 0x001D7A7B */

}

/**
 * sub_001D7A78
 * Original: 0x001D7A78 - 0x001D7A7B (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A78: ;
    _fb = (uint32_t)(0xA) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xA);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D7A7B(); return; /* fallthrough 0x001D7A7B */

}

/**
 * sub_001D7A7B
 * Original: 0x001D7A7B - 0x001D7AC2 (71 bytes, 31 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A7B: ;
    edx = MEM32(ebp + 8);
    MEM32(edx) = esi;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -8);
    MEM32(edx) = ebx;
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -12);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D7AA8; /* je: equal / zero */

loc_001D7AA6: ;
    MEM8(eax) = LO8(ecx);

loc_001D7AA8: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7ABC; /* je: equal / zero */

loc_001D7AAF: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D7ABC; /* je: equal / zero */

loc_001D7AB5: ;
    ecx = esi;
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax) = LO8(ecx);

loc_001D7ABC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001D7AC2
 * Original: 0x001D7AC2 - 0x001D7AD7 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7AC2: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(edx + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D7AD2; /* jne: not equal / not zero */

loc_001D7ACF: ;
    MEM32(ecx + 4) = edx;

loc_001D7AD2: ;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7AD7
 * Original: 0x001D7AD7 - 0x001D7AE7 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7AD7: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7AE7(); return; } /* je: equal / zero */

loc_001D7AE2: ;
    MEM32(edx + 0xC) = eax;
    g_seh_ebp = ebp; sub_001D7AE9(); return; /* tail jmp 0x001D7AE9 */

}

/**
 * sub_001D7AE7
 * Original: 0x001D7AE7 - 0x001D7AE9 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7AE7: ;
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_001D7AE9(); return; /* fallthrough 0x001D7AE9 */

}

/**
 * sub_001D7AE9
 * Original: 0x001D7AE9 - 0x001D7AF3 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AE9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7AE9: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7AF3
 * Original: 0x001D7AF3 - 0x001D7B02 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7AF3: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7B02(); return; } /* jne: not equal / not zero */

loc_001D7AFE: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7B02
 * Original: 0x001D7B02 - 0x001D7B07 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B02(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7B02: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7B07
 * Original: 0x001D7B07 - 0x001D7B10 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B07: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D7B1D(); return; /* tail jmp 0x001D7B1D */

}

/**
 * sub_001D7B10
 * Original: 0x001D7B10 - 0x001D7B1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7B23(); return; } /* je: equal / zero */

loc_001D7B16: ;
    edx = eax + 0xC;
    esi = eax;
    eax = MEM32(edx);

    g_seh_ebp = ebp; sub_001D7B1D(); return; /* fallthrough 0x001D7B1D */

}

/**
 * sub_001D7B1D
 * Original: 0x001D7B1D - 0x001D7B23 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7B10(); return; } /* jne: not equal / not zero */

loc_001D7B21: ;
    g_seh_ebp = ebp; sub_001D7B3D(); return; /* tail jmp 0x001D7B3D */

}

/**
 * sub_001D7B23
 * Original: 0x001D7B23 - 0x001D7B35 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B23: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    MEM32(edx) = edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7B35(); return; } /* jne: not equal / not zero */

loc_001D7B2F: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D7B3D(); return; /* tail jmp 0x001D7B3D */

}

/**
 * sub_001D7B35
 * Original: 0x001D7B35 - 0x001D7B3D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B35: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7B3D(); return; } /* jne: not equal / not zero */

loc_001D7B3A: ;
    MEM32(ecx + 4) = esi;

    g_seh_ebp = ebp; sub_001D7B3D(); return; /* fallthrough 0x001D7B3D */

}

/**
 * sub_001D7B3D
 * Original: 0x001D7B3D - 0x001D7B41 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B3D(void)
{

loc_001D7B3D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7B74
 * Original: 0x001D7B74 - 0x001D7BF9 (133 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7B74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7B74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 8;
    ecx = ebp + -16;
    if (CMP_B(_fa, _fb)) goto loc_001D7B8E; /* jb: below (unsigned <) */

loc_001D7B8B: ;
    ecx = MEM32(ebp + 0xC);

loc_001D7B8E: ;
    eax = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7BB8; /* jb: below (unsigned <) */

loc_001D7B97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7BAA; /* jb: below (unsigned <) */

loc_001D7B9C: ;
    PUSH32(esp, 0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;

loc_001D7BAA: ;
    PUSH32(esp, 0xA);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;

loc_001D7BB8: ;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = 0x2E;
    eax = ebp + 0xC;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7B8E; /* jb: below (unsigned <) */

loc_001D7BC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    MEM8(ecx + -1) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_001D7BF2; /* jae: above or equal (unsigned >=) */

loc_001D7BD1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D7BF2; /* jle: less or equal (signed <=) */

loc_001D7BD5: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + -16;
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
    MEM8(eax + ebx + -1) = 0;

loc_001D7BF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D7BF9
 * Original: 0x001D7BF9 - 0x001D7C35 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7BF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7BF9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D7C0F; /* je: equal / zero */

loc_001D7C04: ;
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D7C0F: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(eax + 8) = esi;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7C5A(); return; } /* jae: above or equal (unsigned >=) */

loc_001D7C1B: ;
    edx = ecx + 0x1D0;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7C4D(); return; } /* je: equal / zero */

loc_001D7C28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7C4D(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7C2D: ;
    ecx = MEM32(ecx + 0x1D4);
    g_seh_ebp = ebp; sub_001D7C38(); return; /* tail jmp 0x001D7C38 */

}

/**
 * sub_001D7C35
 * Original: 0x001D7C35 - 0x001D7C38 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7C35: ;
    ecx = MEM32(ecx + 4);

    g_seh_ebp = ebp; sub_001D7C38(); return; /* fallthrough 0x001D7C38 */

}

/**
 * sub_001D7C38
 * Original: 0x001D7C38 - 0x001D7C4D (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7C38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7C35(); return; } /* jb: below (unsigned <) */

loc_001D7C3D: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(edx + 4) = eax;
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001D7C59(); return; /* tail jmp 0x001D7C59 */

}

/**
 * sub_001D7C4D
 * Original: 0x001D7C4D - 0x001D7C5A (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7C4D: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    MEM32(edx) = eax;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D7C5A(); return; /* fallthrough 0x001D7C5A */

}

/**
 * sub_001D7C59
 * Original: 0x001D7C59 - 0x001D7C5A (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7C59: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D7C5A(); return; /* fallthrough 0x001D7C5A */

}

/**
 * sub_001D7C5A
 * Original: 0x001D7C5A - 0x001D7C5E (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C5A(void)
{

loc_001D7C5A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7C5E
 * Original: 0x001D7C5E - 0x001D7C7F (33 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7C5E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1D8);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D7C79; /* jae: above or equal (unsigned >=) */

loc_001D7C72: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C79u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D7C79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7C7F
 * Original: 0x001D7C7F - 0x001D7D00 (129 bytes, 49 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7C7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7C7F: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C95u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_001D7C95: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7CAB; /* jbe: below or equal (unsigned <=) */

loc_001D7C9C: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7CABu); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_001D7CAB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7CBF; /* jbe: below or equal (unsigned <=) */

loc_001D7CB0: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7CBFu); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_001D7CBF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7CD3; /* jbe: below or equal (unsigned <=) */

loc_001D7CC4: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7CD3u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_001D7CD3: ;
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7CE0u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_001D7CE0: ;
    ecx = MEM32(ebp + 0x7C);
    edi = MEM32(ebp + 0x78);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x58;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D7D00
 * Original: 0x001D7D00 - 0x001D7D40 (64 bytes, 27 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7D23u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D7D23: ;
    ecx = MEM32(ebp + 0x24);
    edi = MEM32(ebp + 0x20);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + -20;
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
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D7D40
 * Original: 0x001D7D40 - 0x001D7D79 (57 bytes, 24 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7D63u); RECOMP_ABI_CALL(0x00105940u, sub_00105940); /* call 0x00105940 */

loc_001D7D63: ;
    ecx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -20;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D7D79
 * Original: 0x001D7D79 - 0x001D7DAD (52 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7D79: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7DA7; /* jbe: below or equal (unsigned <=) */

loc_001D7D81: ;
    eax = MEM32(esp + 4);

loc_001D7D85: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7DAD(); return; } /* jb: below (unsigned <) */

loc_001D7D8A: ;
    SET_LO16(ecx, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 4 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7DAD(); return; } /* jb: below (unsigned <) */

loc_001D7D94: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7DAD(); return; } /* jb: below (unsigned <) */

loc_001D7D9B: ;
    ecx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D7D85; /* ja: above (unsigned >) */

loc_001D7DA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7DAA
 * Original: 0x001D7DAA - 0x001D7DAD (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7DAA(void)
{

loc_001D7DAA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7DAD
 * Original: 0x001D7DAD - 0x001D7DB1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7DAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7DAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D7DAA(); return; /* tail jmp 0x001D7DAA */

}

/**
 * sub_001D7DB1
 * Original: 0x001D7DB1 - 0x001D7DDB (42 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7DB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7DB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7DD5; /* jbe: below or equal (unsigned <=) */

loc_001D7DBA: ;
    eax = MEM32(ebp + 8);

loc_001D7DBD: ;
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebp + 0x10) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7DD7; /* je: equal / zero */

loc_001D7DC6: ;
    ecx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D7DBD; /* ja: above (unsigned >) */

loc_001D7DD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D7DD7: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D7DDB
 * Original: 0x001D7DDB - 0x001D7E23 (72 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7DDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7DDB: ;
    edx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001D7DFD; /* ja: above (unsigned >) */

loc_001D7DE6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x1E3871;
    esi = edx + 1;
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
    POP32(esp, ebx);
    if ((_flags != 0)) goto loc_001D7E20; /* je: equal / zero */

loc_001D7DFD: ;
    eax = 0x1E386C;
    ecx = edx + 0x5C;

loc_001D7E05: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7E23(); return; } /* jne: not equal / not zero */

loc_001D7E0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E3810) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E3810 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001D7E05; /* ja: above (unsigned >) */

loc_001D7E18: ;
    eax = MEM32(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D7E20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7E20
 * Original: 0x001D7E20 - 0x001D7E23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E20(void)
{

loc_001D7E20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7E23
 * Original: 0x001D7E23 - 0x001D7E2D (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7E23: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    g_seh_ebp = ebp; sub_001D7E20(); return; /* tail jmp 0x001D7E20 */

}

/**
 * sub_001D7ECC
 * Original: 0x001D7ECC - 0x001D7F1E (82 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7ECC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7ECC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x27;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D7EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7EE3u); } /* indirect call */
    }

loc_001D7EE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7F6E(); return; } /* ja: above (unsigned >) */

loc_001D7EF1: ;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D7F0A; /* ja: above (unsigned >) */

loc_001D7EF9: ;
    ecx = edi + eax * 8 + 0x58;

loc_001D7EFD: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7F1E(); return; } /* jne: not equal / not zero */

loc_001D7F01: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7EFD; /* jbe: below or equal (unsigned <=) */

loc_001D7F0A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D7F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7F0Fu); } /* indirect call */
    }

loc_001D7F15: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7F0A
 * Original: 0x001D7F0A - 0x001D7F1E (20 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F0A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D7F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7F0Fu); } /* indirect call */
    }

loc_001D7F15: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7F0C
 * Original: 0x001D7F0C - 0x001D7F1E (18 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F0C: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D7F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7F0Fu); } /* indirect call */
    }

loc_001D7F15: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7F1E
 * Original: 0x001D7F1E - 0x001D7F25 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F1E: ;
    esi = MEM32(edi + eax * 8 + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001D7F25(); return; /* fallthrough 0x001D7F25 */

}

/**
 * sub_001D7F25
 * Original: 0x001D7F25 - 0x001D7F6E (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F25: ;
    ecx = MEM32(esi + 0xC);
    edx = esi + 8;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7FB2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7F3D: ;
    edx = ZX16(LO16(ebx));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    MEM16(esi + 4) = LO16(ebx);
    MEM16(edx + 4) = LO16(eax);
    MEM16(edx + 6) = LO16(ebx);
    SET_LO16(ecx, MEM16(esi + 2));
    MEM32(ebp + 8) = eax;
    MEM16(edx + 2) = LO16(ecx);
    MEM8(edx + 1) = 0;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7F89(); return; } /* ja: above (unsigned >) */

loc_001D7F68: ;
    eax = ZX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D7F8C(); return; /* tail jmp 0x001D7F8C */

}

/**
 * sub_001D7F6E
 * Original: 0x001D7F6E - 0x001D7F78 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F6E: ;
    ecx = edi + 0x80;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_001D7F83(); return; /* tail jmp 0x001D7F83 */

}

/**
 * sub_001D7F78
 * Original: 0x001D7F78 - 0x001D7F83 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F78: ;
    esi = eax + -8;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + 4) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7F25(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D7F81: ;
    eax = MEM32(eax);

    g_seh_ebp = ebp; sub_001D7F83(); return; /* fallthrough 0x001D7F83 */

}

/**
 * sub_001D7F83
 * Original: 0x001D7F83 - 0x001D7F89 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D7F78(); return; } /* jne: not equal / not zero */

loc_001D7F87: ;
    g_seh_ebp = ebp; sub_001D7F0A(); return; /* tail jmp 0x001D7F0A */

}

/**
 * sub_001D7F89
 * Original: 0x001D7F89 - 0x001D7F8C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F89: ;
    PUSH32(esp, 5);
    POP32(esp, eax);

    g_seh_ebp = ebp; sub_001D7F8C(); return; /* fallthrough 0x001D7F8C */

}

/**
 * sub_001D7F8C
 * Original: 0x001D7F8C - 0x001D7FB2 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F8C: ;
    edi = edi + eax * 8 + 0x58;
    ecx = MEM32(edi);
    eax = edx + 8;
    MEM32(eax) = ecx;
    MEM32(edx + 0xC) = edi;
    MEM32(ecx + 4) = eax;
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM32(edi) = eax;
    eax = ZX16(MEM16(edx + 4));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + edx + 6) = LO16(ecx);
    edx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D7FB2(); return; /* fallthrough 0x001D7FB2 */

}

/**
 * sub_001D7FB2
 * Original: 0x001D7FB2 - 0x001D7FCF (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7FB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7FB2: ;
    eax = MEM32(ebp + 0xC);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) << 5);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + -8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esi + 1) = 1;
    MEM16(esi + 2) = LO16(eax);
    MEM8(esi) = LO8(ebx);
    esi = edx;
    g_seh_ebp = ebp; sub_001D7F0C(); return; /* tail jmp 0x001D7F0C */

}

/**
 * sub_001D7FCF
 * Original: 0x001D7FCF - 0x001D8001 (50 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7FCF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7FCF: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001D7FDCu); RECOMP_ABI_CALL(0x001D7ECCu, sub_001D7ECC); /* call 0x001D7ECC */

loc_001D7FDC: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7FFC; /* je: equal / zero */

loc_001D7FE2: ;
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

loc_001D7FFC: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D8001
 * Original: 0x001D8001 - 0x001D80B7 (182 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8001: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D80B2; /* je: equal / zero */

loc_001D8016: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + -8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D8021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D801Bu); } /* indirect call */
    }

loc_001D8021: ;
    SET_LO16(ecx, MEM16(esi + 4));
    MEM8(ebp + 8) = LO8(eax);
    eax = ZX16(MEM16(esi + 6));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 1) = LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D804C; /* jne: not equal / not zero */

loc_001D803B: ;
    esi = MEM32(edx + 8);
    edi = MEM32(edx + 0xC);
    MEM32(edi) = esi;
    MEM32(esi + 4) = edi;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx + 4) = MEM16(edx + 4) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = edx;

loc_001D804C: ;
    edx = ZX16(MEM16(esi + 4));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D806D; /* jne: not equal / not zero */

loc_001D805A: ;
    eax = MEM32(edx + 0xC);
    edi = MEM32(edx + 8);
    MEM32(eax) = edi;
    MEM32(edi + 4) = eax;
    SET_LO16(eax, MEM16(edx + 4));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 4) = MEM16(esi + 4) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_001D806D: ;
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8081; /* je: equal / zero */

loc_001D8076: ;
    ecx = ZX16(LO16(eax));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + esi + 6) = LO16(eax);

loc_001D8081: ;
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, 5);
    POP32(esp, edx);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D8091; /* ja: above (unsigned >) */

loc_001D808D: ;
    edx = ZX16(LO16(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001D8091: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(ebp + 8));
    edx = eax + edx * 8 + 0x58;
    ebx = MEM32(edx);
    edi = esi + 8;
    MEM32(edi) = ebx;
    MEM32(esi + 0xC) = edx;
    MEM32(ebx + 4) = edi;
    MEM32(edx) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D80B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D80AAu); } /* indirect call */
    }

loc_001D80B0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001D80B2: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D80B7
 * Original: 0x001D80B7 - 0x001D812A (115 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D80B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D80B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x200);
    eax = ebp + -532;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D80D5u); RECOMP_ABI_CALL(0x001E01EAu, sub_001E01EA); /* call 0x001E01EA */

loc_001D80D5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x14);
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -532;
    PUSH32(esp, eax);
    edi = ecx + 0x10;
    PUSH32(esp, 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D80F7u); RECOMP_ABI_CALL(0x001D7C7Fu, sub_001D7C7F); /* call 0x001D7C7F */

loc_001D80F7: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8109u); RECOMP_ABI_CALL(0x00105A1Eu, sub_00105A1E); /* call 0x00105A1E */

loc_001D8109: ;
    eax = ebp + -532;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D811Bu); RECOMP_ABI_CALL(0x00105A18u, sub_00105A18); /* call 0x00105A18 */

loc_001D811B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8124u); RECOMP_ABI_CALL(0x00105A18u, sub_00105A18); /* call 0x00105A18 */

loc_001D8124: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D812A
 * Original: 0x001D812A - 0x001D8157 (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D812A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D812A: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D8134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D812Eu); } /* indirect call */
    }

loc_001D8134: ;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D814Au); RECOMP_ABI_CALL(0x00105A18u, sub_00105A18); /* call 0x00105A18 */

loc_001D814A: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D8152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D814Cu); } /* indirect call */
    }

loc_001D8152: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D8157
 * Original: 0x001D8157 - 0x001D816B (20 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8157(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001D8157: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8166u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D8166: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001D816B
 * Original: 0x001D816B - 0x001D817D (18 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D816B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D816B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D817D(); return; } /* je: equal / zero */

loc_001D8176: ;
    PUSH32(esp, 0x001D817Bu); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001D817B: ;
    g_seh_ebp = ebp; sub_001D8183(); return; /* tail jmp 0x001D8183 */

}

/**
 * sub_001D817D
 * Original: 0x001D817D - 0x001D8186 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D817D(void)
{

loc_001D817D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001D8183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D817Du); } /* indirect call */
    }

loc_001D8183: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8183
 * Original: 0x001D8183 - 0x001D8186 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8183(void)
{

loc_001D8183: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8186
 * Original: 0x001D8186 - 0x001D819A (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8186(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8186: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    edx = edx >> 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D819A
 * Original: 0x001D819A - 0x001D81AA (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D819A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D819A: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001D81AA
 * Original: 0x001D81AA - 0x001D8205 (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D81AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D81AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    edx = eax;
    PUSH32(esp, ebx);
    edx = edx >> 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    esi = edx + esi + 0x14;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8240(); return; } /* jb: below (unsigned <) */

loc_001D81C7: ;
    ebx = MEM32(ecx + 8);
    MEM32(ebp + -4) = ebx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D824F(); return; } /* je: equal / zero */

loc_001D81D5: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    eax = edi;
    edx = edi;
    ecx = edi;
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax & 0x7F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8205(); return; } /* je: equal / zero */

loc_001D81F6: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8205(); return; } /* je: equal / zero */

loc_001D8201: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D8208(); return; /* tail jmp 0x001D8208 */

}

/**
 * sub_001D8205
 * Original: 0x001D8205 - 0x001D8208 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8205: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D8208(); return; /* fallthrough 0x001D8208 */

}

/**
 * sub_001D8208
 * Original: 0x001D8208 - 0x001D8240 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8208: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ebx * 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001D8218; /* jae: above or equal (unsigned >=) */

loc_001D8216: ;
    ecx = edx;

loc_001D8218: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = esi + eax + 0xC;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8240(); return; } /* jne: not equal / not zero */

loc_001D8223: ;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xC));
    _fb = (uint32_t)(0x18) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0x18)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ecx, LO8(eax));
    MEM8(esi) = LO8(ecx);
    SET_LO8(ecx, HI8(eax));
    _fb = (uint32_t)(0x18) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0x18)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 1) = LO8(ecx);
    g_seh_ebp = ebp; sub_001D824F(); return; /* tail jmp 0x001D824F */

}

/**
 * sub_001D8240
 * Original: 0x001D8240 - 0x001D824F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8240: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(esi) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(esi + 2) = LO16(eax);

    g_seh_ebp = ebp; sub_001D824F(); return; /* fallthrough 0x001D824F */

}

/**
 * sub_001D824F
 * Original: 0x001D824F - 0x001D8255 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D824F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D824F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D8255
 * Original: 0x001D8255 - 0x001D8277 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8255: ;
    PUSH32(esp, esi);
    esi = 0x3E8;
    SET_LO16(eax, LO16(esi));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8277(); return; } /* jne: not equal / not zero */

loc_001D826C: ;
    _fa = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8277(); return; } /* jne: not equal / not zero */

loc_001D8273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D8299(); return; /* tail jmp 0x001D8299 */

}

/**
 * sub_001D8277
 * Original: 0x001D8277 - 0x001D8299 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8277(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8277: ;
    SET_LO16(eax, MEM16(esp + 8));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, MEM16(esp + 0xC));
    SET_HI8(edx, LO8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, HI8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) | LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x100 (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D8299(); return; /* fallthrough 0x001D8299 */

}

/**
 * sub_001D8299
 * Original: 0x001D8299 - 0x001D829D (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8299(void)
{

loc_001D8299: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D829D
 * Original: 0x001D829D - 0x001D82BC (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D829D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D829D: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    eax = eax + esi + 0x14;
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D82BC(); return; } /* jb: below (unsigned <) */

loc_001D82B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D82BC
 * Original: 0x001D82BC - 0x001D82D0 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D82BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D82BC: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D82CC; /* je: equal / zero */

loc_001D82C7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D82D0(); return; } /* jne: not equal / not zero */

loc_001D82CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D82D0
 * Original: 0x001D82D0 - 0x001D82DE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D82D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D82D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D82DA; /* je: equal / zero */

loc_001D82D5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D82DD; /* jne: not equal / not zero */

loc_001D82DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D82DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D82DE
 * Original: 0x001D82DE - 0x001D831A (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D82DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D82DE: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = eax;
    edx = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x7F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001D8304; /* jb: below (unsigned <) */

loc_001D8302: ;
    edx = eax;

loc_001D8304: ;
    edi = MEM32(ecx + 8);
    edi = edi >> 0x12;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + esi + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D831A
 * Original: 0x001D831A - 0x001D8343 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D831A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D831A: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D832D; /* jne: not equal / not zero */

loc_001D8327: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;

loc_001D832D: ;
    edi = MEM32(ecx);
    esi = MEM32(eax + 4);
    MEM32(esi + 0xC) = edi;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    POP32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8343
 * Original: 0x001D8343 - 0x001D8348 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8343: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_seh_ebp = ebp; sub_001D8357(); return; /* tail jmp 0x001D8357 */

}

/**
 * sub_001D8348
 * Original: 0x001D8348 - 0x001D8357 (15 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8348: ;
    ecx = esi;
    PUSH32(esp, 0x001D834Fu); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001D834F: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D8357u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8354u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D8357(); return; /* fallthrough 0x001D8357 */

}

/**
 * sub_001D8357
 * Original: 0x001D8357 - 0x001D8360 (9 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8357(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8357: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8348(); return; } /* jne: not equal / not zero */

loc_001D835C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8360
 * Original: 0x001D8360 - 0x001D8365 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8360: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_seh_ebp = ebp; sub_001D8376(); return; /* tail jmp 0x001D8376 */

}

/**
 * sub_001D8365
 * Original: 0x001D8365 - 0x001D8376 (17 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8365(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8365: ;
    ecx = esi;
    PUSH32(esp, 0x001D836Cu); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001D836C: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8376u); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

    g_seh_ebp = ebp; sub_001D8376(); return; /* fallthrough 0x001D8376 */

}

/**
 * sub_001D8376
 * Original: 0x001D8376 - 0x001D837F (9 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8376(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8376: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8365(); return; } /* jne: not equal / not zero */

loc_001D837B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D837F
 * Original: 0x001D837F - 0x001D839B (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D837F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D837F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = eax;
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D839B(); return; } /* je: equal / zero */

loc_001D8390: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFF;
    g_seh_ebp = ebp; sub_001D83DD(); return; /* tail jmp 0x001D83DD */

}

/**
 * sub_001D839B
 * Original: 0x001D839B - 0x001D83B0 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D839B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D839B: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D83B0(); return; } /* jne: not equal / not zero */

loc_001D83A5: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFF;
    g_seh_ebp = ebp; sub_001D83DD(); return; /* tail jmp 0x001D83DD */

}

/**
 * sub_001D83B0
 * Original: 0x001D83B0 - 0x001D83C7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D83B0: ;
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0xE0);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D83C7(); return; } /* jne: not equal / not zero */

loc_001D83BC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFFF;
    g_seh_ebp = ebp; sub_001D83DD(); return; /* tail jmp 0x001D83DD */

}

/**
 * sub_001D83C7
 * Original: 0x001D83C7 - 0x001D83DA (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D83C7: ;
    SET_LO16(eax, LO16(eax) & 0xF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D83DA(); return; } /* jne: not equal / not zero */

loc_001D83D2: ;
    MEM32(eax) = 0xF0;
    g_seh_ebp = ebp; sub_001D83DD(); return; /* tail jmp 0x001D83DD */

}

/**
 * sub_001D83DA
 * Original: 0x001D83DA - 0x001D83DD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D83DA: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001D83DD(); return; /* fallthrough 0x001D83DD */

}

/**
 * sub_001D83DD
 * Original: 0x001D83DD - 0x001D83E1 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D83DD: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D83E1
 * Original: 0x001D83E1 - 0x001D8405 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D83E1: ;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1DC) = eax;
    eax = esi + 0x1D8;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = esi + 0x1D0;
    g_seh_ebp = ebp; sub_001D8421(); return; /* tail jmp 0x001D8421 */

}

/**
 * sub_001D8405
 * Original: 0x001D8405 - 0x001D8421 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8405(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8405: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8427(); return; } /* jb: below (unsigned <) */

loc_001D840A: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001D8421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D841Eu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D8421(); return; /* fallthrough 0x001D8421 */

}

/**
 * sub_001D8421
 * Original: 0x001D8421 - 0x001D8427 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8421: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8405(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D8427(); return; /* fallthrough 0x001D8427 */

}

/**
 * sub_001D8427
 * Original: 0x001D8427 - 0x001D843F (24 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8427(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8427: ;
    ecx = esi;
    PUSH32(esp, 0x001D842Eu); RECOMP_ABI_CALL(0x001D8EDDu, sub_001D8EDD); /* call 0x001D8EDD */

loc_001D842E: ;
    ecx = esi;
    PUSH32(esp, 0x001D8435u); RECOMP_ABI_CALL(0x001D47D5u, sub_001D47D5); /* call 0x001D47D5 */

loc_001D8435: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001DE5FE(); return; /* tail jmp 0x001DE5FE */

}

/**
 * sub_001D843F
 * Original: 0x001D843F - 0x001D8465 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D843F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D843F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 0x18C;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC8);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    eax = 0xFFE17B80u;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1A8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BD9C); PUSH32(esp, 0x001D8463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D845Du); } /* indirect call */
    }

loc_001D8463: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8465
 * Original: 0x001D8465 - 0x001D849D (56 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8465(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8465: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D849A; /* jne: not equal / not zero */

loc_001D8474: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D8492; /* je: equal / zero */

loc_001D8478: ;
    eax = esi + 0x1A8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x001D8485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D847Fu); } /* indirect call */
    }

loc_001D8485: ;
    eax = esi + 0x18C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD58); PUSH32(esp, 0x001D8492u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D848Cu); } /* indirect call */
    }

loc_001D8492: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D849Au); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D849A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D849D
 * Original: 0x001D849D - 0x001D84CE (49 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D849D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D849D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D84A5u); RECOMP_ABI_CALL(0x001D8465u, sub_001D8465); /* call 0x001D8465 */

loc_001D84A5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D84C0; /* je: equal / zero */

loc_001D84AA: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D84B8; /* je: equal / zero */

loc_001D84B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001D84B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D84B2u); } /* indirect call */
    }

loc_001D84B8: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001D84C0: ;
    PUSH32(esp, 0x200);
    ecx = esi;
    PUSH32(esp, 0x001D84CCu); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D84CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D84DE
 * Original: 0x001D84DE - 0x001D8568 (138 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D84DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D84DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    edx = ebx;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D84F6; /* jne: not equal / not zero */

loc_001D84F3: ;
    PUSH32(esp, 0x14);
    POP32(esp, esi);

loc_001D84F6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D857A(); return; } /* jb: below (unsigned <) */

loc_001D8501: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8568(); return; } /* jb: below (unsigned <) */

loc_001D8509: ;
    edi = MEM32(ebp + 0x10);
    eax = edi + 7;
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D855B; /* jbe: below or equal (unsigned <=) */

loc_001D8526: ;
    edi = ebx;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8538; /* jne: not equal / not zero */

loc_001D8535: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8538: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8540; /* jbe: below or equal (unsigned <=) */

loc_001D853C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8540: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D855B; /* jne: not equal / not zero */

loc_001D8545: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D855B; /* jbe: below or equal (unsigned <=) */

loc_001D854B: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D855B; /* jbe: below or equal (unsigned <=) */

loc_001D8554: ;
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D855B: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001D857A(); return; /* tail jmp 0x001D857A */

}

/**
 * sub_001D8568
 * Original: 0x001D8568 - 0x001D8572 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8568: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8572(); return; } /* jne: not equal / not zero */

loc_001D856D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D857A(); return; /* tail jmp 0x001D857A */

}

/**
 * sub_001D8572
 * Original: 0x001D8572 - 0x001D857A (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8572(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8572: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D857A(); return; } /* jne: not equal / not zero */

loc_001D8577: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D857A(); return; /* fallthrough 0x001D857A */

}

/**
 * sub_001D857A
 * Original: 0x001D857A - 0x001D8590 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D857A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D857A: ;
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000 (32-bit) */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8590(); return; } /* je: equal / zero */

loc_001D8589: ;
    PUSH32(esp, 0x001D858Eu); RECOMP_ABI_CALL(0x001D7ECCu, sub_001D7ECC); /* call 0x001D7ECC */

loc_001D858E: ;
    g_seh_ebp = ebp; sub_001D8596(); return; /* tail jmp 0x001D8596 */

}

/**
 * sub_001D8590
 * Original: 0x001D8590 - 0x001D8596 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8590: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D8596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8590u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001D8596(); return; /* fallthrough 0x001D8596 */

}

/**
 * sub_001D8596
 * Original: 0x001D8596 - 0x001D85CD (55 bytes, 21 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8596: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D85C6; /* je: equal / zero */

loc_001D859A: ;
    edx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D85A6; /* jne: not equal / not zero */

loc_001D85A1: ;
    edx = 0x1D816B;

loc_001D85A6: ;
    ecx = MEM32(ebp + 0xC);
    MEM16(eax + 6) = MEM16(eax + 6) & 0;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + ecx;
    MEM32(eax) = edi;
    MEM16(eax + 4) = LO16(esi);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x10) = edx;

loc_001D85C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D85CD
 * Original: 0x001D85CD - 0x001D85E5 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D85CD: ;
    eax = MEM32(ecx + 8);
    edx = eax;
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D85E5(); return; } /* jb: below (unsigned <) */

loc_001D85DA: ;
    eax = ZX16(MEM16(ecx + 4));
    ecx = MEM32(ecx);
    eax = eax + ecx + -24;
    esp += 4; return; /* ret */

}

/**
 * sub_001D85E5
 * Original: 0x001D85E5 - 0x001D85F2 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D85E5: ;
    ecx = MEM32(ecx);
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001D85F2
 * Original: 0x001D85F2 - 0x001D8618 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D85F2: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8618(); return; } /* je: equal / zero */

loc_001D85F8: ;
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D8618(); return; } /* je: equal / zero */

loc_001D8602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8618(); return; } /* je: equal / zero */

loc_001D8607: ;
    SET_LO16(eax, LO16(eax) & 0xF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8618(); return; } /* je: equal / zero */

loc_001D860F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8618(); return; } /* je: equal / zero */

loc_001D8614: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8618
 * Original: 0x001D8618 - 0x001D861B (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D8618(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8618: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D861B
 * Original: 0x001D861B - 0x001D8627 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D861B(void)
{

loc_001D861B: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001D8624u); RECOMP_ABI_CALL(0x001D83E1u, sub_001D83E1); /* call 0x001D83E1 */

loc_001D8624: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D8627
 * Original: 0x001D8627 - 0x001D866D (70 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8627(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8627: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8637u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D8637: ;
    eax = MEM32(ebp + 8);
    edx = ebx + 4;
    PUSH32(esp, 0x13);
    POP32(esp, ecx);
    esi = 0x1E38D0;
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
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D86A2(); return; } /* je: equal / zero */

loc_001D864F: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D865B; /* je: equal / zero */

loc_001D8656: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x4C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x4C (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D86A2(); return; } /* jne: not equal / not zero */

loc_001D865B: ;
    MEM32(ebp + -4) = eax;
    eax = ZX8(LO8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = edx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001D86A2(); return; } /* js: sign (negative) */

loc_001D8666: ;
    edi = edx;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax + 1;

    g_seh_ebp = ebp; sub_001D866D(); return; /* fallthrough 0x001D866D */

}

/**
 * sub_001D866D
 * Original: 0x001D866D - 0x001D867F (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D866D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D866D: ;
    eax = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D867F(); return; } /* jne: not equal / not zero */

loc_001D8676: ;
    SET_LO8(eax, MEM8(edi + esi + 0x1E38D0));
    g_seh_ebp = ebp; sub_001D8699(); return; /* tail jmp 0x001D8699 */

}

/**
 * sub_001D867F
 * Original: 0x001D867F - 0x001D868A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D867F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D867F: ;
    SET_LO8(edx, MEM8(edi + esi + 0x1E3920));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D868E(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001D868A(); return; /* fallthrough 0x001D868A */

}

/**
 * sub_001D868A
 * Original: 0x001D868A - 0x001D868E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D868A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D868A: ;
    MEM8(esi) = LO8(edx);
    g_seh_ebp = ebp; sub_001D869B(); return; /* tail jmp 0x001D869B */

}

/**
 * sub_001D868E
 * Original: 0x001D868E - 0x001D8699 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D868E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D868E: ;
    SET_LO8(edx, MEM8(edi + esi + 0x1E3970));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D868A(); return; } /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_001D8699(); return; /* fallthrough 0x001D8699 */

}

/**
 * sub_001D8699
 * Original: 0x001D8699 - 0x001D86A2 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8699: ;
    MEM8(esi) = LO8(eax);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D866D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D86A2(); return; /* fallthrough 0x001D86A2 */

}

/**
 * sub_001D869B
 * Original: 0x001D869B - 0x001D86A2 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D869B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D869B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D866D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D86A2(); return; /* fallthrough 0x001D86A2 */

}

/**
 * sub_001D86A2
 * Original: 0x001D86A2 - 0x001D871F (125 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D86A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D86A2: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001D86ACu); RECOMP_ABI_CALL(0x001D80B7u, sub_001D80B7); /* call 0x001D80B7 */

loc_001D86AC: ;
    eax = ebx + 0x1D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x1D4) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x1D861B);
    eax = ebx + 0x18C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x001D86CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D86C7u); } /* indirect call */
    }

loc_001D86CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx + 0x1A8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC64); PUSH32(esp, 0x001D86DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D86D6u); } /* indirect call */
    }

loc_001D86DC: ;
    MEM32(ebx + 0x1D8) = 0x69780;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    PUSH32(esp, 0x40);
    ecx = ebx;
    MEM32(ebx + 0x1DC) = eax;
    PUSH32(esp, 0x001D86FCu); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D86FC: ;
    edi = ZX8(MEM8(ebx + 6));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6554454E);
    edi = edi << 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001D870Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8709u); } /* indirect call */
    }

loc_001D870F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D871F(); return; } /* jne: not equal / not zero */

loc_001D8715: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_001D87B9(); return; /* tail jmp 0x001D87B9 */

}

/**
 * sub_001D871F
 * Original: 0x001D871F - 0x001D87C0 (161 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D871F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D871F: ;
    eax = esi + edi;
    PUSH32(esp, 0x80);
    ecx = ebx;
    MEM32(ebx + 0x50) = esi;
    MEM32(ebx + 0x54) = eax;
    PUSH32(esp, 0x001D8734u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D8734: ;
    PUSH32(esp, 6);
    eax = ebx + 0x58;
    POP32(esp, ecx);

loc_001D873A: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D873A; /* jne: not equal / not zero */

loc_001D8745: ;
    MEM16(esi + 6) = MEM16(esi + 6) & 0;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM8(esi + 1) = 1;
    MEM16(esi + 2) = 0x6654;
    MEM8(esi) = 0x20;
    MEM16(esi + 4) = 1;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi >> 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 5);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    MEM8(esi + 1) = 0;
    MEM16(esi + 6) = 1;
    MEM16(esi + 4) = LO16(edi);
    if (CMP_A(_fa, _fb)) goto loc_001D8784; /* ja: above (unsigned >) */

loc_001D8780: ;
    eax = ZX16(LO16(edi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001D8784: ;
    eax = ebx + eax * 8 + 0x58;
    edx = MEM32(eax);
    MEM32(esi + 0xC) = eax;
    ecx = esi + 8;
    MEM32(ecx) = edx;
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;
    eax = ZX16(MEM16(esi + 4));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 1;
    MEM16(esi + 2) = 0x6754;
    MEM8(esi) = 0x20;
    MEM16(esi + 6) = LO16(edi);
    MEM16(esi + 4) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D87B9
 * Original: 0x001D87B9 - 0x001D87C0 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D87B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D87B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D87C0
 * Original: 0x001D87C0 - 0x001D87E8 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D87C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D87C0: ;
    eax = MEM32(ecx + 0x210);
    eax = eax | 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFEF00110u) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xFEF00084u) = eax;
    MEM32(0xFEF00094u) = eax;
    MEM32(-17825468) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_001D87E8
 * Original: 0x001D87E8 - 0x001D885B (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D87E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D87E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x22BCF0);
    PUSH32(esp, edi);
    MEM32(-17825520) = 0;
    edi = 0x1F4;
    MEM32(-17825644) = 0;
    MEM32(-17825660) = 0;
    ebx = edi;

loc_001D8816: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(-17825640)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-17825640), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D8829; /* jne: not equal / not zero */

loc_001D8820: ;
    _fa = (uint32_t)(MEM8(-17825656)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-17825656), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D8831; /* je: equal / zero */

loc_001D8829: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D882Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D882Bu); } /* indirect call */
    }

loc_001D882D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8816; /* jne: not equal / not zero */

loc_001D8831: ;
    MEM32(-17825468) = 4;

loc_001D883B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(-17825468)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-17825468), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D884D; /* jne: not equal / not zero */

loc_001D8845: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D8849u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8847u); } /* indirect call */
    }

loc_001D8849: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D883B; /* jne: not equal / not zero */

loc_001D884D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(-17825468) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D885B
 * Original: 0x001D885B - 0x001D88D9 (126 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D885B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D885B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D8863u); RECOMP_ABI_CALL(0x001D87E8u, sub_001D87E8); /* call 0x001D87E8 */

loc_001D8863: ;
    ebx = MEM32(0x22BCF0);
    MEM32(-17825468) = 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    esi = 0xFEF00000u;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001D887Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D887Au); } /* indirect call */
    }

loc_001D887C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-17825468) = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001D8888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8886u); } /* indirect call */
    }

loc_001D8888: ;
    MEM32(-17825404) = edi;
    MEM32(-17825788) = edi;
    MEM32(-17825280) = edi;
    MEM32(-17825784) = edi;
    MEM32(-17825536) = edi;
    MEM32(-17825532) = edi;
    eax = 0xFEF00088u;
    MEM32(-17825524) = edi;
    MEM32(-17825520) = edi;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = 0xFEF00180u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D88D9
 * Original: 0x001D88D9 - 0x001D88F2 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D88D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(0xFEF00004u) = eax;
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x001D88EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D88E9u); } /* indirect call */
    }

loc_001D88EF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001D88F2
 * Original: 0x001D88F2 - 0x001D8947 (85 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D88F2: ;
    eax = MEM32(0xFEF00188u);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ecx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD60); PUSH32(esp, 0x001D890Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8908u); } /* indirect call */
    }

loc_001D890E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D8923; /* jne: not equal / not zero */

loc_001D8914: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x214)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x214) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8972(); return; } /* je: equal / zero */

loc_001D891C: ;
    ecx = esi;
    PUSH32(esp, 0x001D8923u); RECOMP_ABI_CALL(0x001D87E8u, sub_001D87E8); /* call 0x001D87E8 */

loc_001D8923: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x384;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x64)) >> 32) & 1);
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x210) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8947(); return; } /* je: equal / zero */

loc_001D893E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(-17825664) = MEM32(-17825664) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(-17825664)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001D894E(); return; /* tail jmp 0x001D894E */

}

/**
 * sub_001D8947
 * Original: 0x001D8947 - 0x001D894E (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8947: ;
    MEM32(-17825664) = MEM32(-17825664) | 2;
    _fa = (uint32_t)(MEM32(-17825664)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001D894E(); return; /* fallthrough 0x001D894E */

}

/**
 * sub_001D894E
 * Original: 0x001D894E - 0x001D895B (13 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D894E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D894E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D895B(); return; } /* jne: not equal / not zero */

loc_001D8952: ;
    ecx = esi;
    PUSH32(esp, 0x001D8959u); RECOMP_ABI_CALL(0x001D87C0u, sub_001D87C0); /* call 0x001D87C0 */

loc_001D8959: ;
    g_seh_ebp = ebp; sub_001D896C(); return; /* tail jmp 0x001D896C */

}

/**
 * sub_001D895B
 * Original: 0x001D895B - 0x001D8972 (23 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D895B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D895B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D896C; /* je: equal / zero */

loc_001D8960: ;
    PUSH32(esp, 0x80000000u);
    ecx = esi;
    PUSH32(esp, 0x001D896Cu); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D896C: ;
    MEM32(esi + 0x214) = ebx;

    g_seh_ebp = ebp; sub_001D8972(); return; /* fallthrough 0x001D8972 */

}

/**
 * sub_001D896C
 * Original: 0x001D896C - 0x001D8972 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D896C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D896C: ;
    MEM32(esi + 0x214) = ebx;

    g_seh_ebp = ebp; sub_001D8972(); return; /* fallthrough 0x001D8972 */

}

/**
 * sub_001D8972
 * Original: 0x001D8972 - 0x001D8978 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8972(void)
{

loc_001D8972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D897F
 * Original: 0x001D897F - 0x001D8990 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D897F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D897F: ;
    eax = MEM32(ecx + 0x260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8990(); return; } /* je: equal / zero */

loc_001D8989: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_001D8990
 * Original: 0x001D8990 - 0x001D89B2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8990: ;
    eax = MEM32(ecx + 0x220);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x224) (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D89B1; /* jne: not equal / not zero */

loc_001D89A7: ;
    MEM32(ecx + 0x218) = 1;

loc_001D89B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D89B2
 * Original: 0x001D89B2 - 0x001D89D5 (35 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D89B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D89BAu); RECOMP_ABI_CALL(0x001D843Fu, sub_001D843F); /* call 0x001D843F */

loc_001D89BA: ;
    eax = esi + 0x260;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D89D5(); return; } /* je: equal / zero */

loc_001D89C5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x264) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x264;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001D89D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D89D0u); } /* indirect call */
    }

loc_001D89D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D89D5
 * Original: 0x001D89D5 - 0x001D89E3 (14 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89D5(void)
{

loc_001D89D5: ;
    PUSH32(esp, 0x1000);
    ecx = esi;
    PUSH32(esp, 0x001D89E1u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D89E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D89EA
 * Original: 0x001D89EA - 0x001D8A19 (47 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D89EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D89EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFD9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFD9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8A01u); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001D8A01: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -36);
    edi = ecx + 2;
    esi = ebp + -26;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8A19
 * Original: 0x001D8A19 - 0x001D8A77 (94 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8A19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8A19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 9);
    MEM8(ebp + -40) = 0;
    POP32(esp, ecx);
    edi = ebp + -39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = edx + 0x260;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8A51; /* je: equal / zero */

loc_001D8A40: ;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8A4Au); } /* indirect call */
    }

loc_001D8A4D: ;
    ebx = eax;
    goto loc_001D8A54;

loc_001D8A51: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D8A54: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -32);
    edi = edx + 0xA;
    esi = ebp + -38;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8A98
 * Original: 0x001D8A98 - 0x001D8AB0 (24 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8A98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8A98: ;
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
 * sub_001D8B7E
 * Original: 0x001D8B7E - 0x001D8B8A (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8B7E(void)
{

loc_001D8B7E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001D8B87u); RECOMP_ABI_CALL(0x001D88D9u, sub_001D88D9); /* call 0x001D88D9 */

loc_001D8B87: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D8B8A
 * Original: 0x001D8B8A - 0x001D8BAC (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8B8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8B8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x24C);
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) { g_seh_ebp = ebp; sub_001D8CD9(); return; } /* js: sign (negative) */

loc_001D8BAB: ;
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_001D8BAC(); return; /* fallthrough 0x001D8BAC */

}

/**
 * sub_001D8BAC
 * Original: 0x001D8BAC - 0x001D8C4E (162 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8BAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8BAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CB0(); return; } /* je: equal / zero */

loc_001D8BB8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D8BD2; /* je: equal / zero */

loc_001D8BC0: ;
    eax = ecx;
    eax = eax & 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CB0(); return; } /* jne: not equal / not zero */

loc_001D8BD2: ;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CB0(); return; } /* je: equal / zero */

loc_001D8BDC: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(MEM32(ebx + 0x21C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX16(MEM16(eax + 0xC));
    MEM32(ebp + -12) = esi;
    esi = 0x60040000;
    edx = ecx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D8C0A; /* jne: not equal / not zero */

loc_001D8C05: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8C0A; /* jbe: below or equal (unsigned <=) */

loc_001D8C09: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001D8C0A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2A (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CB0(); return; } /* jb: below (unsigned <) */

loc_001D8C13: ;
    SET_LO16(ecx, MEM16(ebp + -12));
    SET_HI8(ebx, LO8(ecx));
    SET_LO8(ebx, HI8(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x5DC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x5DC (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8C4E(); return; } /* ja: above (unsigned >) */

loc_001D8C22: ;
    _fa = (uint32_t)(MEM32(eax + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3AAAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE), 0x3AAAA (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CAA(); return; } /* jne: not equal / not zero */

loc_001D8C2D: ;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CAA(); return; } /* jne: not equal / not zero */

loc_001D8C34: ;
    ecx = ZX16(MEM16(eax + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -12) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    MEM16(eax + 0xC) = LO16(ecx);
    g_seh_ebp = ebp; sub_001D8C51(); return; /* tail jmp 0x001D8C51 */

}

/**
 * sub_001D8C4E
 * Original: 0x001D8C4E - 0x001D8C51 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8C4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8C4E: ;
    esi = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_001D8C51(); return; /* fallthrough 0x001D8C51 */

}

/**
 * sub_001D8C51
 * Original: 0x001D8C51 - 0x001D8C6B (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8C51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8C51: ;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8C6B(); return; } /* jne: not equal / not zero */

loc_001D8C5C: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8C6B(); return; } /* jne: not equal / not zero */

loc_001D8C64: ;
    ecx = 0x1000000;
    g_seh_ebp = ebp; sub_001D8C81(); return; /* tail jmp 0x001D8C81 */

}

/**
 * sub_001D8C6B
 * Original: 0x001D8C6B - 0x001D8C81 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8C6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8C6B: ;
    edi = MEM32(ebp + -8);
    PUSH32(esp, 3);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001D8CAA(); return; } /* jne: not equal / not zero */

loc_001D8C7E: ;
    ecx = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_001D8C81(); return; /* fallthrough 0x001D8C81 */

}

/**
 * sub_001D8C81
 * Original: 0x001D8C81 - 0x001D8CAA (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8C81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8C81: ;
    PUSH32(esp, MEM32(ebp + -12));
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = eax;
    eax = ebp + -40;
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(ebp + -36) = LO16(edx);
    PUSH32(esp, 0x001D8CA8u); RECOMP_ABI_CALL(0x001DF94Fu, sub_001DF94F); /* call 0x001DF94F */

loc_001D8CA8: ;
    g_seh_ebp = ebp; sub_001D8CAD(); return; /* tail jmp 0x001D8CAD */

}

/**
 * sub_001D8CAA
 * Original: 0x001D8CAA - 0x001D8CB0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CAA: ;
    ebx = MEM32(ebp + -8);
    edi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D8CB0(); return; /* fallthrough 0x001D8CB0 */

}

/**
 * sub_001D8CAD
 * Original: 0x001D8CAD - 0x001D8CB0 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CAD: ;
    edi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D8CB0(); return; /* fallthrough 0x001D8CB0 */

}

/**
 * sub_001D8CB0
 * Original: 0x001D8CB0 - 0x001D8CC7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CB0: ;
    MEM32(edi + 4) = 0x800007FDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x248)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x248) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8CC7(); return; } /* jne: not equal / not zero */

loc_001D8CBF: ;
    edi = MEM32(ebx + 0x244);
    g_seh_ebp = ebp; sub_001D8CCA(); return; /* tail jmp 0x001D8CCA */

}

/**
 * sub_001D8CC7
 * Original: 0x001D8CC7 - 0x001D8CCA (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D8CCA(); return; /* fallthrough 0x001D8CCA */

}

/**
 * sub_001D8CCA
 * Original: 0x001D8CCA - 0x001D8CD9 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CCA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) { g_seh_ebp = ebp; sub_001D8BAC(); return; } /* jns: not sign (positive) */

loc_001D8CD8: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D8CD9(); return; /* fallthrough 0x001D8CD9 */

}

/**
 * sub_001D8CD9
 * Original: 0x001D8CD9 - 0x001D8CE3 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CD9: ;
    MEM32(ebx + 0x24C) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8CE3
 * Original: 0x001D8CE3 - 0x001D8D16 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x238;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D84(); return; } /* je: equal / zero */

loc_001D8CFA: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x20 (8-bit) */
    ebx = MEM32(edi + 0x230);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D19(); return; } /* je: equal / zero */

loc_001D8D06: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x22C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D16(); return; } /* jne: not equal / not zero */

loc_001D8D0E: ;
    ebx = MEM32(edi + 0x228);
    g_seh_ebp = ebp; sub_001D8D19(); return; /* tail jmp 0x001D8D19 */

}

/**
 * sub_001D8CEF
 * Original: 0x001D8CEF - 0x001D8D16 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CEF: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D84(); return; } /* je: equal / zero */

loc_001D8CFA: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x20 (8-bit) */
    ebx = MEM32(edi + 0x230);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D19(); return; } /* je: equal / zero */

loc_001D8D06: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x22C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D16(); return; } /* jne: not equal / not zero */

loc_001D8D0E: ;
    ebx = MEM32(edi + 0x228);
    g_seh_ebp = ebp; sub_001D8D19(); return; /* tail jmp 0x001D8D19 */

}

/**
 * sub_001D8D16
 * Original: 0x001D8D16 - 0x001D8D19 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8D16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8D16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D8D19(); return; /* fallthrough 0x001D8D19 */

}

/**
 * sub_001D8D19
 * Original: 0x001D8D19 - 0x001D8D36 (29 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8D19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8D19: ;
    _fa = (uint32_t)(MEM8(ebx + 7)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 7), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D84(); return; } /* jne: not equal / not zero */

loc_001D8D1F: ;
    ecx = ebp;
    PUSH32(esp, 0x001D8D26u); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001D8D26: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x22C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8D36(); return; } /* jne: not equal / not zero */

loc_001D8D2E: ;
    eax = MEM32(edi + 0x228);
    g_seh_ebp = ebp; sub_001D8D39(); return; /* tail jmp 0x001D8D39 */

}

/**
 * sub_001D8D36
 * Original: 0x001D8D36 - 0x001D8D39 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8D36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8D36: ;
    eax = ebx + 8;

    g_seh_ebp = ebp; sub_001D8D39(); return; /* fallthrough 0x001D8D39 */

}

/**
 * sub_001D8D39
 * Original: 0x001D8D39 - 0x001D8D84 (75 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8D39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8D39: ;
    MEM32(edi + 0x230) = eax;
    eax = MEM32(esi + 8);
    eax = eax >> 0x1D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x220) = MEM32(edi + 0x220) + ecx;
    _fa = (uint32_t)(MEM32(edi + 0x220)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    ecx = ZX16(MEM16(esi + 4));
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D8D6Eu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D8D6E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001D8D75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8D6Fu); } /* indirect call */
    }

loc_001D8D75: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001D8D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8D7Cu); } /* indirect call */
    }

loc_001D8D7F: ;
    g_seh_ebp = ebp; sub_001D8CEF(); return; /* tail jmp 0x001D8CEF */

}

/**
 * sub_001D8D84
 * Original: 0x001D8D84 - 0x001D8DAB (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8D84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8D84: ;
    eax = edi + 0x218;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8DAB(); return; } /* je: equal / zero */

loc_001D8D8F: ;
    ecx = MEM32(edi + 0x220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x224) (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D8DAB(); return; } /* jge: greater or equal (signed >=) */

loc_001D8D9D: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001DFA1D(); return; /* tail jmp 0x001DFA1D */

}

/**
 * sub_001D8DAB
 * Original: 0x001D8DAB - 0x001D8DB0 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8DAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8DAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8DB0
 * Original: 0x001D8DB0 - 0x001D8DF2 (66 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8DF2(); return; } /* je: equal / zero */

loc_001D8DC7: ;
    ebx = MEM32(eax);
    eax = MEM32(edi + 8);
    ecx = ZX16(MEM16(edi + 4));
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D8DE2u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D8DE2: ;
    ecx = MEM32(esi + 0x260);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x001D8DEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8DEAu); } /* indirect call */
    }

loc_001D8DED: ;
    g_seh_ebp = ebp; sub_001D8ED6(); return; /* tail jmp 0x001D8ED6 */

}

/**
 * sub_001D8DF2
 * Original: 0x001D8DF2 - 0x001D8E5E (108 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8DF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8DF2: ;
    ecx = edi;
    PUSH32(esp, 0x001D8DF9u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D8DF9: ;
    ecx = ZX16(MEM16(edi + 4));
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 8);
    edi = MEM32(esi + 0x234);
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx + eax * 8 + 0xE;
    ecx = esi + 0x238;
    PUSH32(esp, 0x001D8E21u); RECOMP_ABI_CALL(0x001D7AD7u, sub_001D7AD7); /* call 0x001D7AD7 */

loc_001D8E21: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001D8E2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8E27u); } /* indirect call */
    }

loc_001D8E2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001D8E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8E30u); } /* indirect call */
    }

loc_001D8E36: ;
    MEM32(edi) = eax;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x1000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8E5E(); return; } /* ja: above (unsigned >) */

loc_001D8E4E: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) & 0xDF;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0x80010000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = ebx;
    g_seh_ebp = ebp; sub_001D8EA7(); return; /* tail jmp 0x001D8EA7 */

}

/**
 * sub_001D8E5E
 * Original: 0x001D8E5E - 0x001D8E75 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8E5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8E5E: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x22C) (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8E75(); return; } /* jne: not equal / not zero */

loc_001D8E6D: ;
    edi = MEM32(esi + 0x228);
    g_seh_ebp = ebp; sub_001D8E78(); return; /* tail jmp 0x001D8E78 */

}

/**
 * sub_001D8E75
 * Original: 0x001D8E75 - 0x001D8E78 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8E75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8E75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D8E78(); return; /* fallthrough 0x001D8E78 */

}

/**
 * sub_001D8E78
 * Original: 0x001D8E78 - 0x001D8EA7 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8E78: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x220) = MEM32(esi + 0x220) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x220)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001D8E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8E84u); } /* indirect call */
    }

loc_001D8E8A: ;
    ecx = MEM32(ebp + 8);
    MEM32(edi) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0x80010000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = ebx;
    MEM32(ecx + 4) = eax;

    g_seh_ebp = ebp; sub_001D8EA7(); return; /* fallthrough 0x001D8EA7 */

}

/**
 * sub_001D8EA7
 * Original: 0x001D8EA7 - 0x001D8EB7 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8EA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x22C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8EB7(); return; } /* jne: not equal / not zero */

loc_001D8EAF: ;
    eax = MEM32(esi + 0x228);
    g_seh_ebp = ebp; sub_001D8EBA(); return; /* tail jmp 0x001D8EBA */

}

/**
 * sub_001D8EB7
 * Original: 0x001D8EB7 - 0x001D8EBA (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8EB7: ;
    eax = edi + 8;

    g_seh_ebp = ebp; sub_001D8EBA(); return; /* fallthrough 0x001D8EBA */

}

/**
 * sub_001D8EBA
 * Original: 0x001D8EBA - 0x001D8ED6 (28 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8EBA: ;
    MEM32(esi + 0x220) = MEM32(esi + 0x220) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x220)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x20 (8-bit) */
    MEM32(esi + 0x234) = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8ED6(); return; } /* jne: not equal / not zero */

loc_001D8ECC: ;
    MEM32(-17825468) = 1;

    g_seh_ebp = ebp; sub_001D8ED6(); return; /* fallthrough 0x001D8ED6 */

}

/**
 * sub_001D8ED6
 * Original: 0x001D8ED6 - 0x001D8EDD (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8ED6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8EDD
 * Original: 0x001D8EDD - 0x001D8F0A (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8EDD: ;
    _fa = (uint32_t)(MEM32(ecx + 0x260)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x260), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8F0A(); return; } /* jne: not equal / not zero */

loc_001D8EE6: ;
    _fa = (uint32_t)(MEM32(ecx + 0x220)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x220), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D8EF9; /* jle: less or equal (signed <=) */

loc_001D8EEF: ;
    MEM32(-17825468) = 1;

loc_001D8EF9: ;
    eax = MEM32(ecx + 0x24C);
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 7), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8F0A(); return; } /* jne: not equal / not zero */

loc_001D8F05: ;
    g_seh_ebp = ebp; sub_001D8B8A(); return; /* tail jmp 0x001D8B8A */

}

/**
 * sub_001D8F0A
 * Original: 0x001D8F0A - 0x001D8F0B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8F0A(void)
{

loc_001D8F0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8F0B
 * Original: 0x001D8F0B - 0x001D8F49 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8F0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8F0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ebx + 0x260;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8F49(); return; } /* je: equal / zero */

loc_001D8F1F: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58424456) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x58424456 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8FB7(); return; } /* jne: not equal / not zero */

loc_001D8F2C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8FB7(); return; } /* jb: below (unsigned <) */

loc_001D8F36: ;
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1E0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ecx;
    edx = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D8F47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8F44u); } /* indirect call */
    }

loc_001D8F47: ;
    g_seh_ebp = ebp; sub_001D8FB7(); return; /* tail jmp 0x001D8FB7 */

}

/**
 * sub_001D8F49
 * Original: 0x001D8F49 - 0x001D8FB7 (110 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8F49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8F49: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x1E6;
    edi = ebp + -8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebx + 0x1E0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D8F7B; /* je: equal / zero */

loc_001D8F64: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8F70; /* jne: not equal / not zero */

loc_001D8F69: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8F7B; /* je: equal / zero */

loc_001D8F70: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D8F7B; /* jne: not equal / not zero */

loc_001D8F75: ;
    edi = ebp + -8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_001D8F7B: ;
    PUSH32(esp, 3);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags != 0)) goto loc_001D8FB5; /* je: equal / zero */

loc_001D8F8A: ;
    ecx = ebx;
    PUSH32(esp, 0x001D8F91u); RECOMP_ABI_CALL(0x001D87E8u, sub_001D87E8); /* call 0x001D87E8 */

loc_001D8F91: ;
    eax = MEM32(ebp + -8);
    MEM32(0xFEF000A8u) = eax;
    eax = ZX16(MEM16(ebp + -4));
    MEM32(0xFEF000ACu) = eax;
    esi = ebp + -8;
    edi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x001D8FB5u); RECOMP_ABI_CALL(0x001D87C0u, sub_001D87C0); /* call 0x001D87C0 */

loc_001D8FB5: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D8FB7(); return; /* fallthrough 0x001D8FB7 */

}

/**
 * sub_001D8FB7
 * Original: 0x001D8FB7 - 0x001D8FBC (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8FB7: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8FBC
 * Original: 0x001D8FBC - 0x001D8FE2 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8FBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8FBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x260;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D8FE2(); return; } /* je: equal / zero */

loc_001D8FCB: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58424456) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x58424456 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9021(); return; } /* jne: not equal / not zero */

loc_001D8FD4: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9021(); return; } /* jb: below (unsigned <) */

loc_001D8FDA: ;
    eax = ecx;
    edx = MEM32(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_001D8FE2
 * Original: 0x001D8FE2 - 0x001D9021 (63 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8FE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8FE2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9021(); return; } /* je: equal / zero */

loc_001D8FE9: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9021(); return; } /* jne: not equal / not zero */

loc_001D8FEE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D8FF6u); RECOMP_ABI_CALL(0x001DFA1Du, sub_001DFA1D); /* call 0x001DFA1D */

loc_001D8FF6: ;
    edi = 0x2710;

loc_001D8FFB: ;
    _fa = (uint32_t)(MEM32(esi + 0x238)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x238), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9020; /* je: equal / zero */

loc_001D9004: ;
    ecx = esi;
    MEM32(-17825468) = 1;
    PUSH32(esp, 0x001D9015u); RECOMP_ABI_CALL(0x001D8CE3u, sub_001D8CE3); /* call 0x001D8CE3 */

loc_001D9015: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001D901Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9017u); } /* indirect call */
    }

loc_001D901D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8FFB; /* jne: not equal / not zero */

loc_001D9020: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D9021(); return; /* fallthrough 0x001D9021 */

}

/**
 * sub_001D9021
 * Original: 0x001D9021 - 0x001D9023 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9021(void)
{

loc_001D9021: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9023
 * Original: 0x001D9023 - 0x001D908D (106 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9023: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9085; /* je: equal / zero */

loc_001D902D: ;
    PUSH32(esp, edi);
    edi = 0x2000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D9084; /* jne: not equal / not zero */

loc_001D9037: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D904B; /* je: equal / zero */

loc_001D903C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x250;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x001D904Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9045u); } /* indirect call */
    }

loc_001D904B: ;
    _fa = (uint32_t)(MEM32(esi + 0x260)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x260), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D907C; /* jne: not equal / not zero */

loc_001D9054: ;
    ecx = esi;
    PUSH32(esp, 0x001D905Bu); RECOMP_ABI_CALL(0x001D885Bu, sub_001D885B); /* call 0x001D885B */

loc_001D905B: ;
    _fa = (uint32_t)(MEM8(0x9701D0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9701D0), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D906F; /* je: equal / zero */

loc_001D9064: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9701C0);
    { uint32_t _icall_target = MEM32(0x22BD40); PUSH32(esp, 0x001D906Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9069u); } /* indirect call */
    }

loc_001D906F: ;
    eax = esi + 0x1EC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD58); PUSH32(esp, 0x001D907Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9076u); } /* indirect call */
    }

loc_001D907C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D9084u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D9084: ;
    POP32(esp, edi);

loc_001D9085: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D8465(); return; /* tail jmp 0x001D8465 */

}

/**
 * sub_001D908D
 * Original: 0x001D908D - 0x001D911B (142 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D908D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D908D: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x001D9095u); RECOMP_ABI_CALL(0x001D9023u, sub_001D9023); /* call 0x001D9023 */

loc_001D9095: ;
    PUSH32(esp, 0x4000);
    ecx = ebx;
    PUSH32(esp, 0x001D90A1u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D90A1: ;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 1), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9113; /* je: equal / zero */

loc_001D90A7: ;
    eax = ebx + 0x260;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D90BB; /* je: equal / zero */

loc_001D90B2: ;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001D90BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D90B8u); } /* indirect call */
    }

loc_001D90BB: ;
    PUSH32(esp, edi);
    edi = ebx + 0x238;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9101; /* je: equal / zero */

loc_001D90C7: ;
    PUSH32(esp, esi);

loc_001D90C8: ;
    ecx = edi;
    PUSH32(esp, 0x001D90CFu); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001D90CF: ;
    esi = eax;
    eax = MEM32(esi + 8);
    ecx = ZX16(MEM16(esi + 4));
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D90ECu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001D90EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001D90F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D90EDu); } /* indirect call */
    }

loc_001D90F3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001D90FBu); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

loc_001D90FB: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D90C8; /* jne: not equal / not zero */

loc_001D9100: ;
    POP32(esp, esi);

loc_001D9101: ;
    eax = MEM32(ebx + 0x228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D9113; /* je: equal / zero */

loc_001D910C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB04); PUSH32(esp, 0x001D9113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D910Du); } /* indirect call */
    }

loc_001D9113: ;
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001D849D(); return; /* tail jmp 0x001D849D */

}

/**
 * sub_001D911B
 * Original: 0x001D911B - 0x001D9170 (85 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D911B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D911B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xFFFFFDB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFDB0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D9130u); RECOMP_ABI_CALL(0x001DFFC3u, sub_001DFFC3); /* call 0x001DFFC3 */

loc_001D9130: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D9136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9130u); } /* indirect call */
    }

loc_001D9136: ;
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D9141u); RECOMP_ABI_CALL(0x001D4771u, sub_001D4771); /* call 0x001D4771 */

loc_001D9141: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001D914Eu); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001D914E: ;
    ecx = esi;
    PUSH32(esp, 0x001D9155u); RECOMP_ABI_CALL(0x001DFA1Du, sub_001DFA1D); /* call 0x001DFA1D */

loc_001D9155: ;
    ecx = esi;
    PUSH32(esp, 0x001D915Cu); RECOMP_ABI_CALL(0x001D8FBCu, sub_001D8FBC); /* call 0x001D8FBC */

loc_001D915C: ;
    ecx = esi;
    PUSH32(esp, 0x001D9163u); RECOMP_ABI_CALL(0x001DF220u, sub_001DF220); /* call 0x001DF220 */

loc_001D9163: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D916Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9165u); } /* indirect call */
    }

loc_001D916B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9170
 * Original: 0x001D9170 - 0x001D9181 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9170: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFD9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFD9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D917Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D917Bu); } /* indirect call */
    }

loc_001D917E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9181
 * Original: 0x001D9181 - 0x001D91C3 (66 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9181: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebp + -16) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -14) = LO16(eax);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebp + -20;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFD9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFD9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D91BFu); RECOMP_ABI_CALL(0x001DF94Fu, sub_001DF94F); /* call 0x001DF94F */

loc_001D91BF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D91C3
 * Original: 0x001D91C3 - 0x001D91CE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D91C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D91C3: ;
    _fb = (uint32_t)(0xFFFFFD9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFD9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001DFA1D(); return; /* tail jmp 0x001DFA1D */

}

/**
 * sub_001D91CE
 * Original: 0x001D91CE - 0x001D922A (92 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D91CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D91CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    esi = 0xFEF00000u;
    goto loc_001D920F;

loc_001D91DB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D91EA; /* je: equal / zero */

loc_001D91E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001D91EAu); RECOMP_ABI_CALL(0x001D88F2u, sub_001D88F2); /* call 0x001D88F2 */

loc_001D91EA: ;
    MEM32(-17825408) = edi;
    ecx = ebp;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x001D91F9u); RECOMP_ABI_CALL(0x001D8B8Au, sub_001D8B8A); /* call 0x001D8B8A */

loc_001D91F9: ;
    ecx = ebp;
    PUSH32(esp, 0x001D9200u); RECOMP_ABI_CALL(0x001D8CE3u, sub_001D8CE3); /* call 0x001D8CE3 */

loc_001D9200: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D920F; /* je: equal / zero */

loc_001D9205: ;
    MEM32(-17825468) = 2;

loc_001D920F: ;
    edi = MEM32(-17825408);
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D91DB; /* jne: not equal / not zero */

loc_001D921B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(-17825788) = 0x5F;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D922A
 * Original: 0x001D922A - 0x001D9236 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D922A(void)
{

loc_001D922A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001D9233u); RECOMP_ABI_CALL(0x001D91CEu, sub_001D91CE); /* call 0x001D91CE */

loc_001D9233: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D9236
 * Original: 0x001D9236 - 0x001D928A (84 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9236(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9236: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9247u); RECOMP_ABI_CALL(0x001D8627u, sub_001D8627); /* call 0x001D8627 */

loc_001D9247: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D9611(); return; } /* jl: less (signed <) */

loc_001D924F: ;
    PUSH32(esp, esi);
    esi = ebx + 0x250;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1D911B;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x260) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D92FC(); return; } /* je: equal / zero */

loc_001D9277: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58424436) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x58424436 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D928A(); return; } /* je: equal / zero */

loc_001D9280: ;
    eax = 0x8007277Bu;
    g_seh_ebp = ebp; sub_001D960F(); return; /* tail jmp 0x001D960F */

}

/**
 * sub_001D928A
 * Original: 0x001D928A - 0x001D92CD (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D928A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D928A: ;
    edi = MEM32(0x22BCC0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001D9295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9293u); } /* indirect call */
    }

loc_001D9295: ;
    ecx = MEM32(ebx + 0x260);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x1E6;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebx + 0x10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebx + 7));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D92B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D92B6u); } /* indirect call */
    }

loc_001D92B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D92CD(); return; } /* jge: greater or equal (signed >=) */

loc_001D92C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001D92C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D92C3u); } /* indirect call */
    }

loc_001D92C5: ;
    eax = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_001D960F(); return; /* tail jmp 0x001D960F */

}

/**
 * sub_001D92CD
 * Original: 0x001D92CD - 0x001D92FC (47 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D92CD: ;
    edi = ebx + 0x1E0;
    esi = ebx + 0x1E6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0xC00);
    ecx = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x001D92E8u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D92E8: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D960D(); return; } /* je: equal / zero */

loc_001D92F2: ;
    PUSH32(esp, 0x80000000u);
    g_seh_ebp = ebp; sub_001D9606(); return; /* tail jmp 0x001D9606 */

}
