/**
 * DOAU1 - Recompiled code chunk 34
 * Functions: 250 (0x00128EE0 - 0x0012CBA0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00128EE0
 * Original: 0x00128EE0 - 0x00128F2F (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128EE0: ;
    _fa = (uint32_t)(MEM32(0x97135C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x97135C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128EEC; /* je: equal / zero */

loc_00128EE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00128EEC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F06; /* jne: not equal / not zero */

loc_00128EF5: ;
    PUSH32(esp, 0x2AF69C);
    PUSH32(esp, 0x00128EFFu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_00128EFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128F02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00128F06: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F02; /* jne: not equal / not zero */

loc_00128F0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128F12u); RECOMP_ABI_CALL(0x00128C00u, sub_00128C00); /* call 0x00128C00 */

loc_00128F12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128F02; /* je: equal / zero */

loc_00128F1A: ;
    PUSH32(esp, 0x00128F1Fu); RECOMP_ABI_CALL(0x00128CA0u, sub_00128CA0); /* call 0x00128CA0 */

loc_00128F1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128F02; /* je: equal / zero */

loc_00128F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128F2Au); RECOMP_ABI_CALL(0x00128E20u, sub_00128E20); /* call 0x00128E20 */

loc_00128F2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128F30
 * Original: 0x00128F30 - 0x00128FAF (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00128F30: ;
    _fa = (uint32_t)(MEM32(0x97135C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x97135C), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00128F3C; /* je: equal / zero */

loc_00128F39: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00128F3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128F42u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_00128F42: ;
    esi = eax;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128F4Du); RECOMP_ABI_CALL(0x001287F0u, sub_001287F0); /* call 0x001287F0 */

loc_00128F4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00128F56; /* jne: not equal / not zero */

loc_00128F54: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00128F56: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128F5Cu); RECOMP_ABI_CALL(0x00128B40u, sub_00128B40); /* call 0x00128B40 */

loc_00128F5C: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x6C)) >> 32) & 1);
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 8;

loc_00128F64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00128F71; /* je: equal / zero */

loc_00128F68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128F6Eu); RECOMP_ABI_CALL(0x00128EE0u, sub_00128EE0); /* call 0x00128EE0 */

loc_00128F6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128F71: ;
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2B8)) >> 32) & 1);
    esi = esi + 0x2B8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128F64; /* jne: not equal / not zero */

loc_00128F7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128F81u); RECOMP_ABI_CALL(0x00128BD0u, sub_00128BD0); /* call 0x00128BD0 */

loc_00128F81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00128F89u); RECOMP_ABI_CALL(0x0012D0C0u, sub_0012D0C0); /* call 0x0012D0C0 */

loc_00128F89: ;
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0x00128F97u); RECOMP_ABI_CALL(0x00128B60u, sub_00128B60); /* call 0x00128B60 */

loc_00128F97: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00128FAB; /* jne: not equal / not zero */

loc_00128F9C: ;
    PUSH32(esp, 0x00128FA1u); RECOMP_ABI_CALL(0x00128CA0u, sub_00128CA0); /* call 0x00128CA0 */

loc_00128FA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00128FAB; /* je: equal / zero */

loc_00128FA6: ;
    PUSH32(esp, 0x00128FABu); RECOMP_ABI_CALL(0x00128BA0u, sub_00128BA0); /* call 0x00128BA0 */

loc_00128FAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128FB0
 * Original: 0x00128FB0 - 0x00128FBB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128FB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128FB7u); RECOMP_ABI_CALL(0x00128F30u, sub_00128F30); /* call 0x00128F30 */

loc_00128FB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00128FC0
 * Original: 0x00128FC0 - 0x00128FF6 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128FC0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00128FC8u); RECOMP_ABI_CALL(0x00109B90u, sub_00109B90); /* call 0x00109B90 */

loc_00128FC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128FDD; /* jne: not equal / not zero */

loc_00128FCD: ;
    PUSH32(esp, 0x00128FD2u); RECOMP_ABI_CALL(0x00128AB0u, sub_00128AB0); /* call 0x00128AB0 */

loc_00128FD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128FF2; /* jne: not equal / not zero */

loc_00128FD7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128F30(); return; /* tail jmp 0x00128F30 */

loc_00128FDD: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128FE7u); RECOMP_ABI_CALL(0x00128D10u, sub_00128D10); /* call 0x00128D10 */

loc_00128FE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128FEDu); RECOMP_ABI_CALL(0x00128F30u, sub_00128F30); /* call 0x00128F30 */

loc_00128FED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00128FF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129000
 * Original: 0x00129000 - 0x00129021 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129000: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00129008u); RECOMP_ABI_CALL(0x00109B90u, sub_00109B90); /* call 0x00109B90 */

loc_00129008: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012901D; /* jne: not equal / not zero */

loc_0012900D: ;
    PUSH32(esp, 0x00129012u); RECOMP_ABI_CALL(0x00128AB0u, sub_00128AB0); /* call 0x00128AB0 */

loc_00129012: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012901D; /* je: equal / zero */

loc_00129017: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128F30(); return; /* tail jmp 0x00128F30 */

loc_0012901D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129030
 * Original: 0x00129030 - 0x00129036 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129030(void)
{

loc_00129030: ;
    eax = 0x2AF6C8;
    esp += 4; return; /* ret */

}

/**
 * sub_00129040
 * Original: 0x00129040 - 0x00129050 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129040: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3588) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3588 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00129050
 * Original: 0x00129050 - 0x0012905F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129050: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1FC) = ecx;
    MEM32(eax + 0x200) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129060
 * Original: 0x00129060 - 0x00129075 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129060: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129080
 * Original: 0x00129080 - 0x0012909F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129080: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012908A; /* jne: not equal / not zero */

loc_00129087: ;
    MEM32(eax + 8) = edx;

loc_0012908A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012909E; /* je: equal / zero */

loc_0012908E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012909E; /* je: equal / zero */

loc_00129094: ;
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0012909Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00129099u); } /* indirect call */
    }

loc_0012909B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012909E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001290A0
 * Original: 0x001290A0 - 0x001290A6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290A0(void)
{

loc_001290A0: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001290B0
 * Original: 0x001290B0 - 0x001290CF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001290B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0xA9C9E8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001290C1; /* jne: not equal / not zero */

loc_001290BD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001290C1: ;
    edx = MEM32(eax + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001290D0
 * Original: 0x001290D0 - 0x001290D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001290D0: ;
    g_seh_ebp = ebp; sub_00109350(); return; /* tail jmp 0x00109350 */

}

/**
 * sub_001290E0
 * Original: 0x001290E0 - 0x001290E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001290E0: ;
    g_seh_ebp = ebp; sub_00109380(); return; /* tail jmp 0x00109380 */

}

/**
 * sub_001290F0
 * Original: 0x001290F0 - 0x001290FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001290F0: ;
    PUSH32(esp, 0x001290F5u); RECOMP_ABI_CALL(0x0012DB10u, sub_0012DB10); /* call 0x0012DB10 */

loc_001290F5: ;
    g_seh_ebp = ebp; sub_00133FE0(); return; /* tail jmp 0x00133FE0 */

}

/**
 * sub_00129100
 * Original: 0x00129100 - 0x00129105 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129100: ;
    g_seh_ebp = ebp; sub_00133FF0(); return; /* tail jmp 0x00133FF0 */

}

/**
 * sub_00129110
 * Original: 0x00129110 - 0x00129111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129110(void)
{

loc_00129110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129120
 * Original: 0x00129120 - 0x00129121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129120(void)
{

loc_00129120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129130
 * Original: 0x00129130 - 0x00129135 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129130: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_00129140
 * Original: 0x00129140 - 0x00129145 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129140: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_00129150
 * Original: 0x00129150 - 0x001291B4 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA9C9C4;
    /* nop */

loc_00129160: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129171; /* je: equal / zero */

loc_00129166: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012916Cu); RECOMP_ABI_CALL(0x0012E5B0u, sub_0012E5B0); /* call 0x0012E5B0 */

loc_0012916C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00129171: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9C9E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA9C9E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129160; /* jl: less (signed <) */

loc_0012917C: ;
    PUSH32(esp, 0xA9C970);
    PUSH32(esp, 0x00129186u); RECOMP_ABI_CALL(0x00129410u, sub_00129410); /* call 0x00129410 */

loc_00129186: ;
    PUSH32(esp, 0xA9C97C);
    PUSH32(esp, 0x00129190u); RECOMP_ABI_CALL(0x001316F0u, sub_001316F0); /* call 0x001316F0 */

loc_00129190: ;
    PUSH32(esp, 0xA9C980);
    PUSH32(esp, 0x0012919Au); RECOMP_ABI_CALL(0x00132A20u, sub_00132A20); /* call 0x00132A20 */

loc_0012919A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x001291A4u); RECOMP_ABI_CALL(0x00129100u, sub_00129100); /* call 0x00129100 */

loc_001291A4: ;
    PUSH32(esp, 0x001291A9u); RECOMP_ABI_CALL(0x001290E0u, sub_001290E0); /* call 0x001290E0 */

loc_001291A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001291B1; /* jne: not equal / not zero */

loc_001291AF: ;
    eax = edi;

loc_001291B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001291C0
 * Original: 0x001291C0 - 0x001291C8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001291C0(void)
{

loc_001291C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001291C6u); RECOMP_ABI_CALL(0x00129060u, sub_00129060); /* call 0x00129060 */

loc_001291C6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001291D0
 * Original: 0x001291D0 - 0x00129213 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001291D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001291D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001291DD; /* jne: not equal / not zero */

loc_001291D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001291DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001291F7; /* jne: not equal / not zero */

loc_001291E8: ;
    eax = 0xA9C95C;
    PUSH32(esp, 0x001291F2u); RECOMP_ABI_CALL(0x00129080u, sub_00129080); /* call 0x00129080 */

loc_001291F2: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001291F7: ;
    eax = esi + 0x9F0;
    PUSH32(esp, 0x00129202u); RECOMP_ABI_CALL(0x00129080u, sub_00129080); /* call 0x00129080 */

loc_00129202: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012920E; /* jle: less or equal (signed <=) */

loc_00129209: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0x48) = eax;

loc_0012920E: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129220
 * Original: 0x00129220 - 0x00129274 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012923F; /* jne: not equal / not zero */

loc_00129229: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = 0xA9C95C;
    PUSH32(esp, 0x0012923Bu); RECOMP_ABI_CALL(0x001290A0u, sub_001290A0); /* call 0x001290A0 */

loc_0012923B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012923F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129245u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00129245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012925D; /* je: equal / zero */

loc_0012924C: ;
    PUSH32(esp, 0xFF000101u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00129258u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00129258: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012925D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = esi + 0x9F0;
    PUSH32(esp, 0x00129270u); RECOMP_ABI_CALL(0x001290A0u, sub_001290A0); /* call 0x001290A0 */

loc_00129270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129280
 * Original: 0x00129280 - 0x0012930A (138 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001292BD; /* jne: not equal / not zero */

loc_00129289: ;
    ecx = MEM32(0xA9C95C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    edx = MEM32(0xA9C960);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0xA9C964);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0xA9C968);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0xA9C96C);
    MEM32(eax + 0x10) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001292BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001292C3u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_001292C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001292E0; /* je: equal / zero */

loc_001292CA: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000102u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_001292E0: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x9F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9F0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(edx + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129310
 * Original: 0x00129310 - 0x001293BB (171 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129310: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x89);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xA9C7C0);
    PUSH32(esp, 0x00129323u); RECOMP_ABI_CALL(0x00132D10u, sub_00132D10); /* call 0x00132D10 */

loc_00129323: ;
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x2AFD38);
    PUSH32(esp, 0xA9C7C0);
    PUSH32(esp, 0x00129337u); RECOMP_ABI_CALL(0x001330E0u, sub_001330E0); /* call 0x001330E0 */

loc_00129337: ;
    eax = MEM32(edi);
    MEM32(0xA9C950) = eax;
    ecx = MEM32(edi + 4);
    eax = 0xA9C95C;
    MEM32(0xA9C954) = ecx;
    MEM32(0xA9C958) = esi;
    PUSH32(esp, 0x00129357u); RECOMP_ABI_CALL(0x001291C0u, sub_001291C0); /* call 0x001291C0 */

loc_00129357: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA9C970);
    PUSH32(esp, 0x00129365u); RECOMP_ABI_CALL(0x001293F0u, sub_001293F0); /* call 0x001293F0 */

loc_00129365: ;
    PUSH32(esp, 0xA9C97C);
    PUSH32(esp, 0x0012936Fu); RECOMP_ABI_CALL(0x001316E0u, sub_001316E0); /* call 0x001316E0 */

loc_0012936F: ;
    eax = 0xA9C7C0;
    PUSH32(esp, 0x00129379u); RECOMP_ABI_CALL(0x00129050u, sub_00129050); /* call 0x00129050 */

loc_00129379: ;
    MEM32(0xA9C9C4) = esi;
    MEM32(0xA9C9C8) = esi;
    MEM32(0xA9C9CC) = esi;
    MEM32(0xA9C9D0) = esi;
    MEM32(0xA9C9D4) = esi;
    MEM32(0xA9C9D8) = esi;
    MEM32(0xA9C9DC) = esi;
    MEM32(0xA9C9E0) = esi;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA9C980);
    PUSH32(esp, 0x001293B6u); RECOMP_ABI_CALL(0x00132A00u, sub_00132A00); /* call 0x00132A00 */

loc_001293B6: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001293C0
 * Original: 0x001293C0 - 0x001293F0 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001293C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001293C0: ;
    PUSH32(esp, edi);
    MEM32(0xA9C9E4) = 0x3588;
    MEM32(0x983D70) = 0x2AF6C8;
    PUSH32(esp, 0x001293DAu); RECOMP_ABI_CALL(0x001290D0u, sub_001290D0); /* call 0x001290D0 */

loc_001293DA: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x001293E3u); RECOMP_ABI_CALL(0x00129310u, sub_00129310); /* call 0x00129310 */

loc_001293E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001293EF; /* jne: not equal / not zero */

loc_001293E8: ;
    PUSH32(esp, 0x001293EDu); RECOMP_ABI_CALL(0x001290F0u, sub_001290F0); /* call 0x001290F0 */

