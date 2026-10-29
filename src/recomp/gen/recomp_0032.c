/**
 * DOAU1 - Recompiled code chunk 32
 * Functions: 250 (0x0011EC60 - 0x00123590)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0011EC60
 * Original: 0x0011EC60 - 0x0011EC88 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EC60: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EC6Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EC6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EC7F; /* jne: not equal / not zero */

loc_0011EC71: ;
    PUSH32(esp, 0x2AE870);
    PUSH32(esp, 0x0011EC7Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EC7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011EC7F: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012E720(); return; /* tail jmp 0x0012E720 */

}

/**
 * sub_0011EC90
 * Original: 0x0011EC90 - 0x0011ECBA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EC90: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EC9Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EC9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ECB1; /* jne: not equal / not zero */

loc_0011ECA1: ;
    PUSH32(esp, 0x2AE89C);
    PUSH32(esp, 0x0011ECABu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011ECAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011ECB1: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012E730(); return; /* tail jmp 0x0012E730 */

}

/**
 * sub_0011ECC0
 * Original: 0x0011ECC0 - 0x0011ECE8 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011ECC0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011ECCAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011ECCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ECDF; /* jne: not equal / not zero */

loc_0011ECD1: ;
    PUSH32(esp, 0x2AE8C8);
    PUSH32(esp, 0x0011ECDBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011ECDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011ECDF: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012E740(); return; /* tail jmp 0x0012E740 */

}

/**
 * sub_0011ECF0
 * Original: 0x0011ECF0 - 0x0011ED1A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011ECF0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011ECFAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011ECFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED11; /* jne: not equal / not zero */

loc_0011ED01: ;
    PUSH32(esp, 0x2AE8F4);
    PUSH32(esp, 0x0011ED0Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011ED0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011ED11: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012E750(); return; /* tail jmp 0x0012E750 */

}

/**
 * sub_0011ED20
 * Original: 0x0011ED20 - 0x0011ED4A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ED20: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0011ED3C; /* jne: not equal / not zero */

loc_0011ED2E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED38u); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_0011ED38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011ED3C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED46u); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_0011ED46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED50
 * Original: 0x0011ED50 - 0x0011ED7A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ED50: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0011ED6C; /* jne: not equal / not zero */

loc_0011ED5E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x27);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED68u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011ED68: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011ED6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x27);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED76u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011ED76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED80
 * Original: 0x0011ED80 - 0x0011EDA5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011ED80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EDA4; /* je: equal / zero */

loc_0011ED88: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = 0x24;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012CB30(); return; /* tail jmp 0x0012CB30 */

loc_0011EDA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EDB0
 * Original: 0x0011EDB0 - 0x0011EDD5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EDB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EDD4; /* je: equal / zero */

loc_0011EDB8: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = 0x25;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012CB30(); return; /* tail jmp 0x0012CB30 */

loc_0011EDD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EDE0
 * Original: 0x0011EDE0 - 0x0011EE25 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EDE0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EDF0u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EDF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EE0D; /* jne: not equal / not zero */

loc_0011EDF7: ;
    PUSH32(esp, 0x2AE920);
    PUSH32(esp, 0x0011EE01u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EE01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011EE0D: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EE17u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EE17: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE30
 * Original: 0x0011EE30 - 0x0011EE58 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EE30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EE3Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EE3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EE51; /* jne: not equal / not zero */

loc_0011EE41: ;
    PUSH32(esp, 0x2AE954);
    PUSH32(esp, 0x0011EE4Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EE4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011EE51: ;
    eax = MEM32(ecx + 0x1D4);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE60
 * Original: 0x0011EE60 - 0x0011EEAC (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE60(void)
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

loc_0011EE60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = MEM32(edi + 0x1DC);
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0011EE98u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011EE98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011EE9E; /* jle: less or equal (signed <=) */

loc_0011EE9C: ;
    eax = esi;

loc_0011EE9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011EEA6u); RECOMP_ABI_CALL(0x0011E820u, sub_0011E820); /* call 0x0011E820 */

loc_0011EEA6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0011EEB0
 * Original: 0x0011EEB0 - 0x0011EECF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EEB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EEBC; /* jne: not equal / not zero */

loc_0011EEBB: ;
    esp += 4; return; /* ret */

loc_0011EEBC: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EEC7u); RECOMP_ABI_CALL(0x0012AB00u, sub_0012AB00); /* call 0x0012AB00 */

loc_0011EEC7: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EED0
 * Original: 0x0011EED0 - 0x0011EF02 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EED0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EEF6; /* je: equal / zero */

loc_0011EED8: ;
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x4C);
    if (CMP_NE(_fa, _fb)) goto loc_0011EEF9; /* jne: not equal / not zero */

loc_0011EEE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EEF6; /* je: equal / zero */

loc_0011EEE6: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EEF6; /* je: equal / zero */

loc_0011EEED: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012AB20(); return; /* tail jmp 0x0012AB20 */

loc_0011EEF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011EEF9: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012AB20(); return; /* tail jmp 0x0012AB20 */

}

/**
 * sub_0011EF10
 * Original: 0x0011EF10 - 0x0011EF28 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011EF24u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EF24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF30
 * Original: 0x0011EF30 - 0x0011EF48 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011EF44u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EF44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF50
 * Original: 0x0011EF50 - 0x0011EF7A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF50: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EF65u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EF65: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4D);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EF75u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EF75: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF80
 * Original: 0x0011EF80 - 0x0011EFAA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF80: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EF95u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EF95: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EFA5u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EFA5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EFB0
 * Original: 0x0011EFB0 - 0x0011EFC0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EFB0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00126F90(); return; /* tail jmp 0x00126F90 */

}

/**
 * sub_0011EFE0
 * Original: 0x0011EFE0 - 0x0011EFF6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EFE0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011EFEEu); RECOMP_ABI_CALL(0x0012CA60u, sub_0012CA60); /* call 0x0012CA60 */

loc_0011EFEE: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F000
 * Original: 0x0011F000 - 0x0011F033 (51 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F000: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F00Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F00A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F01F; /* jne: not equal / not zero */

loc_0011F011: ;
    PUSH32(esp, 0x2AE984);
    PUSH32(esp, 0x0011F01Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F01B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F01F: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F02Fu); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F02F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F040
 * Original: 0x0011F040 - 0x0011F065 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F040: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F04Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F04A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F061; /* jne: not equal / not zero */

loc_0011F051: ;
    PUSH32(esp, 0x2AE9B4);
    PUSH32(esp, 0x0011F05Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F05B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011F061: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F070
 * Original: 0x0011F070 - 0x0011F09A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F070: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F07Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F07A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F091; /* jne: not equal / not zero */

loc_0011F081: ;
    PUSH32(esp, 0x2AE9E0);
    PUSH32(esp, 0x0011F08Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F08B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011F091: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0011E8C0(); return; /* tail jmp 0x0011E8C0 */

}

/**
 * sub_0011F0A0
 * Original: 0x0011F0A0 - 0x0011F0F2 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F0A0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F0B0u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F0B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F0CD; /* jne: not equal / not zero */

loc_0011F0B7: ;
    PUSH32(esp, 0x2AEA10);
    PUSH32(esp, 0x0011F0C1u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F0C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F0CD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F0D3u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F0D3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F0DEu); RECOMP_ABI_CALL(0x0012C7E0u, sub_0012C7E0); /* call 0x0012C7E0 */

loc_0011F0DE: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F100
 * Original: 0x0011F100 - 0x0011F13A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F106u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F106: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F11B; /* jne: not equal / not zero */

loc_0011F10D: ;
    PUSH32(esp, 0x2AEA48);
    PUSH32(esp, 0x0011F117u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F11B: ;
    eax = MEM32(ecx + 0x40);
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F136u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F136: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F140
 * Original: 0x0011F140 - 0x0011F180 (64 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F140: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F14Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F14A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F15F; /* jne: not equal / not zero */

loc_0011F151: ;
    PUSH32(esp, 0x2AEAB0);
    PUSH32(esp, 0x0011F15Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F15B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F15F: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F16Du); RECOMP_ABI_CALL(0x0012E810u, sub_0012E810); /* call 0x0012E810 */

loc_0011F16D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F17F; /* je: equal / zero */

loc_0011F174: ;
    PUSH32(esp, 0x2AEA88);
    PUSH32(esp, 0x0011F17Eu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F17E: ;
    POP32(esp, ecx);

loc_0011F17F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F1C0
 * Original: 0x0011F1C0 - 0x0011F200 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F1C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F1CAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F1CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F1DF; /* jne: not equal / not zero */

loc_0011F1D1: ;
    PUSH32(esp, 0x2AEB3C);
    PUSH32(esp, 0x0011F1DBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F1DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F1DF: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F1EDu); RECOMP_ABI_CALL(0x0012E850u, sub_0012E850); /* call 0x0012E850 */

loc_0011F1ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F1FF; /* je: equal / zero */

loc_0011F1F4: ;
    PUSH32(esp, 0x2AEB10);
    PUSH32(esp, 0x0011F1FEu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F1FE: ;
    POP32(esp, ecx);

loc_0011F1FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F240
 * Original: 0x0011F240 - 0x0011F27E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F240: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F24Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F25F; /* jne: not equal / not zero */

loc_0011F251: ;
    PUSH32(esp, 0x2AEB9C);
    PUSH32(esp, 0x0011F25Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F25B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F25F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F265u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F265: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F27Au); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F27A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F280
 * Original: 0x0011F280 - 0x0011F391 (273 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F280: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F290u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F290: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F2AB; /* jne: not equal / not zero */

loc_0011F297: ;
    PUSH32(esp, 0x2AEBD0);
    PUSH32(esp, 0x0011F2A1u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F2A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F2AB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F2B1u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F2B1: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F2BCu); RECOMP_ABI_CALL(0x0012C7E0u, sub_0012C7E0); /* call 0x0012C7E0 */

loc_0011F2BC: ;
    eax = MEM32(esp + 0xB4);
    ecx = MEM32(esp + 0x3C);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(esp + 0x54);
    edx = eax + 0x18;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(esp + 0x6C);
    edx = eax + 0x30;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(edx + 0x14) = ecx;
    edx = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x88);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x8C);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F3A0
 * Original: 0x0011F3A0 - 0x0011F3D1 (49 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F3A0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F3AAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F3AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F3BF; /* jne: not equal / not zero */

loc_0011F3B1: ;
    PUSH32(esp, 0x2AEC00);
    PUSH32(esp, 0x0011F3BBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F3BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F3BF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F3C5u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F3C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012E7C0(); return; /* tail jmp 0x0012E7C0 */

}

/**
 * sub_0011F3E0
 * Original: 0x0011F3E0 - 0x0011F447 (103 bytes, 38 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F3E0(void)
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

loc_0011F3E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F3EBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F3EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F401; /* jne: not equal / not zero */

loc_0011F3F2: ;
    PUSH32(esp, 0x2AEC2C);
    PUSH32(esp, 0x0011F3FCu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F3FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011F401: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F408u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F408: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281EEC)); /* fmul dword ptr [0x281eec] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x0011F424u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011F424: ;
    ecx = eax;
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F43A; /* jne: not equal / not zero */

loc_0011F439: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011F43A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F441u); RECOMP_ABI_CALL(0x0012E7C0u, sub_0012E7C0); /* call 0x0012E7C0 */

loc_0011F441: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0011F450
 * Original: 0x0011F450 - 0x0011F48A (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F45Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F45B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F473; /* jne: not equal / not zero */

loc_0011F462: ;
    PUSH32(esp, 0x2AEC5C);
    PUSH32(esp, 0x0011F46Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F46C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011F473: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F47Au); RECOMP_ABI_CALL(0x0011F0A0u, sub_0011F0A0); /* call 0x0011F0A0 */

loc_0011F47A: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011F482u); RECOMP_ABI_CALL(0x001210D0u, sub_001210D0); /* call 0x001210D0 */

loc_0011F482: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F490
 * Original: 0x0011F490 - 0x0011F4A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F490: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F4A0u); RECOMP_ABI_CALL(0x0011F100u, sub_0011F100); /* call 0x0011F100 */

loc_0011F4A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F4B0
 * Original: 0x0011F4B0 - 0x0011F4C4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F4B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F4C0u); RECOMP_ABI_CALL(0x0011F100u, sub_0011F100); /* call 0x0011F100 */

loc_0011F4C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F4D0
 * Original: 0x0011F4D0 - 0x0011F54F (127 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F4D0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F4E4u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011F4E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F500; /* jne: not equal / not zero */

loc_0011F4EB: ;
    PUSH32(esp, 0x2AEC8C);
    PUSH32(esp, 0x0011F4F5u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F4F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F500: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F507u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011F507: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F512u); RECOMP_ABI_CALL(0x0012C7E0u, sub_0012C7E0); /* call 0x0012C7E0 */

loc_0011F512: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F518u); RECOMP_ABI_CALL(0x0011F450u, sub_0011F450); /* call 0x0011F450 */

loc_0011F518: ;
    edi = MEM32(esp + 0xC0);
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    PUSH32(esp, 0x0011F527u); RECOMP_ABI_CALL(0x0011F0A0u, sub_0011F0A0); /* call 0x0011F0A0 */

loc_0011F527: ;
    PUSH32(esp, esi);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0011F530u); RECOMP_ABI_CALL(0x001210D0u, sub_001210D0); /* call 0x001210D0 */

loc_0011F530: ;
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0011F539u); RECOMP_ABI_CALL(0x0011EDE0u, sub_0011EDE0); /* call 0x0011EDE0 */

loc_0011F539: ;
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F550
 * Original: 0x0011F550 - 0x0011F657 (263 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F550: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) goto loc_0011F566; /* jg: greater (signed >) */

loc_0011F561: ;
    ecx = 1;

loc_0011F566: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F5B1; /* jne: not equal / not zero */

loc_0011F56B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    MEM32(edx) = 0;
    MEM32(ebp) = 0;
    MEM32(ebx) = 0;
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011F5B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_NE(_fa, _fb)) goto loc_0011F607; /* jne: not equal / not zero */

loc_0011F5B7: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM32(ebx) = 0;
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011F607: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM32(ebx) = 0x5DCC;
    MEM32(edi) = 0x5F0C;
    MEM32(esi) = 0x81C0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F660
 * Original: 0x0011F660 - 0x0011F69E (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F660: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = eax;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F6A0
 * Original: 0x0011F6A0 - 0x0011F6CB (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F6A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011F6B8; /* ja: above (unsigned >) */

loc_0011F6A5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x11F6CC); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0011F6ACu) goto loc_0011F6AC;
    if (_jt == 0x0011F6B2u) goto loc_0011F6B2;
    if (_jt == 0x0011F6C5u) goto loc_0011F6C5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011F6AC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011F6B2: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0011F6B8: ;
    PUSH32(esp, 0x2AED24);
    PUSH32(esp, 0x0011F6C2u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F6C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011F6C5: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F6E0
 * Original: 0x0011F6E0 - 0x0011F6F4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F6E0: ;
    MEM32(eax) = 0x4000;
    MEM32(ecx) = 0x700;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x700) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x700;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F700
 * Original: 0x0011F700 - 0x0011F706 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F700(void)
{

loc_0011F700: ;
    eax = 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F710
 * Original: 0x0011F710 - 0x0011F73E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F723u); RECOMP_ABI_CALL(0x0011D6A0u, sub_0011D6A0); /* call 0x0011D6A0 */

loc_0011F723: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011F72Bu); RECOMP_ABI_CALL(0x0011DAE0u, sub_0011DAE0); /* call 0x0011DAE0 */

loc_0011F72B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = edi + 0x20000;
    if (CMP_EQ(_fa, _fb)) goto loc_0011F73B; /* je: equal / zero */

loc_0011F739: ;
    eax = edi;

loc_0011F73B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F740
 * Original: 0x0011F740 - 0x0011F785 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F740: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(0xA9CA04) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0xA9CA00) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0011F784; /* jle: less or equal (signed <=) */

loc_0011F759: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xA9CA20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xA9CA20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    goto loc_0011F770;

    /* nop */
    /* nop */

loc_0011F770: ;
    esi = MEM32(edx + eax * 4 + 0xA9CA20);
    MEM32(eax * 4 + 0xA9CA20) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F770; /* jl: less (signed <) */

loc_0011F783: ;
    POP32(esp, esi);