loc_001293ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001293EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001293F0
 * Original: 0x001293F0 - 0x00129409 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001293F0(void)
{

loc_001293F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129410
 * Original: 0x00129410 - 0x00129411 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129410(void)
{

loc_00129410: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129420
 * Original: 0x00129420 - 0x00129443 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129420: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129450
 * Original: 0x00129450 - 0x001294D4 (132 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129450: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x294);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012946C; /* jne: not equal / not zero */

loc_00129464: ;
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012946C: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001294D2; /* je: equal / zero */

loc_00129472: ;
    MEM32(esi + 0x294) = eax;
    eax = MEM32(esi + 0x29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129484; /* jg: greater (signed >) */

loc_00129482: ;
    eax = ecx;

loc_00129484: ;
    MEM32(esi + 0x29C) = eax;
    eax = MEM32(esi + 0x2A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129496; /* jl: less (signed <) */

loc_00129494: ;
    eax = ecx;

loc_00129496: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x298);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7FFFFFFF (32-bit) */
    MEM32(esi + 0x2A0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001294CB; /* je: equal / zero */

loc_001294AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001294CB; /* jle: less or equal (signed <=) */

loc_001294AF: ;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001294CB; /* je: equal / zero */

loc_001294C0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x298) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001294CB: ;
    MEM32(esi + 0x298) = ecx;
    POP32(esp, edi);

loc_001294D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001294E0
 * Original: 0x001294E0 - 0x0012950E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001294E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001294E0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x294);
    eax = MEM32(ecx + 0x298);
    ecx = MEM32(ecx + 0x29C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012950D; /* jl: less (signed <) */

loc_00129502: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0012950D; /* jl: less (signed <) */

loc_00129508: ;
    eax = 0x7FFFFFFF;

loc_0012950D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129510
 * Original: 0x00129510 - 0x00129530 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129510: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129519; /* je: equal / zero */

loc_00129516: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00129519: ;
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129516; /* jne: not equal / not zero */

loc_00129520: ;
    edx = MEM32(eax + 0x96C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129530
 * Original: 0x00129530 - 0x00129549 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129530: ;
    ecx = MEM32(eax + 0x2CC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129548; /* je: equal / zero */

loc_0012953D: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_00129548: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129550
 * Original: 0x00129550 - 0x0012957A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129550: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129558u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00129558: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012956D; /* jne: not equal / not zero */

loc_00129560: ;
    ecx = MEM32(esi + 0x2A8);
    MEM32(esi + 0x2D0) = ecx;
    esp += 4; return; /* ret */

loc_0012956D: ;
    edx = MEM32(esi + 0x2DC);
    MEM32(esi + 0x2D0) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129580
 * Original: 0x00129580 - 0x001295BE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129580: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129588u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_00129588: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001295A7; /* jne: not equal / not zero */

loc_00129590: ;
    ecx = MEM32(esi + 0x2A8);
    _fb = (uint32_t)(MEM32(esi + 0x2D0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x2D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx) = ecx;
    edx = MEM32(0xA9C978);
    MEM32(edi) = edx;
    esp += 4; return; /* ret */

loc_001295A7: ;
    eax = MEM32(esi + 0x2DC);
    _fb = (uint32_t)(MEM32(esi + 0x2D0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 0x2E0);
    MEM32(edi) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001295C0
 * Original: 0x001295C0 - 0x00129627 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001295C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001295C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001295D0u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001295D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001295DE; /* jne: not equal / not zero */

loc_001295D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001295DE: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001295E6u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_001295E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001295D7; /* je: equal / zero */

loc_001295F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0xD28;
    edi = esp + 0x14;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0x00129609u); RECOMP_ABI_CALL(0x00129580u, sub_00129580); /* call 0x00129580 */

loc_00129609: ;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129630
 * Original: 0x00129630 - 0x0012968C (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x15C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012964E; /* jg: greater (signed >) */

loc_0012963E: ;
    if (CMP_L(_fas, _fbs)) goto loc_0012964A; /* jl: less (signed <) */

loc_00129640: ;
    ecx = MEM32(eax + 0x158);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012964E; /* jae: above or equal (unsigned >=) */

loc_0012964A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0012964E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x158);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x15C);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012966Au); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0012966A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x15F90);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129678u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_00129678: ;
    MEM32(0xA9C7B4) = edi;
    POP32(esp, edi);
    MEM32(0xA9C7B0) = esi;
    MEM32(0xA9C7BC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129690
 * Original: 0x00129690 - 0x001296E4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001296B3; /* je: equal / zero */

loc_001296A5: ;
    esi = MEM32(eax + 0x13C);
    eax = MEM32(eax + 0x140);
    goto loc_001296C3;

loc_001296B3: ;
    esi = MEM32(eax + 0x110);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001296DF; /* jl: less (signed <) */

loc_001296BD: ;
    eax = MEM32(eax + 0x114);

loc_001296C3: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001296CFu); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_001296CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0xA9C7B8) = esi;
    MEM32(0xA9C7A8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001296DF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001296F0
 * Original: 0x001296F0 - 0x00129709 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001296F0(void)
{

loc_001296F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x144) = ecx;
    MEM32(eax + 0x148) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129710
 * Original: 0x00129710 - 0x0012972F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00129710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129710: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xFB4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0xFB8);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129730
 * Original: 0x00129730 - 0x00129768 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129730: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129762; /* je: equal / zero */

loc_0012973C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129762; /* je: equal / zero */

loc_00129741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129762; /* je: equal / zero */

loc_00129746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129762; /* je: equal / zero */

loc_0012974B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(edx) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00129762: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00129770
 * Original: 0x00129770 - 0x001297A4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012977Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012977B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129793; /* je: equal / zero */

loc_00129782: ;
    PUSH32(esp, 0xFF000122u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012978Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012978E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129793: ;
    MEM32(esi + 0xFCC) = MEM32(esi + 0xFCC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xFCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001297B0
 * Original: 0x001297B0 - 0x001297E6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001297BBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_001297BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001297D8; /* je: equal / zero */

loc_001297C2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000124u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_001297D8: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xD40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001297F0
 * Original: 0x001297F0 - 0x001297F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297F0: ;
    g_seh_ebp = ebp; sub_001370E0(); return; /* tail jmp 0x001370E0 */

}

/**
 * sub_00129800
 * Original: 0x00129800 - 0x00129899 (153 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012980Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012980B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129823; /* je: equal / zero */

loc_00129812: ;
    PUSH32(esp, 0xFF000129u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012981Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012981E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129823: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129860; /* je: equal / zero */

loc_0012982B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 5);
    MEM32(esi + 0xFFC) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    MEM32(esi + 0x100C) = eax;
    MEM32(esi + 0x1010) = ecx;
    PUSH32(esp, 0x0012984Fu); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012984F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x47);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129859u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_00129859: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129860: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x47);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012986Au); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012986A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129874u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_00129874: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x100C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1010) = edx;
    MEM32(esi + 0xFFC) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001298A0
 * Original: 0x001298A0 - 0x001298B4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298A0(void)
{

loc_001298A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(edx + eax * 4 + 0xD28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001298C0
 * Original: 0x001298C0 - 0x00129916 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001298C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = MEM32(eax * 4 + 0x2AF718);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = esi + eax * 2;
    eax = MEM32(eax * 4 + 0x2AF740);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129903; /* jne: not equal / not zero */

loc_001298DF: ;
    PUSH32(esp, 0xFF000221u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001298EAu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_001298EA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;
    MEM32(edx) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129903: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00129911u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012990Fu); } /* indirect call */
    }

loc_00129911: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129920
 * Original: 0x00129920 - 0x00129964 (68 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129920: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1E);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = eax + esi * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129970
 * Original: 0x00129970 - 0x00129995 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129970: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5DC0);
    PUSH32(esp, 0x0012998Au); RECOMP_ABI_CALL(0x00129920u, sub_00129920); /* call 0x00129920 */

loc_0012998A: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001299A0
 * Original: 0x001299A0 - 0x001299C5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001299A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x001299BAu); RECOMP_ABI_CALL(0x00129920u, sub_00129920); /* call 0x00129920 */

loc_001299BA: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001299D0
 * Original: 0x001299D0 - 0x001299F5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001299D0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x001299EAu); RECOMP_ABI_CALL(0x00129920u, sub_00129920); /* call 0x00129920 */

loc_001299EA: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129A00
 * Original: 0x00129A00 - 0x00129A61 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129A00: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA88A);
    eax = eax + eax * 2;
    esi = esi + eax * 4;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2CF);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129A70
 * Original: 0x00129A70 - 0x00129AD0 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129A70: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD2BA);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x383);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129AD0
 * Original: 0x00129AD0 - 0x00129B30 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129AD0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1A5AA);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x707);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B30
 * Original: 0x00129B30 - 0x00129B78 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B30: ;
    PUSH32(esp, ecx);
    edx = MEM32(0xA9C978);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129B40u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_00129B40: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129B4Cu); RECOMP_ABI_CALL(0x00129130u, sub_00129130); /* call 0x00129130 */

loc_00129B4C: ;
    ecx = MEM32(esi + 0xFD0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xFD0) = ecx;
    edx = MEM32(esi + 0xFF4);
    eax = esp + 0x14;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0xFF4) = edx;
    PUSH32(esp, 0x00129B72u); RECOMP_ABI_CALL(0x00129140u, sub_00129140); /* call 0x00129140 */

loc_00129B72: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B80
 * Original: 0x00129B80 - 0x00129BBA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B80: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1008);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129B90u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_00129B90: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129B9Cu); RECOMP_ABI_CALL(0x00129130u, sub_00129130); /* call 0x00129130 */

loc_00129B9C: ;
    ecx = MEM32(esi + 0x1004);
    edx = esp + 0x14;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x1004) = ecx;
    PUSH32(esp, 0x00129BB4u); RECOMP_ABI_CALL(0x00129140u, sub_00129140); /* call 0x00129140 */

loc_00129BB4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129BC0
 * Original: 0x00129BC0 - 0x00129BF3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129BC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00129BDF; /* jne: not equal / not zero */

loc_00129BD2: ;
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    MEM32(edx) = 0x7512;
    esp += 4; return; /* ret */

loc_00129BDF: ;
    MEM32(ecx) = 0x3E8;
    edx = MEM32(eax * 4 + 0x2AF718);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129C00
 * Original: 0x00129C00 - 0x00129C4C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129C00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(edi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00129C16u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00129C16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C34; /* je: equal / zero */

loc_00129C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF00011Bu;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_00129C34: ;
    eax = MEM32(esi + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C47; /* je: equal / zero */

loc_00129C3E: ;
    eax = MEM32(eax * 4 + 0x2AF718);
    MEM32(edi) = eax;

loc_00129C47: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129C50
 * Original: 0x00129C50 - 0x00129CB1 (97 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129C50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(edi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00129C66u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00129C66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C84; /* je: equal / zero */

loc_00129C6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000118u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_00129C84: ;
    eax = MEM32(esi + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129CAC; /* je: equal / zero */

loc_00129C8E: ;
    ecx = MEM32(esi + 0xFD4);
    edx = MEM32(eax * 4 + 0x2AF718);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129CA7u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_00129CA7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_00129CAC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129CC0
 * Original: 0x00129CC0 - 0x00129D0F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129CCBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_00129CCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129CE3; /* je: equal / zero */

loc_00129CD2: ;
    PUSH32(esp, 0xFF000125u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00129CDEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00129CDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129CE3: ;
    eax = MEM32(esi + 0xFD8);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xFD8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xFDC) = eax;
    MEM32(esi + 0xFE0) = ecx;
    MEM32(esi + 0x44) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129D10
 * Original: 0x00129D10 - 0x00129D54 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00129D10: ;
    ecx = MEM32(eax + 0xFF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00129D2B; /* jge: greater or equal (signed >=) */

loc_00129D1A: ;
    MEM32(eax + 0xFF4) = 0;
    MEM32(esi) = 1;
    esp += 4; return; /* ret */

loc_00129D2B: ;
    ecx = MEM32(0xA9C978);
    eax = MEM32(eax + 0xFF4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00129D48u); RECOMP_ABI_CALL(0x001370E0u, sub_001370E0); /* call 0x001370E0 */

loc_00129D48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00129D60
 * Original: 0x00129D60 - 0x00129E4E (238 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D60(void)
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

loc_00129D60: ;
    fp_push((double)SMEM32(ecx + 0xABC)); /* fild */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00129D80; /* jp: parity */

loc_00129D77: ;
    fp_pop(); /* fstp st(0) */
    MEM32(edx) = 0;
    esp += 4; return; /* ret */

loc_00129D80: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129DD8; /* jne: not equal / not zero */

loc_00129D93: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(edx) = 1;
    fp_push(MEMF(ecx + 0xFF0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00129E4D; /* jnp: not parity */

loc_00129DB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(ecx + 0xFE8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00129E4D; /* jnp: not parity */

loc_00129DC7: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xFE8) = eax;
    MEM32(ecx + 0xFE4) = MEM32(ecx + 0xFE4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xFE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00129DD8: ;
    _fa = (uint32_t)(MEM32(0xA9C978)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9C978), 0xEA24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E00; /* jne: not equal / not zero */

loc_00129DE4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x920)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x920), 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129E00; /* jg: greater (signed >) */

loc_00129DED: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFD4), 0x3E8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E00; /* jne: not equal / not zero */

loc_00129DF9: ;
    eax = 1;
    goto loc_00129E02;

loc_00129E00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00129E02: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFE4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129E14; /* jg: greater (signed >) */

loc_00129E0A: ;
    eax = MEM32(ecx + 0xFEC);
    MEM32(edx) = eax;
    goto loc_00129E31;

loc_00129E14: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00129E2B; /* jp: parity */

loc_00129E23: ;
    MEM32(edx) = 0;
    goto loc_00129E31;

loc_00129E2B: ;
    MEM32(edx) = 1;

loc_00129E31: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xFE4) = 0;
    edx = MEM32(edx);
    MEM32(ecx + 0xFEC) = edx;
    MEM32(ecx + 0xFF0) = eax;

loc_00129E4D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129E50
 * Original: 0x00129E50 - 0x00129ECC (124 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00129E50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x950);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xFA8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xFA4);
    if (CMP_NE(_fa, _fb)) goto loc_00129E76; /* jne: not equal / not zero */

loc_00129E6D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00129E76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00129E81; /* jne: not equal / not zero */

loc_00129E7B: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00129E81: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129E91u); RECOMP_ABI_CALL(0x00129710u, sub_00129710); /* call 0x00129710 */

loc_00129E91: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7D0);
    eax = 0x8BF338ABu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x18);
    if (((0xF) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xF) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129EBFu); RECOMP_ABI_CALL(0x001370E0u, sub_001370E0); /* call 0x001370E0 */

loc_00129EBF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129ED0
 * Original: 0x00129ED0 - 0x00129EDF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129ED0(void)
{

loc_00129ED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xFD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00129EE0
 * Original: 0x00129EE0 - 0x00129EEB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EE0(void)
{

loc_00129EE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xFD4);
    esp += 4; return; /* ret */

}

/**
 * sub_00129EF0
 * Original: 0x00129EF0 - 0x00129F15 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129EF0: ;
    edx = MEM32(esp + 4);
    eax = edx + 4;
    PUSH32(esp, eax);
    MEM32(edx) = 0;
    PUSH32(esp, 0x00129F03u); RECOMP_ABI_CALL(0x00129420u, sub_00129420); /* call 0x00129420 */

loc_00129F03: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x28) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00129F20
 * Original: 0x00129F20 - 0x00129F67 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129F20: ;
    PUSH32(esp, esi);
    eax = edi;
    esi = edi + 0xD28;
    PUSH32(esp, 0x00129F2Eu); RECOMP_ABI_CALL(0x00129510u, sub_00129510); /* call 0x00129510 */

loc_00129F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F44; /* je: equal / zero */

loc_00129F32: ;
    eax = MEM32(esi + 0x2A8);
    _fb = (uint32_t)(MEM32(esi + 0x2AC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2A8) = eax;

loc_00129F44: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00129F4Cu); RECOMP_ABI_CALL(0x00129530u, sub_00129530); /* call 0x00129530 */

loc_00129F4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F65; /* je: equal / zero */

loc_00129F53: ;
    ecx = MEM32(esi + 0x2CC);
    _fb = (uint32_t)(MEM32(esi + 0x2AC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x2AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2CC) = ecx;

loc_00129F65: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129F70
 * Original: 0x00129F70 - 0x00129F9B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129F70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129F7Bu); RECOMP_ABI_CALL(0x001295C0u, sub_001295C0); /* call 0x001295C0 */

loc_00129F7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F97; /* je: equal / zero */

loc_00129F82: ;
    PUSH32(esp, 0xFF000222u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129F8Du); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_00129F8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129F97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129FA0
 * Original: 0x00129FA0 - 0x00129FAC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129FA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129FA8u); RECOMP_ABI_CALL(0x00129710u, sub_00129710); /* call 0x00129710 */

loc_00129FA8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129FB0
 * Original: 0x00129FB0 - 0x00129FDE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129FB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129FC6u); RECOMP_ABI_CALL(0x00129730u, sub_00129730); /* call 0x00129730 */

loc_00129FC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129FD9; /* je: equal / zero */

loc_00129FCD: ;
    MEM32(edi) = 0xFFFFFFFEu;
    MEM32(esi) = 1;

loc_00129FD9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129FE0
 * Original: 0x00129FE0 - 0x0012A014 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129FE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00129FF7u); RECOMP_ABI_CALL(0x00129730u, sub_00129730); /* call 0x00129730 */

loc_00129FF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A00E; /* je: equal / zero */

loc_00129FFE: ;
    eax = MEM32(ebx + 0xFD0);
    MEM32(edi) = eax;
    ecx = MEM32(0xA9C978);
    MEM32(esi) = ecx;

loc_0012A00E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A020
 * Original: 0x0012A020 - 0x0012A03A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A020: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A034u); RECOMP_ABI_CALL(0x00129730u, sub_00129730); /* call 0x00129730 */

loc_0012A034: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A040
 * Original: 0x0012A040 - 0x0012A101 (193 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A05Au); RECOMP_ABI_CALL(0x00129730u, sub_00129730); /* call 0x00129730 */

loc_0012A05A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A078; /* je: equal / zero */

loc_0012A061: ;
    eax = MEM32(esi + 0xFFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A081; /* jne: not equal / not zero */

loc_0012A06B: ;
    MEM32(ebp) = 0xFFFFFFFEu;
    MEM32(ebx) = 1;

loc_0012A078: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012A081: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1010);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A095u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A093u); } /* indirect call */
    }

loc_0012A095: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0012A0A1u); RECOMP_ABI_CALL(0x00129510u, sub_00129510); /* call 0x00129510 */

loc_0012A0A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0012A0D6; /* je: equal / zero */

loc_0012A0A9: ;
    _fa = (uint32_t)(MEM32(esi + 0x1000)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1000), 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A0D6; /* je: equal / zero */

loc_0012A0B2: ;
    edx = MEM32(esi + 0x1000);
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0012A0C8; /* jns: not sign (positive) */

loc_0012A0BE: ;
    edx = MEM32(esi + 0x100C);
    eax = eax + edx + 1;

loc_0012A0C8: ;
    edx = MEM32(esi + 0x1004);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1004) = edx;

loc_0012A0D6: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x1000) = ecx;
    MEM32(esi + 0x1008) = eax;
    ecx = MEM32(esi + 0x1004);
    MEM32(ebp) = ecx;
    edx = MEM32(esi + 0x1008);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A110
 * Original: 0x0012A110 - 0x0012A15F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A110: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A11Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A11B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A138; /* je: equal / zero */

loc_0012A122: ;
    POP32(esp, edi);
    MEM32(esp + 8) = 0xFF000123u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_0012A138: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A146u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A146: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012A15B; /* je: equal / zero */

loc_0012A14E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A158u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012A158: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A15B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A160
 * Original: 0x0012A160 - 0x0012A1A3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A160: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0012A1A1; /* jne: not equal / not zero */

loc_0012A16A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A181u); RECOMP_ABI_CALL(0x00129BC0u, sub_00129BC0); /* call 0x00129BC0 */

loc_0012A181: ;
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0012A195u); RECOMP_ABI_CALL(0x00129B30u, sub_00129B30); /* call 0x00129B30 */

loc_0012A195: ;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0012A19Eu); RECOMP_ABI_CALL(0x00129B80u, sub_00129B80); /* call 0x00129B80 */

loc_0012A19E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012A1A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A1B0
 * Original: 0x0012A1B0 - 0x0012A296 (230 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A1B0(void)
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

loc_0012A1B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A1C8u); RECOMP_ABI_CALL(0x00129710u, sub_00129710); /* call 0x00129710 */

loc_0012A1C8: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A209; /* jne: not equal / not zero */

loc_0012A1D4: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A1EA; /* jne: not equal / not zero */

loc_0012A1DB: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012A1EA: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x0012A200u); RECOMP_ABI_CALL(0x00129D10u, sub_00129D10); /* call 0x00129D10 */

loc_0012A200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012A209: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AF788)); /* fmul dword ptr [0x2af788] */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x18)); /* fidiv dword ptr [esp + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0xA9C978)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0xA9C978))); }
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fa = (uint32_t)(MEM32(edi + 0xA40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA40), 1 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AF788)); /* fmul dword ptr [0x2af788] */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A269; /* je: equal / zero */

loc_0012A24C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012A261u); RECOMP_ABI_CALL(0x00129D60u, sub_00129D60); /* call 0x00129D60 */

loc_0012A261: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012A269: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012A287; /* jp: parity */

loc_0012A278: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012A287: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = 0;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A2A0
 * Original: 0x0012A2A0 - 0x0012A60A (874 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A2A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x129FB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2B6u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2B6: ;
    ebp = 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x129FE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2C7u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2C7: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2D0u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2D0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x12A020);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2DDu); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2DD: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2E6u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2E6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x12A040);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A2F3u); RECOMP_ABI_CALL(0x001298A0u, sub_001298A0); /* call 0x001298A0 */

loc_0012A2F3: ;
    esi = MEM32(esp + 0x60);
    eax = esi + 0x1C;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x0012A306u); RECOMP_ABI_CALL(0x00129420u, sub_00129420); /* call 0x00129420 */

loc_0012A306: ;
    ecx = esi + 0xC0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A313u); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A313: ;
    edx = esi + 0x3C;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A321u); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A321: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A32Eu); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A32E: ;
    ecx = esi + 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A33Bu); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A33B: ;
    edx = esi + 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A348u); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A348: ;
    eax = esi + 0x118;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A359u); RECOMP_ABI_CALL(0x00129EF0u, sub_00129EF0); /* call 0x00129EF0 */

loc_0012A359: ;
    MEM32(esi + 0x144) = edi;
    MEM32(esi + 0x148) = edi;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x158) = ebx;
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x160) = edi;
    MEM32(esi + 0x164) = edi;
    MEM32(esi + 0x168) = edi;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x16C) = ecx;
    MEM32(esi + 0x170) = ecx;
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x178) = ecx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x180) = ecx;
    MEM32(esi + 0x184) = ecx;
    MEM32(esi + 0x188) = ecx;
    MEM32(esi + 0x18C) = ecx;
    MEM32(esi + 0x190) = ecx;
    MEM32(esi + 0x194) = ecx;
    MEM32(esi + 0x198) = ecx;
    MEM32(esi + 0x19C) = ecx;
    MEM32(esi + 0x1A0) = ecx;
    MEM32(esi + 0x1A4) = ecx;
    MEM32(esi + 0x1A8) = ecx;
    MEM32(esi + 0x1AC) = ecx;
    MEM32(esi + 0x1B0) = ecx;
    MEM32(esi + 0x1B4) = ecx;
    MEM32(esi + 0x1B8) = ecx;
    MEM32(esi + 0x1BC) = ecx;
    MEM32(esi + 0x1C0) = ecx;
    MEM32(esi + 0x1C4) = ecx;
    MEM32(esi + 0x1C8) = ecx;
    MEM32(esi + 0x1CC) = ecx;
    MEM32(esi + 0x1D0) = ecx;
    MEM32(esi + 0x1D4) = ecx;
    MEM32(esi + 0x1D8) = ecx;
    MEM32(esi + 0x1DC) = ecx;
    MEM32(esi + 0x1E0) = ecx;
    MEM32(esi + 0x1E4) = ecx;
    MEM32(esi + 0x1E8) = ecx;
    MEM32(esi + 0x1EC) = ebp;
    MEM32(esi + 0x1F0) = edi;
    MEM32(esi + 0x1F4) = edi;
    MEM32(esi + 0x1F8) = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1FC) = edx;
    MEM32(esi + 0x200) = edx;
    MEM32(esi + 0x204) = edx;
    MEM32(esi + 0x208) = edx;
    MEM32(esi + 0x20C) = edx;
    MEM32(esi + 0x210) = edx;
    MEM32(esi + 0x214) = edx;
    MEM32(esi + 0x218) = edx;
    MEM32(esi + 0x21C) = edx;
    MEM32(esi + 0x220) = edx;
    MEM32(esi + 0x224) = edx;
    MEM32(esi + 0x228) = edx;
    MEM32(esi + 0x22C) = edx;
    MEM32(esi + 0x230) = edx;
    MEM32(esi + 0x234) = edx;
    MEM32(esi + 0x238) = edx;
    MEM32(esi + 0x23C) = edx;
    MEM32(esi + 0x240) = edx;
    MEM32(esi + 0x244) = edx;
    MEM32(esi + 0x248) = edx;
    MEM32(esi + 0x24C) = edx;
    MEM32(esi + 0x250) = edx;
    MEM32(esi + 0x254) = edx;
    MEM32(esi + 0x258) = edx;
    MEM32(esi + 0x25C) = edx;
    MEM32(esi + 0x260) = edx;
    MEM32(esi + 0x264) = edx;
    MEM32(esi + 0x268) = edx;
    MEM32(esi + 0x26C) = edx;
    MEM32(esi + 0x270) = edx;
    MEM32(esi + 0x274) = edx;
    MEM32(esi + 0x278) = edx;
    ecx = 0x7FFFFFFF;
    eax = 0xFFFFFFFBu;
    MEM32(esi + 0x298) = ecx;
    MEM32(esi + 0x2A0) = ecx;
    MEM32(esi + 0x27C) = eax;
    MEM32(esi + 0x280) = ebp;
    MEM32(esi + 0x284) = eax;
    MEM32(esi + 0x288) = ebp;
    MEM32(esi + 0x28C) = ebx;
    MEM32(esi + 0x290) = ebp;
    MEM32(esi + 0x294) = eax;
    MEM32(esi + 0x29C) = edi;
    MEM32(esi + 0x2A4) = edi;
    MEM32(esi + 0x2A8) = edi;
    MEM32(esi + 0x2AC) = 0x3E8;
    MEM32(esi + 0x2B0) = edi;
    MEM32(esi + 0x2B4) = edi;
    MEM32(esi + 0x2B8) = ebp;
    MEM32(esi + 0x2BC) = 0x64;
    ecx = 0xBF800000u;
    MEM32(esi + 0x2CC) = ebx;
    MEM32(esi + 0x2C0) = ecx;
    MEM32(esi + 0x2C8) = ecx;
    ecx = MEM32(esi + 0x2A8);
    MEM32(esi + 0x2D8) = eax;
    MEM32(esi + 0x2DC) = edi;
    MEM32(esi + 0x2C4) = edi;
    MEM32(esi + 0x2D4) = edi;
    MEM32(esi + 0x2E0) = ebp;
    MEM32(esi + 0x2E8) = edi;
    MEM32(esi + 0x5B0) = edi;
    MEM32(esi + 0x5B4) = edi;
    MEM32(esi + 0x5B8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x2E4) = ebx;
    MEM32(esi + 0x2D0) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A610
 * Original: 0x0012A610 - 0x0012A679 (105 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A610: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = ebx;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0x0012A62Bu); RECOMP_ABI_CALL(0x00129FA0u, sub_00129FA0); /* call 0x00129FA0 */

loc_0012A62B: ;
    ebp = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A672; /* je: equal / zero */

loc_0012A634: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xE70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xE70) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A64B; /* jne: not equal / not zero */

loc_0012A63C: ;
    eax = MEM32(esi + 0xE6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012A64B: ;
    ecx = MEM32(esi + 0xE40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A672; /* je: equal / zero */

loc_0012A655: ;
    ecx = MEM32(esi + 0xE68);
    edx = MEM32(esi + 0xE64);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A669u); RECOMP_ABI_CALL(0x0012FEF0u, sub_0012FEF0); /* call 0x0012FEF0 */

loc_0012A669: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;

loc_0012A672: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A680
 * Original: 0x0012A680 - 0x0012A6B3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A68Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A68B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A6A3; /* je: equal / zero */

loc_0012A692: ;
    PUSH32(esp, 0xFF000127u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A69Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012A69E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A6A3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00129FA0(); return; /* tail jmp 0x00129FA0 */

}

/**
 * sub_0012A6C0
 * Original: 0x0012A6C0 - 0x0012A70B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A6C0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A6CBu); RECOMP_ABI_CALL(0x00129130u, sub_00129130); /* call 0x00129130 */

loc_0012A6CB: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A6D7u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012A6D7: ;
    eax = MEM32(esi + eax * 4 + 0xD28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A6EA; /* jne: not equal / not zero */

loc_0012A6E5: ;
    eax = 0x129FB0;

loc_0012A6EA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A6F5u); } /* indirect call */
    }

loc_0012A6F7: ;
    esi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A703u); RECOMP_ABI_CALL(0x00129140u, sub_00129140); /* call 0x00129140 */

loc_0012A703: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A710
 * Original: 0x0012A710 - 0x0012A76E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = edi + 0xD28;
    PUSH32(esp, 0x0012A72Au); RECOMP_ABI_CALL(0x0012A6C0u, sub_0012A6C0); /* call 0x0012A6C0 */