loc_0011F784: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F790
 * Original: 0x0011F790 - 0x0011F859 (201 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F790: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1D0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F854; /* je: equal / zero */

loc_0011F7AB: ;
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1F4) (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F7DA; /* jne: not equal / not zero */

loc_0011F7B8: ;
    ecx = MEM32(eax + 0x1F8);
    eax = MEM32(eax + 0x1FC);
    MEM32(esp + 8) = 1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    goto loc_0011F826;

loc_0011F7DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1D4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F7FE; /* jne: not equal / not zero */

loc_0011F7E2: ;
    ecx = MEM32(eax + 0x1D8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x1DC);
    eax = MEM32(eax + 0x1E0);
    MEM32(esp + 8) = edx;
    goto loc_0011F81E;

loc_0011F7FE: ;
    ecx = MEM32(eax + 0x1E8);
    edi = MEM32(eax + 0x1E4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x1EC);
    eax = MEM32(eax + 0x1F0);
    MEM32(esp + 8) = edi;

loc_0011F81E: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;

loc_0011F826: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0011F835u); RECOMP_ABI_CALL(0x0012DAD0u, sub_0012DAD0); /* call 0x0012DAD0 */

loc_0011F835: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F854; /* je: equal / zero */

loc_0011F83D: ;
    PUSH32(esp, 0xFFFFFEC8u);
    PUSH32(esp, 0x0011F847u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011F847: ;
    PUSH32(esp, 0x2AED4C);
    PUSH32(esp, 0x0011F851u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F851: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011F854: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F860
 * Original: 0x0011F860 - 0x0011F873 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F86D; /* jl: less (signed <) */

loc_0011F865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011F86D; /* jg: greater (signed >) */

loc_0011F86A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011F86D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F880
 * Original: 0x0011F880 - 0x0011F8C3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(eax + 0x180) = edi;
    esi = ecx;
    ecx = eax + 0x164;
    MEM32(eax + 0x184) = edx;
    MEM32(eax + 0x188) = 0;
    MEM32(eax + 0x18C) = 0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 4) = esi;
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 0x17C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F8D0
 * Original: 0x0011F8D0 - 0x0011F930 (96 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F8D0: ;
    eax = MEM32(ebx + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F8E8; /* jne: not equal / not zero */

loc_0011F8DA: ;
    PUSH32(esp, 0x2AEDAC);
    PUSH32(esp, 0x0011F8E4u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F8E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011F8E8: ;
    ecx = MEM32(ebx + 0x1C);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = ecx + 3;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F913; /* jge: greater or equal (signed >=) */

loc_0011F902: ;
    PUSH32(esp, 0x2AED70);
    PUSH32(esp, 0x0011F90Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F90C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011F913: ;
    PUSH32(esp, 0x0011F918u); RECOMP_ABI_CALL(0x0011D070u, sub_0011D070); /* call 0x0011D070 */

loc_0011F918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F92C; /* jne: not equal / not zero */

loc_0011F91D: ;
    edx = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011F929u); RECOMP_ABI_CALL(0x00125D30u, sub_00125D30); /* call 0x00125D30 */

loc_0011F929: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011F92C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F930
 * Original: 0x0011F930 - 0x0011F99F (111 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F930: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = ebx + 0x170;
    if (CMP_NE(_fa, _fb)) goto loc_0011F962; /* jne: not equal / not zero */

loc_0011F946: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = ebx + 0x164;
    MEM32(ebx + 0x17C) = eax;
    PUSH32(esp, 0x0011F95Fu); RECOMP_ABI_CALL(0x0011F8D0u, sub_0011F8D0); /* call 0x0011F8D0 */

loc_0011F95F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011F962: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0011F989; /* jge: greater or equal (signed >=) */

loc_0011F979: ;
    PUSH32(esp, 0x2AEDE4);
    PUSH32(esp, 0x0011F983u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011F983: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011F989: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(ebx + 0x17C) = eax;
    PUSH32(esp, 0x0011F99Cu); RECOMP_ABI_CALL(0x0011F8D0u, sub_0011F8D0); /* call 0x0011F8D0 */

loc_0011F99C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F9A0
 * Original: 0x0011F9A0 - 0x0011F9CC (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F9A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F9AAu); RECOMP_ABI_CALL(0x0012E5B0u, sub_0012E5B0); /* call 0x0012E5B0 */

loc_0011F9AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F9CB; /* je: equal / zero */

loc_0011F9B1: ;
    PUSH32(esp, 0xFFFFFECEu);
    PUSH32(esp, 0x0011F9BBu); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011F9BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x2AEE1C;
    g_seh_ebp = ebp; sub_00128830(); return; /* tail jmp 0x00128830 */

loc_0011F9CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F9D0
 * Original: 0x0011F9D0 - 0x0011FA94 (196 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F9D0(void)
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

loc_0011F9D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F9E3u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F9E3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F9EDu); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F9ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F9F7u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011F9F7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x17);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA01u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA01: ;
    ecx = MEM32(esp + 0x44);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x48));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    MEM32(esp + 0x3C) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x0011FA28u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011FA28: ;
    edi = eax;
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FA3E; /* jne: not equal / not zero */

loc_0011FA3D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011FA3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA47u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA47: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA50u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA50: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA59u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA59: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA63u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x33);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA6Du); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA6D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA77u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA77: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA84u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011FA84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA8Eu); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_0011FA8E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0011FAA0
 * Original: 0x0011FAA0 - 0x0011FB03 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FAA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FAAFu); RECOMP_ABI_CALL(0x0012E670u, sub_0012E670); /* call 0x0012E670 */

loc_0011FAAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAC9; /* je: equal / zero */

loc_0011FAB6: ;
    PUSH32(esp, 0x2AEE74);
    PUSH32(esp, 0x0011FAC0u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FAC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011FAC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11D0F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FAD5u); RECOMP_ABI_CALL(0x00129220u, sub_00129220); /* call 0x00129220 */

loc_0011FAD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAF9; /* je: equal / zero */

loc_0011FADC: ;
    PUSH32(esp, 0xFFFFFED1u);
    PUSH32(esp, 0x0011FAE6u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011FAE6: ;
    PUSH32(esp, 0x2AEE3C);
    PUSH32(esp, 0x0011FAF0u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FAF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011FAF9: ;
    PUSH32(esp, 0x0011FAFEu); RECOMP_ABI_CALL(0x0011F8D0u, sub_0011F8D0); /* call 0x0011F8D0 */

loc_0011FAFE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FB10
 * Original: 0x0011FB10 - 0x0011FB2E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FB10: ;
    ecx = MEM32(eax + 0x1E0);
    edx = MEM32(eax + 0x1DC);
    eax = MEM32(eax + 0x1D8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FB2Au); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0011FB2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FB30
 * Original: 0x0011FB30 - 0x0011FB5B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FB30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FB36u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011FB36: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx + 0x18);
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0011FB5A; /* jne: not equal / not zero */

loc_0011FB46: ;
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FB50; /* jne: not equal / not zero */

loc_0011FB4D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011FB50: ;
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FB5A; /* jne: not equal / not zero */

loc_0011FB57: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011FB5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FB60
 * Original: 0x0011FB60 - 0x0011FBEA (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FB60: ;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x200) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x204) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x208) = ecx;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x214;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x7C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBF0
 * Original: 0x0011FBF0 - 0x0011FC11 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011FBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FBF0: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC10; /* je: equal / zero */

loc_0011FBFC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC10; /* je: equal / zero */

loc_0011FC01: ;
    PUSH32(esp, 0x2AEEA8);
    PUSH32(esp, 0x0011FC0Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FC0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FC10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC20
 * Original: 0x0011FC20 - 0x0011FC2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC20(void)
{

loc_0011FC20: ;
    eax = MEM32(esp + 4);
    MEM32(0x2F9B84) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC30
 * Original: 0x0011FC30 - 0x0011FC5C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FC30: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FC4D; /* jne: not equal / not zero */

loc_0011FC39: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC5B; /* je: equal / zero */

loc_0011FC40: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FC5B; /* jne: not equal / not zero */

loc_0011FC47: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0011FC4D: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;

loc_0011FC5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC60
 * Original: 0x0011FC60 - 0x0011FC6B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FC60: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC70
 * Original: 0x0011FC70 - 0x0011FC8B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC70(void)
{

loc_0011FC70: ;
    PUSH32(esp, 0x0011FC75u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011FC75: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC90
 * Original: 0x0011FC90 - 0x0011FCBE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FC90: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x20C);
    edx = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x204)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x204) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011FCA8; /* jbe: below or equal (unsigned <=) */

loc_0011FCA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011FCA8: ;
    eax = MEM32(ecx + 0x208);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x208) = esi;
    MEM32(ecx + 0x20C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FCC0
 * Original: 0x0011FCC0 - 0x0011FCD5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FCC0: ;
    PUSH32(esp, 0x0011FCC5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011FCC5: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0011FCD1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011FCCEu); } /* indirect call */
    }

loc_0011FCD1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FCE0
 * Original: 0x0011FCE0 - 0x0011FCE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FCE0(void)
{

loc_0011FCE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FCF0
 * Original: 0x0011FCF0 - 0x0011FD05 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FCF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FCF0: ;
    PUSH32(esp, 0x0011FCF5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011FCF5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0011FD01u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011FCFEu); } /* indirect call */
    }

loc_0011FD01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FD10
 * Original: 0x0011FD10 - 0x0011FD17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FD10: ;
    MEM32(eax + 0x210) = MEM32(eax + 0x210) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x210)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FD20
 * Original: 0x0011FD20 - 0x0011FD27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FD20: ;
    MEM32(eax + 0x210) = MEM32(eax + 0x210) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x210)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FD30
 * Original: 0x0011FD30 - 0x0011FD37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD30(void)
{

loc_0011FD30: ;
    eax = MEM32(eax + 0x210);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FD40
 * Original: 0x0011FD40 - 0x0011FE0B (203 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FD40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0xA9CA00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FD64; /* je: equal / zero */

loc_0011FD4F: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 0;
    MEM32(ebx) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011FD64: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0011FD84u); RECOMP_ABI_CALL(0x0011F660u, sub_0011F660); /* call 0x0011F660 */

loc_0011FD84: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011FD8Fu); RECOMP_ABI_CALL(0x0011F6A0u, sub_0011F6A0); /* call 0x0011F6A0 */

loc_0011FD8F: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = ebp + eax * 8;
    edx = eax;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    MEM32(ebx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FE10
 * Original: 0x0011FE10 - 0x0011FEA3 (147 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FE10: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = esp + 0x38;
    edi = esp + 0x34;
    ebx = esp + 0x30;
    ecx = ebp;
    PUSH32(esp, 0x0011FE3Du); RECOMP_ABI_CALL(0x0011F550u, sub_0011F550); /* call 0x0011F550 */

loc_0011FE3D: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ebx = esp + 0x24;
    eax = ebp;
    PUSH32(esp, 0x0011FE4Du); RECOMP_ABI_CALL(0x0011FD40u, sub_0011FD40); /* call 0x0011FD40 */

loc_0011FE4D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    eax = esp + 0x34;
    PUSH32(esp, 0x0011FE5Du); RECOMP_ABI_CALL(0x0011F6E0u, sub_0011F6E0); /* call 0x0011F6E0 */

loc_0011FE5D: ;
    ecx = eax;
    PUSH32(esp, 0x0011FE64u); RECOMP_ABI_CALL(0x0011F700u, sub_0011F700); /* call 0x0011F700 */

loc_0011FE64: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = eax + edx + 0x860;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FEB0
 * Original: 0x0011FEB0 - 0x0011FEE1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FEB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FECA; /* jne: not equal / not zero */

loc_0011FEB9: ;
    PUSH32(esp, 0x2AEECC);
    PUSH32(esp, 0x0011FEC3u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FEC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011FECA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FED1u); RECOMP_ABI_CALL(0x0011FE10u, sub_0011FE10); /* call 0x0011FE10 */

loc_0011FED1: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011FED9u); RECOMP_ABI_CALL(0x0011F710u, sub_0011F710); /* call 0x0011F710 */

loc_0011FED9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FEF0
 * Original: 0x0011FEF0 - 0x0011FFF2 (258 bytes, 88 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FEF0: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFDF; /* je: equal / zero */

loc_0011FF01: ;
    ebx = MEM32(esp + 0x80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFDF; /* je: equal / zero */

loc_0011FF10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011FF30; /* jg: greater (signed >) */

loc_0011FF1C: ;
    PUSH32(esp, 0x2AEF24);
    PUSH32(esp, 0x0011FF26u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FF26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011FF30: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xB;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011FF4Au); RECOMP_ABI_CALL(0x0012F8B0u, sub_0012F8B0); /* call 0x0012F8B0 */

loc_0011FF4A: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFC4; /* je: equal / zero */

loc_0011FF55: ;
    SET_LO8(eax, MEM8(esp + 0x3D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFC4; /* je: equal / zero */

loc_0011FF5D: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0011FF66u); RECOMP_ABI_CALL(0x0011FC30u, sub_0011FC30); /* call 0x0011FC30 */

loc_0011FF66: ;
    edx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x68);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, 0x0011FF9Fu); RECOMP_ABI_CALL(0x001215D0u, sub_001215D0); /* call 0x001215D0 */

loc_0011FF9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x0011FFABu); RECOMP_ABI_CALL(0x0011FC60u, sub_0011FC60); /* call 0x0011FC60 */

loc_0011FFAB: ;
    edi = ebx;
    ecx = 0xB;
    esi = esp + 0x10;
    MEM32(esp + 0x10) = eax;
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
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011FFC4: ;
    edi = ebx;
    ecx = 0xB;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011FFDF: ;
    PUSH32(esp, 0x2AEEFC);
    PUSH32(esp, 0x0011FFE9u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011FFE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120000
 * Original: 0x00120000 - 0x0012000E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x210)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x210), 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0012001F(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0012000E(); return; /* fallthrough 0x0012000E */

}

/**
 * sub_0012000E
 * Original: 0x0012000E - 0x00120013 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012000E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012000E: ;
    PUSH32(esp, 0x2AEF50);

    g_seh_ebp = ebp; sub_00120013(); return; /* fallthrough 0x00120013 */

}

/**
 * sub_00120013
 * Original: 0x00120013 - 0x0012001B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120013(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120013: ;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120018: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0012001B(); return; /* fallthrough 0x0012001B */

}

/**
 * sub_0012001B
 * Original: 0x0012001B - 0x0012001F (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012001B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012001B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012001E
 * Original: 0x0012001E - 0x0012001F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012001E(void)
{

loc_0012001E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012001F
 * Original: 0x0012001F - 0x00120070 (81 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012001F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012001F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0012001B(); return; } /* jl: less (signed <) */

loc_00120027: ;
    ecx = MEM32(esi + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012003A; /* je: equal / zero */

loc_00120031: ;
    ecx = esi;
    PUSH32(esp, 0x00120038u); RECOMP_ABI_CALL(0x0011FC90u, sub_0011FC90); /* call 0x0011FC90 */

loc_00120038: ;
    goto loc_00120043;

loc_0012003A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120040u); RECOMP_ABI_CALL(0x0011FCC0u, sub_0011FCC0); /* call 0x0011FCC0 */

loc_00120040: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120043: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012005D; /* je: equal / zero */

loc_00120049: ;
    eax = MEM32(esi + 0x210);
    MEM32(esi + eax * 4 + 0x214) = ecx;
    eax = esi;
    PUSH32(esp, 0x0012005Du); RECOMP_ABI_CALL(0x0011FD10u, sub_0011FD10); /* call 0x0011FD10 */

loc_0012005D: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120070
 * Original: 0x00120070 - 0x00120094 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012008C; /* jne: not equal / not zero */

loc_0012007F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120089u); RECOMP_ABI_CALL(0x0011FCF0u, sub_0011FCF0); /* call 0x0011FCF0 */

loc_00120089: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012008C: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0011FD20(); return; /* tail jmp 0x0011FD20 */

}

/**
 * sub_001200A0
 * Original: 0x001200A0 - 0x001200CF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001200A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001200A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x290;
    ebx = 0x20;
    /* nop */

loc_001200B0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001200C6; /* je: equal / zero */

loc_001200B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001200BDu); RECOMP_ABI_CALL(0x00120070u, sub_00120070); /* call 0x00120070 */

loc_001200BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001200C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001200B0; /* jne: not equal / not zero */

loc_001200CC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001200D0
 * Original: 0x001200D0 - 0x001201A5 (213 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001200D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001200D0: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ecx + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = esi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = ebp + eax * 8;
    eax = MEM32(0xA9CA00);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120172; /* je: equal / zero */

loc_0012013E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012015E; /* jl: less (signed <) */

loc_00120143: ;
    eax = MEM32(0xA9CA04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012015E; /* jl: less (signed <) */

loc_0012014C: ;
    eax = MEM32(0xA9CA20);
    MEM32(edi) = eax;
    ecx = MEM32(0xA9CA24);
    MEM32(edi + 4) = ecx;
    goto loc_0012018C;

loc_0012015E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00120172: ;
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012017Du); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_0012017D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(edi) = eax;
    PUSH32(esp, 0x00120186u); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_00120186: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;

loc_0012018C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120198; /* je: equal / zero */

loc_00120191: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012019F; /* jne: not equal / not zero */

loc_00120198: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012019F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001201B0
 * Original: 0x001201B0 - 0x00120280 (208 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001201B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001201B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x24);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001201D2u); RECOMP_ABI_CALL(0x0011F6A0u, sub_0011F6A0); /* call 0x0011F6A0 */

loc_001201D2: ;
    eax = esi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = edi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = edi + eax * 8;
    eax = MEM32(0xA9CA00);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012027A; /* je: equal / zero */

loc_00120234: ;
    ecx = ebx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120271; /* jl: less (signed <) */

loc_0012023B: ;
    _fa = (uint32_t)(MEM32(0xA9CA04)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9CA04), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120271; /* jl: less (signed <) */

loc_00120243: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001202A3(); return; } /* jle: less or equal (signed <=) */

loc_00120247: ;
    edx = 0xA9CA28;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00120250: ;
    ecx = MEM32(edx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00120261; /* jne: not equal / not zero */

loc_00120259: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_00120261: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00120250; /* jne: not equal / not zero */

loc_00120267: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00120271: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012027A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001202A3(); return; } /* jle: less or equal (signed <=) */

    g_seh_ebp = ebp; sub_00120280(); return; /* fallthrough 0x00120280 */

}

/**
 * sub_00120280
 * Original: 0x00120280 - 0x001202A3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120280: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012028Bu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_0012028B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + edi * 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012029E; /* jne: not equal / not zero */

loc_00120296: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_0012029E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120280; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001202A3(); return; /* fallthrough 0x001202A3 */

}

/**
 * sub_001202A3
 * Original: 0x001202A3 - 0x001202AD (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001202A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001202A3: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001202B0
 * Original: 0x001202B0 - 0x00120732 (1154 bytes, 321 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001202B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001202B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x971368);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x971374);
    PUSH32(esp, 0x971360);
    esi = 0x971380;
    edi = 0x97137C;
    ebx = 0x971364;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120300u); RECOMP_ABI_CALL(0x0011F550u, sub_0011F550); /* call 0x0011F550 */

loc_00120300: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x971378);
    ebx = 0x97136C;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120314u); RECOMP_ABI_CALL(0x0011FD40u, sub_0011FD40); /* call 0x0011FD40 */

loc_00120314: ;
    ecx = esp + 0x20;
    eax = esp + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120321u); RECOMP_ABI_CALL(0x0011F6E0u, sub_0011F6E0); /* call 0x0011F6E0 */

loc_00120321: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120326u); RECOMP_ABI_CALL(0x0011F700u, sub_0011F700); /* call 0x0011F700 */

loc_00120326: ;
    ecx = MEM32(0x971374);
    edx = MEM32(0x971364);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x971368);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + edx + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012034Bu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_0012034B: ;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(0x971360);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012035Eu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_0012035E: ;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, ebx);
    edi = esp + 0x74;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012036Eu); RECOMP_ABI_CALL(0x001200D0u, sub_001200D0); /* call 0x001200D0 */

loc_0012036E: ;
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120382u); RECOMP_ABI_CALL(0x001201B0u, sub_001201B0); /* call 0x001201B0 */

loc_00120382: ;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120392u); RECOMP_ABI_CALL(0x0011F860u, sub_0011F860); /* call 0x0011F860 */

loc_00120392: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001203BB; /* jne: not equal / not zero */

loc_00120399: ;
    edx = MEM32(0x97137C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203A6u); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203A6: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x971380);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203B6u); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203B6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001203C1;

loc_001203BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;

loc_001203C1: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, ebx);
    MEM32(esp + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203D0u); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203D0: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203DFu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203DF: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x50) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203EEu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203EE: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001203FDu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_001203FD: ;
    ecx = eax;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_00120412: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_0012041E: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120715; /* jne: not equal / not zero */

loc_0012042A: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120715; /* jne: not equal / not zero */

loc_00120436: ;
    edx = MEM32(esp + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_00120442: ;
    edx = MEM32(esp + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_0012044E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_00120456: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120715; /* je: equal / zero */

loc_00120462: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120481; /* jne: not equal / not zero */

loc_00120467: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120477; /* je: equal / zero */

loc_0012046F: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120481; /* jne: not equal / not zero */

loc_00120477: ;
    PUSH32(esp, 0x2AEFE4);
    goto loc_0012071A;

loc_00120481: ;
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(0x971370) = eax;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001204A7u); RECOMP_ABI_CALL(0x0011F660u, sub_0011F660); /* call 0x0011F660 */

loc_001204A7: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x20);
    MEM32(0x2F9B48) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(0x2F9B4C) = eax;
    MEM32(0x2F9B58) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(0x2F9B44) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2F9B80) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(0x2F9B50) = ecx;
    MEM32(0x2F9B54) = edx;
    MEM32(0x2F9B5C) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(0x2F9B64) = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x2F9B60) = ecx;
    MEM32(0x2F9B70) = edx;
    if ((_fa == 0)) goto loc_00120581; /* je: equal / zero */

loc_0012050D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00120548; /* je: equal / zero */

loc_00120510: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001205B9; /* jne: not equal / not zero */

loc_00120517: ;
    eax = MEM32(0x2F9B84);
    ecx = 0x11;
    esi = 0x2F9B00;
    edi = esp + 0x58;
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
    ecx = MEM32(0x971370);
    MEM32(ebx + 0x1D8) = ecx;
    edx = MEM32(0x971360);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 0x1DC) = edx;
    goto loc_001205B0;

loc_00120548: ;
    eax = MEM32(0x971370);
    ecx = 0x11;
    esi = 0x2F9AB8;
    edi = esp + 0x58;
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
    MEM32(ebx + 0x1D8) = eax;
    ecx = MEM32(0x971360);
    _fb = (uint32_t)(0xFFFFF800u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1DC) = ecx;
    MEM32(ebx + 0x1E0) = 0x800;
    goto loc_001205B6;

loc_00120581: ;
    edx = MEM32(0x971370);
    eax = MEM32(0x2F9B84);
    ecx = 0x11;
    esi = 0x2F9A70;
    edi = esp + 0x58;
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
    MEM32(ebx + 0x1D8) = edx;
    ecx = MEM32(0x971360);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 0x1DC) = ecx;

loc_001205B0: ;
    MEM32(ebx + 0x1E0) = eax;

loc_001205B6: ;
    esi = MEM32(ebp + 0xC);

loc_001205B9: ;
    ecx = MEM32(0x971374);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(0x2F9B84);
    MEM32(esp + 0x80) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001205DD; /* je: equal / zero */

loc_001205D0: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x971374) = ecx;

loc_001205DD: ;
    eax = MEM32(esi + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001205E5u); RECOMP_ABI_CALL(0x0011F6A0u, sub_0011F6A0); /* call 0x0011F6A0 */

loc_001205E5: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(0x971374);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(0x971368);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x84) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(0x971364);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esp + 0x44);
    edx = esp + 0xA0;
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    MEM32(esp + 0x8C) = ecx;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F9B44);
    MEM32(esp + 0xA4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120660u); RECOMP_ABI_CALL(0x00123750u, sub_00123750); /* call 0x00123750 */

loc_00120660: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00120677; /* jne: not equal / not zero */

loc_0012066A: ;
    PUSH32(esp, 0x2F9B68);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120674u); RECOMP_ABI_CALL(0x001222F0u, sub_001222F0); /* call 0x001222F0 */

loc_00120674: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120677: ;
    ecx = esp + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120683u); RECOMP_ABI_CALL(0x0012E450u, sub_0012E450); /* call 0x0012E450 */

loc_00120683: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001206AC; /* jne: not equal / not zero */

loc_0012068C: ;
    PUSH32(esp, 0xFFFFFECFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120696u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_00120696: ;
    PUSH32(esp, 0x2AEFB8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001206A0u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001206A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001206AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11D0F0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001206B8u); RECOMP_ABI_CALL(0x00129220u, sub_00129220); /* call 0x00129220 */

loc_001206B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001206DF; /* je: equal / zero */

loc_001206BF: ;
    PUSH32(esp, 0xFFFFFED1u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001206C9u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_001206C9: ;
    PUSH32(esp, 0x2AEF90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001206D3u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001206D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001206DF: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + 0x1B8) = edx;
    MEM32(ebx + 0x1BC) = eax;
    PUSH32(esp, ecx);
    edx = 0x40;
    ecx = 0x800;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120709u); RECOMP_ABI_CALL(0x0011F880u, sub_0011F880); /* call 0x0011F880 */

loc_00120709: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00120715: ;
    PUSH32(esp, 0x2AEF74);

loc_0012071A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012071Fu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012071F: ;
    edi = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120729u); RECOMP_ABI_CALL(0x001200A0u, sub_001200A0); /* call 0x001200A0 */

loc_00120729: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120740
 * Original: 0x00120740 - 0x001207E1 (161 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120740: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    esi = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120755u); RECOMP_ABI_CALL(0x0011D6A0u, sub_0011D6A0); /* call 0x0011D6A0 */

loc_00120755: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012075Eu); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_0012075E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012076C; /* jne: not equal / not zero */

loc_00120765: ;
    PUSH32(esp, 0x2AF028);
    goto loc_0012079D;

loc_0012076C: ;
    PUSH32(esp, esi);
    MEM32(edi + 0xB0) = eax;
    MEM32(edi + 0xB4) = ebx;
    PUSH32(esp, 0x0012077Eu); RECOMP_ABI_CALL(0x0011DAE0u, sub_0011DAE0); /* call 0x0011DAE0 */

loc_0012077E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001207C7; /* jne: not equal / not zero */

loc_00120786: ;
    PUSH32(esp, 0x20000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120791u); RECOMP_ABI_CALL(0x00120000u, sub_00120000); /* call 0x00120000 */

loc_00120791: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001207B1; /* jne: not equal / not zero */

loc_00120798: ;
    PUSH32(esp, 0x2AF000);

loc_0012079D: ;
    PUSH32(esp, 0x001207A2u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001207A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001207AAu); RECOMP_ABI_CALL(0x001200A0u, sub_001200A0); /* call 0x001200A0 */

loc_001207AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001207B1: ;
    MEM32(edi + 0x194) = eax;
    MEM32(edi + 0x198) = 0x20000;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001207C7: ;
    MEM32(edi + 0x194) = 0;
    MEM32(edi + 0x198) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001207F0
 * Original: 0x001207F0 - 0x001208C2 (210 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001207F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001208C0; /* je: equal / zero */

loc_001207FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120803u); RECOMP_ABI_CALL(0x0012EAF0u, sub_0012EAF0); /* call 0x0012EAF0 */

loc_00120803: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00120810u); RECOMP_ABI_CALL(0x0011DB50u, sub_0011DB50); /* call 0x0011DB50 */

loc_00120810: ;
    eax = MEM32(esi + 0xAC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120826; /* je: equal / zero */

loc_0012081D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120823u); RECOMP_ABI_CALL(0x0011D6D0u, sub_0011D6D0); /* call 0x0011D6D0 */

loc_00120823: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120826: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120836; /* je: equal / zero */

loc_0012082D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120833u); RECOMP_ABI_CALL(0x00110B30u, sub_00110B30); /* call 0x00110B30 */

loc_00120833: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120836: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120846; /* je: equal / zero */

loc_0012083D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120843u); RECOMP_ABI_CALL(0x0012AB40u, sub_0012AB40); /* call 0x0012AB40 */

loc_00120843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120846: ;
    eax = MEM32(esi + 0x1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120859; /* je: equal / zero */

loc_00120850: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00120856u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00120853u); } /* indirect call */
    }

loc_00120856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120859: ;
    eax = MEM32(esi + 0x1F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012086C; /* je: equal / zero */

loc_00120863: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00120869u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00120866u); } /* indirect call */
    }

loc_00120869: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012086C: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012087C; /* je: equal / zero */

loc_00120873: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120879u); RECOMP_ABI_CALL(0x0011F9A0u, sub_0011F9A0); /* call 0x0011F9A0 */

loc_00120879: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012087C: ;
    eax = esi + 0x294;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120889u); RECOMP_ABI_CALL(0x0012FE90u, sub_0012FE90); /* call 0x0012FE90 */

loc_00120889: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    PUSH32(esp, 0x00120893u); RECOMP_ABI_CALL(0x001200A0u, sub_001200A0); /* call 0x001200A0 */

loc_00120893: ;
    eax = esi;
    PUSH32(esp, 0x0012089Au); RECOMP_ABI_CALL(0x0011FD30u, sub_0011FD30); /* call 0x0011FD30 */

loc_0012089A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001208AB; /* je: equal / zero */

loc_0012089E: ;
    PUSH32(esp, 0x2AF04C);
    PUSH32(esp, 0x001208A8u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001208A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001208AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xAE;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x2F9A28;
    POP32(esp, edi);

loc_001208C0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001208D0
 * Original: 0x001208D0 - 0x00120B82 (690 bytes, 241 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001208D0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001208F0; /* jne: not equal / not zero */

loc_001208DC: ;
    PUSH32(esp, 0x2AF1A0);
    PUSH32(esp, 0x001208E6u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001208E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001208E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001208F0: ;
    ecx = ebx;
    PUSH32(esp, 0x001208F7u); RECOMP_ABI_CALL(0x0011FBF0u, sub_0011FBF0); /* call 0x0011FBF0 */

loc_001208F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001208E9; /* jne: not equal / not zero */

loc_001208FC: ;
    PUSH32(esp, 0x00120901u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_00120901: ;
    MEM32(esp + 4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    goto loc_00120910;

    /* nop */

loc_00120910: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00120924; /* je: equal / zero */

loc_00120919: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120910; /* jl: less (signed <) */

loc_00120924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120945; /* jne: not equal / not zero */

loc_00120929: ;
    PUSH32(esp, 0xFFFFFFF5u);
    PUSH32(esp, 0x00120930u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_00120930: ;
    PUSH32(esp, 0x2AF150);
    PUSH32(esp, 0x0012093Au); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012093A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120945: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012094Bu); RECOMP_ABI_CALL(0x0011FB30u, sub_0011FB30); /* call 0x0011FB30 */

loc_0012094B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120968; /* jne: not equal / not zero */

loc_00120953: ;
    PUSH32(esp, 0x2AF114);
    PUSH32(esp, 0x0012095Du); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012095D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120968: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xAE;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0x0012097Eu); RECOMP_ABI_CALL(0x0011FB60u, sub_0011FB60); /* call 0x0011FB60 */

loc_0012097E: ;
    PUSH32(esp, ebx);
    edi = ebp + 0xC;
    ecx = 0xC;
    esi = ebx;
    PUSH32(esp, ebp);
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
    PUSH32(esp, 0x00120991u); RECOMP_ABI_CALL(0x001202B0u, sub_001202B0); /* call 0x001202B0 */

loc_00120991: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(ebp + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001209A9; /* jne: not equal / not zero */

loc_0012099F: ;
    PUSH32(esp, 0x2AF0F0);
    goto loc_00120B48;

loc_001209A9: ;
    ebx = ebp;
    PUSH32(esp, 0x001209B0u); RECOMP_ABI_CALL(0x0011F8D0u, sub_0011F8D0); /* call 0x0011F8D0 */

loc_001209B0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    esi = esp + 0x30;
    edi = esp + 0x34;
    ebx = esp + 0x38;
    PUSH32(esp, 0x001209D4u); RECOMP_ABI_CALL(0x0011F550u, sub_0011F550); /* call 0x0011F550 */

loc_001209D4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001209EBu); RECOMP_ABI_CALL(0x0011F9D0u, sub_0011F9D0); /* call 0x0011F9D0 */

loc_001209EB: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    PUSH32(esp, 0x001209F5u); RECOMP_ABI_CALL(0x0011FB10u, sub_0011FB10); /* call 0x0011FB10 */

loc_001209F5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x1D4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00120A0B; /* jne: not equal / not zero */

loc_00120A01: ;
    PUSH32(esp, 0x2AF0CC);
    goto loc_00120B48;

loc_00120A0B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00120A12u); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_00120A12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x1F4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00120A29; /* jne: not equal / not zero */

loc_00120A1F: ;
    PUSH32(esp, 0x2AF0A8);
    goto loc_00120B48;

loc_00120A29: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ebp) = 0x2F9A28;
    MEM32(ebp + 0x3C) = 1;
    MEM32(ebp + 0x6C) = ebx;
    MEM32(ebp + 8) = ebx;
    ecx = MEM32(esi + 0x20);
    edi = ebp + 0x48;
    PUSH32(esp, edi);
    MEM32(ebp + 0x50) = ecx;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM32(ebp + 0x54) = edx;
    PUSH32(esp, 0x00120A60u); RECOMP_ABI_CALL(0x0012CAC0u, sub_0012CAC0); /* call 0x0012CAC0 */

loc_00120A60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A69; /* je: equal / zero */

loc_00120A67: ;
    MEM32(edi) = ebx;

loc_00120A69: ;
    PUSH32(esp, ebx);
    edi = 1;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x70) = edi;
    MEM8(ebp + 0x74) = LO8(ebx);
    MEM8(ebp + 0x75) = LO8(ebx);
    MEM8(ebp + 0x76) = LO8(ebx);
    MEM8(ebp + 0x77) = LO8(ebx);
    MEM32(ebp + 0x60) = ebx;
    PUSH32(esp, 0x00120A87u); RECOMP_ABI_CALL(0x00128BF0u, sub_00128BF0); /* call 0x00128BF0 */

loc_00120A87: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120A8Eu); RECOMP_ABI_CALL(0x00128C10u, sub_00128C10); /* call 0x00128C10 */