loc_0012A72A: ;
    edx = MEM32(esi + 0x28C);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A747; /* jne: not equal / not zero */

loc_0012A73B: ;
    eax = MEM32(esi + 0x290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A762; /* je: equal / zero */

loc_0012A747: ;
    eax = edi;
    PUSH32(esp, 0x0012A74Eu); RECOMP_ABI_CALL(0x00129550u, sub_00129550); /* call 0x00129550 */

loc_0012A74E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esi + 0x28C) = ecx;
    MEM32(esi + 0x290) = edx;

loc_0012A762: ;
    MEM32(edi + 0x44) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A770
 * Original: 0x0012A770 - 0x0012A7A8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A770: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xA3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A784; /* je: equal / zero */

loc_0012A77E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0012A784: ;
    ecx = MEM32(eax + 0xAB4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A7A0u); RECOMP_ABI_CALL(0x0012A1B0u, sub_0012A1B0); /* call 0x0012A1B0 */

loc_0012A7A0: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A7B0
 * Original: 0x0012A7B0 - 0x0012A825 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(edi) = 0;
    PUSH32(esp, 0x0012A7C6u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A7C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A7DF; /* je: equal / zero */

loc_0012A7CD: ;
    PUSH32(esp, 0xFF000126u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A7D9u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012A7D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A7DF: ;
    eax = MEM32(esi + 0xA3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A7F4; /* jne: not equal / not zero */

loc_0012A7E9: ;
    MEM32(edi) = 1;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A7F4: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A805; /* je: equal / zero */

loc_0012A7FA: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A805: ;
    eax = MEM32(esi + 0xAB8);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A81Du); RECOMP_ABI_CALL(0x0012A1B0u, sub_0012A1B0); /* call 0x0012A1B0 */

loc_0012A81D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A830
 * Original: 0x0012A830 - 0x0012A84F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A830: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0012A838u); RECOMP_ABI_CALL(0x00129F20u, sub_00129F20); /* call 0x00129F20 */

loc_0012A838: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A840u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012A840: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A84D; /* jne: not equal / not zero */

loc_0012A848: ;
    PUSH32(esp, 0x0012A84Du); RECOMP_ABI_CALL(0x0012A710u, sub_0012A710); /* call 0x0012A710 */

loc_0012A84D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A850
 * Original: 0x0012A850 - 0x0012A888 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A85Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A85B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A873; /* je: equal / zero */

loc_0012A862: ;
    PUSH32(esp, 0xFF000121u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A86Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012A86E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A873: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A883u); RECOMP_ABI_CALL(0x0012A610u, sub_0012A610); /* call 0x0012A610 */

loc_0012A883: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A890
 * Original: 0x0012A890 - 0x0012A8C8 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A89Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A89B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8B3; /* je: equal / zero */

loc_0012A8A2: ;
    PUSH32(esp, 0xFF000128u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A8AEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012A8AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A8B3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A8C3u); RECOMP_ABI_CALL(0x0012A6C0u, sub_0012A6C0); /* call 0x0012A6C0 */

loc_0012A8C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A8D0
 * Original: 0x0012A8D0 - 0x0012A90A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A8D0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A8D9u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012A8D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8F1; /* je: equal / zero */

loc_0012A8E0: ;
    PUSH32(esp, 0xFF00012Au);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A8ECu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012A8EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012A8F1: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A8F9u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012A8F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A906; /* je: equal / zero */

loc_0012A901: ;
    PUSH32(esp, 0x0012A906u); RECOMP_ABI_CALL(0x0012A710u, sub_0012A710); /* call 0x0012A710 */

loc_0012A906: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A910
 * Original: 0x0012A910 - 0x0012A92F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A910: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A919; /* jne: not equal / not zero */

loc_0012A918: ;
    esp += 4; return; /* ret */

loc_0012A919: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A92Bu); RECOMP_ABI_CALL(0x0012A770u, sub_0012A770); /* call 0x0012A770 */

loc_0012A92B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A930
 * Original: 0x0012A930 - 0x0012A959 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A930: ;
    eax = MEM32(0xA9C970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0xA9C970) = eax;
    esi = 0xA9C9C4;

loc_0012A941: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A94C; /* je: equal / zero */

loc_0012A947: ;
    PUSH32(esp, 0x0012A94Cu); RECOMP_ABI_CALL(0x0012A830u, sub_0012A830); /* call 0x0012A830 */

loc_0012A94C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9C9E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA9C9E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012A941; /* jl: less (signed <) */

loc_0012A957: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A960
 * Original: 0x0012A960 - 0x0012A997 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A960: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A992; /* jne: not equal / not zero */

loc_0012A968: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA9C9C4;

loc_0012A971: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A982; /* je: equal / zero */

loc_0012A977: ;
    PUSH32(esp, 0x0012A97Cu); RECOMP_ABI_CALL(0x0012A8D0u, sub_0012A8D0); /* call 0x0012A8D0 */

loc_0012A97C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A982; /* je: equal / zero */

loc_0012A980: ;
    edi = eax;

loc_0012A982: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9C9E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA9C9E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012A971; /* jl: less (signed <) */

loc_0012A98D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A992: ;
    g_seh_ebp = ebp; sub_0012A8D0(); return; /* tail jmp 0x0012A8D0 */

}

/**
 * sub_0012A9A0
 * Original: 0x0012A9A0 - 0x0012A9A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9B0
 * Original: 0x0012A9B0 - 0x0012A9B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9C0
 * Original: 0x0012A9C0 - 0x0012A9C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9D0
 * Original: 0x0012A9D0 - 0x0012A9D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9E0
 * Original: 0x0012A9E0 - 0x0012A9F9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012A9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9F6; /* je: equal / zero */

loc_0012A9E8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A9F3u); RECOMP_ABI_CALL(0x0010C470u, sub_0010C470); /* call 0x0010C470 */

loc_0012A9F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A9F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA00
 * Original: 0x0012AA00 - 0x0012AA03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012AA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA10
 * Original: 0x0012AA10 - 0x0012AA83 (115 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA10: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AA2D; /* jne: not equal / not zero */

loc_0012AA18: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AA27u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0012AA27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012AA2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0012AA4F; /* jne: not equal / not zero */

loc_0012AA33: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AA3Du); RECOMP_ABI_CALL(0x0010BE90u, sub_0010BE90); /* call 0x0010BE90 */

loc_0012AA3D: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AA48u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0012AA48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012AA4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AA7F; /* jne: not equal / not zero */

loc_0012AA54: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AA5Eu); RECOMP_ABI_CALL(0x0010C4A0u, sub_0010C4A0); /* call 0x0010C4A0 */

loc_0012AA5E: ;
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AA7Cu); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0012AA7C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012AA7F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA90
 * Original: 0x0012AA90 - 0x0012AAA0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012AA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AA9Au); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_0012AA9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAA0
 * Original: 0x0012AAA0 - 0x0012AAB6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0012AAA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AAAAu); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0012AAAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
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
 * sub_0012AAC0
 * Original: 0x0012AAC0 - 0x0012AAC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAC0(void)
{

loc_0012AAC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAD0
 * Original: 0x0012AAD0 - 0x0012AAE2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AAD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AAE1; /* je: equal / zero */

loc_0012AAD8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010C450(); return; /* tail jmp 0x0010C450 */

loc_0012AAE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAF0
 * Original: 0x0012AAF0 - 0x0012AAF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AAF0: ;
    g_seh_ebp = ebp; sub_0010C420(); return; /* tail jmp 0x0010C420 */

}

/**
 * sub_0012AB00
 * Original: 0x0012AB00 - 0x0012AB14 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AB00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AB0Au); RECOMP_ABI_CALL(0x0010C4A0u, sub_0010C4A0); /* call 0x0010C4A0 */

loc_0012AB0A: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AB20
 * Original: 0x0012AB20 - 0x0012AB25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AB20: ;
    g_seh_ebp = ebp; sub_0010C600(); return; /* tail jmp 0x0010C600 */

}

/**
 * sub_0012AB30
 * Original: 0x0012AB30 - 0x0012AB40 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AB30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AB3Cu); RECOMP_ABI_CALL(0x0010BDA0u, sub_0010BDA0); /* call 0x0010BDA0 */

loc_0012AB3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AB40
 * Original: 0x0012AB40 - 0x0012AB45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AB40: ;
    g_seh_ebp = ebp; sub_0010C6C0(); return; /* tail jmp 0x0010C6C0 */

}

/**
 * sub_0012AB50
 * Original: 0x0012AB50 - 0x0012AB7F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AB50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AB5Bu); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_0012AB5B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AB6Fu); RECOMP_ABI_CALL(0x0010BDE0u, sub_0010BDE0); /* call 0x0010BDE0 */

loc_0012AB6F: ;
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AB7Au); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0012AB7A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AB80
 * Original: 0x0012AB80 - 0x0012ABB3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AB80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AB8Cu); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_0012AB8C: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ABA6u); RECOMP_ABI_CALL(0x0010BDE0u, sub_0010BDE0); /* call 0x0010BDE0 */

loc_0012ABA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ABADu); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0012ABAD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012ABC0
 * Original: 0x0012ABC0 - 0x0012ABC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ABC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012ABC0: ;
    g_seh_ebp = ebp; sub_0010BEE0(); return; /* tail jmp 0x0010BEE0 */

}

/**
 * sub_0012ABD0
 * Original: 0x0012ABD0 - 0x0012ABE6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ABD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ABD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ABDBu); RECOMP_ABI_CALL(0x0010BF40u, sub_0010BF40); /* call 0x0010BF40 */

loc_0012ABDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ABE1u); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_0012ABE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012ABF0
 * Original: 0x0012ABF0 - 0x0012AC06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ABF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ABF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ABFBu); RECOMP_ABI_CALL(0x0010BF70u, sub_0010BF70); /* call 0x0010BF70 */

loc_0012ABFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AC01u); RECOMP_ABI_CALL(0x0010C690u, sub_0010C690); /* call 0x0010C690 */

loc_0012AC01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AC10
 * Original: 0x0012AC10 - 0x0012AC15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AC10: ;
    g_seh_ebp = ebp; sub_0010BE60(); return; /* tail jmp 0x0010BE60 */

}

/**
 * sub_0012AC20
 * Original: 0x0012AC20 - 0x0012AC61 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AC20: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0012AC3B; /* jne: not equal / not zero */

loc_0012AC2A: ;
    PUSH32(esp, 0x2AF7C4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AC35u); RECOMP_ABI_CALL(0x00139FA0u, sub_00139FA0); /* call 0x00139FA0 */

loc_0012AC35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;

loc_0012AC3B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC51; /* je: equal / zero */

loc_0012AC41: ;
    PUSH32(esp, 0x2AF78C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AC4Du); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012AC4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012AC51: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AC5Du); RECOMP_ABI_CALL(0x00139E70u, sub_00139E70); /* call 0x00139E70 */

loc_0012AC5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012AC70
 * Original: 0x0012AC70 - 0x0012ACA4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AC70: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AC90u); RECOMP_ABI_CALL(0x0012C380u, sub_0012C380); /* call 0x0012C380 */

loc_0012AC90: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AC9Eu); RECOMP_ABI_CALL(0x0012AC20u, sub_0012AC20); /* call 0x0012AC20 */

loc_0012AC9E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012ACB0
 * Original: 0x0012ACB0 - 0x0012AD3D (141 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ACB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012ACB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012ACD0u); RECOMP_ABI_CALL(0x0012B0C0u, sub_0012B0C0); /* call 0x0012B0C0 */

loc_0012ACD0: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    eax = edx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012ACDFu); RECOMP_ABI_CALL(0x0012B0A0u, sub_0012B0A0); /* call 0x0012B0A0 */

loc_0012ACDF: ;
    eax = MEM32(esi + 0x48);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x48) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ACFAu); RECOMP_ABI_CALL(0x0012B350u, sub_0012B350); /* call 0x0012B350 */

loc_0012ACFA: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AD04u); RECOMP_ABI_CALL(0x0012AC20u, sub_0012AC20); /* call 0x0012AC20 */

loc_0012AD04: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    eax = edx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AD13u); RECOMP_ABI_CALL(0x0012B0A0u, sub_0012B0A0); /* call 0x0012B0A0 */

loc_0012AD13: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD1Au); RECOMP_ABI_CALL(0x0012B350u, sub_0012B350); /* call 0x0012B350 */

loc_0012AD1A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD21u); RECOMP_ABI_CALL(0x0012B3B0u, sub_0012B3B0); /* call 0x0012B3B0 */

loc_0012AD21: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AD34u); RECOMP_ABI_CALL(0x0012AC20u, sub_0012AC20); /* call 0x0012AC20 */

loc_0012AD34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AD40
 * Original: 0x0012AD40 - 0x0012AD86 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AD40: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AD46u); RECOMP_ABI_CALL(0x0012AF40u, sub_0012AF40); /* call 0x0012AF40 */

loc_0012AD46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0012AD71; /* jne: not equal / not zero */

loc_0012AD4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AD54u); RECOMP_ABI_CALL(0x0012C320u, sub_0012C320); /* call 0x0012C320 */

loc_0012AD54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AD71; /* jne: not equal / not zero */

loc_0012AD5C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AD6Cu); RECOMP_ABI_CALL(0x0012ACB0u, sub_0012ACB0); /* call 0x0012ACB0 */

loc_0012AD6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012AD71: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012AD80u); RECOMP_ABI_CALL(0x0012AC20u, sub_0012AC20); /* call 0x0012AC20 */

loc_0012AD80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AD90
 * Original: 0x0012AD90 - 0x0012AD96 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD90(void)
{

loc_0012AD90: ;
    eax = 0x2AF7CC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012ADA0
 * Original: 0x0012ADA0 - 0x0012ADBF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ADA0: ;
    eax = MEM32(0x983D78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012ADBE; /* jle: less or equal (signed <=) */

loc_0012ADA9: ;
    PUSH32(esp, 0x0012ADAEu); RECOMP_ABI_CALL(0x0012B5E0u, sub_0012B5E0); /* call 0x0012B5E0 */

loc_0012ADAE: ;
    PUSH32(esp, 0x0012ADB3u); RECOMP_ABI_CALL(0x00139FD0u, sub_00139FD0); /* call 0x00139FD0 */

loc_0012ADB3: ;
    PUSH32(esp, 0x0012ADB8u); RECOMP_ABI_CALL(0x0012B460u, sub_0012B460); /* call 0x0012B460 */

loc_0012ADB8: ;
    MEM32(0x983D78) = MEM32(0x983D78) - 1;
    _fa = (uint32_t)(MEM32(0x983D78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012ADBE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012ADC0
 * Original: 0x0012ADC0 - 0x0012ADD4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ADC0(void)
{

loc_0012ADC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0xA9C308) = eax;
    MEM32(0xA9C30C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012ADE0
 * Original: 0x0012ADE0 - 0x0012AE03 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012ADE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ADE0: ;
    edx = MEM32(0xA9C304);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012AE00; /* jle: less or equal (signed <=) */

loc_0012ADEC: ;
    eax = 0xA9C318;

loc_0012ADF1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AE02; /* je: equal / zero */

loc_0012ADF6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012ADF1; /* jl: less (signed <) */

loc_0012AE00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012AE02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AE10
 * Original: 0x0012AE10 - 0x0012AE71 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AE10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x24;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x3C) = eax;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x40) = eax;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x44) = eax;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x48) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x28) = 1;
    MEM32(edx + 0x2C) = ecx;
    MEM32(edx + 0x38) = ecx;
    MEM32(edx + 0x54) = esi;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x64) = 0xFFFFFFFFu;
    MEM32(edx + 0x70) = ecx;
    MEM32(edx) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AE80
 * Original: 0x0012AE80 - 0x0012AE9E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AE80: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax * 8 + 0x205D;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AEA0
 * Original: 0x0012AEA0 - 0x0012AED1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AEA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AED0; /* je: equal / zero */