loc_00120A8E: ;
    ecx = MEM32(ebp + 0x1D4);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x88) = ebx;
    PUSH32(esp, 0x00120AA3u); RECOMP_ABI_CALL(0x0012AB30u, sub_0012AB30); /* call 0x0012AB30 */

loc_00120AA3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00120ADF; /* je: equal / zero */

loc_00120AAE: ;
    PUSH32(esp, 0x00120AB3u); RECOMP_ABI_CALL(0x0012EC80u, sub_0012EC80); /* call 0x0012EC80 */

loc_00120AB3: ;
    edx = MEM32(ebp + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120ABFu); RECOMP_ABI_CALL(0x001105A0u, sub_001105A0); /* call 0x001105A0 */

loc_00120ABF: ;
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x78) = ebx;
    PUSH32(esp, 0x00120ACFu); RECOMP_ABI_CALL(0x00110670u, sub_00110670); /* call 0x00110670 */

loc_00120ACF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    PUSH32(esp, 0x00120AD9u); RECOMP_ABI_CALL(0x00120740u, sub_00120740); /* call 0x00120740 */

loc_00120AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120AF1; /* jne: not equal / not zero */

loc_00120ADE: ;
    PUSH32(esp, ebp);

loc_00120ADF: ;
    PUSH32(esp, 0x00120AE4u); RECOMP_ABI_CALL(0x001207F0u, sub_001207F0); /* call 0x001207F0 */

loc_00120AE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120AF1: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0xB4);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120B0Cu); RECOMP_ABI_CALL(0x0011D6C0u, sub_0011D6C0); /* call 0x0011D6C0 */

loc_00120B0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120B1A; /* jne: not equal / not zero */

loc_00120B13: ;
    PUSH32(esp, 0x2AF08C);
    goto loc_00120B48;

loc_00120B1A: ;
    MEM32(ebp + 0xAC) = eax;
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B2Au); RECOMP_ABI_CALL(0x0011D880u, sub_0011D880); /* call 0x0011D880 */

loc_00120B2A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B30u); RECOMP_ABI_CALL(0x0011DB00u, sub_0011DB00); /* call 0x0011DB00 */

loc_00120B30: ;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x190) = eax;
    PUSH32(esp, 0x00120B3Cu); RECOMP_ABI_CALL(0x0011DB70u, sub_0011DB70); /* call 0x0011DB70 */

loc_00120B3C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120B60; /* je: equal / zero */

loc_00120B43: ;
    PUSH32(esp, 0x2AF064);

loc_00120B48: ;
    PUSH32(esp, 0x00120B4Du); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120B4D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B53u); RECOMP_ABI_CALL(0x001207F0u, sub_001207F0); /* call 0x001207F0 */

loc_00120B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120B60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B66u); RECOMP_ABI_CALL(0x0011DBB0u, sub_0011DBB0); /* call 0x0011DBB0 */

loc_00120B66: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B6Cu); RECOMP_ABI_CALL(0x001211A0u, sub_001211A0); /* call 0x001211A0 */

loc_00120B6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B72u); RECOMP_ABI_CALL(0x001218C0u, sub_001218C0); /* call 0x001218C0 */

loc_00120B72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120B90
 * Original: 0x00120B90 - 0x00120BBA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120B9Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_00120B9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120BB1; /* jne: not equal / not zero */

loc_00120BA2: ;
    PUSH32(esp, 0x2AF1CC);
    PUSH32(esp, 0x00120BACu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120BAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00120BB1: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120BC0
 * Original: 0x00120BC0 - 0x00120BC8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BC0(void)
{

loc_00120BC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_00120BD0
 * Original: 0x00120BD0 - 0x00120BF8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120BD0: ;
    eax = MEM32(esi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00120BEE; /* jge: greater or equal (signed >=) */

loc_00120BDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120BE1u); RECOMP_ABI_CALL(0x0011E5E0u, sub_0011E5E0); /* call 0x0011E5E0 */

loc_00120BE1: ;
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1A4) = ecx;
    esp += 4; return; /* ret */

loc_00120BEE: ;
    edx = MEM32(edi + 0x2C);
    MEM32(esi + 0x1A4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00120C00
 * Original: 0x00120C00 - 0x00120C56 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120C00: ;
    eax = MEM32(eax + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 0x17C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00120C1Eu); RECOMP_ABI_CALL(0x0011D070u, sub_0011D070); /* call 0x0011D070 */

loc_00120C1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120C31; /* jne: not equal / not zero */

loc_00120C23: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x164;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120C3D; /* jne: not equal / not zero */

loc_00120C31: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ebx + 0x40) = eax;
    MEM32(ebx + 0x44) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00120C3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120C4C; /* je: equal / zero */

loc_00120C41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120C4C; /* jle: less or equal (signed <=) */

loc_00120C46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00120C4C: ;
    MEM32(ebx + 0x40) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x44) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120C60
 * Original: 0x00120C60 - 0x00120C76 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120C60: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120C72u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_00120C72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120C80
 * Original: 0x00120C80 - 0x00120C9D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120C80: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00120C97; /* je: equal / zero */

loc_00120C87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00120C91; /* je: equal / zero */

loc_00120C8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 3;
    esp += 4; return; /* ret */

loc_00120C91: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00120C97: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120CA0
 * Original: 0x00120CA0 - 0x00120CD6 (54 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120CA0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00120CC3; /* ja: above (unsigned >) */

loc_00120CAA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x120CD8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00120CB1u) goto loc_00120CB1;
    if (_jt == 0x00120CB7u) goto loc_00120CB7;
    if (_jt == 0x00120CBDu) goto loc_00120CBD;
    if (_jt == 0x00120CD0u) goto loc_00120CD0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00120CB1: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00120CB7: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00120CBD: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00120CC3: ;
    PUSH32(esp, 0x2AF1FC);
    PUSH32(esp, 0x00120CCDu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120CCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120CD0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120CF0
 * Original: 0x00120CF0 - 0x00120D44 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120CF0: ;
    eax = MEM32(ecx + 0x58);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120D12; /* jle: less or equal (signed <=) */

loc_00120CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120D0B; /* jle: less or equal (signed <=) */

loc_00120CFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120D12; /* jne: not equal / not zero */

loc_00120D04: ;
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120D1F; /* jne: not equal / not zero */

loc_00120D0B: ;
    esi = 2;
    goto loc_00120D1F;

loc_00120D12: ;
    PUSH32(esp, 0x2AF224);
    PUSH32(esp, 0x00120D1Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120D1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120D1F: ;
    PUSH32(esp, 0x00120D24u); RECOMP_ABI_CALL(0x0011D070u, sub_0011D070); /* call 0x0011D070 */

loc_00120D24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120D40; /* jne: not equal / not zero */

loc_00120D29: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120D33u); RECOMP_ABI_CALL(0x0011DEE0u, sub_0011DEE0); /* call 0x0011DEE0 */

loc_00120D33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00120D42; /* je: equal / zero */

loc_00120D40: ;
    eax = esi;

loc_00120D42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120D50
 * Original: 0x00120D50 - 0x00120D9D (77 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120D50(void)
{

loc_00120D50: ;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x8C) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x90) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x6C);
    MEM32(eax + 0x94) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x6D);
    MEM32(eax + 0x98) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x6E);
    MEM32(eax + 0x9C) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0xA0) = edx;
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120DA0
 * Original: 0x00120DA0 - 0x00120E91 (241 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120DA0: ;
    eax = MEM32(eax + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0x00120DB2u); RECOMP_ABI_CALL(0x0011D070u, sub_0011D070); /* call 0x0011D070 */

loc_00120DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120E8B; /* jne: not equal / not zero */

loc_00120DBB: ;
    eax = MEM32(ebx + 0x180);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E8A; /* je: equal / zero */

loc_00120DCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E5F; /* je: equal / zero */

loc_00120DD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120E5F; /* jle: less or equal (signed <=) */

loc_00120DDD: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120DF4u); RECOMP_ABI_CALL(0x00130270u, sub_00130270); /* call 0x00130270 */

loc_00120DF4: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E67; /* je: equal / zero */

loc_00120DFF: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120E67; /* jle: less or equal (signed <=) */

loc_00120E07: ;
    ecx = MEM32(ebx + 0x184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120E15; /* jle: less or equal (signed <=) */

loc_00120E11: ;
    MEM32(esp + 0xC) = ecx;

loc_00120E15: ;
    edi = MEM32(ebx + 0x180);
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
    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0x180);
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
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(esp + 0xC);
    MEM32(ebx + 0x188) = ecx;
    MEM32(ebx + 0x18C) = edx;
    goto loc_00120E73;

loc_00120E5F: ;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = ebp;

loc_00120E67: ;
    MEM32(ebx + 0x188) = ebp;
    MEM32(ebx + 0x18C) = ebp;

loc_00120E73: ;
    eax = MEM32(ebx + 0x18C);
    ecx = MEM32(ebx + 0x188);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00120E87u); RECOMP_ABI_CALL(0x0011DE80u, sub_0011DE80); /* call 0x0011DE80 */

loc_00120E87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120E8A: ;
    POP32(esp, ebp);

loc_00120E8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120EA0
 * Original: 0x00120EA0 - 0x00120EBD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EA0(void)
{

loc_00120EA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x188);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x18C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00120EC0
 * Original: 0x00120EC0 - 0x00120ED2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120EC0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x188);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00120EE0
 * Original: 0x00120EE0 - 0x00120EFD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120EE0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00120EF7; /* je: equal / zero */

loc_00120EE7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00120EF1; /* je: equal / zero */

loc_00120EEA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 3;
    esp += 4; return; /* ret */

loc_00120EF1: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00120EF7: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120F00
 * Original: 0x00120F00 - 0x00120F36 (54 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120F00: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00120F23; /* ja: above (unsigned >) */

loc_00120F0A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x120F38); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00120F11u) goto loc_00120F11;
    if (_jt == 0x00120F17u) goto loc_00120F17;
    if (_jt == 0x00120F1Du) goto loc_00120F1D;
    if (_jt == 0x00120F30u) goto loc_00120F30;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00120F11: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00120F17: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00120F1D: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00120F23: ;
    PUSH32(esp, 0x2AF258);
    PUSH32(esp, 0x00120F2Du); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00120F2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120F30: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120F50
 * Original: 0x00120F50 - 0x00120F7E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F50(void)
{

loc_00120F50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    MEM32(ecx + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00120F80
 * Original: 0x00120F80 - 0x00120FE1 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120F80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120F8Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_00120F8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120FA0; /* jne: not equal / not zero */

loc_00120F92: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2AF27C;
    g_seh_ebp = ebp; sub_00128830(); return; /* tail jmp 0x00128830 */

loc_00120FA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x84);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x7C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120FB8u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_00120FB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120FDC; /* jle: less or equal (signed <=) */

loc_00120FBF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120FC6u); RECOMP_ABI_CALL(0x0012DA80u, sub_0012DA80); /* call 0x0012DA80 */

loc_00120FC6: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x80) = eax;

loc_00120FDC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120FF0
 * Original: 0x00120FF0 - 0x00121026 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120FFBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_00120FFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121013; /* jne: not equal / not zero */

loc_00121002: ;
    PUSH32(esp, 0x2AF2AC);
    PUSH32(esp, 0x0012100Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012100C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121013: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121019u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_00121019: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00123A90(); return; /* tail jmp 0x00123A90 */

}

/**
 * sub_00121030
 * Original: 0x00121030 - 0x00121091 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012103Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0012103B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121065; /* jne: not equal / not zero */

loc_00121042: ;
    PUSH32(esp, 0x2AF2E0);
    PUSH32(esp, 0x0012104Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012104C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121065: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012106Cu); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0012106C: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012107Cu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0012107C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012108E; /* jl: less (signed <) */

loc_00121086: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012108E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001210A0
 * Original: 0x001210A0 - 0x001210C1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001210A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001210A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x80);
    eax = MEM32(eax + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001210B6; /* jle: less or equal (signed <=) */

loc_001210B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001210B6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001210D0
 * Original: 0x001210D0 - 0x001210FB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001210D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001210D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001210DBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_001210DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001210F3; /* jne: not equal / not zero */

loc_001210E2: ;
    PUSH32(esp, 0x2AF314);
    PUSH32(esp, 0x001210ECu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001210EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001210F3: ;
    eax = MEM32(esi + 0x88);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121100
 * Original: 0x00121100 - 0x0012111C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121100: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012110Bu); RECOMP_ABI_CALL(0x00130FF0u, sub_00130FF0); /* call 0x00130FF0 */

loc_0012110B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121117; /* jne: not equal / not zero */

loc_00121112: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00121117: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121120
 * Original: 0x00121120 - 0x00121157 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121120: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121130u); RECOMP_ABI_CALL(0x00131600u, sub_00131600); /* call 0x00131600 */

loc_00121130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121142; /* je: equal / zero */

loc_00121137: ;
    eax = MEM32(esp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00121150; /* je: equal / zero */

loc_0012113D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00121149; /* je: equal / zero */

loc_00121142: ;
    eax = 0x11;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00121149: ;
    eax = 0x41;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00121150: ;
    eax = 0x21;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121160
 * Original: 0x00121160 - 0x0012117C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121160: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012116Bu); RECOMP_ABI_CALL(0x00130ED0u, sub_00130ED0); /* call 0x00130ED0 */

loc_0012116B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121177; /* jne: not equal / not zero */

loc_00121172: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00121177: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121180
 * Original: 0x00121180 - 0x0012119C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121180: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012118Bu); RECOMP_ABI_CALL(0x00130F00u, sub_00130F00); /* call 0x00130F00 */

loc_0012118B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121197; /* jne: not equal / not zero */

loc_00121192: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00121197: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001211A0
 * Original: 0x001211A0 - 0x001212B8 (280 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001211A0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xC0) = ecx;
    edx = 0x11;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(eax + 0xC4) = ecx;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = edx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0xE0) = ecx;
    MEM32(eax + 0xE4) = ecx;
    MEM32(eax + 0xE8) = edx;
    MEM32(eax + 0xEC) = ecx;
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0xF4) = ecx;
    MEM32(eax + 0xF8) = ecx;
    MEM32(eax + 0xFC) = edx;
    MEM32(eax + 0x100) = ecx;
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0x10C) = ecx;
    MEM32(eax + 0x110) = edx;
    MEM32(eax + 0x114) = ecx;
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x11C) = ecx;
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x124) = edx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    MEM32(eax + 0x138) = edx;
    MEM32(eax + 0x13C) = ecx;
    MEM32(eax + 0x140) = ecx;
    MEM32(eax + 0x144) = ecx;
    MEM32(eax + 0x148) = ecx;
    MEM32(eax + 0x14C) = edx;
    MEM32(eax + 0x150) = ecx;
    MEM32(eax + 0x154) = ecx;
    MEM32(eax + 0x158) = ecx;
    MEM32(eax + 0x15C) = ecx;
    MEM32(eax + 0x160) = edx;
    PUSH32(esp, 0x001212B4u); RECOMP_ABI_CALL(0x0011D8E0u, sub_0011D8E0); /* call 0x0011D8E0 */

loc_001212B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001212C0
 * Original: 0x001212C0 - 0x00121316 (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001212C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE0);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001212D6u); RECOMP_ABI_CALL(0x00130C90u, sub_00130C90); /* call 0x00130C90 */

loc_001212D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012130F; /* je: equal / zero */

loc_001212DD: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012130F; /* je: equal / zero */

loc_001212E5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001212F5u); RECOMP_ABI_CALL(0x00131420u, sub_00131420); /* call 0x00131420 */

loc_001212F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012130F; /* je: equal / zero */

loc_001212FC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121308; /* jne: not equal / not zero */

loc_00121303: ;
    edi = 1;

loc_00121308: ;
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012130F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121320
 * Original: 0x00121320 - 0x00121333 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121320(void)
{

loc_00121320: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_00121340
 * Original: 0x00121340 - 0x00121353 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121340(void)
{

loc_00121340: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_00121360
 * Original: 0x00121360 - 0x00121373 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121360(void)
{

loc_00121360: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xD4);
    esp += 4; return; /* ret */

}

/**
 * sub_00121380
 * Original: 0x00121380 - 0x0012138B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121380(void)
{

loc_00121380: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xBC);
    esp += 4; return; /* ret */

}

/**
 * sub_00121390
 * Original: 0x00121390 - 0x001213BE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012139Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0012139B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001213B3; /* jne: not equal / not zero */

loc_001213A2: ;
    PUSH32(esp, 0x2AF348);
    PUSH32(esp, 0x001213ACu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001213AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001213B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001213B9u); RECOMP_ABI_CALL(0x00120BC0u, sub_00120BC0); /* call 0x00120BC0 */

loc_001213B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001213C0
 * Original: 0x001213C0 - 0x001214FC (316 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001213C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x001213E2u); RECOMP_ABI_CALL(0x00120C80u, sub_00120C80); /* call 0x00120C80 */

loc_001213E2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0012140Au); RECOMP_ABI_CALL(0x00120CA0u, sub_00120CA0); /* call 0x00120CA0 */

loc_0012140A: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x18);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x50;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0x0012143Bu); RECOMP_ABI_CALL(0x00129C00u, sub_00129C00); /* call 0x00129C00 */

loc_0012143B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012144F; /* je: equal / zero */

loc_00121442: ;
    PUSH32(esp, 0x2AF378);
    PUSH32(esp, 0x0012144Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012144C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012144F: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0x0012145Du); RECOMP_ABI_CALL(0x00120C60u, sub_00120C60); /* call 0x00120C60 */

loc_0012145D: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x00121471u); RECOMP_ABI_CALL(0x00120C60u, sub_00120C60); /* call 0x00120C60 */

loc_00121471: ;
    ebx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ebx + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ebx + 0x18) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 0x1C) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(ebx + 0x20) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(ebx + 0x2C) = edx;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = esi;
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x38) = ecx;
    MEM32(ebx + 0x3C) = edx;
    PUSH32(esp, 0x001214E4u); RECOMP_ABI_CALL(0x00120C00u, sub_00120C00); /* call 0x00120C00 */

loc_001214E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x50;
    ecx = 0xE;
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
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121500
 * Original: 0x00121500 - 0x0012152E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121500: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012151Bu); RECOMP_ABI_CALL(0x001238B0u, sub_001238B0); /* call 0x001238B0 */

loc_0012151B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012152Au); RECOMP_ABI_CALL(0x00120F50u, sub_00120F50); /* call 0x00120F50 */

loc_0012152A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121530
 * Original: 0x00121530 - 0x001215CE (158 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121530: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121546u); RECOMP_ABI_CALL(0x00120EE0u, sub_00120EE0); /* call 0x00120EE0 */

loc_00121546: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    ebp = MEM32(esi + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x18);
    ebx = eax;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00121569u); RECOMP_ABI_CALL(0x00120F00u, sub_00120F00); /* call 0x00120F00 */

loc_00121569: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x3C);
    esi = MEM32(esi + 0x2C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ecx + 0x20) = edi;
    edi = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x2C) = esi;
    POP32(esp, esi);
    MEM32(ecx) = ebp;
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001215D0
 * Original: 0x001215D0 - 0x0012160D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001215D0: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001216A0(); return; } /* jb: below (unsigned <) */

loc_001215EA: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001216A0(); return; } /* je: equal / zero */

loc_001215F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 2;
    ebx = ecx + 0x800;
    edi = eax + -2048;
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00121610(); return; /* tail jmp 0x00121610 */

}

/**
 * sub_00121610
 * Original: 0x00121610 - 0x001216A0 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121610: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121617u); RECOMP_ABI_CALL(0x00130BF0u, sub_00130BF0); /* call 0x00130BF0 */

loc_00121617: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121650; /* je: equal / zero */

loc_00121620: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012162Bu); RECOMP_ABI_CALL(0x00131650u, sub_00131650); /* call 0x00131650 */

loc_0012162B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012163A; /* je: equal / zero */

loc_00121632: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121667; /* jne: not equal / not zero */

loc_0012163A: ;
    eax = MEM32(esp + 0x1C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, 0x0012164Du); RECOMP_ABI_CALL(0x00130C50u, sub_00130C50); /* call 0x00130C50 */

loc_0012164D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121650: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x800;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00121610; /* jle: less or equal (signed <=) */

loc_00121662: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00121667: ;
    ecx = esi;
    PUSH32(esp, 0x0012166Eu); RECOMP_ABI_CALL(0x00121100u, sub_00121100); /* call 0x00121100 */

loc_0012166E: ;
    edi = MEM32(esp + 0x1C);
    ecx = esi;
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x0012167Cu); RECOMP_ABI_CALL(0x00121120u, sub_00121120); /* call 0x00121120 */

loc_0012167C: ;
    ecx = esi;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, 0x00121686u); RECOMP_ABI_CALL(0x00121180u, sub_00121180); /* call 0x00121180 */

loc_00121686: ;
    ecx = esi;
    MEM32(edi + 0x1C) = eax;
    PUSH32(esp, 0x00121690u); RECOMP_ABI_CALL(0x00121160u, sub_00121160); /* call 0x00121160 */

loc_00121690: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x00121699u); RECOMP_ABI_CALL(0x00130C50u, sub_00130C50); /* call 0x00130C50 */

loc_00121699: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001216A0(); return; /* fallthrough 0x001216A0 */

}

/**
 * sub_001216A0
 * Original: 0x001216A0 - 0x001216A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216A0(void)
{

loc_001216A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001216B0
 * Original: 0x001216B0 - 0x00121794 (228 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001216B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00121792; /* jb: below (unsigned <) */

loc_001216CB: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121792; /* je: equal / zero */

loc_001216D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001216DFu); RECOMP_ABI_CALL(0x00130BF0u, sub_00130BF0); /* call 0x00130BF0 */

loc_001216DF: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121791; /* je: equal / zero */

loc_001216EC: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001216F7u); RECOMP_ABI_CALL(0x00131650u, sub_00131650); /* call 0x00131650 */

loc_001216F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121788; /* je: equal / zero */

loc_00121702: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121788; /* je: equal / zero */

loc_0012170A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00121711u); RECOMP_ABI_CALL(0x001212C0u, sub_001212C0); /* call 0x001212C0 */

loc_00121711: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0012171Au); RECOMP_ABI_CALL(0x00121100u, sub_00121100); /* call 0x00121100 */

loc_0012171A: ;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00121723u); RECOMP_ABI_CALL(0x00121120u, sub_00121120); /* call 0x00121120 */

loc_00121723: ;
    ecx = MEM32(edi + 0xC0);
    edx = MEM32(edi + 0xB8);
    MEM32(esp + 0x1C) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx + ecx * 4 + 0x32;
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx + ecx * 4;
    ecx = edi + ecx * 4;
    MEM32(ecx + 0xCC) = ebx;
    MEM32(ecx + 0xD0) = ebp;
    MEM32(ecx + 0xD4) = edx;
    MEM32(ecx + 0xC4) = 1;
    eax = MEM32(edi + 0xC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00121774; /* jns: not sign (positive) */

loc_0012176F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00121774: ;
    PUSH32(esp, esi);
    MEM32(edi + 0xC0) = eax;
    PUSH32(esp, 0x00121780u); RECOMP_ABI_CALL(0x00130C50u, sub_00130C50); /* call 0x00130C50 */

loc_00121780: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00121788: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012178Eu); RECOMP_ABI_CALL(0x00130C50u, sub_00130C50); /* call 0x00130C50 */

loc_0012178E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121791: ;
    POP32(esp, esi);

loc_00121792: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001217A0
 * Original: 0x001217A0 - 0x001217D4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001217A0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xBC);
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_001217B7; /* jns: not sign (positive) */

loc_001217B2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001217B7: ;
    edx = eax + eax * 4;
    esi = MEM32(ecx + edx * 4 + 0xC4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001217C9; /* jne: not equal / not zero */

loc_001217C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001217C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001217D0u); RECOMP_ABI_CALL(0x00121320u, sub_00121320); /* call 0x00121320 */

loc_001217D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001217E0
 * Original: 0x001217E0 - 0x00121814 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001217E0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xBC);
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_001217F7; /* jns: not sign (positive) */

loc_001217F2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001217F7: ;
    edx = eax + eax * 4;
    esi = MEM32(ecx + edx * 4 + 0xC4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00121809; /* jne: not equal / not zero */

loc_00121806: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00121809: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121810u); RECOMP_ABI_CALL(0x00121340u, sub_00121340); /* call 0x00121340 */

loc_00121810: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121820
 * Original: 0x00121820 - 0x00121854 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121820: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xBC);
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_00121837; /* jns: not sign (positive) */

loc_00121832: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00121837: ;
    edx = eax + eax * 4;
    esi = MEM32(ecx + edx * 4 + 0xC4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00121849; /* jne: not equal / not zero */

loc_00121846: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00121849: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121850u); RECOMP_ABI_CALL(0x00121360u, sub_00121360); /* call 0x00121360 */

loc_00121850: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121860
 * Original: 0x00121860 - 0x0012189A (58 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00121860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121867u); RECOMP_ABI_CALL(0x001217A0u, sub_001217A0); /* call 0x001217A0 */

loc_00121867: ;
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00121875u); RECOMP_ABI_CALL(0x00120EC0u, sub_00120EC0); /* call 0x00120EC0 */

loc_00121875: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012188E; /* jne: not equal / not zero */

loc_0012187D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121883u); RECOMP_ABI_CALL(0x0011DEA0u, sub_0011DEA0); /* call 0x0011DEA0 */

loc_00121883: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012188E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121895u); RECOMP_ABI_CALL(0x0011D900u, sub_0011D900); /* call 0x0011D900 */

loc_00121895: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001218A0
 * Original: 0x001218A0 - 0x001218A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001218A0: ;
    g_seh_ebp = ebp; sub_001217E0(); return; /* tail jmp 0x001217E0 */

}

/**
 * sub_001218B0
 * Original: 0x001218B0 - 0x001218B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001218B0: ;
    g_seh_ebp = ebp; sub_00121820(); return; /* tail jmp 0x00121820 */

}

/**
 * sub_001218C0
 * Original: 0x001218C0 - 0x001218E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001218C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x40);
    PUSH32(esp, 0x1216B0);
    PUSH32(esp, 0x4B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218D6u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_001218D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218DFu); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_001218DF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001218F0
 * Original: 0x001218F0 - 0x00121A02 (274 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001218F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218FCu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_001218FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012191D; /* jne: not equal / not zero */

loc_00121903: ;
    PUSH32(esp, 0x2AF398);
    PUSH32(esp, 0x0012190Du); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012190D: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012191D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121926u); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_00121926: ;
    ecx = esp + 0x14;
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121933u); RECOMP_ABI_CALL(0x0012DA10u, sub_0012DA10); /* call 0x0012DA10 */

loc_00121933: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219F2; /* je: equal / zero */

loc_00121942: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012198F; /* jne: not equal / not zero */

loc_00121949: ;
    ebp = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012198F; /* jle: less or equal (signed <=) */

loc_00121952: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121958u); RECOMP_ABI_CALL(0x00120FF0u, sub_00120FF0); /* call 0x00120FF0 */

loc_00121958: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012198B; /* jne: not equal / not zero */

loc_00121960: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012196Bu); RECOMP_ABI_CALL(0x0012DA80u, sub_0012DA80); /* call 0x0012DA80 */

loc_0012196B: ;
    edx = MEM32(esi + 0x88);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x88) = edx;
    PUSH32(esp, 0x00121983u); RECOMP_ABI_CALL(0x0012DA10u, sub_0012DA10); /* call 0x0012DA10 */

loc_00121983: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121952; /* jl: less (signed <) */

loc_0012198B: ;
    ecx = MEM32(esp + 0x10);

loc_0012198F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219F2; /* je: equal / zero */

loc_00121993: ;
    edx = MEM32(esi + 0x80);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(esi + 0x80) = edx;
    MEM32(esi + 0x7C) = ecx;
    PUSH32(esp, 0x001219AAu); RECOMP_ABI_CALL(0x00120D50u, sub_00120D50); /* call 0x00120D50 */

loc_001219AA: ;
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001219BAu); RECOMP_ABI_CALL(0x001213C0u, sub_001213C0); /* call 0x001213C0 */

loc_001219BA: ;
    eax = MEM32(esp + 0x1C);
    ebx = esi;
    PUSH32(esp, 0x001219C5u); RECOMP_ABI_CALL(0x00120DA0u, sub_00120DA0); /* call 0x00120DA0 */

loc_001219C5: ;
    edi = ebp;
    PUSH32(esp, 0x001219CCu); RECOMP_ABI_CALL(0x00120BD0u, sub_00120BD0); /* call 0x00120BD0 */

loc_001219CC: ;
    edi = esi;
    PUSH32(esp, 0x001219D3u); RECOMP_ABI_CALL(0x00121860u, sub_00121860); /* call 0x00121860 */

loc_001219D3: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001219DDu); RECOMP_ABI_CALL(0x00120CF0u, sub_00120CF0); /* call 0x00120CF0 */

loc_001219DD: ;
    edx = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebp + 0x48) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + 0xBC) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001219F2: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121A10
 * Original: 0x00121A10 - 0x00121A13 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121A20
 * Original: 0x00121A20 - 0x00121A23 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121A30
 * Original: 0x00121A30 - 0x00121A36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A30(void)
{

loc_00121A30: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00121A40
 * Original: 0x00121A40 - 0x00121A46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A40(void)
{

loc_00121A40: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00121A50
 * Original: 0x00121A50 - 0x00121A53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121A60
 * Original: 0x00121A60 - 0x00121A74 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A60(void)
{

loc_00121A60: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00121A80
 * Original: 0x00121A80 - 0x00121A83 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121A90
 * Original: 0x00121A90 - 0x00121A93 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121AA0
 * Original: 0x00121AA0 - 0x00121AA3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121AB0
 * Original: 0x00121AB0 - 0x00121AB3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121AC0
 * Original: 0x00121AC0 - 0x00121AC3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121AD0
 * Original: 0x00121AD0 - 0x00121AE3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000601u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121ADFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121ADF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121AF0
 * Original: 0x00121AF0 - 0x00121B03 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000601u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121AFFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121AFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121B10
 * Original: 0x00121B10 - 0x00121B23 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000601u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121B1Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121B1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121B30
 * Original: 0x00121B30 - 0x00121B43 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000601u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121B3Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121B3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121B50
 * Original: 0x00121B50 - 0x00121B53 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121B60
 * Original: 0x00121B60 - 0x00121BDB (123 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121B6Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121B6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121B83; /* je: equal / zero */

loc_00121B72: ;
    PUSH32(esp, 0xFF000192u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121B7Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121B7E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121B83: ;
    eax = MEM32(esi + 0x2150);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2158);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121BA6; /* jne: not equal / not zero */

loc_00121B95: ;
    PUSH32(esp, 0xFF000602u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121BA0u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121BA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121BA6: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 4;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00121BC9u); RECOMP_ABI_CALL(0x00121A60u, sub_00121A60); /* call 0x00121A60 */

loc_00121BC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121BD2u); RECOMP_ABI_CALL(0x001318C0u, sub_001318C0); /* call 0x001318C0 */

loc_00121BD2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121BE0
 * Original: 0x00121BE0 - 0x00121C57 (119 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121BE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121BEBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121BEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C03; /* je: equal / zero */

loc_00121BF2: ;
    PUSH32(esp, 0xFF000191u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121BFEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121BFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121C03: ;
    eax = MEM32(esi + 0x2150);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2158);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121C26; /* jne: not equal / not zero */

loc_00121C15: ;
    PUSH32(esp, 0xFF000602u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121C20u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121C26: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 4;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121C45u); RECOMP_ABI_CALL(0x00121A60u, sub_00121A60); /* call 0x00121A60 */

loc_00121C45: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121C4Eu); RECOMP_ABI_CALL(0x001318C0u, sub_001318C0); /* call 0x001318C0 */

loc_00121C4E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121C60
 * Original: 0x00121C60 - 0x00121C9C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121C60: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121C68u); RECOMP_ABI_CALL(0x001329C0u, sub_001329C0); /* call 0x001329C0 */

loc_00121C68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C9B; /* je: equal / zero */

loc_00121C70: ;
    eax = MEM32(esi + 0x2158);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121C7Du); RECOMP_ABI_CALL(0x001320B0u, sub_001320B0); /* call 0x001320B0 */

loc_00121C7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121C9B; /* jne: not equal / not zero */

loc_00121C85: ;
    PUSH32(esp, 0x00121C8Au); RECOMP_ABI_CALL(0x00121A30u, sub_00121A30); /* call 0x00121A30 */

loc_00121C8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C9B; /* je: equal / zero */

loc_00121C8E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121C98u); RECOMP_ABI_CALL(0x001329A0u, sub_001329A0); /* call 0x001329A0 */