loc_0012AEA8: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    MEM32(eax) = 0;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AEBBu); RECOMP_ABI_CALL(0x0012B630u, sub_0012B630); /* call 0x0012B630 */

loc_0012AEBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AEC1u); RECOMP_ABI_CALL(0x0013A040u, sub_0013A040); /* call 0x0013A040 */

loc_0012AEC1: ;
    eax = MEM32(0xA9C300);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xA9C300) = eax;
    POP32(esp, esi);

loc_0012AED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AEE0
 * Original: 0x0012AEE0 - 0x0012AF08 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AEE0: ;
    edx = MEM32(0xA9C310);
    eax = MEM32(0xA9C308);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0xA9C310) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012AF07; /* je: equal / zero */

loc_0012AEF6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0xA9C30C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012AF04u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012AF02u); } /* indirect call */
    }

loc_0012AF04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012AF07: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF10
 * Original: 0x0012AF10 - 0x0012AF1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF10(void)
{

loc_0012AF10: ;
    eax = MEM32(esp + 4);
    MEM32(0xA9C314) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF20
 * Original: 0x0012AF20 - 0x0012AF26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF20(void)
{

loc_0012AF20: ;
    eax = MEM32(0xA9C314);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF30
 * Original: 0x0012AF30 - 0x0012AF3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF30(void)
{

loc_0012AF30: ;
    eax = MEM32(esp + 4);
    MEM32(0x983D7C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF40
 * Original: 0x0012AF40 - 0x0012AF46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF40(void)
{

loc_0012AF40: ;
    eax = MEM32(0x983D7C);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF50
 * Original: 0x0012AF50 - 0x0012AF5F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF50(void)
{

loc_0012AF50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x44) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF60
 * Original: 0x0012AF60 - 0x0012AF8E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AF60: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12A;
    edi = 0xA9C300;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    MEM32(0xA9C304) = 8;
    PUSH32(esp, 0x0012AF80u); RECOMP_ABI_CALL(0x0012AF10u, sub_0012AF10); /* call 0x0012AF10 */

loc_0012AF80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012AF88u); RECOMP_ABI_CALL(0x0013D4E0u, sub_0013D4E0); /* call 0x0013D4E0 */

loc_0012AF88: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0013A190(); return; /* tail jmp 0x0013A190 */

}

/**
 * sub_0012AF90
 * Original: 0x0012AF90 - 0x0012B031 (161 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AF90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AF96u); RECOMP_ABI_CALL(0x0012ADE0u, sub_0012ADE0); /* call 0x0012ADE0 */

loc_0012AF96: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AF9E; /* jne: not equal / not zero */

loc_0012AF9C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012AF9E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AFADu); RECOMP_ABI_CALL(0x0012AE80u, sub_0012AE80); /* call 0x0012AE80 */

loc_0012AFAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AFCB; /* je: equal / zero */

loc_0012AFB5: ;
    PUSH32(esp, 0x2AF840);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012AFC3u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012AFC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012AFCB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x0012AFD7u); RECOMP_ABI_CALL(0x0012AE10u, sub_0012AE10); /* call 0x0012AE10 */

loc_0012AFD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012AFDFu); RECOMP_ABI_CALL(0x0012BC60u, sub_0012BC60); /* call 0x0012BC60 */

loc_0012AFDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AFFD; /* jne: not equal / not zero */

loc_0012AFE3: ;
    PUSH32(esp, 0x2AF820);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AFEFu); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012AFEF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AFF5u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012AFF5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012AFFD: ;
    MEM32(edi + 0x24) = eax;
    PUSH32(esp, 0x0012B005u); RECOMP_ABI_CALL(0x0013A170u, sub_0013A170); /* call 0x0013A170 */

loc_0012B005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B023; /* jne: not equal / not zero */

loc_0012B009: ;
    PUSH32(esp, 0x2AF800);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B015u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012B015: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B01Bu); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012B01B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012B023: ;
    MEM32(edi + 0x30) = eax;
    MEM32(0xA9C300) = MEM32(0xA9C300) + 1;
    _fa = (uint32_t)(MEM32(0xA9C300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B040
 * Original: 0x0012B040 - 0x0012B078 (56 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B040: ;
    _fa = (uint32_t)(MEM32(0x983D78)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x983D78), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012B077; /* jge: greater or equal (signed >=) */

loc_0012B049: ;
    PUSH32(esp, 0x0012B04Eu); RECOMP_ABI_CALL(0x0012AD90u, sub_0012AD90); /* call 0x0012AD90 */

loc_0012B04E: ;
    MEM32(0x983D74) = eax;
    PUSH32(esp, 0x0012B058u); RECOMP_ABI_CALL(0x0012AF60u, sub_0012AF60); /* call 0x0012AF60 */

loc_0012B058: ;
    PUSH32(esp, 0x0012B05Du); RECOMP_ABI_CALL(0x0012B450u, sub_0012B450); /* call 0x0012B450 */

loc_0012B05D: ;
    PUSH32(esp, 0x0012B062u); RECOMP_ABI_CALL(0x0012C130u, sub_0012C130); /* call 0x0012C130 */

loc_0012B062: ;
    PUSH32(esp, 0x0012B067u); RECOMP_ABI_CALL(0x0013A160u, sub_0013A160); /* call 0x0013A160 */

loc_0012B067: ;
    MEM32(0x983D78) = MEM32(0x983D78) + 1;
    _fa = (uint32_t)(MEM32(0x983D78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x983D7C) = 0;

loc_0012B077: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B080
 * Original: 0x0012B080 - 0x0012B08C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B080(void)
{

loc_0012B080: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B090
 * Original: 0x0012B090 - 0x0012B098 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B090(void)
{

loc_0012B090: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B0A0
 * Original: 0x0012B0A0 - 0x0012B0B3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B0A0(void)
{

loc_0012B0A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B0C0
 * Original: 0x0012B0C0 - 0x0012B0D7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B0C0(void)
{

loc_0012B0C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B0E0
 * Original: 0x0012B0E0 - 0x0012B0EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B0E0(void)
{

loc_0012B0E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B0F0
 * Original: 0x0012B0F0 - 0x0012B0FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B0F0(void)
{

loc_0012B0F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B100
 * Original: 0x0012B100 - 0x0012B10C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B100(void)
{

loc_0012B100: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B110
 * Original: 0x0012B110 - 0x0012B118 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B110(void)
{

loc_0012B110: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B120
 * Original: 0x0012B120 - 0x0012B186 (102 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B120: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    MEM32(esi + 0x18) = eax;
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2AE3E4);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x2AF86C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B15Bu); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0012B15B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B166; /* jne: not equal / not zero */

loc_0012B162: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    goto loc_0012B170;

loc_0012B166: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0012B170: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B176u); RECOMP_ABI_CALL(0x0012BC80u, sub_0012BC80); /* call 0x0012BC80 */

loc_0012B176: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B190
 * Original: 0x0012B190 - 0x0012B1C2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B190: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B1AF; /* je: equal / zero */

loc_0012B19A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

loc_0012B1AF: ;
    edx = MEM32(eax + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B1D0
 * Original: 0x0012B1D0 - 0x0012B1DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B1D0(void)
{

loc_0012B1D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B1E0
 * Original: 0x0012B1E0 - 0x0012B1E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B1E0(void)
{

loc_0012B1E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B1F0
 * Original: 0x0012B1F0 - 0x0012B1FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B1F0(void)
{

loc_0012B1F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B200
 * Original: 0x0012B200 - 0x0012B208 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B200(void)
{

loc_0012B200: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B210
 * Original: 0x0012B210 - 0x0012B220 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B210: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012BF30(); return; /* tail jmp 0x0012BF30 */

}

/**
 * sub_0012B220
 * Original: 0x0012B220 - 0x0012B230 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B220: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012BB70(); return; /* tail jmp 0x0012BB70 */

}

/**
 * sub_0012B230
 * Original: 0x0012B230 - 0x0012B24B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B230: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(edx + 0x4C);
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012BCB0(); return; /* tail jmp 0x0012BCB0 */

}

/**
 * sub_0012B250
 * Original: 0x0012B250 - 0x0012B260 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B250: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0013A0D0(); return; /* tail jmp 0x0013A0D0 */

}

/**
 * sub_0012B260
 * Original: 0x0012B260 - 0x0012B270 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B260: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0013A100(); return; /* tail jmp 0x0013A100 */

}

/**
 * sub_0012B270
 * Original: 0x0012B270 - 0x0012B29A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B270: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B28Du); RECOMP_ABI_CALL(0x0013A120u, sub_0013A120); /* call 0x0013A120 */

loc_0012B28D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B295u); RECOMP_ABI_CALL(0x0012B100u, sub_0012B100); /* call 0x0012B100 */

loc_0012B295: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2A0
 * Original: 0x0012B2A0 - 0x0012B2B0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B2A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0013A140(); return; /* tail jmp 0x0013A140 */

}

/**
 * sub_0012B2B0
 * Original: 0x0012B2B0 - 0x0012B2BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2B0(void)
{

loc_0012B2B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2C0
 * Original: 0x0012B2C0 - 0x0012B2C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2C0(void)
{

loc_0012B2C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2D0
 * Original: 0x0012B2D0 - 0x0012B2DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2D0(void)
{

loc_0012B2D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2E0
 * Original: 0x0012B2E0 - 0x0012B2E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2E0(void)
{

loc_0012B2E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2F0
 * Original: 0x0012B2F0 - 0x0012B2FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2F0(void)
{

loc_0012B2F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B300
 * Original: 0x0012B300 - 0x0012B308 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B300(void)
{

loc_0012B300: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B310
 * Original: 0x0012B310 - 0x0012B31C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B310(void)
{

loc_0012B310: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B320
 * Original: 0x0012B320 - 0x0012B328 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B320(void)
{

loc_0012B320: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x70);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B330
 * Original: 0x0012B330 - 0x0012B347 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B330: ;
    edx = MEM32(eax + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B350
 * Original: 0x0012B350 - 0x0012B36E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B350: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0xC) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B370
 * Original: 0x0012B370 - 0x0012B38B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B370: ;
    edx = MEM32(eax + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B390
 * Original: 0x0012B390 - 0x0012B3AC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B390: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012B39Cu); RECOMP_ABI_CALL(0x0012B100u, sub_0012B100); /* call 0x0012B100 */

loc_0012B39C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ecx * 4 + 0x3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B3B0
 * Original: 0x0012B3B0 - 0x0012B3E4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B3B0: ;
    eax = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + 4;
    PUSH32(esp, 0x0012B3CAu); RECOMP_ABI_CALL(0x0012B330u, sub_0012B330); /* call 0x0012B330 */

loc_0012B3CA: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + 0x14;
    PUSH32(esp, 0x0012B3DBu); RECOMP_ABI_CALL(0x0012B330u, sub_0012B330); /* call 0x0012B330 */

loc_0012B3DB: ;
    eax = esi + 0x24;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012B330(); return; /* tail jmp 0x0012B330 */

}

/**
 * sub_0012B3F0
 * Original: 0x0012B3F0 - 0x0012B443 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B3F0: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, 0x0012B419u); RECOMP_ABI_CALL(0x0012B370u, sub_0012B370); /* call 0x0012B370 */

loc_0012B419: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    eax = edi + 0x14;
    PUSH32(esp, 0x0012B434u); RECOMP_ABI_CALL(0x0012B370u, sub_0012B370); /* call 0x0012B370 */

loc_0012B434: ;
    PUSH32(esp, esi);
    eax = edi + 0x24;
    PUSH32(esp, 0x0012B43Du); RECOMP_ABI_CALL(0x0012B370u, sub_0012B370); /* call 0x0012B370 */

loc_0012B43D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B450
 * Original: 0x0012B450 - 0x0012B455 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B450: ;
    g_seh_ebp = ebp; sub_00130170(); return; /* tail jmp 0x00130170 */

}

/**
 * sub_0012B460
 * Original: 0x0012B460 - 0x0012B465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B460: ;
    g_seh_ebp = ebp; sub_0012FF50(); return; /* tail jmp 0x0012FF50 */

}

/**
 * sub_0012B470
 * Original: 0x0012B470 - 0x0012B483 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B470(void)
{

loc_0012B470: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B490
 * Original: 0x0012B490 - 0x0012B49F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B490: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4A0
 * Original: 0x0012B4A0 - 0x0012B4B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B4A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B4B1u); RECOMP_ABI_CALL(0x0012FFE0u, sub_0012FFE0); /* call 0x0012FFE0 */

loc_0012B4B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4C0
 * Original: 0x0012B4C0 - 0x0012B4D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B4C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B4D1u); RECOMP_ABI_CALL(0x00130010u, sub_00130010); /* call 0x00130010 */

loc_0012B4D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4E0
 * Original: 0x0012B4E0 - 0x0012B4F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B4E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B4F1u); RECOMP_ABI_CALL(0x00130040u, sub_00130040); /* call 0x00130040 */

loc_0012B4F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B500
 * Original: 0x0012B500 - 0x0012B515 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B500: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B511u); RECOMP_ABI_CALL(0x00130070u, sub_00130070); /* call 0x00130070 */

loc_0012B511: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B520
 * Original: 0x0012B520 - 0x0012B535 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B520: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B531u); RECOMP_ABI_CALL(0x001300B0u, sub_001300B0); /* call 0x001300B0 */

loc_0012B531: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B540
 * Original: 0x0012B540 - 0x0012B555 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B540: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B551u); RECOMP_ABI_CALL(0x00130110u, sub_00130110); /* call 0x00130110 */

loc_0012B551: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B560
 * Original: 0x0012B560 - 0x0012B575 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B560: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B571u); RECOMP_ABI_CALL(0x001302E0u, sub_001302E0); /* call 0x001302E0 */

loc_0012B571: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B580
 * Original: 0x0012B580 - 0x0012B595 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B580: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B591u); RECOMP_ABI_CALL(0x00130320u, sub_00130320); /* call 0x00130320 */

loc_0012B591: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5A0
 * Original: 0x0012B5A0 - 0x0012B5B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B5A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B5B1u); RECOMP_ABI_CALL(0x00130360u, sub_00130360); /* call 0x00130360 */

loc_0012B5B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5C0
 * Original: 0x0012B5C0 - 0x0012B5D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B5C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B5D1u); RECOMP_ABI_CALL(0x001303A0u, sub_001303A0); /* call 0x001303A0 */

loc_0012B5D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5E0
 * Original: 0x0012B5E0 - 0x0012B5E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5E0(void)
{

loc_0012B5E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5F0
 * Original: 0x0012B5F0 - 0x0012B611 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012B5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B5F0: ;
    edx = MEM32(0xA9C0A8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012B60E; /* jle: less or equal (signed <=) */

loc_0012B5FC: ;
    eax = 0xA9C0AC;

loc_0012B601: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B610; /* je: equal / zero */

loc_0012B606: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012B601; /* jl: less (signed <) */

loc_0012B60E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012B610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B620
 * Original: 0x0012B620 - 0x0012B62C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B620: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B630
 * Original: 0x0012B630 - 0x0012B645 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B644; /* je: equal / zero */

loc_0012B638: ;
    MEM32(eax) = 0;
    MEM32(0xA9C0A0) = MEM32(0xA9C0A0) - 1;
    _fa = (uint32_t)(MEM32(0xA9C0A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012B644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B650
 * Original: 0x0012B650 - 0x0012B6E7 (151 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B650: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B67A; /* jne: not equal / not zero */

loc_0012B65C: ;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x2C) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012B67A: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2AE3E4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x10);
    edx = esp + 0x10;
    PUSH32(esp, 0x2AF87C);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0012B69Du); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0012B69D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AE3E4);
    MEM32(esi + 0x1C) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0x2AF874);
    MEM32(esi + 0x18) = 1;
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = ecx;
    PUSH32(esp, 0x0012B6CBu); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0012B6CB: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x2C) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B6F0
 * Original: 0x0012B6F0 - 0x0012B722 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B6F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B70F; /* je: equal / zero */

loc_0012B6FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

loc_0012B70F: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B730
 * Original: 0x0012B730 - 0x0012B784 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B730: ;
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B774; /* jne: not equal / not zero */

loc_0012B73B: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B774; /* je: equal / zero */

loc_0012B742: ;
    eax = MEM32(eax + 0x30);
    MEM32(esp) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B761u); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0012B761: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(edi) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012B774: ;
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B790
 * Original: 0x0012B790 - 0x0012B8BB (299 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012B790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B790: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B7A5; /* jne: not equal / not zero */

loc_0012B7A0: ;
    esi = 0x7FFFFFFF;

loc_0012B7A5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B7B2; /* jne: not equal / not zero */

loc_0012B7AD: ;
    ebp = 0x7FFFFFFF;

loc_0012B7B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x18) = eax;
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x28) = ebp;
    MEM32(ebx + 0x2C) = ebp;
    MEM32(ebx + 0x30) = ebp;
    MEM32(ebx + 0x34) = ebp;
    MEM32(ebx + 0x38) = ebp;
    MEM32(ebx + 0x3C) = ebp;
    MEM32(ebx + 0x40) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0012B7FA; /* jne: not equal / not zero */

loc_0012B7EA: ;
    PUSH32(esp, edi);
    edi = ebx + 0x44;
    ecx = 0xCF;
    eax = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_0012B81E;

loc_0012B7FA: ;
    edx = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x27932B49;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = 0x11;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_0012B810: ;
    MEM32(ebx + ecx * 4) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012B810; /* jl: less (signed <) */

loc_0012B81E: ;
    MEM32(ebx + 0x380) = esi;
    MEM32(ebx + 0x384) = esi;
    MEM32(ebx + 0x388) = esi;
    MEM32(ebx + 0x38C) = esi;
    MEM32(ebx + 0x390) = esi;
    MEM32(ebx + 0x394) = esi;
    MEM32(ebx + 0x398) = esi;
    MEM32(ebx + 0x39C) = esi;
    MEM32(ebx + 0x3A0) = esi;
    MEM32(ebx + 0x3A4) = esi;
    MEM32(ebx + 0x3A8) = esi;
    MEM32(ebx + 0x3AC) = esi;
    MEM32(ebx + 0x3B0) = esi;
    MEM32(ebx + 0x3B4) = esi;
    MEM32(ebx + 0x3B8) = esi;
    MEM32(ebx + 0x3BC) = esi;
    eax = ebx + 0x3C0;
    ecx = 0x7FFFFFFF;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    POP32(esp, esi);
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B8C0
 * Original: 0x0012B8C0 - 0x0012BB26 (614 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B8C0(void)
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

loc_0012B8C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = esi + 0x800;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = 0xFFFFFFF0u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax + 0x10;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 0xDC;
    goto loc_0012B900;

loc_0012B8F7: ;
    ecx = MEM32(esp + 0x10);
    goto loc_0012B900;

    /* nop */

loc_0012B900: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AF884)); /* fmul dword ptr [0x2af884] */
    PUSH32(esp, 0x0012B915u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0012B915: ;
    MEM8(ebp) = LO8(eax);
    eax = MEM32(esp + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_0012B8F7; /* jne: not equal / not zero */

loc_0012B924: ;
    eax = esi + 0x8EC;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80000000u (32-bit) */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0012B948; /* jne: not equal / not zero */

loc_0012B943: ;
    ebx = 0x7FFFFFFF;

loc_0012B948: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B955; /* jne: not equal / not zero */

loc_0012B950: ;
    edi = 0x7FFFFFFF;

loc_0012B955: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x400) = eax;
    MEM32(esi + 0x404) = eax;
    MEM32(esi + 0x408) = eax;
    MEM32(esi + 0x40C) = eax;
    MEM32(esi + 0x410) = eax;
    MEM32(esi + 0x414) = eax;
    MEM32(esi + 0x418) = eax;
    MEM32(esi + 0x41C) = eax;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = edi;
    MEM32(esi + 0x428) = edi;
    MEM32(esi + 0x42C) = edi;
    MEM32(esi + 0x430) = edi;
    MEM32(esi + 0x434) = edi;
    MEM32(esi + 0x438) = edi;
    MEM32(esi + 0x43C) = edi;
    MEM32(esi + 0x440) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0012B9D4; /* jne: not equal / not zero */

loc_0012B9C1: ;
    edx = esi + 0x444;
    eax = edi;
    ecx = 0xCF;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_0012BA02;

loc_0012B9D4: ;
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x27932B49;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = 0x11;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0012B9F0;

    /* nop */

loc_0012B9F0: ;
    MEM32(esi + ecx * 4 + 0x400) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012B9F0; /* jl: less (signed <) */

loc_0012BA02: ;
    MEM32(esi + 0x780) = ebx;
    MEM32(esi + 0x784) = ebx;
    MEM32(esi + 0x788) = ebx;
    MEM32(esi + 0x78C) = ebx;
    MEM32(esi + 0x790) = ebx;
    MEM32(esi + 0x794) = ebx;
    MEM32(esi + 0x798) = ebx;
    MEM32(esi + 0x79C) = ebx;
    MEM32(esi + 0x7A0) = ebx;
    MEM32(esi + 0x7A4) = ebx;
    MEM32(esi + 0x7A8) = ebx;
    MEM32(esi + 0x7AC) = ebx;
    MEM32(esi + 0x7B0) = ebx;
    MEM32(esi + 0x7B4) = ebx;
    MEM32(esi + 0x7B8) = ebx;
    MEM32(esi + 0x7BC) = ebx;
    eax = 0x7FFFFFFF;
    MEM32(esi + 0x7C0) = eax;
    MEM32(esi + 0x7C4) = eax;
    MEM32(esi + 0x7C8) = eax;
    MEM32(esi + 0x7CC) = eax;
    MEM32(esi + 0x7D0) = eax;
    MEM32(esi + 0x7D4) = eax;
    MEM32(esi + 0x7D8) = eax;
    MEM32(esi + 0x7DC) = eax;
    MEM32(esi + 0x7E0) = eax;
    MEM32(esi + 0x7E4) = eax;
    MEM32(esi + 0x7E8) = eax;
    MEM32(esi + 0x7EC) = eax;
    MEM32(esi + 0x7F0) = eax;
    MEM32(esi + 0x7F4) = eax;
    MEM32(esi + 0x7F8) = eax;
    MEM32(esi + 0x7FC) = eax;
    eax = esi + 0x801;
    ecx = esi + 8;
    edx = 0x40;
    goto loc_0012BAE0;

    /* nop */
    edi = edi;

loc_0012BAE0: ;
    edi = ZX8(MEM8(eax + -1));
    edi = MEM32(esi + edi * 4 + 0x400);
    MEM32(ecx + -8) = edi;
    edi = ZX8(MEM8(eax));
    edi = MEM32(esi + edi * 4 + 0x400);
    MEM32(ecx + -4) = edi;
    edi = ZX8(MEM8(eax + 1));
    edi = MEM32(esi + edi * 4 + 0x400);
    MEM32(ecx) = edi;
    edi = ZX8(MEM8(eax + 2));
    edi = MEM32(esi + edi * 4 + 0x400);
    MEM32(ecx + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012BAE0; /* jne: not equal / not zero */

loc_0012BB1F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BB30
 * Original: 0x0012BB30 - 0x0012BB61 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB30(void)
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

loc_0012BB30: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012BB46; /* jp: parity */

loc_0012BB44: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012BB46: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2AF888)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2af888] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012BB5E; /* jp: parity */

loc_0012BB5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012BB5E: ;
    eax = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BB70
 * Original: 0x0012BB70 - 0x0012BB87 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB70(void)
{

loc_0012BB70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x40);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BB90
 * Original: 0x0012BB90 - 0x0012BBC3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB90(void)
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

loc_0012BB90: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    ecx = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012BBC0; /* jp: parity */

loc_0012BBAB: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(edx + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012BBC0; /* jp: parity */

loc_0012BBBD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012BBC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BBD0
 * Original: 0x0012BBD0 - 0x0012BBDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BBD0(void)
{

loc_0012BBD0: ;
    eax = MEM32(esp + 4);
    MEM32(0xA9C0A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BBE0
 * Original: 0x0012BBE0 - 0x0012BBE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BBE0(void)
{

loc_0012BBE0: ;
    eax = MEM32(0xA9C0A4);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BBF0
 * Original: 0x0012BBF0 - 0x0012BC25 (53 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BBF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BC1F; /* je: equal / zero */

loc_0012BBF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BC19; /* je: equal / zero */

loc_0012BBFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BC13; /* je: equal / zero */

loc_0012BBFF: ;
    PUSH32(esp, 0x2AF88C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012BC0Du); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012BC0D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012BC13: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0012BC19: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0012BC1F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BC30
 * Original: 0x0012BC30 - 0x0012BC54 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BC30: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x93;
    edi = 0xA9C0A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    MEM32(0xA9C0A8) = 8;
    PUSH32(esp, 0x0012BC4Fu); RECOMP_ABI_CALL(0x0012BBD0u, sub_0012BBD0); /* call 0x0012BBD0 */

loc_0012BC4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BC60
 * Original: 0x0012BC60 - 0x0012BC7C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BC60: ;
    PUSH32(esp, 0x0012BC65u); RECOMP_ABI_CALL(0x0012B5F0u, sub_0012B5F0); /* call 0x0012B5F0 */

loc_0012BC65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BC6A; /* jne: not equal / not zero */

loc_0012BC69: ;
    esp += 4; return; /* ret */

loc_0012BC6A: ;
    PUSH32(esp, 0x0012BC6Fu); RECOMP_ABI_CALL(0x0012B620u, sub_0012B620); /* call 0x0012B620 */

loc_0012BC6F: ;
    MEM32(0xA9C0A0) = MEM32(0xA9C0A0) + 1;
    _fa = (uint32_t)(MEM32(0xA9C0A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BC80
 * Original: 0x0012BC80 - 0x0012BCA1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BC80(void)
{

loc_0012BC80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 8) = 1;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x0012BC9Fu); RECOMP_ABI_CALL(0x0012B650u, sub_0012B650); /* call 0x0012B650 */

loc_0012BC9F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BCB0
 * Original: 0x0012BCB0 - 0x0012BD81 (209 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BCB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2AF8D4);
    esi = esp + 0x14;
    edi = esp + 0x10;
    edx = 0x2AE3E4;
    eax = ebx;
    PUSH32(esp, 0x0012BCD3u); RECOMP_ABI_CALL(0x0012B730u, sub_0012B730); /* call 0x0012B730 */

loc_0012BCD3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BCF9; /* jne: not equal / not zero */

loc_0012BCDE: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    MEM32(ecx) = 0x7FFFFFFF;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012BCF9: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AF8D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BD09u); RECOMP_ABI_CALL(0x001545A6u, sub_001545A6); /* call 0x001545A6 */

loc_0012BD09: ;
    PUSH32(esp, 0x2AF8C8);
    esi = esp + 0x20;
    edi = esp + 0x1C;
    edx = 0x2AE3E4;
    eax = ebx;
    PUSH32(esp, 0x0012BD22u); RECOMP_ABI_CALL(0x0012B730u, sub_0012B730); /* call 0x0012B730 */

loc_0012BD22: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BD3E; /* jne: not equal / not zero */

loc_0012BD2D: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0x7FFFFFFF;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012BD3E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x34));
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2AF8BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012BD63u); RECOMP_ABI_CALL(0x001545A6u, sub_001545A6); /* call 0x001545A6 */

loc_0012BD63: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012BD90
 * Original: 0x0012BD90 - 0x0012BDBA (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    PUSH32(esp, 0x0012BD9Bu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0012BD9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0012BDAC; /* jne: not equal / not zero */

loc_0012BDA2: ;
    ecx = ebx;
    PUSH32(esp, 0x0012BDA9u); RECOMP_ABI_CALL(0x0012B8C0u, sub_0012B8C0); /* call 0x0012B8C0 */

loc_0012BDA9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012BDAC: ;
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, 0x0012BDB4u); RECOMP_ABI_CALL(0x0012B790u, sub_0012B790); /* call 0x0012B790 */

loc_0012BDB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BDC0
 * Original: 0x0012BDC0 - 0x0012BE6B (171 bytes, 53 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012BDC0(void)
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

loc_0012BDC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    eax = MEM32(eax + 0x40);
    MEM32(esp) = eax;
    PUSH32(esp, 0x0012BDD1u); RECOMP_ABI_CALL(0x0012BBE0u, sub_0012BBE0); /* call 0x0012BBE0 */

loc_0012BDD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BDF6; /* jne: not equal / not zero */

loc_0012BDD6: ;
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0012BDE0: ;
    ecx = MEM32(edi + eax * 4);
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ebx + eax * 2) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012BDE0; /* jl: less (signed <) */

loc_0012BDF2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012BDF6: ;
    MEMD(esp + 4) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 4)); /* fld float */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMD(esp + 8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) / fp_top()); /* fdivr qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMD(0x281DB0)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 8)); /* fmul qword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281DB0)); /* fmul qword ptr [0x281db0] */