loc_00121C98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121C9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121CA0
 * Original: 0x00121CA0 - 0x00121CDC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121CA0: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121CA8u); RECOMP_ABI_CALL(0x00132980u, sub_00132980); /* call 0x00132980 */

loc_00121CA8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CDB; /* je: equal / zero */

loc_00121CB0: ;
    eax = MEM32(esi + 0x2158);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121CBDu); RECOMP_ABI_CALL(0x00132070u, sub_00132070); /* call 0x00132070 */

loc_00121CBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CDB; /* jne: not equal / not zero */

loc_00121CC5: ;
    PUSH32(esp, 0x00121CCAu); RECOMP_ABI_CALL(0x00121A40u, sub_00121A40); /* call 0x00121A40 */

loc_00121CCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CDB; /* je: equal / zero */

loc_00121CCE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121CD8u); RECOMP_ABI_CALL(0x00132960u, sub_00132960); /* call 0x00132960 */

loc_00121CD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121CDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121CE0
 * Original: 0x00121CE0 - 0x00121CF1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121CE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00121CEDu); RECOMP_ABI_CALL(0x00121A60u, sub_00121A60); /* call 0x00121A60 */

loc_00121CED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121D00
 * Original: 0x00121D00 - 0x00121D15 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121D00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x00121D0Au); RECOMP_ABI_CALL(0x00121C60u, sub_00121C60); /* call 0x00121C60 */

loc_00121D0A: ;
    PUSH32(esp, 0x00121D0Fu); RECOMP_ABI_CALL(0x00121CA0u, sub_00121CA0); /* call 0x00121CA0 */

loc_00121D0F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00121A50(); return; /* tail jmp 0x00121A50 */

}

/**
 * sub_00121D20
 * Original: 0x00121D20 - 0x00121D52 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00121D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D20: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 4;

loc_00121D32: ;
    eax = edi;
    PUSH32(esp, 0x00121D39u); RECOMP_ABI_CALL(0x00121CE0u, sub_00121CE0); /* call 0x00121CE0 */

loc_00121D39: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00121D42u); RECOMP_ABI_CALL(0x001318C0u, sub_001318C0); /* call 0x001318C0 */

loc_00121D42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121D32; /* jl: less (signed <) */

loc_00121D4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00121D60
 * Original: 0x00121D60 - 0x00121D84 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D60: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x2158);
    eax = ecx + 0x3480;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x2150) = eax;
    PUSH32(esp, 0x00121D7Du); RECOMP_ABI_CALL(0x00121D20u, sub_00121D20); /* call 0x00121D20 */

loc_00121D7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121D90
 * Original: 0x00121D90 - 0x00121DDB (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121D9Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121D9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121DB3; /* je: equal / zero */

loc_00121DA2: ;
    PUSH32(esp, 0xFF0001A1u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121DAEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121DAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121DB3: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121DBBu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121DBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121DD9; /* je: equal / zero */

loc_00121DC2: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x210C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00121DD6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00121DD3u); } /* indirect call */
    }

loc_00121DD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121DD9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121DE0
 * Original: 0x00121DE0 - 0x00121E2A (74 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121DEBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121DEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E05; /* je: equal / zero */

loc_00121DF2: ;
    PUSH32(esp, 0xFF0001A2u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121DFEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121DFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121E01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121E05: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121E0Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121E0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E01; /* je: equal / zero */

loc_00121E14: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x210C);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00121E25u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00121E23u); } /* indirect call */
    }

loc_00121E25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121E30
 * Original: 0x00121E30 - 0x00121E7B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121E3Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121E3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E58; /* je: equal / zero */

loc_00121E42: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF0001A3u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_00121E58: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121E60u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121E60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E79; /* je: equal / zero */

loc_00121E67: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x210C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00121E76u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00121E73u); } /* indirect call */
    }

loc_00121E76: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121E79: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121E80
 * Original: 0x00121E80 - 0x00121EC5 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121E8Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00121E8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EA5; /* je: equal / zero */

loc_00121E92: ;
    PUSH32(esp, 0xFF0001A4u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121E9Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00121E9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121EA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121EA5: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121EADu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121EAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EA1; /* je: equal / zero */

loc_00121EB4: ;
    eax = MEM32(esi + 0x210C);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00121EC0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00121EBEu); } /* indirect call */
    }

loc_00121EC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121ED0
 * Original: 0x00121ED0 - 0x00121EFE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121EDDu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121EDD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EFC; /* je: equal / zero */

loc_00121EE4: ;
    eax = MEM32(esi + 0x210C);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EFC; /* je: equal / zero */

loc_00121EF1: ;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00121EF9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00121EF7u); } /* indirect call */
    }

loc_00121EF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121EFC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121F00
 * Original: 0x00121F00 - 0x00121F03 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121F10
 * Original: 0x00121F10 - 0x00121F13 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121F20
 * Original: 0x00121F20 - 0x00121F52 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F20: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F28u); RECOMP_ABI_CALL(0x00132980u, sub_00132980); /* call 0x00132980 */

loc_00121F28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F51; /* je: equal / zero */

loc_00121F30: ;
    eax = MEM32(esi + 0x2114);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F3Du); RECOMP_ABI_CALL(0x00132070u, sub_00132070); /* call 0x00132070 */

loc_00121F3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F51; /* jne: not equal / not zero */

loc_00121F45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F4Eu); RECOMP_ABI_CALL(0x00132960u, sub_00132960); /* call 0x00132960 */

loc_00121F4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121F51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121F60
 * Original: 0x00121F60 - 0x00121F92 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F60: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F68u); RECOMP_ABI_CALL(0x001329C0u, sub_001329C0); /* call 0x001329C0 */

loc_00121F68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F91; /* je: equal / zero */

loc_00121F70: ;
    eax = MEM32(esi + 0x2114);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F7Du); RECOMP_ABI_CALL(0x001320B0u, sub_001320B0); /* call 0x001320B0 */

loc_00121F7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F91; /* jne: not equal / not zero */

loc_00121F85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121F8Eu); RECOMP_ABI_CALL(0x001329A0u, sub_001329A0); /* call 0x001329A0 */

loc_00121F8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121F91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121FA0
 * Original: 0x00121FA0 - 0x00121FA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FA0(void)
{

loc_00121FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121FB0
 * Original: 0x00121FB0 - 0x00121FB3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121FB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121FC0
 * Original: 0x00121FC0 - 0x00121FE9 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121FCDu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121FCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121FD6; /* jne: not equal / not zero */

loc_00121FD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121FD6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121FE4u); RECOMP_ABI_CALL(0x00132930u, sub_00132930); /* call 0x00132930 */

loc_00121FE4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121FF0
 * Original: 0x00121FF0 - 0x00122019 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121FFDu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00121FFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122006; /* jne: not equal / not zero */

loc_00122004: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122006: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122014u); RECOMP_ABI_CALL(0x00132930u, sub_00132930); /* call 0x00132930 */

loc_00122014: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122020
 * Original: 0x00122020 - 0x00122049 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012202Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012202D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122036; /* jne: not equal / not zero */

loc_00122034: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122036: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122044u); RECOMP_ABI_CALL(0x00132930u, sub_00132930); /* call 0x00132930 */

loc_00122044: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122050
 * Original: 0x00122050 - 0x0012207C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012205Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012205D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122066; /* jne: not equal / not zero */

loc_00122064: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122066: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122077u); RECOMP_ABI_CALL(0x00132930u, sub_00132930); /* call 0x00132930 */

loc_00122077: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122080
 * Original: 0x00122080 - 0x00122093 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000A01u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012208Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012208F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001220A0
 * Original: 0x001220A0 - 0x001220B3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001220A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001220A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000A01u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001220AFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_001220AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001220C0
 * Original: 0x001220C0 - 0x001220D3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001220C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001220C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000A01u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001220CFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_001220CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001220E0
 * Original: 0x001220E0 - 0x001220F3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001220E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001220E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000A01u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001220EFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_001220EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122100
 * Original: 0x00122100 - 0x00122103 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122110
 * Original: 0x00122110 - 0x00122121 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122110: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00122118u); RECOMP_ABI_CALL(0x00121F20u, sub_00121F20); /* call 0x00121F20 */

loc_00122118: ;
    PUSH32(esp, 0x0012211Du); RECOMP_ABI_CALL(0x00121F60u, sub_00121F60); /* call 0x00121F60 */

loc_0012211D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122130
 * Original: 0x00122130 - 0x00122154 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012213Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012213D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122150; /* je: equal / zero */

loc_00122144: ;
    eax = esi + 0x3464;
    MEM32(esi + 0x210C) = eax;

loc_00122150: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122160
 * Original: 0x00122160 - 0x0012217E (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122160: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012216Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012216D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122176; /* jne: not equal / not zero */

loc_00122174: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122176: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00122110(); return; /* tail jmp 0x00122110 */

}

/**
 * sub_00122180
 * Original: 0x00122180 - 0x001221C2 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00122180: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x120;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x120 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00122197; /* jge: greater or equal (signed >=) */

loc_00122194: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00122197: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x80 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00122194; /* jne: not equal / not zero */

loc_001221A0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00122194; /* jne: not equal / not zero */

loc_001221A7: ;
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x11A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x11A)) >> 32) & 1);
    eax = eax + 0x11A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2AB5A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001221B9u); RECOMP_ABI_CALL(0x001542B0u, sub_001542B0); /* call 0x001542B0 */

loc_001221B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001221D0
 * Original: 0x001221D0 - 0x001221FB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001221D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001221D0: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x12;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001221E4; /* jge: greater or equal (signed >=) */

loc_001221E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001221E4: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001221E1; /* jne: not equal / not zero */

loc_001221ED: ;
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00122200
 * Original: 0x00122200 - 0x00122215 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122200: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1FFC);
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00107620(); return; /* tail jmp 0x00107620 */

}

/**
 * sub_00122220
 * Original: 0x00122220 - 0x00122235 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122220: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1FFC);
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00107690(); return; /* tail jmp 0x00107690 */

}

/**
 * sub_00122240
 * Original: 0x00122240 - 0x00122255 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122240: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1FFC);
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00107720(); return; /* tail jmp 0x00107720 */

}

/**
 * sub_00122260
 * Original: 0x00122260 - 0x00122275 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122260: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1FFC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00107770(); return; /* tail jmp 0x00107770 */

}

/**
 * sub_00122280
 * Original: 0x00122280 - 0x001222EF (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122280(void)
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

loc_00122280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1FFC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001222ED; /* je: equal / zero */

loc_00122291: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x3E8 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001222AE; /* jne: not equal / not zero */

loc_0012229C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001222A8u); RECOMP_ABI_CALL(0x00107DA0u, sub_00107DA0); /* call 0x00107DA0 */

loc_001222A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001222AE: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, ebx);
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2AF488)); /* fsub dword ptr [0x2af488] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AF484)); /* fmul dword ptr [0x2af484] */
    fp_push(MEMF(0x22C220)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x001222D2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001222D2: ;
    esi = eax;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x64);
    PUSH32(esp, 0x001222DEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001222DE: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001222E9u); RECOMP_ABI_CALL(0x00107DA0u, sub_00107DA0); /* call 0x00107DA0 */

loc_001222E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001222ED: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001222F0
 * Original: 0x001222F0 - 0x0012233E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001222F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001222F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x971384) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x971388) = edx;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x97138C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x971390) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x971394) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x971398) = edx;
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x97139C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00122340
 * Original: 0x00122340 - 0x0012235E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122340: ;
    PUSH32(esp, 0x00122345u); RECOMP_ABI_CALL(0x00108AA0u, sub_00108AA0); /* call 0x00108AA0 */

loc_00122345: ;
    PUSH32(esp, 0x0012234Au); RECOMP_ABI_CALL(0x0015DE30u, sub_0015DE30); /* call 0x0015DE30 */

loc_0012234A: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x971384);
    PUSH32(esp, 0x00122358u); RECOMP_ABI_CALL(0x00132D10u, sub_00132D10); /* call 0x00132D10 */

loc_00122358: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122360
 * Original: 0x00122360 - 0x0012236D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122360: ;
    PUSH32(esp, 0x00122365u); RECOMP_ABI_CALL(0x0015DE40u, sub_0015DE40); /* call 0x0015DE40 */

loc_00122365: ;
    PUSH32(esp, 0x0012236Au); RECOMP_ABI_CALL(0x00108A00u, sub_00108A00); /* call 0x00108A00 */

loc_0012236A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122370
 * Original: 0x00122370 - 0x001223AF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122370: ;
    eax = MEM32(ebx + 0x1FFC);
    ecx = MEM32(ebx + 0xF1C);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xF20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xF20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001223AD; /* jne: not equal / not zero */

loc_00122387: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012238Eu); RECOMP_ABI_CALL(0x00107530u, sub_00107530); /* call 0x00107530 */

loc_0012238E: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00122396u); RECOMP_ABI_CALL(0x00107560u, sub_00107560); /* call 0x00107560 */

loc_00122396: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001223AC; /* jle: less or equal (signed <=) */

loc_0012239D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001223AC; /* jle: less or equal (signed <=) */

loc_001223A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001223A9u); RECOMP_ABI_CALL(0x00132EC0u, sub_00132EC0); /* call 0x00132EC0 */

loc_001223A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001223AC: ;
    POP32(esp, esi);

loc_001223AD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001223B0
 * Original: 0x001223B0 - 0x001223B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001223B0(void)
{

loc_001223B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001223C0
 * Original: 0x001223C0 - 0x001223D2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001223C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001223C0: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x001223CEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001223CBu); } /* indirect call */
    }

loc_001223CE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001223E0
 * Original: 0x001223E0 - 0x00122420 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001223E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001223E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001223F7; /* jne: not equal / not zero */

loc_001223E7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001223F0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001223EDu); } /* indirect call */
    }

loc_001223F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001223F7: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00122403u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00122403: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0012240Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122409u); } /* indirect call */
    }

loc_0012240C: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00122419u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00122416u); } /* indirect call */
    }

loc_00122419: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122420
 * Original: 0x00122420 - 0x00122495 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122420: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x1FFC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x00122443u); RECOMP_ABI_CALL(0x001223C0u, sub_001223C0); /* call 0x001223C0 */

loc_00122443: ;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122454; /* jge: greater or equal (signed >=) */

loc_00122452: ;
    ebx = eax;

loc_00122454: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x19000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00122461; /* jl: less (signed <) */

loc_0012245C: ;
    ebx = 0x19000;

loc_00122461: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122471u); RECOMP_ABI_CALL(0x001330E0u, sub_001330E0); /* call 0x001330E0 */

loc_00122471: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0x0012247Fu); RECOMP_ABI_CALL(0x001223E0u, sub_001223E0); /* call 0x001223E0 */

loc_0012247F: ;
    eax = MEM32(ebp + 0x48);
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 0x48) = eax;
    POP32(esp, ebp);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001224A0
 * Original: 0x001224A0 - 0x001224E7 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001224A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001224A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    MEM32(ebp) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001224E1; /* jle: less or equal (signed <=) */

loc_001224B6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001224C3u); RECOMP_ABI_CALL(0x00108100u, sub_00108100); /* call 0x00108100 */

loc_001224C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001224DA; /* jne: not equal / not zero */

loc_001224CA: ;
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x12;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001224B6; /* jl: less (signed <) */

loc_001224D4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001224DA: ;
    MEM32(ebp) = 1;

loc_001224E1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001224F0
 * Original: 0x001224F0 - 0x00122508 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001224F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001224F0: ;
    ecx = MEM32(eax + 0x1FFC);
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122504u); RECOMP_ABI_CALL(0x00108130u, sub_00108130); /* call 0x00108130 */