loc_0012BE25: ;
    _fa = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BE32; /* jne: not equal / not zero */

loc_0012BE2B: ;
    MEM32(edi + esi * 4) = 1;

loc_0012BE32: ;
    edx = MEM32(edi + esi * 4);
    fp_push((double)SMEM32(edi + esi * 4)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012BE42; /* jge: greater or equal (signed >=) */

loc_0012BE3C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0012BE42: ;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AF8E0)); /* fmul qword ptr [0x2af8e0] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_top() = RECOMP_FP_PC(MEMD(esp + 0x10) - fp_top()); /* fsubr qword ptr [esp + 0x10] */
    PUSH32(esp, 0x0012BE55u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0012BE55: ;
    MEM16(ebx + esi * 2) = LO16(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012BE25; /* jl: less (signed <) */

loc_0012BE62: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BE70
 * Original: 0x0012BE70 - 0x0012BF24 (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012BE70(void)
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

loc_0012BE70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    eax = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0012BE83u); RECOMP_ABI_CALL(0x0012BBE0u, sub_0012BBE0); /* call 0x0012BBE0 */

loc_0012BE83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BEA8; /* jne: not equal / not zero */

loc_0012BE88: ;
    eax = edx;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;

loc_0012BE93: ;
    esi = MEM32(ecx + eax);
    esi = esi & 0xFFFFFF80u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012BE93; /* jne: not equal / not zero */

loc_0012BEA3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012BEA8: ;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMD(esp + 0x10)); /* fld double */
    edi = edx;
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    esi = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0x100;
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) / fp_top()); /* fdivr qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMD(0x2AF8E8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x10)); /* fmul qword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AF8E8)); /* fmul qword ptr [0x2af8e8] */

loc_0012BEE1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BEEC; /* jne: not equal / not zero */

loc_0012BEE6: ;
    MEM32(esi) = 1;

loc_0012BEEC: ;
    ecx = MEM32(esi);
    fp_push((double)SMEM32(esi)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012BEFA; /* jge: greater or equal (signed >=) */

loc_0012BEF4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0012BEFA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AF8E0)); /* fmul qword ptr [0x2af8e0] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_top() = RECOMP_FP_PC(MEMD(esp + 0x18) - fp_top()); /* fsubr qword ptr [esp + 0x18] */
    PUSH32(esp, 0x0012BF0Du); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0012BF0D: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012BEE1; /* jne: not equal / not zero */

loc_0012BF19: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BF30
 * Original: 0x0012BF30 - 0x0012BF6B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012BF30(void)
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

loc_0012BF30: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012BF3Fu); RECOMP_ABI_CALL(0x0012BB30u, sub_0012BB30); /* call 0x0012BB30 */

loc_0012BF3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BF58; /* je: equal / zero */

loc_0012BF47: ;
    PUSH32(esp, 0x2AF8F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012BF55u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012BF55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BF58: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esp + 0xC);
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x40) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012BF70
 * Original: 0x0012BF70 - 0x0012C082 (274 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BF70: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0012BFCB; /* jne: not equal / not zero */

loc_0012BFC6: ;
    ebp = MEM32(esi + 8);
    goto loc_0012BFE8;

loc_0012BFCB: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BFE6; /* jne: not equal / not zero */

loc_0012BFD2: ;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x40), 0x10 (32-bit) */
    ecx = 4;
    if (CMP_NE(_fa, _fb)) goto loc_0012BFE3; /* jne: not equal / not zero */

loc_0012BFDE: ;
    ecx = 2;

loc_0012BFE3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_0012BFE6: ;
    ebp = eax;

loc_0012BFE8: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BFFA; /* jne: not equal / not zero */

loc_0012BFEF: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_0012BFFC;

loc_0012BFFA: ;
    edi = eax;

loc_0012BFFC: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0x0012C005u); RECOMP_ABI_CALL(0x0012BBF0u, sub_0012BBF0); /* call 0x0012BBF0 */

loc_0012C005: ;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x14) = edi;
    POP32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012C05F; /* je: equal / zero */

loc_0012C037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C07E; /* jne: not equal / not zero */

loc_0012C03C: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C045u); RECOMP_ABI_CALL(0x0012C700u, sub_0012C700); /* call 0x0012C700 */

loc_0012C045: ;
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C058u); RECOMP_ABI_CALL(0x0013E1C0u, sub_0013E1C0); /* call 0x0013E1C0 */

loc_0012C058: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012C05F: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C068u); RECOMP_ABI_CALL(0x0012C700u, sub_0012C700); /* call 0x0012C700 */

loc_0012C068: ;
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C07Bu); RECOMP_ABI_CALL(0x0013E180u, sub_0013E180); /* call 0x0013E180 */

loc_0012C07B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012C07E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C090
 * Original: 0x0012C090 - 0x0012C12E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C090: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(ebx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0x40;
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C0BD; /* je: equal / zero */

loc_0012C0BB: ;
    ebp = edx;

loc_0012C0BD: ;
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C0CB; /* jne: not equal / not zero */

loc_0012C0C4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0012C0CB: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x0012C0D4u); RECOMP_ABI_CALL(0x0012BBF0u, sub_0012BBF0); /* call 0x0012BBF0 */

loc_0012C0D4: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x14) = edi;
    POP32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 8) = ecx;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012C12A; /* je: equal / zero */

loc_0012C106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C12A; /* jne: not equal / not zero */

loc_0012C10B: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C114u); RECOMP_ABI_CALL(0x0012C700u, sub_0012C700); /* call 0x0012C700 */

loc_0012C114: ;
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C127u); RECOMP_ABI_CALL(0x0013EA50u, sub_0013EA50); /* call 0x0013EA50 */

loc_0012C127: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012C12A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C130
 * Original: 0x0012C130 - 0x0012C135 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C130: ;
    g_seh_ebp = ebp; sub_0012BC30(); return; /* tail jmp 0x0012BC30 */

}

/**
 * sub_0012C140
 * Original: 0x0012C140 - 0x0012C17F (63 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, edi);
    ebp = ebx + 0x200;
    PUSH32(esp, esi);
    eax = ebp;
    edi = edx;
    PUSH32(esp, 0x0012C155u); RECOMP_ABI_CALL(0x0012BD90u, sub_0012BD90); /* call 0x0012BD90 */

loc_0012C155: ;
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C16C; /* jne: not equal / not zero */

loc_0012C15F: ;
    edi = ebp;
    eax = esi;
    PUSH32(esp, 0x0012C168u); RECOMP_ABI_CALL(0x0012BDC0u, sub_0012BDC0); /* call 0x0012BDC0 */

loc_0012C168: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012C16C: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012C178u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012C176u); } /* indirect call */
    }

loc_0012C178: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C180
 * Original: 0x0012C180 - 0x0012C1BD (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ebp + 0x400;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x0012C194u); RECOMP_ABI_CALL(0x0012BD90u, sub_0012BD90); /* call 0x0012BD90 */

loc_0012C194: ;
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C1AB; /* jne: not equal / not zero */

loc_0012C19E: ;
    edx = ebp;
    POP32(esp, ebp);
    ecx = ebx;
    eax = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0012BE70(); return; /* tail jmp 0x0012BE70 */

loc_0012C1AB: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012C1B7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012C1B5u); } /* indirect call */
    }

loc_0012C1B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C1C0
 * Original: 0x0012C1C0 - 0x0012C240 (128 bytes, 59 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C1E3; /* jne: not equal / not zero */

loc_0012C1D2: ;
    PUSH32(esp, 0x2AF7C4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C1DDu); RECOMP_ABI_CALL(0x00139FA0u, sub_00139FA0); /* call 0x00139FA0 */

loc_0012C1DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = eax;

loc_0012C1E3: ;
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C1ECu); RECOMP_ABI_CALL(0x0012BB90u, sub_0012BB90); /* call 0x0012BB90 */

loc_0012C1EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C207; /* je: equal / zero */

loc_0012C1F4: ;
    PUSH32(esp, 0x2AF950);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C200u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C200: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012C207: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C232; /* je: equal / zero */

loc_0012C20E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012C224; /* je: equal / zero */

loc_0012C211: ;
    PUSH32(esp, 0x2AF91C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C21Du); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C21D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012C224: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012C22Bu); RECOMP_ABI_CALL(0x0012BF70u, sub_0012BF70); /* call 0x0012BF70 */

loc_0012C22B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012C232: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012C239u); RECOMP_ABI_CALL(0x0012C090u, sub_0012C090); /* call 0x0012C090 */

loc_0012C239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C240
 * Original: 0x0012C240 - 0x0012C27F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C240: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM16(edi) = 0;
    PUSH32(esp, 0x0012C267u); RECOMP_ABI_CALL(0x0012BCB0u, sub_0012BCB0); /* call 0x0012BCB0 */

loc_0012C267: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x0012C279u); RECOMP_ABI_CALL(0x0012C140u, sub_0012C140); /* call 0x0012C140 */

loc_0012C279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C280
 * Original: 0x0012C280 - 0x0012C2BF (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C280: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi) = 0;
    PUSH32(esp, 0x0012C2A8u); RECOMP_ABI_CALL(0x0012BCB0u, sub_0012BCB0); /* call 0x0012BCB0 */

loc_0012C2A8: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0012C2B6u); RECOMP_ABI_CALL(0x0012C180u, sub_0012C180); /* call 0x0012C180 */

loc_0012C2B6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C2C0
 * Original: 0x0012C2C0 - 0x0012C2D9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C2C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0012C2D4u); RECOMP_ABI_CALL(0x0012C1C0u, sub_0012C1C0); /* call 0x0012C1C0 */

loc_0012C2D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C2E0
 * Original: 0x0012C2E0 - 0x0012C2F9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C2E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0012C2F4u); RECOMP_ABI_CALL(0x0012C1C0u, sub_0012C1C0); /* call 0x0012C1C0 */

loc_0012C2F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C300
 * Original: 0x0012C300 - 0x0012C319 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C300: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0012C314u); RECOMP_ABI_CALL(0x0012C1C0u, sub_0012C1C0); /* call 0x0012C1C0 */

loc_0012C314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C320
 * Original: 0x0012C320 - 0x0012C37D (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C320: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C32Bu); RECOMP_ABI_CALL(0x0012B2E0u, sub_0012B2E0); /* call 0x0012B2E0 */

loc_0012C32B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C347; /* je: equal / zero */

loc_0012C333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C343; /* je: equal / zero */

loc_0012C337: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

loc_0012C343: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C347: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012C350u); RECOMP_ABI_CALL(0x0012B490u, sub_0012B490); /* call 0x0012B490 */

loc_0012C350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C378; /* jne: not equal / not zero */

loc_0012C358: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C35Eu); RECOMP_ABI_CALL(0x0012B4C0u, sub_0012B4C0); /* call 0x0012B4C0 */

loc_0012C35E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C378; /* jne: not equal / not zero */

loc_0012C366: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C36Cu); RECOMP_ABI_CALL(0x0012B300u, sub_0012B300); /* call 0x0012B300 */

loc_0012C36C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C37A; /* je: equal / zero */

loc_0012C378: ;
    eax = edi;

loc_0012C37A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C380
 * Original: 0x0012C380 - 0x0012C3A6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C3A2u); RECOMP_ABI_CALL(0x0012B3F0u, sub_0012B3F0); /* call 0x0012B3F0 */

loc_0012C3A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C3B0
 * Original: 0x0012C3B0 - 0x0012C3CC (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C3B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C3D0
 * Original: 0x0012C3D0 - 0x0012C3EC (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C3D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = esi;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C3F0
 * Original: 0x0012C3F0 - 0x0012C43A (74 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_0012C41E = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C3F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012C40D; /* jg: greater (signed >) */

loc_0012C3FC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C431; /* je: equal / zero */

loc_0012C3FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C431; /* je: equal / zero */

loc_0012C403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C434; /* je: equal / zero */

loc_0012C408: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    _jf_0012C41E = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0012C41E;

loc_0012C40D: ;
    _fb = (uint32_t)(0xF1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C431; /* je: equal / zero */

loc_0012C414: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C434; /* je: equal / zero */

loc_0012C419: ;
    _fb = (uint32_t)(0xF00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _jf_0012C41E = ((_fa == 0)) ? 1 : 0; /* flags of this edge */

loc_0012C41E: ;
    if (_jf_0012C41E /* je: equal / zero */) goto loc_0012C431;

loc_0012C420: ;
    PUSH32(esp, 0x2AF980);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012C42Eu); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C42E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012C431: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012C434: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C440
 * Original: 0x0012C440 - 0x0012C483 (67 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C440: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0012C452; /* jne: not equal / not zero */

loc_0012C44E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C452: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C47F; /* jne: not equal / not zero */

loc_0012C456: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012C47F; /* ja: above (unsigned >) */

loc_0012C45E: ;
    eax = ZX8(MEM8(eax + 0x12C490));
    { uint32_t _jt = MEM32(eax * 4 + 0x12C484); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0012C46Cu) goto loc_0012C46C;
    if (_jt == 0x0012C47Du) goto loc_0012C47D;
    if (_jt == 0x0012C47Fu) goto loc_0012C47F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012C46C: ;
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C475u); RECOMP_ABI_CALL(0x0013A0C0u, sub_0013A0C0); /* call 0x0013A0C0 */

loc_0012C475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C47F; /* je: equal / zero */

loc_0012C47D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012C47F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C4B0
 * Original: 0x0012C4B0 - 0x0012C4C5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C4B0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C4C1u); RECOMP_ABI_CALL(0x0012C240u, sub_0012C240); /* call 0x0012C240 */

loc_0012C4C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C4D0
 * Original: 0x0012C4D0 - 0x0012C4E5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C4D0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C4E1u); RECOMP_ABI_CALL(0x0012C280u, sub_0012C280); /* call 0x0012C280 */

loc_0012C4E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C4F0
 * Original: 0x0012C4F0 - 0x0012C559 (105 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4F0(void)
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

loc_0012C4F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    edi = 0xFFFFFFF0u;
    MEM32(ecx + 0xC) = eax;
    esi = ebx + 0x10;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0xDC;
    goto loc_0012C520;

    /* nop */

loc_0012C520: ;
    edx = edi + esi;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2AF884)); /* fmul dword ptr [0x2af884] */
    PUSH32(esp, 0x0012C536u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0012C536: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012C520; /* jne: not equal / not zero */

loc_0012C53C: ;
    eax = ebx + 0xEC;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebp);
    MEM32(eax + 0x10) = ecx;
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
 * sub_0012C560
 * Original: 0x0012C560 - 0x0012C575 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C560: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C571u); RECOMP_ABI_CALL(0x0013A060u, sub_0013A060); /* call 0x0013A060 */

loc_0012C571: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C580
 * Original: 0x0012C580 - 0x0012C595 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C580: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C591u); RECOMP_ABI_CALL(0x0013A090u, sub_0013A090); /* call 0x0013A090 */

loc_0012C591: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C5A0
 * Original: 0x0012C5A0 - 0x0012C5AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C5A0(void)
{

loc_0012C5A0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C5A9u); RECOMP_ABI_CALL(0x0013EE00u, sub_0013EE00); /* call 0x0013EE00 */

loc_0012C5A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C5B0
 * Original: 0x0012C5B0 - 0x0012C5BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C5B0(void)
{

loc_0012C5B0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C5B9u); RECOMP_ABI_CALL(0x0013EAC0u, sub_0013EAC0); /* call 0x0013EAC0 */

loc_0012C5B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C5C0
 * Original: 0x0012C5C0 - 0x0012C5F7 (55 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C5C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C5CEu); RECOMP_ABI_CALL(0x0012BB90u, sub_0012BB90); /* call 0x0012BB90 */

loc_0012C5CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C5EB; /* je: equal / zero */

loc_0012C5D6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x2AF9B0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C5E6u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C5E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C5EB: ;
    edx = MEM32(esp + 0xC);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012C4B0(); return; /* tail jmp 0x0012C4B0 */

}

/**
 * sub_0012C600
 * Original: 0x0012C600 - 0x0012C637 (55 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C60Eu); RECOMP_ABI_CALL(0x0012BB90u, sub_0012BB90); /* call 0x0012BB90 */

loc_0012C60E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C62B; /* je: equal / zero */

loc_0012C616: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x2AF9DC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C626u); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C626: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C62B: ;
    edx = MEM32(esp + 0xC);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012C4D0(); return; /* tail jmp 0x0012C4D0 */

}

/**
 * sub_0012C640
 * Original: 0x0012C640 - 0x0012C64B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C640(void)
{

loc_0012C640: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C649u); RECOMP_ABI_CALL(0x0012C4F0u, sub_0012C4F0); /* call 0x0012C4F0 */

loc_0012C649: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C650
 * Original: 0x0012C650 - 0x0012C6C0 (112 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C650: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x0012C659u); RECOMP_ABI_CALL(0x0012C440u, sub_0012C440); /* call 0x0012C440 */

loc_0012C659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C6BF; /* jne: not equal / not zero */

loc_0012C65E: ;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    MEM32(esi + 0x38) = edi;
    if (CMP_A(_fa, _fb)) goto loc_0012C6B0; /* ja: above (unsigned >) */

loc_0012C669: ;
    eax = ZX8(MEM8(eax + 0x12C6E0));
    { uint32_t _jt = MEM32(eax * 4 + 0x12C6C0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0012C677u) goto loc_0012C677;
    if (_jt == 0x0012C680u) goto loc_0012C680;
    if (_jt == 0x0012C689u) goto loc_0012C689;
    if (_jt == 0x0012C692u) goto loc_0012C692;
    if (_jt == 0x0012C69Bu) goto loc_0012C69B;
    if (_jt == 0x0012C6A2u) goto loc_0012C6A2;
    if (_jt == 0x0012C6A9u) goto loc_0012C6A9;
    if (_jt == 0x0012C6B0u) goto loc_0012C6B0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012C677: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C4B0(); return; /* tail jmp 0x0012C4B0 */

loc_0012C680: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C4D0(); return; /* tail jmp 0x0012C4D0 */

loc_0012C689: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C560(); return; /* tail jmp 0x0012C560 */

loc_0012C692: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C580(); return; /* tail jmp 0x0012C580 */

loc_0012C69B: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C5A0(); return; /* tail jmp 0x0012C5A0 */

loc_0012C6A2: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C5B0(); return; /* tail jmp 0x0012C5B0 */

loc_0012C6A9: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0012C640(); return; /* tail jmp 0x0012C640 */

loc_0012C6B0: ;
    PUSH32(esp, 0x2AFA08);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C6BCu); RECOMP_ABI_CALL(0x0012AEE0u, sub_0012AEE0); /* call 0x0012AEE0 */

loc_0012C6BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012C6BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C700
 * Original: 0x0012C700 - 0x0012C718 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C700(void)
{

loc_0012C700: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x0012C714u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_0012C714: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C720
 * Original: 0x0012C720 - 0x0012C725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C720: ;
    g_seh_ebp = ebp; sub_0012D5A0(); return; /* tail jmp 0x0012D5A0 */

}

/**
 * sub_0012C730
 * Original: 0x0012C730 - 0x0012C756 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C73Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012C73B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C751; /* je: equal / zero */

loc_0012C742: ;
    PUSH32(esp, 0xFF000111u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012C74Eu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012C74E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012C751: ;
    eax = MEM32(esi + 0x48);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C760
 * Original: 0x0012C760 - 0x0012C78E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C76E; /* jne: not equal / not zero */

loc_0012C765: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C788; /* jne: not equal / not zero */

loc_0012C76A: ;
    PUSH32(esp, 3);
    goto loc_0012C77A;

loc_0012C76E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C788; /* jne: not equal / not zero */

loc_0012C773: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C788; /* jne: not equal / not zero */

loc_0012C778: ;
    PUSH32(esp, 2);

loc_0012C77A: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C780u); RECOMP_ABI_CALL(0x001329E0u, sub_001329E0); /* call 0x001329E0 */

loc_0012C780: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C788; /* jne: not equal / not zero */

loc_0012C787: ;
    esp += 4; return; /* ret */

loc_0012C788: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C790
 * Original: 0x0012C790 - 0x0012C7A0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C790(void)
{

loc_0012C790: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xA04);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C7A0
 * Original: 0x0012C7A0 - 0x0012C7DF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C7ABu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012C7AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C7C8; /* je: equal / zero */

loc_0012C7B2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000114u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_0012C7C8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x90C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C7E0
 * Original: 0x0012C7E0 - 0x0012C81F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C7E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C7EBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012C7EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C808; /* je: equal / zero */

loc_0012C7F2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000119u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_0012C808: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x950) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x950;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x28;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C820
 * Original: 0x0012C820 - 0x0012C97E (350 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C82Bu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012C82B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C848; /* je: equal / zero */

loc_0012C832: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF00011Au;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_001291D0(); return; /* tail jmp 0x001291D0 */

loc_0012C848: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x34C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x34C8)) >> 32) & 1);
    esi = esi + 0x34C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x30;
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
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax);
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0x24);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(eax + 0x28);
    if (CMP_G(_fas, _fbs)) goto loc_0012C886; /* jg: greater (signed >) */

loc_0012C880: ;
    if (CMP_L(_fas, _fbs)) goto loc_0012C88A; /* jl: less (signed <) */

loc_0012C882: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012C88A; /* jb: below (unsigned <) */

loc_0012C886: ;
    ecx = edi;
    edx = esi;

loc_0012C88A: ;
    edi = MEM32(eax + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(eax + 0x30);
    if (CMP_L(_fas, _fbs)) goto loc_0012C8A6; /* jl: less (signed <) */

loc_0012C8A0: ;
    if (CMP_G(_fas, _fbs)) goto loc_0012C8AA; /* jg: greater (signed >) */

loc_0012C8A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012C8AA; /* ja: above (unsigned >) */

loc_0012C8A6: ;
    esi = edi;
    ecx = edx;

loc_0012C8AA: ;
    edi = MEM32(eax + 0x18);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(eax);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(eax + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = edi;
    edx = MEM32(eax + 0x40);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 4);
    MEM32(eax) = esi;
    ecx = MEM32(eax + 0x44);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax + 4) = edx;
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(eax + 0x48);
    if (CMP_G(_fas, _fbs)) goto loc_0012C8E5; /* jg: greater (signed >) */

loc_0012C8DF: ;
    if (CMP_L(_fas, _fbs)) goto loc_0012C8E9; /* jl: less (signed <) */

loc_0012C8E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012C8E9; /* jb: below (unsigned <) */

loc_0012C8E5: ;
    esi = edi;
    ecx = edx;

loc_0012C8E9: ;
    edx = MEM32(eax + 0x14);
    edi = MEM32(eax + 0x10);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(eax + 0x50);
    if (CMP_L(_fas, _fbs)) goto loc_0012C905; /* jl: less (signed <) */

loc_0012C8FF: ;
    if (CMP_G(_fas, _fbs)) goto loc_0012C909; /* jg: greater (signed >) */

loc_0012C901: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012C909; /* ja: above (unsigned >) */

loc_0012C905: ;
    esi = edi;
    ecx = edx;

loc_0012C909: ;
    edi = MEM32(eax + 8);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(eax + 0x58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(eax + 0x18) = esi;
    ecx = MEM32(eax + 0x60);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0x64);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(eax + 0xC);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(eax + 0x68);
    if (CMP_G(_fas, _fbs)) goto loc_0012C944; /* jg: greater (signed >) */

loc_0012C93E: ;
    if (CMP_L(_fas, _fbs)) goto loc_0012C948; /* jl: less (signed <) */

loc_0012C940: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012C948; /* jb: below (unsigned <) */

loc_0012C944: ;
    esi = edi;
    ecx = edx;

loc_0012C948: ;
    edx = MEM32(eax + 0x14);
    edi = MEM32(eax + 0x10);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(eax + 0x70);
    if (CMP_L(_fas, _fbs)) goto loc_0012C964; /* jl: less (signed <) */

loc_0012C95E: ;
    if (CMP_G(_fas, _fbs)) goto loc_0012C968; /* jg: greater (signed >) */

loc_0012C960: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012C968; /* ja: above (unsigned >) */

loc_0012C964: ;
    esi = edi;
    ecx = edx;

loc_0012C968: ;
    edx = MEM32(eax + 0x18);
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(eax + 0x78);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 0x18) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C980
 * Original: 0x0012C980 - 0x0012C9A6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C980: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = MEM32(eax + ecx + 0x1F30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C99D; /* jne: not equal / not zero */

loc_0012C996: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_0012C99D: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C9B0
 * Original: 0x0012C9B0 - 0x0012CA0A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C9B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C9BBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012C9BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C9D3; /* je: equal / zero */

loc_0012C9C2: ;
    PUSH32(esp, 0xFF00011Cu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012C9CEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012C9CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C9D3: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0012C9F6; /* je: equal / zero */

loc_0012C9DE: ;
    eax = esi + 0x10C;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x108);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C9F6: ;
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CA10
 * Original: 0x0012CA10 - 0x0012CA39 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CA10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = esi;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0012CA2Au); RECOMP_ABI_CALL(0x0012C760u, sub_0012C760); /* call 0x0012C760 */

loc_0012CA2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CA35; /* je: equal / zero */

loc_0012CA2E: ;
    MEM32(ebx + edi * 4 + 0xA04) = esi;

loc_0012CA35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CA40
 * Original: 0x0012CA40 - 0x0012CA57 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CA40: ;
    ecx = esi;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0012CA4Bu); RECOMP_ABI_CALL(0x0012C760u, sub_0012C760); /* call 0x0012C760 */

loc_0012CA4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CA56; /* je: equal / zero */

loc_0012CA4F: ;
    MEM32(ebx + edi * 4 + 0xB94) = esi;

loc_0012CA56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CA60
 * Original: 0x0012CA60 - 0x0012CAB4 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CA60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CA7E; /* jne: not equal / not zero */

loc_0012CA69: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0xA9C7C0);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CA7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CA84u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012CA84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CA9C; /* je: equal / zero */

loc_0012CA8B: ;
    PUSH32(esp, 0xFF000113u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012CA97u); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012CA97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CA9C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CAA7u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012CAA7: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CAC0
 * Original: 0x0012CAC0 - 0x0012CAFA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CAC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CACBu); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012CACB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CAE3; /* je: equal / zero */

loc_0012CAD2: ;
    PUSH32(esp, 0xFF000117u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012CADEu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012CADE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CAE3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CAF3u); RECOMP_ABI_CALL(0x0012C980u, sub_0012C980); /* call 0x0012C980 */

loc_0012CAF3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CB00
 * Original: 0x0012CB00 - 0x0012CB24 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CB00: ;
    PUSH32(esp, esi);
    esi = 0xA9C9C4;

loc_0012CB06: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CB17; /* je: equal / zero */

loc_0012CB0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012CB14u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012CB14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CB17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9C9E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA9C9E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012CB06; /* jl: less (signed <) */

loc_0012CB22: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CB30
 * Original: 0x0012CB30 - 0x0012CB91 (97 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CB30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0012CB53; /* jne: not equal / not zero */

loc_0012CB3A: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0012CB47u); RECOMP_ABI_CALL(0x0012CB00u, sub_0012CB00); /* call 0x0012CB00 */

loc_0012CB47: ;
    MEM32(ebx * 4 + 0xA9C7C0) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012CB53: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012CB59u); RECOMP_ABI_CALL(0x001290B0u, sub_001290B0); /* call 0x001290B0 */

loc_0012CB59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CB72; /* je: equal / zero */

loc_0012CB60: ;
    PUSH32(esp, 0xFF000112u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012CB6Cu); RECOMP_ABI_CALL(0x001291D0u, sub_001291D0); /* call 0x001291D0 */

loc_0012CB6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012CB72: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012CB83u); RECOMP_ABI_CALL(0x0012CA10u, sub_0012CA10); /* call 0x0012CA10 */

loc_0012CB83: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012CB8Bu); RECOMP_ABI_CALL(0x0012CA40u, sub_0012CA40); /* call 0x0012CA40 */

loc_0012CB8B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CBA0
 * Original: 0x0012CBA0 - 0x0012CC0D (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CBA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CBABu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0012CBAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CBC1; /* jne: not equal / not zero */

loc_0012CBB2: ;
    PUSH32(esp, 0x2AFA98);
    PUSH32(esp, 0x0012CBBCu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012CBBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CBC1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CBDA; /* jne: not equal / not zero */

loc_0012CBCA: ;
    PUSH32(esp, 0x2AFA6C);
    PUSH32(esp, 0x0012CBD4u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012CBD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CBDA: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012CBE4u); RECOMP_ABI_CALL(0x00110B50u, sub_00110B50); /* call 0x00110B50 */

loc_0012CBE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012CC03; /* jge: greater or equal (signed >=) */

loc_0012CBEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2AFA3C);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0012CBFDu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0012CBFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CC03: ;
    eax = MEM32(esi + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