loc_00122504: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122510
 * Original: 0x00122510 - 0x0012259A (138 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122510: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx + eax;
    PUSH32(esp, esi);
    eax = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00122542; /* jae: above or equal (unsigned >=) */

loc_0012252F: ;
    /* nop */

loc_00122530: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00122542; /* jae: above or equal (unsigned >=) */

loc_00122536: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012254B; /* jl: less (signed <) */

loc_0012253B: ;
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00122536; /* jb: below (unsigned <) */

loc_00122542: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012254B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122558u); RECOMP_ABI_CALL(0x00108100u, sub_00108100); /* call 0x00108100 */

loc_00122558: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012256D; /* je: equal / zero */

loc_0012255F: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012256D; /* jae: above or equal (unsigned >=) */

loc_00122565: ;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;

loc_0012256D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00122530; /* jb: below (unsigned <) */

loc_00122577: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122542; /* jne: not equal / not zero */

loc_0012257F: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF000C0Au);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012258Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012258E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001225A0
 * Original: 0x001225A0 - 0x001225BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001225A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001225A0: ;
    ecx = MEM32(eax + 0x1FFC);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001225AEu); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_001225AE: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001225C0
 * Original: 0x001225C0 - 0x001225EC (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001225C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001225C0: ;
    ecx = MEM32(eax + 0x2004);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001225D4u); RECOMP_ABI_CALL(0x00132560u, sub_00132560); /* call 0x00132560 */

loc_001225D4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x2C);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001225F0
 * Original: 0x001225F0 - 0x00122602 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001225F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001225F0: ;
    ecx = MEM32(eax + 0x2004);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001225FEu); RECOMP_ABI_CALL(0x00132840u, sub_00132840); /* call 0x00132840 */

loc_001225FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122610
 * Original: 0x00122610 - 0x001226EE (222 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122610: ;
    ecx = MEM32(esi + 0x2004);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1FFC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012262Cu); RECOMP_ABI_CALL(0x00131B20u, sub_00131B20); /* call 0x00131B20 */

loc_0012262C: ;
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122640u); RECOMP_ABI_CALL(0x00132410u, sub_00132410); /* call 0x00132410 */

loc_00122640: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x9B4);
    ecx = MEM32(esi + 0x9B0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122658u); RECOMP_ABI_CALL(0x00132160u, sub_00132160); /* call 0x00132160 */

loc_00122658: ;
    ecx = MEM32(esi + 0x9B8);
    MEM32(esi + 0x9B4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x9B0) = eax;
    eax = MEM32(esi + 0x9BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012267Cu); RECOMP_ABI_CALL(0x00132160u, sub_00132160); /* call 0x00132160 */

loc_0012267C: ;
    MEM32(esi + 0x9BC) = edx;
    MEM32(esi + 0x9B8) = eax;
    ecx = MEM32(edi + 4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012269Bu); RECOMP_ABI_CALL(0x00132410u, sub_00132410); /* call 0x00132410 */

loc_0012269B: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esi + 0x9CC);
    ecx = MEM32(esi + 0x9C8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001226B3u); RECOMP_ABI_CALL(0x00132160u, sub_00132160); /* call 0x00132160 */

loc_001226B3: ;
    ecx = MEM32(esi + 0x9D0);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9CC) = edx;
    edx = MEM32(esp + 8);
    MEM32(esi + 0x9C8) = eax;
    eax = MEM32(esi + 0x9D4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001226DAu); RECOMP_ABI_CALL(0x00132160u, sub_00132160); /* call 0x00132160 */

loc_001226DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9D0) = eax;
    MEM32(esi + 0x9D4) = edx;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001226F0
 * Original: 0x001226F0 - 0x00122701 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001226F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001226F0: ;
    ecx = MEM32(eax + 0x2004);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001226FDu); RECOMP_ABI_CALL(0x001320B0u, sub_001320B0); /* call 0x001320B0 */

loc_001226FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122710
 * Original: 0x00122710 - 0x00122721 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122710: ;
    ecx = MEM32(eax + 0x2008);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012271Du); RECOMP_ABI_CALL(0x001320B0u, sub_001320B0); /* call 0x001320B0 */

loc_0012271D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122730
 * Original: 0x00122730 - 0x00122742 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122730: ;
    edx = MEM32(eax + 0x2008);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012273Eu); RECOMP_ABI_CALL(0x00132090u, sub_00132090); /* call 0x00132090 */

loc_0012273E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122750
 * Original: 0x00122750 - 0x0012276B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122750: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122756u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_00122756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122768; /* je: equal / zero */

loc_0012275D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122768; /* je: equal / zero */

loc_00122762: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00122768: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122770
 * Original: 0x00122770 - 0x0012279C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122770: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1FFC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122782u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122782: ;
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122799; /* je: equal / zero */

loc_0012278C: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x00122796u); RECOMP_ABI_CALL(0x00107830u, sub_00107830); /* call 0x00107830 */

loc_00122796: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122799: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001227A0
 * Original: 0x001227A0 - 0x001228F1 (337 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001227A0: ;
    ecx = MEM32(0x97138C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001228DE; /* je: equal / zero */

loc_001227B4: ;
    _fa = (uint32_t)(MEM32(0x97139C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x97139C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001228DE; /* je: equal / zero */

loc_001227C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 8;
    ecx = 7;
    esi = 0x971384;
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
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F);
    PUSH32(esp, ebx);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 1;
    MEM32(eax + 0x2C) = ebp;
    MEM32(eax + 0x30) = ebp;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ebp;
    MEM32(eax + 0x3C) = 0x122420;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    esi = ebx + 0x1018;
    PUSH32(esp, 0x00122810u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122810: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x40);
    edi = 0xF4240;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0012282Eu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012282E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x41);
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x00122847u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122847: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x42);
    PUSH32(esp, ebx);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = ebp;
    PUSH32(esp, 0x00122860u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122860: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = ebp;
    PUSH32(esp, 0x00122877u); RECOMP_ABI_CALL(0x00133840u, sub_00133840); /* call 0x00133840 */

loc_00122877: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012287Fu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012287F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122886u); RECOMP_ABI_CALL(0x001334C0u, sub_001334C0); /* call 0x001334C0 */

loc_00122886: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122891u); RECOMP_ABI_CALL(0x001334D0u, sub_001334D0); /* call 0x001334D0 */

loc_00122891: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012289Cu); RECOMP_ABI_CALL(0x00133500u, sub_00133500); /* call 0x00133500 */

loc_0012289C: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001228AAu); RECOMP_ABI_CALL(0x00133530u, sub_00133530); /* call 0x00133530 */

loc_001228AA: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001228B5u); RECOMP_ABI_CALL(0x00133560u, sub_00133560); /* call 0x00133560 */

loc_001228B5: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001228BDu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001228BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001228C4u); RECOMP_ABI_CALL(0x00133590u, sub_00133590); /* call 0x00133590 */

loc_001228C4: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001228CCu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001228CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001228D2u); RECOMP_ABI_CALL(0x00133410u, sub_00133410); /* call 0x00133410 */

loc_001228D2: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001228DE: ;
    PUSH32(esp, 0xFF000C06u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001228E9u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_001228E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122900
 * Original: 0x00122900 - 0x00122906 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122900(void)
{

loc_00122900: ;
    eax = MEM32(0xA9C9C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00122910
 * Original: 0x00122910 - 0x00122993 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122910: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122919u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_00122919: ;
    MEM32(0xA9C9FC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012292Eu); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_0012292E: ;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0012294Du); RECOMP_ABI_CALL(0x00133200u, sub_00133200); /* call 0x00133200 */

loc_0012294D: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0012295Au); RECOMP_ABI_CALL(0x00133270u, sub_00133270); /* call 0x00133270 */

loc_0012295A: ;
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012297Bu); RECOMP_ABI_CALL(0x00133A00u, sub_00133A00); /* call 0x00133A00 */

loc_0012297B: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x50);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x64);
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001229A0
 * Original: 0x001229A0 - 0x001229AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001229A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001229A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001229A6u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_001229A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001229B0
 * Original: 0x001229B0 - 0x001229B8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001229B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001229B0: ;
    MEM32(0xA9C9C0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001229C0
 * Original: 0x001229C0 - 0x001229C3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001229C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001229C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001229D0
 * Original: 0x001229D0 - 0x001229E8 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001229D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001229D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1FFC);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001229E2u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_001229E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001229F0
 * Original: 0x001229F0 - 0x00122A06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001229F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001229F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001229F7u); RECOMP_ABI_CALL(0x00107C90u, sub_00107C90); /* call 0x00107C90 */

loc_001229F7: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122A02u); RECOMP_ABI_CALL(0x001335A0u, sub_001335A0); /* call 0x001335A0 */

loc_00122A02: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122A10
 * Original: 0x00122A10 - 0x00122A40 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00122A22u); RECOMP_ABI_CALL(0x00129BC0u, sub_00129BC0); /* call 0x00129BC0 */

loc_00122A22: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00122A36u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_00122A36: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122A40
 * Original: 0x00122A40 - 0x00122A53 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122A40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000C03u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122A4Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00122A4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122A60
 * Original: 0x00122A60 - 0x00122A73 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122A60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000C03u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122A6Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00122A6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122A80
 * Original: 0x00122A80 - 0x00122A93 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000C03u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122A8Fu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00122A8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122AA0
 * Original: 0x00122AA0 - 0x00122AB3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000C03u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122AAFu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00122AAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122AC0
 * Original: 0x00122AC0 - 0x00122AE0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122AC0: ;
    eax = MEM32(ecx + 0x34B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122AD7; /* je: equal / zero */

loc_00122ACA: ;
    ecx = MEM32(ecx + 0x1FFC);
    edx = MEM32(ecx + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00122ADA; /* jle: less or equal (signed <=) */

loc_00122AD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00122ADA: ;
    _fb = (uint32_t)(0xD0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122AE0
 * Original: 0x00122AE0 - 0x00122B3F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122AE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(edi) = 0;
    ebx = MEM32(esi + 0x1FFC);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x00122B04u); RECOMP_ABI_CALL(0x001225C0u, sub_001225C0); /* call 0x001225C0 */

loc_00122B04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122B39; /* jne: not equal / not zero */

loc_00122B0B: ;
    eax = MEM32(esp + 8);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x00122B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122B1Du); } /* indirect call */
    }

loc_00122B20: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00122B2Eu); RECOMP_ABI_CALL(0x001225F0u, sub_001225F0); /* call 0x001225F0 */

loc_00122B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122B39; /* jne: not equal / not zero */

loc_00122B32: ;
    PUSH32(esp, 0x00122B37u); RECOMP_ABI_CALL(0x00122610u, sub_00122610); /* call 0x00122610 */

loc_00122B37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00122B39: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122B40
 * Original: 0x00122B40 - 0x00122B62 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122B40: ;
    PUSH32(esp, 0x00122B45u); RECOMP_ABI_CALL(0x00122AC0u, sub_00122AC0); /* call 0x00122AC0 */

loc_00122B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122B4D; /* jne: not equal / not zero */

loc_00122B49: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00122B4D: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122B70
 * Original: 0x00122B70 - 0x00122BB6 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122B70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2004);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2008);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122B85u); RECOMP_ABI_CALL(0x00132070u, sub_00132070); /* call 0x00132070 */

loc_00122B85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122BB3; /* je: equal / zero */

loc_00122B8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122B94u); RECOMP_ABI_CALL(0x00132070u, sub_00132070); /* call 0x00132070 */

loc_00122B94: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122BB3; /* jne: not equal / not zero */

loc_00122B9C: ;
    eax = esi;
    PUSH32(esp, 0x00122BA3u); RECOMP_ABI_CALL(0x001225A0u, sub_001225A0); /* call 0x001225A0 */

loc_00122BA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122BB3; /* je: equal / zero */

loc_00122BA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122BB0u); RECOMP_ABI_CALL(0x00132050u, sub_00132050); /* call 0x00132050 */

loc_00122BB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122BB3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122BC0
 * Original: 0x00122BC0 - 0x00122C99 (217 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122BC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x1FFC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00122BD6u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_00122BD6: ;
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0x00122BDEu); RECOMP_ABI_CALL(0x00107BA0u, sub_00107BA0); /* call 0x00107BA0 */

loc_00122BDE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122BED; /* je: equal / zero */

loc_00122BE7: ;
    MEM32(0x9713A0) = esi;

loc_00122BED: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00122BF5u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122BF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122C00; /* jne: not equal / not zero */

loc_00122BFC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00122C2A;

loc_00122C00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C1C; /* je: equal / zero */

loc_00122C05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C15; /* je: equal / zero */

loc_00122C0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C2A; /* je: equal / zero */

loc_00122C0E: ;
    PUSH32(esp, 0xFF000C07u);
    goto loc_00122C21;

loc_00122C15: ;
    PUSH32(esp, 0xFF000C08u);
    goto loc_00122C21;

loc_00122C1C: ;
    PUSH32(esp, 0xFF000C09u);

loc_00122C21: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00122C27u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00122C27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122C2A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C34; /* je: equal / zero */

loc_00122C2F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122C4A; /* jne: not equal / not zero */

loc_00122C34: ;
    eax = edi + 0x1018;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122C42u); RECOMP_ABI_CALL(0x001335B0u, sub_001335B0); /* call 0x001335B0 */

loc_00122C42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C4E; /* je: equal / zero */

loc_00122C4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C5A; /* je: equal / zero */

loc_00122C4E: ;
    ecx = 1;
    eax = edi;
    PUSH32(esp, 0x00122C5Au); RECOMP_ABI_CALL(0x00122730u, sub_00122730); /* call 0x00122730 */

loc_00122C5A: ;
    eax = edi;
    PUSH32(esp, 0x00122C61u); RECOMP_ABI_CALL(0x001226F0u, sub_001226F0); /* call 0x001226F0 */

loc_00122C61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122C94; /* jne: not equal / not zero */

loc_00122C66: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122C94; /* jne: not equal / not zero */

loc_00122C6E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122C74u); RECOMP_ABI_CALL(0x00107E80u, sub_00107E80); /* call 0x00107E80 */

loc_00122C74: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122C94; /* jne: not equal / not zero */

loc_00122C82: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = 1;
    eax = edi;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00122730(); return; /* tail jmp 0x00122730 */

loc_00122C94: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122CA0
 * Original: 0x00122CA0 - 0x00122D0C (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x00122CABu); RECOMP_ABI_CALL(0x00122AC0u, sub_00122AC0); /* call 0x00122AC0 */

loc_00122CAB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122D09; /* je: equal / zero */

loc_00122CB1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122D09; /* jne: not equal / not zero */

loc_00122CB6: ;
    eax = MEM32(edi + 0x1FFC);
    edi = MEM32(eax);
    eax = edi;
    PUSH32(esp, 0x00122CC5u); RECOMP_ABI_CALL(0x00122750u, sub_00122750); /* call 0x00122750 */

loc_00122CC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122D09; /* je: equal / zero */

loc_00122CC9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00122CCFu); RECOMP_ABI_CALL(0x00107560u, sub_00107560); /* call 0x00107560 */

loc_00122CCF: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00122CD8u); RECOMP_ABI_CALL(0x00107530u, sub_00107530); /* call 0x00107530 */

loc_00122CD8: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00122CE1u); RECOMP_ABI_CALL(0x00107590u, sub_00107590); /* call 0x00107590 */

loc_00122CE1: ;
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esi + 0xC) = eax;
    eax = ecx + ecx * 8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 1;

loc_00122D09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122D10
 * Original: 0x00122D10 - 0x00122D4F (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122D10: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00122D18u); RECOMP_ABI_CALL(0x0012D8D0u, sub_0012D8D0); /* call 0x0012D8D0 */

loc_00122D18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122D33; /* je: equal / zero */

loc_00122D1D: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00122D2Eu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_00122D2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00122D38;

loc_00122D33: ;
    PUSH32(esp, 0x00122D38u); RECOMP_ABI_CALL(0x00122900u, sub_00122900); /* call 0x00122900 */

loc_00122D38: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122D40; /* jne: not equal / not zero */

loc_00122D3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122D40: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122D48u); RECOMP_ABI_CALL(0x00107AE0u, sub_00107AE0); /* call 0x00107AE0 */

loc_00122D48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122D50
 * Original: 0x00122D50 - 0x00122DC3 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122D50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1FFC);
    esi = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122D71u); RECOMP_ABI_CALL(0x00129730u, sub_00129730); /* call 0x00129730 */

loc_00122D71: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122DBB; /* je: equal / zero */

loc_00122D78: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x48), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122DAC; /* jne: not equal / not zero */

loc_00122D7E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1018) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1018;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122D94u); RECOMP_ABI_CALL(0x00122910u, sub_00122910); /* call 0x00122910 */

loc_00122D94: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122DAC; /* jge: greater or equal (signed >=) */

loc_00122DA2: ;
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x28) = eax;

loc_00122DAC: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ecx;
    eax = MEM32(edi + 0x28);
    MEM32(ebp) = eax;

loc_00122DBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122DD0
 * Original: 0x00122DD0 - 0x00122E3D (109 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x1FFC);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00122DEE; /* jne: not equal / not zero */

loc_00122DE9: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00122DEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 8;
    ecx = 7;
    edi = 0x971384;
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
    PUSH32(esp, 0x00122E04u); RECOMP_ABI_CALL(0x0012D8D0u, sub_0012D8D0); /* call 0x0012D8D0 */

loc_00122E04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122E12; /* je: equal / zero */

loc_00122E09: ;
    eax = ebx;
    PUSH32(esp, 0x00122E10u); RECOMP_ABI_CALL(0x001229A0u, sub_001229A0); /* call 0x001229A0 */

loc_00122E10: ;
    goto loc_00122E22;

loc_00122E12: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00122E18u); RECOMP_ABI_CALL(0x001229D0u, sub_001229D0); /* call 0x001229D0 */

loc_00122E18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x00122E22u); RECOMP_ABI_CALL(0x001229B0u, sub_001229B0); /* call 0x001229B0 */

loc_00122E22: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00122E2Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00122E2Bu); } /* indirect call */
    }

loc_00122E2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00122E36u); RECOMP_ABI_CALL(0x001331E0u, sub_001331E0); /* call 0x001331E0 */

loc_00122E36: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122E40
 * Original: 0x00122E40 - 0x00122E6B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122E40: ;
    ecx = MEM32(edx + 0x1FFC);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = edx + 0x1018;
    MEM32(ecx + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00122E5F; /* jne: not equal / not zero */

loc_00122E59: ;
    _fa = (uint32_t)(MEM32(edx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x50), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122E68; /* je: equal / zero */

loc_00122E5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00122E65u); RECOMP_ABI_CALL(0x001229F0u, sub_001229F0); /* call 0x001229F0 */

loc_00122E65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122E68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122E70
 * Original: 0x00122E70 - 0x00122E96 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122E70: ;
    ecx = MEM32(edx + 0x1FFC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x1018) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1018;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122E8B; /* jne: not equal / not zero */

loc_00122E85: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122E94; /* je: equal / zero */

loc_00122E8B: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00122E91u); RECOMP_ABI_CALL(0x001229F0u, sub_001229F0); /* call 0x001229F0 */

loc_00122E91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122E94: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122EA0
 * Original: 0x00122EA0 - 0x00122F05 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122EA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122EACu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122EAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122EBF; /* je: equal / zero */

loc_00122EB3: ;
    eax = esi;
    PUSH32(esp, 0x00122EBAu); RECOMP_ABI_CALL(0x00122710u, sub_00122710); /* call 0x00122710 */

loc_00122EBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122EC4; /* jne: not equal / not zero */

loc_00122EBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00122EC4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0x00122ED2u); RECOMP_ABI_CALL(0x00122AE0u, sub_00122AE0); /* call 0x00122AE0 */

loc_00122ED2: ;
    ebp = eax;
    PUSH32(esp, 0x00122ED9u); RECOMP_ABI_CALL(0x00122B70u, sub_00122B70); /* call 0x00122B70 */

loc_00122ED9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0x00122EE5u); RECOMP_ABI_CALL(0x00122BC0u, sub_00122BC0); /* call 0x00122BC0 */

loc_00122EE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00122EEFu); RECOMP_ABI_CALL(0x00122CA0u, sub_00122CA0); /* call 0x00122CA0 */

loc_00122EEF: ;
    eax = esi;
    PUSH32(esp, 0x00122EF6u); RECOMP_ABI_CALL(0x00122770u, sub_00122770); /* call 0x00122770 */

loc_00122EF6: ;
    ebx = esi;
    PUSH32(esp, 0x00122EFDu); RECOMP_ABI_CALL(0x00122370u, sub_00122370); /* call 0x00122370 */

loc_00122EFD: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122F10
 * Original: 0x00122F10 - 0x001230F6 (486 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122F10: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    edi = MEM32(ecx + 0x1FFC);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = ecx + 0xD28;
    PUSH32(esp, 0x00122F3Eu); RECOMP_ABI_CALL(0x00122B40u, sub_00122B40); /* call 0x00122B40 */

loc_00122F3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00122F52; /* je: equal / zero */

loc_00122F45: ;
    MEM32(edi + 0x3C) = 0x122420;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00122F52: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122F5Fu); RECOMP_ABI_CALL(0x00129630u, sub_00129630); /* call 0x00129630 */

loc_00122F5F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001230EE; /* jl: less (signed <) */

loc_00122F70: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122F7Cu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00122F7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00122F9D; /* jne: not equal / not zero */

loc_00122F83: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122F8Bu); RECOMP_ABI_CALL(0x001296F0u, sub_001296F0); /* call 0x001296F0 */

loc_00122F8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x3C) = 0x122420;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00122F9D: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122FA9u); RECOMP_ABI_CALL(0x00129690u, sub_00129690); /* call 0x00129690 */

loc_00122FA9: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001230EE; /* jl: less (signed <) */

loc_00122FB6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00122FBEu); RECOMP_ABI_CALL(0x001296F0u, sub_001296F0); /* call 0x001296F0 */

loc_00122FBE: ;
    ecx = MEM32(edi + 0x38);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00123081; /* js: sign (negative) */

loc_00122FD4: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    esi = eax + eax * 8;
    if (1) _cf = (int)(((esi) >> (32 - (1))) & 1);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0012303C; /* jle: less or equal (signed <=) */

loc_00122FF3: ;
    eax = MEM32(esp + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = ecx + ecx * 8;
    if (1) _cf = (int)(((ebp) >> (32 - (1))) & 1);
    ebp = ebp << 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + eax * 8;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0012300F; /* jl: less (signed <) */

loc_0012300D: ;
    ebx = esi;

loc_0012300F: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x0012301Du); RECOMP_ABI_CALL(0x001224A0u, sub_001224A0); /* call 0x001224A0 */

loc_0012301D: ;
    MEM32(esp + 0x18) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    edx = MEM32(edi + 0x38);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 0x38) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00123066; /* jg: greater (signed >) */

loc_0012303C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00123066; /* je: equal / zero */

loc_00123044: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(edi + 0x3C) = 0x122420;
    PUSH32(esp, 0x0012305Fu); RECOMP_ABI_CALL(0x00108100u, sub_00108100); /* call 0x00108100 */

loc_0012305F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;

loc_00123066: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001230C5; /* je: equal / zero */

loc_0012306E: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012307Cu); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012307C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001230C9;

loc_00123081: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001230C5; /* je: equal / zero */

loc_00123087: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (5) _cf = (int)(((esi) >> (32 - (5))) & 1);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001230BE; /* jle: less or equal (signed <=) */

loc_0012309D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, 0x001230ADu); RECOMP_ABI_CALL(0x001224F0u, sub_001224F0); /* call 0x001224F0 */

loc_001230AD: ;
    edx = MEM32(edi + 0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 0x38) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_001230C5; /* jg: greater (signed >) */

loc_001230BE: ;
    MEM32(edi + 0x3C) = 0x122420;

loc_001230C5: ;
    esi = MEM32(esp + 0x24);

loc_001230C9: ;
    edx = MEM32(esp + 0x30);
    MEM32(edx) = ebx;
    ecx = MEM32(esi + 0x9C0);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x9C4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x9C0) = ecx;
    MEM32(esi + 0x9C4) = eax;

loc_001230EE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123100
 * Original: 0x00123100 - 0x00123194 (148 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00123100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00123100: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x120 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp) = 0;
    eax = MEM32(esi + 0x1FFC);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00123190; /* jl: less (signed <) */

loc_00123128: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00123139u); RECOMP_ABI_CALL(0x00108090u, sub_00108090); /* call 0x00108090 */

loc_00123139: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00123146; /* je: equal / zero */

loc_00123140: ;
    eax = MEM32(esp + 0x20);
    goto loc_00123164;

loc_00123146: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012314Cu); RECOMP_ABI_CALL(0x001341C0u, sub_001341C0); /* call 0x001341C0 */

loc_0012314C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00123158; /* jl: less (signed <) */

loc_00123154: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00123164;

loc_00123158: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012315Fu); RECOMP_ABI_CALL(0x00122510u, sub_00122510); /* call 0x00122510 */

loc_0012315F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00123164: ;
    edx = MEM32(esp + 0x14);
    MEM32(edx + 0x3C) = 0x122F10;
    MEM32(ebp) = eax;
    ecx = MEM32(esi + 0x9C0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x9C4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x9C0) = ecx;
    MEM32(esi + 0x9C4) = eax;
    POP32(esp, ebx);

loc_00123190: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001231A0
 * Original: 0x001231A0 - 0x0012326C (204 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001231A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001231A0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    esi = MEM32(ebp + 0x1FFC);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x001231C0u); RECOMP_ABI_CALL(0x001341C0u, sub_001341C0); /* call 0x001341C0 */

loc_001231C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001231D2; /* jl: less (signed <) */

loc_001231C8: ;
    MEM32(esi + 0x3C) = 0x123100;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001231D2: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xFFFFFFEEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00123211; /* jle: less or equal (signed <=) */

loc_001231E1: ;
    edx = MEM32(esp + 0x18);
    esi = ebx + edx;
    ecx = 9;
    edi = 0x2AF470;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        _cf = (MEM16(esi) < MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_00123202; /* jne: not equal / not zero */

loc_001231F9: ;
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x12)) >> 32) & 1);
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001231E1; /* jl: less (signed <) */

loc_00123200: ;
    goto loc_0012320D;

loc_00123202: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0x3C) = 0x123100;

loc_0012320D: ;
    esi = MEM32(esp + 0x14);

loc_00123211: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = ebx;
    edi = MEM32(ebp + 0x9C0);
    ecx = MEM32(ebp + 0x9C4);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEM32(ebp + 0x9C4) = ecx;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(ebp + 0x9C0) = edi;
    PUSH32(esp, 0x00123247u); RECOMP_ABI_CALL(0x00122B40u, sub_00122B40); /* call 0x00122B40 */

loc_00123247: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00123267; /* jne: not equal / not zero */

loc_0012324E: ;
    eax = MEM32(esp + 0x20);
    ecx = eax + eax * 8;
    eax = ebx;
    if (1) _cf = (int)(((ecx) >> (32 - (1))) & 1);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x38);
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = ecx;

loc_00123267: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00123270
 * Original: 0x00123270 - 0x0012328B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123270: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x122D50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012327Du); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012327D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00123287u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_00123287: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123290
 * Original: 0x00123290 - 0x0012329E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123290: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012329Bu); RECOMP_ABI_CALL(0x00122E40u, sub_00122E40); /* call 0x00122E40 */

loc_0012329B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001232A0
 * Original: 0x001232A0 - 0x0012336F (207 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001232A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001232A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1FFC);
    esi = MEM32(edi);
    MEM32(esp + 0xC) = esi;
    if ((_fa == 0)) goto loc_00123356; /* je: equal / zero */

loc_001232C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00123341; /* je: equal / zero */

loc_001232C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123366; /* jne: not equal / not zero */

loc_001232CD: ;
    eax = esi;
    PUSH32(esp, 0x001232D4u); RECOMP_ABI_CALL(0x00122750u, sub_00122750); /* call 0x00122750 */

loc_001232D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123366; /* je: equal / zero */

loc_001232DC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001232E3u); RECOMP_ABI_CALL(0x00107560u, sub_00107560); /* call 0x00107560 */

loc_001232E3: ;
    ebp = eax;
    eax = esp + 0x2C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edx = ebx;
    PUSH32(esp, 0x001232F2u); RECOMP_ABI_CALL(0x00122A10u, sub_00122A10); /* call 0x00122A10 */

loc_001232F2: ;
    esi = MEM32(edi + 0x30);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00123306u); RECOMP_ABI_CALL(0x00107F00u, sub_00107F00); /* call 0x00107F00 */

loc_00123306: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(edi + 0x30) = esi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1018) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1018;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00123334u); RECOMP_ABI_CALL(0x001335C0u, sub_001335C0); /* call 0x001335C0 */

loc_00123334: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00123341: ;
    eax = 1;
    edx = ebx;
    PUSH32(esp, 0x0012334Du); RECOMP_ABI_CALL(0x00122E70u, sub_00122E70); /* call 0x00122E70 */

loc_0012334D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00123356: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    MEM32(edi + 0x30) = 0;
    PUSH32(esp, 0x00123366u); RECOMP_ABI_CALL(0x00122E70u, sub_00122E70); /* call 0x00122E70 */

loc_00123366: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123370
 * Original: 0x00123370 - 0x001233C5 (85 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0012337Cu); RECOMP_ABI_CALL(0x00122AC0u, sub_00122AC0); /* call 0x00122AC0 */

loc_0012337C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001233C1; /* je: equal / zero */

loc_00123380: ;
    esi = MEM32(esi + 0x1FFC);
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_001233C0; /* jne: not equal / not zero */

loc_00123390: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001233C0; /* je: equal / zero */

loc_00123395: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001233A7u); RECOMP_ABI_CALL(0x0015DE50u, sub_0015DE50); /* call 0x0015DE50 */

loc_001233A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001233AFu); RECOMP_ABI_CALL(0x00107F90u, sub_00107F90); /* call 0x00107F90 */

loc_001233AF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = 1;
    MEM32(esi + 0x3C) = 0x1231A0;

loc_001233C0: ;
    POP32(esp, edi);

loc_001233C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001233D0
 * Original: 0x001233D0 - 0x001233D9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001233D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001233D0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00122EA0(); return; /* tail jmp 0x00122EA0 */

}

/**
 * sub_001233E0
 * Original: 0x001233E0 - 0x001234BF (223 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001233E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001233E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001233EDu); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001233ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001233F6; /* jne: not equal / not zero */

loc_001233F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001233F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x33B0;
    eax = edi;
    ebx = esi;
    MEM32(esi + 0x1FFC) = edi;
    ebp = edi + 8;
    PUSH32(esp, 0x00123411u); RECOMP_ABI_CALL(0x001227A0u, sub_001227A0); /* call 0x001227A0 */

loc_00123411: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001234BA; /* jne: not equal / not zero */

loc_00123419: ;
    eax = ebp;
    PUSH32(esp, 0x00123420u); RECOMP_ABI_CALL(0x00122D10u, sub_00122D10); /* call 0x00122D10 */

loc_00123420: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123439; /* jne: not equal / not zero */

loc_00123426: ;
    PUSH32(esp, 0xFF000C04u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123431u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00123431: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123439: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012344Au); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0012344A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123464; /* jne: not equal / not zero */

loc_00123451: ;
    PUSH32(esp, 0xFF000C05u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012345Cu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012345C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123464: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = eax;
    ecx = esi + 0x3464;
    MEM32(esi + 0x210C) = ecx;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x122200;
    MEM32(ecx + 8) = 0x122220;
    MEM32(ecx + 0xC) = 0x122240;
    MEM32(ecx + 0x10) = 0x122260;
    MEM32(ecx + 0x14) = 0x122280;
    PUSH32(esp, 0x001234A4u); RECOMP_ABI_CALL(0x00108430u, sub_00108430); /* call 0x00108430 */

loc_001234A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    edx = esi;
    PUSH32(esp, 0x001234B3u); RECOMP_ABI_CALL(0x00122E40u, sub_00122E40); /* call 0x00122E40 */

loc_001234B3: ;
    PUSH32(esp, 0x001234B8u); RECOMP_ABI_CALL(0x00123270u, sub_00123270); /* call 0x00123270 */

loc_001234B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001234BA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001234C0
 * Original: 0x001234C0 - 0x001234C3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001234C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001234C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001234D0
 * Original: 0x001234D0 - 0x001234D3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001234D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001234D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001234E0
 * Original: 0x001234E0 - 0x00123505 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001234E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001234E0: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001234E8u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001234E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001234F5; /* jne: not equal / not zero */

loc_001234EF: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001234F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001234FBu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_001234FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00123510
 * Original: 0x00123510 - 0x00123516 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123510(void)
{

loc_00123510: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00123520
 * Original: 0x00123520 - 0x00123523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123520: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123530
 * Original: 0x00123530 - 0x00123533 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123530: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123540
 * Original: 0x00123540 - 0x00123543 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123540: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123550
 * Original: 0x00123550 - 0x00123553 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123550: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123560
 * Original: 0x00123560 - 0x00123563 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123570
 * Original: 0x00123570 - 0x00123573 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123570: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123580
 * Original: 0x00123580 - 0x00123583 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00123580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123580: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123590
 * Original: 0x00123590 - 0x0012359D (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123590: ;
    MEM32(esp + 8) = 0xFF000701u;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

}
