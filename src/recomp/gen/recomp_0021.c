/**
 * DOAU1 - Recompiled code chunk 21
 * Functions: 250 (0x000B9D85 - 0x000C06A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000B9D85
 * Original: 0x000B9D85 - 0x000B9DB4 (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9D85: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9DB1; /* jbe: below or equal (unsigned <=) */

loc_000B9D90: ;
    PUSH32(esp, ebx);

loc_000B9D91: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + edi * 4);
    ecx = ebx;
    PUSH32(esp, 0x000B9D9Eu); RECOMP_ABI_CALL(0x000B98C8u, sub_000B98C8); /* call 0x000B98C8 */

loc_000B9D9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DAA; /* je: equal / zero */

loc_000B9DA2: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000B9DAAu); RECOMP_ABI_CALL(0x000B9CCAu, sub_000B9CCA); /* call 0x000B9CCA */

loc_000B9DAA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9D91; /* jb: below (unsigned <) */

loc_000B9DB0: ;
    POP32(esp, ebx);

loc_000B9DB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9DB4
 * Original: 0x000B9DB4 - 0x000B9DE6 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9DB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9DB4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    ecx = esi;
    PUSH32(esp, 0x000B9DC7u); RECOMP_ABI_CALL(0x000BAF35u, sub_000BAF35); /* call 0x000BAF35 */

loc_000B9DC7: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9DD8; /* jne: not equal / not zero */

loc_000B9DD0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000B9DD8u); RECOMP_ABI_CALL(0x000B9D10u, sub_000B9D10); /* call 0x000B9D10 */

loc_000B9DD8: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000B9DE0u); RECOMP_ABI_CALL(0x000BB5BAu, sub_000BB5BA); /* call 0x000BB5BA */

loc_000B9DE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9DE6
 * Original: 0x000B9DE6 - 0x000B9E38 (82 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B9DE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9DE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000B9DF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9DEFu); } /* indirect call */
    }

loc_000B9DF5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E09; /* je: equal / zero */

loc_000B9E01: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9E09u); RECOMP_ABI_CALL(0x000B9D10u, sub_000B9D10); /* call 0x000B9D10 */

loc_000B9E09: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9E10u); RECOMP_ABI_CALL(0x000BAF35u, sub_000BAF35); /* call 0x000BAF35 */

loc_000B9E10: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9E26; /* jl: less (signed <) */

loc_000B9E16: ;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9E26u); RECOMP_ABI_CALL(0x000BC9D9u, sub_000BC9D9); /* call 0x000BC9D9 */

loc_000B9E26: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000B9E2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9E29u); } /* indirect call */
    }

loc_000B9E2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9E38
 * Original: 0x000B9E38 - 0x000B9E89 (81 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E38(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9E38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9E63; /* jbe: below or equal (unsigned <=) */

loc_000B9E44: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + edi * 4);
    ecx = ebx;
    PUSH32(esp, 0x000B9E51u); RECOMP_ABI_CALL(0x000B98C8u, sub_000B98C8); /* call 0x000B98C8 */

loc_000B9E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E5D; /* je: equal / zero */

loc_000B9E55: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000B9E5Du); RECOMP_ABI_CALL(0x000B9CCAu, sub_000B9CCA); /* call 0x000B9CCA */

loc_000B9E5D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9E44; /* jb: below (unsigned <) */

loc_000B9E63: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9E67: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(edi + eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax + 0x5C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9E79; /* jne: not equal / not zero */

loc_000B9E71: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000B9E79u); RECOMP_ABI_CALL(0x000B9C02u, sub_000B9C02); /* call 0x000B9C02 */

loc_000B9E79: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9E67; /* jb: below (unsigned <) */

loc_000B9E85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9E89
 * Original: 0x000B9E89 - 0x000B9E95 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E89(void)
{

loc_000B9E89: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B9E92u); RECOMP_ABI_CALL(0x000BB064u, sub_000BB064); /* call 0x000BB064 */

loc_000B9E92: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9E95
 * Original: 0x000B9E95 - 0x000B9EA1 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E95(void)
{

loc_000B9E95: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B9E9Eu); RECOMP_ABI_CALL(0x000BA6DBu, sub_000BA6DB); /* call 0x000BA6DB */

loc_000B9E9E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9EA1
 * Original: 0x000B9EA1 - 0x000B9EDA (57 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9EA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9ED7; /* jbe: below or equal (unsigned <=) */

loc_000B9EAC: ;
    PUSH32(esp, edi);

loc_000B9EAD: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + ebx * 4);
    eax = MEM32(ecx);
    edi = eax + eax * 2;
    eax = MEM32(esi + 0x14);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9EC6u); RECOMP_ABI_CALL(0x000BA6B4u, sub_000BA6B4); /* call 0x000BA6B4 */

loc_000B9EC6: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9ED0u); RECOMP_ABI_CALL(0x000BC686u, sub_000BC686); /* call 0x000BC686 */

loc_000B9ED0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9EAD; /* jb: below (unsigned <) */

loc_000B9ED6: ;
    POP32(esp, edi);

loc_000B9ED7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9EDA
 * Original: 0x000B9EDA - 0x000B9EFB (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EDA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B9EDA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000B9EEAu); RECOMP_ABI_CALL(0x000B841Du, sub_000B841D); /* call 0x000B841D */

loc_000B9EEA: ;
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
 * sub_000B9EFB
 * Original: 0x000B9EFB - 0x000B9FD5 (218 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B9EFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9EFB: ;
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
    PUSH32(esp, 0x000B9F1Fu); RECOMP_ABI_CALL(0x001AE8F7u, sub_001AE8F7); /* call 0x001AE8F7 */

loc_000B9F1F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9F30; /* jne: not equal / not zero */

loc_000B9F24: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_000B9FCD;

loc_000B9F30: ;
    PUSH32(esp, 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_000B9F35: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9F41u); RECOMP_ABI_CALL(0x000B7ED0u, sub_000B7ED0); /* call 0x000B7ED0 */

loc_000B9F41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F90; /* je: equal / zero */

loc_000B9F45: ;
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
    if (CMP_B(_fa, _fb)) goto loc_000B9F35; /* jb: below (unsigned <) */

loc_000B9F61: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, 0x184);
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9F77u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000B9F77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F97; /* je: equal / zero */

loc_000B9F7B: ;
    PUSH32(esp, 0xB8B0A);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9F8Eu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000B9F8E: ;
    goto loc_000B9F99;

loc_000B9F90: ;
    eax = 0x80004005u;
    goto loc_000B9FD0;

loc_000B9F97: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9F99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F24; /* je: equal / zero */

loc_000B9FA0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -44;

loc_000B9FA5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9FCD; /* jl: less (signed <) */

loc_000B9FAB: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9FBCu); RECOMP_ABI_CALL(0x000BCD32u, sub_000BCD32); /* call 0x000BCD32 */

loc_000B9FBC: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B9FA5; /* jb: below (unsigned <) */

loc_000B9FCD: ;
    eax = MEM32(ebp + -4);

loc_000B9FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9FD5
 * Original: 0x000B9FD5 - 0x000BA021 (76 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9FD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9FD5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9FDDu); RECOMP_ABI_CALL(0x000BB65Au, sub_000BB65A); /* call 0x000BB65A */

loc_000B9FDD: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FEE; /* je: equal / zero */

loc_000B9FE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9FEAu); RECOMP_ABI_CALL(0x001A8DFEu, sub_001A8DFE); /* call 0x001A8DFE */

loc_000B9FEA: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B9FEE: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA01F; /* je: equal / zero */

loc_000B9FF4: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9FF7: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BA001u); RECOMP_ABI_CALL(0x000BCCB0u, sub_000BCCB0); /* call 0x000BCCB0 */

loc_000BA001: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9FF7; /* jb: below (unsigned <) */

loc_000BA00C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BA01B; /* je: equal / zero */

loc_000BA014: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000BA01Bu); RECOMP_ABI_CALL(0x000B9057u, sub_000B9057); /* call 0x000B9057 */

loc_000BA01B: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BA01F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA02A
 * Original: 0x000BA02A - 0x000BA02E (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA02A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA02A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA02E
 * Original: 0x000BA02E - 0x000BA047 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA02E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA02E: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = ecx;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BA044u); RECOMP_ABI_CALL(0x000BC3D0u, sub_000BC3D0); /* call 0x000BC3D0 */

loc_000BA044: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA047
 * Original: 0x000BA047 - 0x000BA057 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA047(void)
{

loc_000BA047: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000BA054u); RECOMP_ABI_CALL(0x000BAA15u, sub_000BAA15); /* call 0x000BAA15 */

loc_000BA054: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA057
 * Original: 0x000BA057 - 0x000BA05B (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA057(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA057: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA05B
 * Original: 0x000BA05B - 0x000BA08D (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA05B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA05B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000BA064u); RECOMP_ABI_CALL(0x000BB615u, sub_000BB615); /* call 0x000BB615 */

loc_000BA064: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA081; /* jl: less (signed <) */

loc_000BA06A: ;
    ecx = edi;
    MEM32(0x96FD1C) = 1;
    PUSH32(esp, 0x000BA07Bu); RECOMP_ABI_CALL(0x000B9EFBu, sub_000B9EFB); /* call 0x000B9EFB */

loc_000BA07B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BA088; /* jge: greater or equal (signed >=) */

loc_000BA081: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BA088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA085u); } /* indirect call */
    }

loc_000BA088: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA08D
 * Original: 0x000BA08D - 0x000BA0B0 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA08D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA08D: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    MEM8(edx) = LO8(eax);
    MEM16(edx + 2) = LO16(eax);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA0B0
 * Original: 0x000BA0B0 - 0x000BA0C6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 4;
    PUSH32(esp, 0x000BA0BEu); RECOMP_ABI_CALL(0x000BA08Du, sub_000BA08D); /* call 0x000BA08D */

loc_000BA0BE: ;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA0E4
 * Original: 0x000BA0E4 - 0x000BA11C (56 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA0E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA0E4: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x218A0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x000BA0F7u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000BA0F7: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA117; /* je: equal / zero */

loc_000BA0FD: ;
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

loc_000BA117: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA11C
 * Original: 0x000BA11C - 0x000BA144 (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA11C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA11C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA141; /* je: equal / zero */

loc_000BA123: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA132; /* je: equal / zero */

loc_000BA12B: ;
    eax = eax | 0x218A0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000BA137;

loc_000BA132: ;
    eax = 0x218A2000;

loc_000BA137: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x000BA141u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000BA141: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA144
 * Original: 0x000BA144 - 0x000BA174 (48 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA144(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA144: ;
    eax = ecx;
    ecx = MEM32(eax + 0x18);
    edx = ecx + ecx * 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + edx * 4);
    ecx = 0xA0;
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
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA174
 * Original: 0x000BA174 - 0x000BA1B5 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA174(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA174: ;
    eax = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    esi = MEM32(eax + edx * 4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
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
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x28) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x3C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA1B5
 * Original: 0x000BA1B5 - 0x000BA1CE (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1B5(void)
{

loc_000BA1B5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x000BA1C9u); RECOMP_ABI_CALL(0x000BCF2Du, sub_000BCF2D); /* call 0x000BCF2D */

loc_000BA1C9: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA1CE
 * Original: 0x000BA1CE - 0x000BA233 (101 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1CE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA1CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BA1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA1D3u); } /* indirect call */
    }

loc_000BA1D9: ;
    edx = MEM32(ebx + 0x8C);
    edi = MEM32(ebx + 0x7C);
    ecx = edx + edx * 2 + 0x15;
    ecx = MEM32(ebx + ecx * 4);
    edx = edx + edx * 2;
    esi = MEM32(ebx + edx * 4 + 0x4C);
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
    ecx = MEM32(ebx + 0x8C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x8C) = ecx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BA216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA210u); } /* indirect call */
    }

loc_000BA216: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(ebx + 0x7C));
    PUSH32(esp, 0x000BA22Du); RECOMP_ABI_CALL(0x000BD14Du, sub_000BD14D); /* call 0x000BD14D */

loc_000BA22D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BA233
 * Original: 0x000BA233 - 0x000BA23B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA233: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_000BD1BA(); return; /* tail jmp 0x000BD1BA */

}

/**
 * sub_000BA23B
 * Original: 0x000BA23B - 0x000BA257 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA23B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA23B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA24B; /* je: equal / zero */

loc_000BA241: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_000BA24B: ;
    PUSH32(esp, MEM32(ecx + 0x24));
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x000BA256u); RECOMP_ABI_CALL(0x000BD0CDu, sub_000BD0CD); /* call 0x000BD0CD */

loc_000BA256: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA257
 * Original: 0x000BA257 - 0x000BA273 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA257(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA257: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA25Fu); RECOMP_ABI_CALL(0x000BA174u, sub_000BA174); /* call 0x000BA174 */

loc_000BA25F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA26F; /* je: equal / zero */

loc_000BA263: ;
    ecx = esi;
    PUSH32(esp, 0x000BA26Au); RECOMP_ABI_CALL(0x000BA23Bu, sub_000BA23B); /* call 0x000BA23B */

loc_000BA26A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BA26F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA273
 * Original: 0x000BA273 - 0x000BA2C0 (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA273(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA273: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x000BA27Bu); RECOMP_ABI_CALL(0x000BA174u, sub_000BA174); /* call 0x000BA174 */

loc_000BA27B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA2BC; /* je: equal / zero */

loc_000BA27F: ;
    eax = MEM32(ebx + 0x88);
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    edi = MEM32(ebx + eax * 4 + 0x4C);
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
    eax = MEM32(ebx + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(ebx + 0x88) = eax;
    eax = MEM32(ebx + 0x90);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BA2BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA2C0
 * Original: 0x000BA2C0 - 0x000BA2D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA2C0: ;
    eax = MEM32(ecx + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x3C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA2D0
 * Original: 0x000BA2D0 - 0x000BA351 (129 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BA2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x90));
    ecx = MEM32(esi + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA2E4u); RECOMP_ABI_CALL(0x000BD2F1u, sub_000BD2F1); /* call 0x000BD2F1 */

loc_000BA2E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA347; /* jl: less (signed <) */

loc_000BA2E8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA2F6u); RECOMP_ABI_CALL(0x000BD22Bu, sub_000BD22B); /* call 0x000BD22B */

loc_000BA2F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BA342; /* jl: less (signed <) */

loc_000BA2FD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BA303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA2FDu); } /* indirect call */
    }

loc_000BA303: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    edx = esi + 0x4C;
    POP32(esp, esi);
    PUSH32(esp, ebx);
    MEM8(ebp + 0xF) = LO8(eax);
    PUSH32(esp, edi);

loc_000BA31C: ;
    ecx = MEM32(edx + 8);
    edi = MEM32(edx);
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    if ((_fa != 0)) goto loc_000BA31C; /* jne: not equal / not zero */

loc_000BA337: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BA340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA33Au); } /* indirect call */
    }

loc_000BA340: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BA342: ;
    eax = MEM32(ebp + 8);
    goto loc_000BA34C;

loc_000BA347: ;
    eax = 0x80004005u;

loc_000BA34C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA351
 * Original: 0x000BA351 - 0x000BA359 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA351(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA351: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_000BD2DD(); return; /* tail jmp 0x000BD2DD */

}

/**
 * sub_000BA359
 * Original: 0x000BA359 - 0x000BA35A (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA359(void)
{

loc_000BA359: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA35A
 * Original: 0x000BA35A - 0x000BA36E (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA35A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA35A: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA369; /* jne: not equal / not zero */

loc_000BA361: ;
    eax = 0x80004005u;
    esp += 8; return; /* ret 4 */

loc_000BA369: ;
    g_seh_ebp = ebp; sub_000BCFC6(); return; /* tail jmp 0x000BCFC6 */

}

/**
 * sub_000BA36E
 * Original: 0x000BA36E - 0x000BA37A (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA36E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA36E: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA376; /* jne: not equal / not zero */

loc_000BA375: ;
    esp += 4; return; /* ret */

loc_000BA376: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA37A
 * Original: 0x000BA37A - 0x000BA39F (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BA37A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA37A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000BA38Cu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BA38C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000BA39A; /* jne: not equal / not zero */

loc_000BA393: ;
    eax = 0x8007000Eu;
    goto loc_000BA39C;

loc_000BA39A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BA39C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA3E3
 * Original: 0x000BA3E3 - 0x000BA424 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA3E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA3E3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA3EBu); RECOMP_ABI_CALL(0x000BA174u, sub_000BA174); /* call 0x000BA174 */

loc_000BA3EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA420; /* je: equal / zero */

loc_000BA3EF: ;
    ecx = esi;
    PUSH32(esp, 0x000BA3F6u); RECOMP_ABI_CALL(0x000BA23Bu, sub_000BA23B); /* call 0x000BA23B */

loc_000BA3F6: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA403; /* je: equal / zero */

loc_000BA3FD: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA41B; /* jne: not equal / not zero */

loc_000BA403: ;
    ecx = MEM32(esi + 0x2C);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
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
    POP32(esp, edi);

loc_000BA41B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BA420: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA424
 * Original: 0x000BA424 - 0x000BA444 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA424(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA424: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA42Cu); RECOMP_ABI_CALL(0x000BCEE2u, sub_000BCEE2); /* call 0x000BCEE2 */

loc_000BA42C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA43E; /* je: equal / zero */

loc_000BA433: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA43Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA43E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA444
 * Original: 0x000BA444 - 0x000BA464 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA444(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA444: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA44Cu); RECOMP_ABI_CALL(0x000BD139u, sub_000BD139); /* call 0x000BD139 */

loc_000BA44C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA45E; /* je: equal / zero */

loc_000BA453: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA45Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA45E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA464
 * Original: 0x000BA464 - 0x000BA496 (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA464: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    esi = 0x280;

loc_000BA473: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000BA47Bu); RECOMP_ABI_CALL(0x000BA37Au, sub_000BA37A); /* call 0x000BA37A */

loc_000BA47B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA491; /* jl: less (signed <) */

loc_000BA47F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BA473; /* jb: below (unsigned <) */

loc_000BA488: ;
    PUSH32(esp, esi);
    ecx = edi + 0x24;
    PUSH32(esp, 0x000BA491u); RECOMP_ABI_CALL(0x000BA37Au, sub_000BA37A); /* call 0x000BA37A */

loc_000BA491: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA496
 * Original: 0x000BA496 - 0x000BA4AD (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA496(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA496: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4AB; /* je: equal / zero */

loc_000BA4A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BA4A7u); RECOMP_ABI_CALL(0x000BA424u, sub_000BA424); /* call 0x000BA424 */

loc_000BA4A7: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BA4AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA4AD
 * Original: 0x000BA4AD - 0x000BA4C4 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA4AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA4AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4C2; /* je: equal / zero */

loc_000BA4B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BA4BEu); RECOMP_ABI_CALL(0x000BA444u, sub_000BA444); /* call 0x000BA444 */

loc_000BA4BE: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BA4C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA4C4
 * Original: 0x000BA4C4 - 0x000BA521 (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA4C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA51C; /* jne: not equal / not zero */

loc_000BA4CF: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x000BA4DBu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BA4DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4E8; /* je: equal / zero */

loc_000BA4DF: ;
    ecx = eax;
    PUSH32(esp, 0x000BA4E6u); RECOMP_ABI_CALL(0x000BA0B0u, sub_000BA0B0); /* call 0x000BA0B0 */

loc_000BA4E6: ;
    goto loc_000BA4EA;

loc_000BA4E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BA4EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BA4F8; /* jne: not equal / not zero */

loc_000BA4F1: ;
    edi = 0x8007000Eu;
    goto loc_000BA515;

loc_000BA4F8: ;
    ecx = eax;
    PUSH32(esp, 0x000BA4FFu); RECOMP_ABI_CALL(0x000BD084u, sub_000BD084); /* call 0x000BD084 */

loc_000BA4FF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA515; /* jl: less (signed <) */

loc_000BA505: ;
    PUSH32(esp, 0xA);
    ecx = esi + 0x30;
    PUSH32(esp, 0x000BA50Fu); RECOMP_ABI_CALL(0x000BA37Au, sub_000BA37A); /* call 0x000BA37A */

loc_000BA50F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BA51C; /* jge: greater or equal (signed >=) */

loc_000BA515: ;
    ecx = esi;
    PUSH32(esp, 0x000BA51Cu); RECOMP_ABI_CALL(0x000BA496u, sub_000BA496); /* call 0x000BA496 */

loc_000BA51C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA521
 * Original: 0x000BA521 - 0x000BA59C (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA521(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA521: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA596; /* jne: not equal / not zero */

loc_000BA52D: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, 0x184);
    PUSH32(esp, 0x000BA53Cu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BA53C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA544; /* je: equal / zero */

loc_000BA540: ;
    MEM32(eax) = edi;
    goto loc_000BA546;

loc_000BA544: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BA546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BA556; /* jne: not equal / not zero */

loc_000BA54F: ;
    edi = 0x8007000Eu;
    goto loc_000BA58D;

loc_000BA556: ;
    MEM32(esp + 0x10) = edi;
    ebp = esi + 0x4C;
    ebx = 0x280;

loc_000BA562: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000BA56Au); RECOMP_ABI_CALL(0x000BA37Au, sub_000BA37A); /* call 0x000BA37A */

loc_000BA56A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA58D; /* jl: less (signed <) */

loc_000BA570: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BA562; /* jb: below (unsigned <) */

loc_000BA57E: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x000BA587u); RECOMP_ABI_CALL(0x000BA37Au, sub_000BA37A); /* call 0x000BA37A */

loc_000BA587: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BA594; /* jge: greater or equal (signed >=) */

loc_000BA58D: ;
    ecx = esi;
    PUSH32(esp, 0x000BA594u); RECOMP_ABI_CALL(0x000BA4ADu, sub_000BA4AD); /* call 0x000BA4AD */

loc_000BA594: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000BA596: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA5AE
 * Original: 0x000BA5AE - 0x000BA5C8 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BA5AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA5AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BA5C1: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BA5C1; /* jne: not equal / not zero */

loc_000BA5C6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA60E
 * Original: 0x000BA60E - 0x000BA61B (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA60E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA60E: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA61B
 * Original: 0x000BA61B - 0x000BA625 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA61B(void)
{

loc_000BA61B: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x000BA624u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA624: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA633
 * Original: 0x000BA633 - 0x000BA651 (30 bytes, 12 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BA633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BA633: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000BA64Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA648u); } /* indirect call */
    }

loc_000BA64B: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000BA651
 * Original: 0x000BA651 - 0x000BA6AB (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA651(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA651: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x24) = 1;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA6AB
 * Original: 0x000BA6AB - 0x000BA6AC (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA6AB(void)
{

loc_000BA6AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA6AC
 * Original: 0x000BA6AC - 0x000BA6B4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA6AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA6AC: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_000BA2C0(); return; /* tail jmp 0x000BA2C0 */

}

/**
 * sub_000BA6B4
 * Original: 0x000BA6B4 - 0x000BA6DB (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA6B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA6B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BA6BFu); RECOMP_ABI_CALL(0x000BA3E3u, sub_000BA3E3); /* call 0x000BA3E3 */

loc_000BA6BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA6D7; /* je: equal / zero */

loc_000BA6C3: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BA6CBu); RECOMP_ABI_CALL(0x000BA1B5u, sub_000BA1B5); /* call 0x000BA1B5 */

loc_000BA6CB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA6D7u); RECOMP_ABI_CALL(0x000BC520u, sub_000BC520); /* call 0x000BC520 */

loc_000BA6D7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA6DB
 * Original: 0x000BA6DB - 0x000BA6E8 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA6DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA6DB: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA6E7; /* je: equal / zero */

loc_000BA6E2: ;
    g_seh_ebp = ebp; sub_000BA496(); return; /* tail jmp 0x000BA496 */

loc_000BA6E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA6E8
 * Original: 0x000BA6E8 - 0x000BA707 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA6E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA6E8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA6F7; /* je: equal / zero */

loc_000BA6F2: ;
    PUSH32(esp, 0x000BA6F7u); RECOMP_ABI_CALL(0x000BA496u, sub_000BA496); /* call 0x000BA496 */

loc_000BA6F7: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x000BA701u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA701: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA707
 * Original: 0x000BA707 - 0x000BA720 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA707(void)
{

loc_000BA707: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, 0x000BA714u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA714: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, 0x000BA71Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BA71E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA720
 * Original: 0x000BA720 - 0x000BA72D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA720: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA72C; /* je: equal / zero */

loc_000BA727: ;
    g_seh_ebp = ebp; sub_000BA4AD(); return; /* tail jmp 0x000BA4AD */

loc_000BA72C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA72D
 * Original: 0x000BA72D - 0x000BA768 (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA72D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA72D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA763; /* je: equal / zero */

loc_000BA73A: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BA741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA73Bu); } /* indirect call */
    }

loc_000BA741: ;
    ecx = MEM32(esi + 0x1C);
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000BA74Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA74Cu); } /* indirect call */
    }

loc_000BA74F: ;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000BA75Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA757u); } /* indirect call */
    }

loc_000BA75A: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BA762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA75Cu); } /* indirect call */
    }

loc_000BA762: ;
    POP32(esp, ebx);

loc_000BA763: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA768
 * Original: 0x000BA768 - 0x000BA7A2 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA768(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA768: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA77C; /* je: equal / zero */

loc_000BA772: ;
    MEM32(eax + 0x90) = 1;

loc_000BA77C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA78D; /* je: equal / zero */

loc_000BA783: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000BA789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA786u); } /* indirect call */
    }

loc_000BA789: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BA78D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA79E; /* je: equal / zero */

loc_000BA794: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000BA79Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA797u); } /* indirect call */
    }

loc_000BA79A: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BA79E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA7A2
 * Original: 0x000BA7A2 - 0x000BA7C7 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA7A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA7A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, MEM32(0x282294));
    PUSH32(esp, 0x000BA7B7u); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000BA7B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA7C7
 * Original: 0x000BA7C7 - 0x000BA7E5 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BA7C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BA7C7: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BA7DB; /* jne: not equal / not zero */

loc_000BA7CD: ;
    eax = MEM32(ecx + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x28) = eax;

loc_000BA7DB: ;
    MEM32(ecx + 0x24) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA7E5
 * Original: 0x000BA7E5 - 0x000BA816 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA7E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA7E5: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA828
 * Original: 0x000BA828 - 0x000BA859 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA828(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA828: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BA86B
 * Original: 0x000BA86B - 0x000BA8E5 (122 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BA86B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA86B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x96FD04);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BA886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA880u); } /* indirect call */
    }

loc_000BA886: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA894u); RECOMP_ABI_CALL(0x000BA7E5u, sub_000BA7E5); /* call 0x000BA7E5 */

loc_000BA894: ;
    eax = MEM32(esi);
    ecx = MEM32(0x96FD04);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA8B8; /* je: equal / zero */

loc_000BA8A7: ;
    ecx = MEM32(edi);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000BA8B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA8B5u); } /* indirect call */
    }

loc_000BA8B8: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA8C6u); RECOMP_ABI_CALL(0x000BA144u, sub_000BA144); /* call 0x000BA144 */

loc_000BA8C6: ;
    esi = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BA8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA8D2u); } /* indirect call */
    }

loc_000BA8D5: ;
    eax = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BA8DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA8D9u); } /* indirect call */
    }

loc_000BA8DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA8E5
 * Original: 0x000BA8E5 - 0x000BA9D0 (235 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BA8E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA8E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA905u); RECOMP_ABI_CALL(0x000BA828u, sub_000BA828); /* call 0x000BA828 */

loc_000BA905: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000BA90Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA90Au); } /* indirect call */
    }

loc_000BA90D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA9CB; /* je: equal / zero */

loc_000BA915: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BA932u); RECOMP_ABI_CALL(0x000B85B5u, sub_000B85B5); /* call 0x000B85B5 */

loc_000BA932: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x140;
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x500;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BA984; /* jae: above or equal (unsigned >=) */

loc_000BA960: ;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    MEM32(ebp + 8) = ebx;
    if ((_fa == 0)) goto loc_000BA979; /* je: equal / zero */

loc_000BA96A: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA96A; /* jne: not equal / not zero */

loc_000BA979: ;
    eax = MEM32(ebp + -8);
    ebx = 0x140;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000BA984: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BA997; /* jbe: below or equal (unsigned <=) */

loc_000BA988: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA988; /* jne: not equal / not zero */

loc_000BA997: ;
    POP32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_000BA9AA; /* jb: below (unsigned <) */

loc_000BA9A0: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    goto loc_000BA9B9;

loc_000BA9AA: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -12);
    eax = eax + ecx + -640;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

loc_000BA9B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x2C) = edx;
    esi = MEM32(esi + 8);
    eax = MEM32(esi);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BA9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA9C8u); } /* indirect call */
    }

loc_000BA9CB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA9D0
 * Original: 0x000BA9D0 - 0x000BAA07 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA9D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000BA9E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA9DDu); } /* indirect call */
    }

loc_000BA9E0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA9FF; /* jl: less (signed <) */

loc_000BA9E6: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA9FC; /* jne: not equal / not zero */

loc_000BA9EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA9FC; /* jne: not equal / not zero */

loc_000BA9F2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BA9FAu); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000BA9FA: ;
    goto loc_000BA9FF;

loc_000BA9FC: ;
    MEM32(esi + 0x20) = edi;

loc_000BA9FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAA07
 * Original: 0x000BAA07 - 0x000BAA15 (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BAA07(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAA07: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAA15
 * Original: 0x000BAA15 - 0x000BAA1D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAA15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BAA15: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_000BA35A(); return; /* tail jmp 0x000BA35A */

}

/**
 * sub_000BAA1D
 * Original: 0x000BAA1D - 0x000BAA44 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAA1D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAA1D: ;
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAA3A; /* jne: not equal / not zero */

loc_000BAA2D: ;
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, 0x000BAA35u); RECOMP_ABI_CALL(0x000BA36Eu, sub_000BA36E); /* call 0x000BA36E */

loc_000BAA35: ;
    MEM32(esi + 4) = eax;
    goto loc_000BAA3E;

loc_000BAA3A: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BAA3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAA44
 * Original: 0x000BAA44 - 0x000BAAEA (166 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAA44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAA44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAA5Du); RECOMP_ABI_CALL(0x000B841Du, sub_000B841D); /* call 0x000B841D */

loc_000BAA5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA72; /* je: equal / zero */

loc_000BAA61: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000BAA68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAA65u); } /* indirect call */
    }

loc_000BAA68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA72; /* je: equal / zero */

loc_000BAA6C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA79; /* je: equal / zero */

loc_000BAA72: ;
    eax = 0x80004005u;
    goto loc_000BAAE5;

loc_000BAA79: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -128;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BAAC7; /* jbe: below or equal (unsigned <=) */

loc_000BAA95: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -128;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = eax;
    goto loc_000BAAA5;

loc_000BAAA2: ;
    eax = MEM32(ebp + 0xC);

loc_000BAAA5: ;
    eax = eax + edi * 4;
    eax = MEM32(ebp + eax + -128);
    eax = MEM32(esi + eax * 4 + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + edi * 4 + -128) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAABCu); RECOMP_ABI_CALL(0x000BE580u, sub_000BE580); /* call 0x000BE580 */

loc_000BAABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_000BAAE3; /* jl: less (signed <) */

loc_000BAAC1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BAAA2; /* jb: below (unsigned <) */

loc_000BAAC7: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAAD6u); RECOMP_ABI_CALL(0x000BD390u, sub_000BD390); /* call 0x000BD390 */

loc_000BAAD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BAAE3; /* jl: less (signed <) */

loc_000BAADD: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x60) = ecx;

loc_000BAAE3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000BAAE5: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BAAEA
 * Original: 0x000BAAEA - 0x000BAB29 (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAAEA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAAEA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BAAF5u); RECOMP_ABI_CALL(0x000BA257u, sub_000BA257); /* call 0x000BA257 */

loc_000BAAF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAB22; /* je: equal / zero */

loc_000BAAF9: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BAB01u); RECOMP_ABI_CALL(0x000BA36Eu, sub_000BA36E); /* call 0x000BA36E */

loc_000BAB01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_000BAB14; /* je: equal / zero */

loc_000BAB08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x154) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x154 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BAB1E; /* jae: above or equal (unsigned >=) */

loc_000BAB0F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BAB1B;

loc_000BAB14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BAB1E; /* jbe: below or equal (unsigned <=) */

loc_000BAB18: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BAB1B: ;
    MEM32(esi + 0x30) = eax;

loc_000BAB1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BAB22: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAB29
 * Original: 0x000BAB29 - 0x000BAB81 (88 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAB29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAB3Bu); RECOMP_ABI_CALL(0x000BA1B5u, sub_000BA1B5); /* call 0x000BA1B5 */

loc_000BAB3B: ;
    esi = MEM32(ebx + 0x34);
    ecx = ebx + 0x3C;
    edx = MEM32(ecx);
    edx = edx + edx * 4;
    edi = esi + edx * 2;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x38));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x38)); }
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BAB65: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BAB65; /* jne: not equal / not zero */

loc_000BAB6A: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ebx;
    eax = 1;
    ecx = MEM32(ebp + -8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BAB81
 * Original: 0x000BAB81 - 0x000BABB4 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAB81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BABAB; /* jbe: below or equal (unsigned <=) */

loc_000BAB96: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BABABu); RECOMP_ABI_CALL(0x000BA233u, sub_000BA233); /* call 0x000BA233 */

loc_000BABAB: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BABB4
 * Original: 0x000BABB4 - 0x000BAC06 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BABB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAC04; /* jne: not equal / not zero */

loc_000BABBD: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAC04; /* je: equal / zero */

loc_000BABC3: ;
    PUSH32(esp, 0x000BABC8u); RECOMP_ABI_CALL(0x000BAB81u, sub_000BAB81); /* call 0x000BAB81 */

loc_000BABC8: ;
    PUSH32(esp, MEM32(esi + 0x6C));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    PUSH32(esp, 0x000BABD6u); RECOMP_ABI_CALL(0x000BA351u, sub_000BA351); /* call 0x000BA351 */

loc_000BABD6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BABDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BABD6u); } /* indirect call */
    }

loc_000BABDC: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x64) = 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BABEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BABE9u); } /* indirect call */
    }

loc_000BABEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(0x96FD04);
    PUSH32(esp, MEM32(esi + 0x78));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BAC04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC01u); } /* indirect call */
    }

loc_000BAC04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC06
 * Original: 0x000BAC06 - 0x000BAC4C (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAC06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAC06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BAC14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC0Eu); } /* indirect call */
    }

loc_000BAC14: ;
    SET_LO8(ebx, LO8(eax));
    eax = esi + 0x50;
    MEM32(ebp + -4) = eax;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BAC26: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BAC26; /* jne: not equal / not zero */

loc_000BAC2B: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BAC3B: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BAC3B; /* jne: not equal / not zero */

loc_000BAC40: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BAC48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC42u); } /* indirect call */
    }

loc_000BAC48: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC4C
 * Original: 0x000BAC4C - 0x000BAC7F (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAC4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAC4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BAC5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC59u); } /* indirect call */
    }

loc_000BAC5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi + 0x44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAC6Fu); RECOMP_ABI_CALL(0x000BDA80u, sub_000BDA80); /* call 0x000BDA80 */

loc_000BAC6F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BAC7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC76u); } /* indirect call */
    }

loc_000BAC7C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC7F
 * Original: 0x000BAC7F - 0x000BACC5 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAC7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAC7F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BAC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC87u); } /* indirect call */
    }

loc_000BAC8D: ;
    SET_LO8(ebx, LO8(eax));
    eax = esi + 0x3C;
    MEM32(ebp + -4) = eax;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BAC9F: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BAC9F; /* jne: not equal / not zero */

loc_000BACA4: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BACB4: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BACB4; /* jne: not equal / not zero */

loc_000BACB9: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BACC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BACBBu); } /* indirect call */
    }

loc_000BACC1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BACC5
 * Original: 0x000BACC5 - 0x000BAD0A (69 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BACC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BACC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BACD7; /* jae: above or equal (unsigned >=) */

loc_000BACD4: ;
    eax = MEM32(esi + 0x40);

loc_000BACD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BACFE; /* jbe: below or equal (unsigned <=) */

loc_000BACDB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = eax;

loc_000BACE5: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BACF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BACF2u); } /* indirect call */
    }

loc_000BACF4: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BACE5; /* jne: not equal / not zero */

loc_000BACFC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BACFE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAD05u); RECOMP_ABI_CALL(0x000BAC7Fu, sub_000BAC7F); /* call 0x000BAC7F */

loc_000BAD05: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAD0A
 * Original: 0x000BAD0A - 0x000BAD7C (114 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAD0A(void)
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

loc_000BAD0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi + 0x44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAD36u); RECOMP_ABI_CALL(0x000BDA80u, sub_000BDA80); /* call 0x000BDA80 */

loc_000BAD36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BAD5F; /* jbe: below or equal (unsigned <=) */

loc_000BAD40: ;
    edx = MEM32(ebp + -8);
    edx = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0x58);
    MEM32(ecx + eax * 8) = edx;
    edx = MEM32(ebp + -12);
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    ecx = MEM32(esi + 0x58);
    MEMF(ecx + eax * 8 + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BAD40; /* jb: below (unsigned <) */

loc_000BAD5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 0x58));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x000BAD70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAD6Du); } /* indirect call */
    }

loc_000BAD70: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAD77u); RECOMP_ABI_CALL(0x000BAC06u, sub_000BAC06); /* call 0x000BAC06 */

loc_000BAD77: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BAD7C
 * Original: 0x000BAD7C - 0x000BADCC (80 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAD7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAD7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x21);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x000BAD8Cu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BAD8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BAD9A; /* jne: not equal / not zero */

loc_000BAD93: ;
    eax = 0x8007000Eu;
    goto loc_000BADC7;

loc_000BAD9A: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = eax;
    eax = ecx;
    MEM32(ebx + 0x4C) = esi;
    esi = MEM32(esp + 0x14);
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
    eax = MEM32(esp + 0x10);
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
    PUSH32(esp, MEM32(ebx + 0x48));
    MEM32(ebx + 0x44) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BADC4u); RECOMP_ABI_CALL(0x000BE300u, sub_000BE300); /* call 0x000BE300 */

loc_000BADC4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);

loc_000BADC7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BADCC
 * Original: 0x000BADCC - 0x000BAE03 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BADCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BADCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BADDDu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BADDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x60) = eax;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BADFB: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BADFB; /* jne: not equal / not zero */

loc_000BAE00: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BAE03
 * Original: 0x000BAE03 - 0x000BAEA4 (161 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAE03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAE03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAEA1; /* jne: not equal / not zero */

loc_000BAE16: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAE23; /* jne: not equal / not zero */

loc_000BAE1C: ;
    MEM32(esi + 0x54) = 1;

loc_000BAE23: ;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAE2Bu); RECOMP_ABI_CALL(0x000BA174u, sub_000BA174); /* call 0x000BA174 */

loc_000BAE2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEA1; /* je: equal / zero */

loc_000BAE2F: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = esi + 0x5C;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAE41; /* je: equal / zero */

loc_000BAE3F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BAE41: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAE7E; /* je: equal / zero */

loc_000BAE4B: ;
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BAE55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAE4Fu); } /* indirect call */
    }

loc_000BAE55: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, 0xBD600);
    PUSH32(esp, MEM32(0x96FD20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAE72u); RECOMP_ABI_CALL(0x000BA633u, sub_000BA633); /* call 0x000BA633 */

loc_000BAE72: ;
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BAE7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAE76u); } /* indirect call */
    }

loc_000BAE7C: ;
    goto loc_000BAE93;

loc_000BAE7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi + 0x44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAE90u); RECOMP_ABI_CALL(0x000BD600u, sub_000BD600); /* call 0x000BD600 */

loc_000BAE90: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BAE93: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000BAEA1; /* je: equal / zero */

loc_000BAE9A: ;
    MEM32(esi + 0x50) = 1;

loc_000BAEA1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BAEA4
 * Original: 0x000BAEA4 - 0x000BAF35 (145 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BAEA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAEA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -8) = 0x80004005u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BAEBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAEB5u); } /* indirect call */
    }

loc_000BAEBB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), ebx (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEE8; /* je: equal / zero */

loc_000BAEC5: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x70) = eax;
    PUSH32(esp, 0x14);
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x78) = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x74) = ecx;

loc_000BAEE8: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BAEF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAEEBu); } /* indirect call */
    }

loc_000BAEF1: ;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF2B; /* je: equal / zero */

loc_000BAEF6: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
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
    PUSH32(esp, MEM32(esi + 0x70));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BAF1Au); RECOMP_ABI_CALL(0x000BA2D0u, sub_000BA2D0); /* call 0x000BA2D0 */

loc_000BAF1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x6C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF2B; /* je: equal / zero */

loc_000BAF21: ;
    MEM32(esi + 0x64) = 1;
    MEM32(ebp + -8) = ebx;

loc_000BAF2B: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BAF35
 * Original: 0x000BAF35 - 0x000BAF75 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAF35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAF35: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x80004005u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BAF44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAF3Eu); } /* indirect call */
    }

loc_000BAF44: ;
    edx = MEM32(esi + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF66; /* je: equal / zero */

loc_000BAF4C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF66; /* je: equal / zero */

loc_000BAF51: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF66; /* je: equal / zero */

loc_000BAF55: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF5F; /* je: equal / zero */

loc_000BAF5A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAF68; /* jne: not equal / not zero */

loc_000BAF5F: ;
    MEM32(esi + 0x64) = 3;

loc_000BAF66: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BAF68: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BAF70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAF6Au); } /* indirect call */
    }

loc_000BAF70: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAF75
 * Original: 0x000BAF75 - 0x000BAFEE (121 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAF75(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAF75: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xBA60E;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BAF8Au); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000BAF8A: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, ebx);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 4);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0x000BAFC5u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000BAFC5: ;
    eax = esi + 0x7C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x90) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAFEE
 * Original: 0x000BAFEE - 0x000BB036 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAFEE(void)
{

loc_000BAFEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BAFF7u); RECOMP_ABI_CALL(0x000BA359u, sub_000BA359); /* call 0x000BA359 */

loc_000BAFF7: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x000BB001u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB001: ;
    edi = 0xBA61B;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB014u); RECOMP_ABI_CALL(0x000B7E19u, sub_000B7E19); /* call 0x000B7E19 */

loc_000BB014: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0x000BB01Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB01E: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x000BB028u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB028: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB033u); RECOMP_ABI_CALL(0x000B7E19u, sub_000B7E19); /* call 0x000B7E19 */

loc_000BB033: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB036
 * Original: 0x000BB036 - 0x000BB04D (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB036(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB036: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB04A; /* jne: not equal / not zero */

loc_000BB03D: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000BB04Au); RECOMP_ABI_CALL(0x000BA86Bu, sub_000BA86B); /* call 0x000BA86B */

loc_000BB04A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BB04D
 * Original: 0x000BB04D - 0x000BB064 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB04D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB04D: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB061; /* jne: not equal / not zero */

loc_000BB054: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000BB061u); RECOMP_ABI_CALL(0x000BA8E5u, sub_000BA8E5); /* call 0x000BA8E5 */

loc_000BB061: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BB064
 * Original: 0x000BB064 - 0x000BB0A2 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB064(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB064: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000BB088; /* jne: not equal / not zero */

loc_000BB06E: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x000BB07Au); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB07A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB088; /* jne: not equal / not zero */

loc_000BB081: ;
    edi = 0x8007000Eu;
    goto loc_000BB096;

loc_000BB088: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BB090u); RECOMP_ABI_CALL(0x000BA4C4u, sub_000BA4C4); /* call 0x000BA4C4 */

loc_000BB090: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB09D; /* jge: greater or equal (signed >=) */

loc_000BB096: ;
    ecx = esi;
    PUSH32(esp, 0x000BB09Du); RECOMP_ABI_CALL(0x000BA6DBu, sub_000BA6DB); /* call 0x000BA6DB */

loc_000BB09D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB0A2
 * Original: 0x000BB0A2 - 0x000BB111 (111 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB0A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB0A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000BB0B3; /* jne: not equal / not zero */

loc_000BB0AC: ;
    edi = 0x80004005u;
    goto loc_000BB105;

loc_000BB0B3: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB0D7; /* jne: not equal / not zero */

loc_000BB0BD: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x000BB0C9u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB0C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB0D7; /* jne: not equal / not zero */

loc_000BB0D0: ;
    edi = 0x8007000Eu;
    goto loc_000BB105;

loc_000BB0D7: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BB0DFu); RECOMP_ABI_CALL(0x000BA4C4u, sub_000BA4C4); /* call 0x000BA4C4 */

loc_000BB0DF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB105; /* jl: less (signed <) */

loc_000BB0E5: ;
    eax = MEM32(esi + 0x38);
    eax = eax + eax * 4;
    PUSH32(esp, 0x21);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB0F5u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB0F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB101; /* jne: not equal / not zero */

loc_000BB0FC: ;
    edi = 0x8007000Eu;

loc_000BB101: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB10C; /* jge: greater or equal (signed >=) */

loc_000BB105: ;
    ecx = esi;
    PUSH32(esp, 0x000BB10Cu); RECOMP_ABI_CALL(0x000BA6E8u, sub_000BA6E8); /* call 0x000BA6E8 */

loc_000BB10C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB111
 * Original: 0x000BB111 - 0x000BB138 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB111(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB111: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x21);
    PUSH32(esp, 8);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000BB120u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB120: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB133; /* jne: not equal / not zero */

loc_000BB127: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x000BB133u); RECOMP_ABI_CALL(0x000BA707u, sub_000BA707); /* call 0x000BA707 */

loc_000BB133: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB138
 * Original: 0x000BB138 - 0x000BB176 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB138(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB138: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000BB15C; /* jne: not equal / not zero */

loc_000BB142: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x000BB14Eu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB14E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB15C; /* jne: not equal / not zero */

loc_000BB155: ;
    edi = 0x8007000Eu;
    goto loc_000BB16A;

loc_000BB15C: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BB164u); RECOMP_ABI_CALL(0x000BA521u, sub_000BA521); /* call 0x000BA521 */

loc_000BB164: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB171; /* jge: greater or equal (signed >=) */

loc_000BB16A: ;
    ecx = esi;
    PUSH32(esp, 0x000BB171u); RECOMP_ABI_CALL(0x000BA720u, sub_000BA720); /* call 0x000BA720 */

loc_000BB171: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB176
 * Original: 0x000BB176 - 0x000BB196 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB176(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB176: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BB17Eu); RECOMP_ABI_CALL(0x000BAFEEu, sub_000BAFEE); /* call 0x000BAFEE */

loc_000BB17E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB190; /* je: equal / zero */

loc_000BB185: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB190u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB190: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB196
 * Original: 0x000BB196 - 0x000BB1B0 (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB196(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB196: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = 0;
    PUSH32(esp, 0x000BB1A5u); RECOMP_ABI_CALL(0x000BA768u, sub_000BA768); /* call 0x000BA768 */

loc_000BB1A5: ;
    MEM32(esi + 0x24) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB1B0
 * Original: 0x000BB1B0 - 0x000BB1F9 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB1C7: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB1D3u); RECOMP_ABI_CALL(0x000BA7E5u, sub_000BA7E5); /* call 0x000BA7E5 */

loc_000BB1D3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    edx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BB1E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB1DFu); } /* indirect call */
    }

loc_000BB1E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB1F2; /* jl: less (signed <) */

loc_000BB1E6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB1C7; /* jb: below (unsigned <) */

loc_000BB1EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB1EE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000BB1F2: ;
    eax = 0x80004005u;
    goto loc_000BB1EE;

}

/**
 * sub_000BB1F9
 * Original: 0x000BB1F9 - 0x000BB26F (118 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB1F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB1F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB20E; /* jne: not equal / not zero */

loc_000BB20A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000BB264;

loc_000BB20E: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000BB216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB213u); } /* indirect call */
    }

loc_000BB216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB22F; /* je: equal / zero */

loc_000BB21A: ;
    ecx = MEM32(0x96FD04);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB22Fu); RECOMP_ABI_CALL(0x000B85B5u, sub_000B85B5); /* call 0x000B85B5 */

loc_000BB22F: ;
    PUSH32(esp, edi);

loc_000BB230: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB23Cu); RECOMP_ABI_CALL(0x000BA828u, sub_000BA828); /* call 0x000BA828 */

loc_000BB23C: ;
    edi = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BB257u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB254u); } /* indirect call */
    }

loc_000BB257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB268; /* jl: less (signed <) */

loc_000BB25B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB230; /* jb: below (unsigned <) */

loc_000BB261: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB263: ;
    POP32(esp, edi);

loc_000BB264: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000BB268: ;
    eax = 0x80004005u;
    goto loc_000BB263;

}

/**
 * sub_000BB26F
 * Original: 0x000BB26F - 0x000BB2E2 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB26F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB26F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB2DF; /* jne: not equal / not zero */

loc_000BB27C: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB2A3; /* jbe: below or equal (unsigned <=) */

loc_000BB28A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB29Fu); RECOMP_ABI_CALL(0x000BA1CEu, sub_000BA1CE); /* call 0x000BA1CE */

loc_000BB29F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB2C2; /* jl: less (signed <) */

loc_000BB2A3: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB2B9; /* jbe: below or equal (unsigned <=) */

loc_000BB2B1: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x78) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BB2DF; /* ja: above (unsigned >) */

loc_000BB2B9: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB2C0u); RECOMP_ABI_CALL(0x000BAF35u, sub_000BAF35); /* call 0x000BAF35 */

loc_000BB2C0: ;
    goto loc_000BB2D8;

loc_000BB2C2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB2C9u); RECOMP_ABI_CALL(0x000BAF35u, sub_000BAF35); /* call 0x000BAF35 */

loc_000BB2C9: ;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x000BB2D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB2D5u); } /* indirect call */
    }

loc_000BB2D8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB2DFu); RECOMP_ABI_CALL(0x000BABB4u, sub_000BABB4); /* call 0x000BABB4 */

loc_000BB2DF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB2E2
 * Original: 0x000BB2E2 - 0x000BB31A (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB2E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB2E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BB2EAu); RECOMP_ABI_CALL(0x000BA768u, sub_000BA768); /* call 0x000BA768 */

loc_000BB2EA: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB2FC; /* je: equal / zero */

loc_000BB2F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BB2F8u); RECOMP_ABI_CALL(0x000BB176u, sub_000BB176); /* call 0x000BB176 */

loc_000BB2F8: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BB2FC: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x000BB306u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB306: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x000BB314u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB314: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB31A
 * Original: 0x000BB31A - 0x000BB3B2 (152 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB31A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB31A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB32E; /* je: equal / zero */

loc_000BB329: ;
    PUSH32(esp, 0x000BB32Eu); RECOMP_ABI_CALL(0x000BB196u, sub_000BB196); /* call 0x000BB196 */

loc_000BB32E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBB036);
    ebx = 0x96FD08;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x222794);
    PUSH32(esp, 0x000BB349u); RECOMP_ABI_CALL(0x0022B867u, sub_0022B867); /* call 0x0022B867 */

loc_000BB349: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB3A4; /* jl: less (signed <) */

loc_000BB34F: ;
    _fa = (uint32_t)(MEM32(0x96FD1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FD1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB388; /* je: equal / zero */

loc_000BB357: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBB04D);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x2227A0);
    PUSH32(esp, 0x000BB370u); RECOMP_ABI_CALL(0x0022B867u, sub_0022B867); /* call 0x0022B867 */

loc_000BB370: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB3A4; /* jl: less (signed <) */

loc_000BB376: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB388; /* je: equal / zero */

loc_000BB37B: ;
    ecx = esi;
    PUSH32(esp, 0x000BB382u); RECOMP_ABI_CALL(0x000BB1F9u, sub_000BB1F9); /* call 0x000BB1F9 */

loc_000BB382: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB3A4; /* jl: less (signed <) */

loc_000BB388: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB39A; /* je: equal / zero */

loc_000BB38D: ;
    ecx = esi;
    PUSH32(esp, 0x000BB394u); RECOMP_ABI_CALL(0x000BB1B0u, sub_000BB1B0); /* call 0x000BB1B0 */

loc_000BB394: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB3A4; /* jl: less (signed <) */

loc_000BB39A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_000BB3AB; /* jge: greater or equal (signed >=) */

loc_000BB3A4: ;
    ecx = esi;
    PUSH32(esp, 0x000BB3ABu); RECOMP_ABI_CALL(0x000BB196u, sub_000BB196); /* call 0x000BB196 */

loc_000BB3AB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB3B2
 * Original: 0x000BB3B2 - 0x000BB421 (111 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB3B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB3B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BB408; /* je: equal / zero */

loc_000BB3BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BB3F3; /* je: equal / zero */

loc_000BB3BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BB41D; /* jne: not equal / not zero */

loc_000BB3C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB3C7u); RECOMP_ABI_CALL(0x000BB196u, sub_000BB196); /* call 0x000BB196 */

loc_000BB3C7: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BB3D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB3D2u); } /* indirect call */
    }

loc_000BB3D5: ;
    ecx = esi;
    PUSH32(esp, 0x000BB3DCu); RECOMP_ABI_CALL(0x000BB31Au, sub_000BB31A); /* call 0x000BB31A */

loc_000BB3DC: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, 0x000BB3E6u); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000BB3E6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BB3F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB3EDu); } /* indirect call */
    }

loc_000BB3F0: ;
    POP32(esp, edi);
    goto loc_000BB41D;

loc_000BB3F3: ;
    ecx = esi;
    PUSH32(esp, 0x000BB3FAu); RECOMP_ABI_CALL(0x000BB31Au, sub_000BB31A); /* call 0x000BB31A */

loc_000BB3FA: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, 0x000BB404u); RECOMP_ABI_CALL(0x000BA72Du, sub_000BA72D); /* call 0x000BA72D */

loc_000BB404: ;
    PUSH32(esp, 0);
    goto loc_000BB411;

loc_000BB408: ;
    ecx = esi;
    PUSH32(esp, 0x000BB40Fu); RECOMP_ABI_CALL(0x000BB196u, sub_000BB196); /* call 0x000BB196 */

loc_000BB40F: ;
    PUSH32(esp, 1);

loc_000BB411: ;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000BB41Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB41Au); } /* indirect call */
    }

loc_000BB41D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB421
 * Original: 0x000BB421 - 0x000BB4C2 (161 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB421(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB421: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x500;
    if (CMP_NE(_fa, _fb)) goto loc_000BB450; /* jne: not equal / not zero */

loc_000BB431: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB439u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB439: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB47E; /* je: equal / zero */

loc_000BB440: ;
    eax = MEM32(0x282294);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(0x282294);
    MEM32(esi + 0x20) = eax;

loc_000BB450: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x000BB45Fu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB475; /* je: equal / zero */

loc_000BB463: ;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, MEM32(ecx + 0x20));
    ecx = eax;
    PUSH32(esp, 0x000BB473u); RECOMP_ABI_CALL(0x000BAF75u, sub_000BAF75); /* call 0x000BAF75 */

loc_000BB473: ;
    goto loc_000BB477;

loc_000BB475: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB477: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB485; /* jne: not equal / not zero */

loc_000BB47E: ;
    ebx = 0x8007000Eu;
    goto loc_000BB4B5;

loc_000BB485: ;
    ecx = eax;
    PUSH32(esp, 0x000BB48Cu); RECOMP_ABI_CALL(0x000BA464u, sub_000BA464); /* call 0x000BA464 */

loc_000BB48C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB4B5; /* jl: less (signed <) */

loc_000BB492: ;
    eax = MEM32(0x96FD04);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB4B1; /* je: equal / zero */

loc_000BB49D: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB4A5u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB4A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB4B1; /* jne: not equal / not zero */

loc_000BB4AC: ;
    ebx = 0x8007000Eu;

loc_000BB4B1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB4BC; /* jge: greater or equal (signed >=) */

loc_000BB4B5: ;
    ecx = esi;
    PUSH32(esp, 0x000BB4BCu); RECOMP_ABI_CALL(0x000BB2E2u, sub_000BB2E2); /* call 0x000BB2E2 */

loc_000BB4BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB4C2
 * Original: 0x000BB4C2 - 0x000BB4DC (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB4C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB4C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_000BB4D5: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BB4D5; /* jne: not equal / not zero */

loc_000BB4DA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB4DC
 * Original: 0x000BB4DC - 0x000BB4F7 (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB4DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB4DC: ;
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
 * sub_000BB4F7
 * Original: 0x000BB4F7 - 0x000BB524 (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB4F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB4F7: ;
    _fa = (uint32_t)(MEM32(0x96FD20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FD20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB523; /* je: equal / zero */

loc_000BB500: ;
    edx = 0;
    ecx = 0x96FD20;
    eax = MEM32(ecx);

loc_000BB50C: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_000BB50C; /* jne: not equal / not zero */

loc_000BB511: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB523; /* je: equal / zero */

loc_000BB515: ;
    ecx = eax + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC78); PUSH32(esp, 0x000BB523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB51Du); } /* indirect call */
    }

loc_000BB523: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB524
 * Original: 0x000BB524 - 0x000BB575 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB524(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB524: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x96FD20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FD20), 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000BB570; /* jne: not equal / not zero */

loc_000BB52F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6000);
    { uint32_t _icall_target = MEM32(0x22BC74); PUSH32(esp, 0x000BB53Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB536u); } /* indirect call */
    }

loc_000BB53C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000BB54D; /* jne: not equal / not zero */

loc_000BB546: ;
    eax = 0x8007000Eu;
    goto loc_000BB572;

loc_000BB54D: ;
    eax = 0;
    ecx = 0x96FD20;
    edx = MEM32(esp + 4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB570; /* je: equal / zero */

loc_000BB562: ;
    eax = esi + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BC78); PUSH32(esp, 0x000BB570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB56Au); } /* indirect call */
    }

loc_000BB570: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB572: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB579
 * Original: 0x000BB579 - 0x000BB582 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB579(void)
{

loc_000BB579: ;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB582
 * Original: 0x000BB582 - 0x000BB5BA (56 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB582(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB582: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB5A4; /* jbe: below or equal (unsigned <=) */

loc_000BB592: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);

loc_000BB596: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB5A3; /* je: equal / zero */

loc_000BB59A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB596; /* jb: below (unsigned <) */

loc_000BB5A3: ;
    POP32(esp, edi);

loc_000BB5A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB5B1; /* jne: not equal / not zero */

loc_000BB5A8: ;
    esi = MEM32(eax + 8);
    MEM32(esi + edx * 4) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BB5B1: ;
    PUSH32(esp, 0x000BB5B6u); RECOMP_ABI_CALL(0x000BB1F9u, sub_000BB1F9); /* call 0x000BB1F9 */

loc_000BB5B6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB5BA
 * Original: 0x000BB5BA - 0x000BB615 (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB5BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB5BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB611; /* jbe: below or equal (unsigned <=) */

loc_000BB5C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000BB5DF; /* jbe: below or equal (unsigned <=) */

loc_000BB5CB: ;
    ecx = MEM32(esi + 8);

loc_000BB5CE: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB5DF; /* je: equal / zero */

loc_000BB5D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB5CE; /* jb: below (unsigned <) */

loc_000BB5DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BB610; /* jae: above or equal (unsigned >=) */

loc_000BB5E3: ;
    ecx = MEM32(esi + 8);
    edi = eax;
    eax = MEM32(esi);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + edi));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000BB5F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB5F2u); } /* indirect call */
    }

loc_000BB5F5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(eax + ecx * 4 + -4);
    MEM32(eax + edi) = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4 + -4) = MEM32(ecx + eax * 4 + -4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BB610: ;
    POP32(esp, edi);

loc_000BB611: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB615
 * Original: 0x000BB615 - 0x000BB65A (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB615(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB615: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x96FD04);
    eax = MEM32(eax + 8);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x22);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB634u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB634: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BB642; /* jne: not equal / not zero */

loc_000BB63B: ;
    edi = 0x8007000Eu;
    goto loc_000BB655;

loc_000BB642: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB655; /* jbe: below or equal (unsigned <=) */

loc_000BB649: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB649; /* jb: below (unsigned <) */

loc_000BB655: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB65A
 * Original: 0x000BB65A - 0x000BB66D (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB65A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB65A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x22);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x000BB667u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB667: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB66D
 * Original: 0x000BB66D - 0x000BB679 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB66D(void)
{

loc_000BB66D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000BB676u); RECOMP_ABI_CALL(0x000BB421u, sub_000BB421); /* call 0x000BB421 */

loc_000BB676: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB679
 * Original: 0x000BB679 - 0x000BB698 (31 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB679(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB679: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BB695; /* jbe: below or equal (unsigned <=) */

loc_000BB684: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x000BB68Fu); RECOMP_ABI_CALL(0x000BA6ACu, sub_000BA6AC); /* call 0x000BA6AC */

loc_000BB68F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BB684; /* jb: below (unsigned <) */

loc_000BB695: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB698
 * Original: 0x000BB698 - 0x000BB6A4 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB698(void)
{

loc_000BB698: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000BB6A1u); RECOMP_ABI_CALL(0x000BB2E2u, sub_000BB2E2); /* call 0x000BB2E2 */

loc_000BB6A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB6A4
 * Original: 0x000BB6A4 - 0x000BB6C5 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB6A4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BB6A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x96FD04);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BB6B4u); RECOMP_ABI_CALL(0x000B841Du, sub_000B841D); /* call 0x000B841D */

loc_000BB6B4: ;
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
 * sub_000BB6CE
 * Original: 0x000BB6CE - 0x000BB6D1 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BB6CE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB6CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB70B
 * Original: 0x000BB70B - 0x000BB71E (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB70B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB70B: ;
    eax = ecx;
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
 * sub_000BB71E
 * Original: 0x000BB71E - 0x000BB71F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB71E(void)
{

loc_000BB71E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB71F
 * Original: 0x000BB71F - 0x000BB735 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB71F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB71F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB733; /* je: equal / zero */

loc_000BB728: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB730u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB730: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BB733: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB735
 * Original: 0x000BB735 - 0x000BB753 (30 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB735(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB735: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x000BB743u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BB743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB74F; /* je: equal / zero */

loc_000BB749: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;

loc_000BB74F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB753
 * Original: 0x000BB753 - 0x000BB78C (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BB753: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB764u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BB764: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB776u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000BB776: ;
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, MEM32(esi + 0x90));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB789u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_000BB789: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB78C
 * Original: 0x000BB78C - 0x000BB7B0 (36 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB78C(void)
{

loc_000BB78C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0x000BB7A9u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_000BB7A9: ;
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BB7B7
 * Original: 0x000BB7B7 - 0x000BB7EF (56 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB7B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB7B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x96FD28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FD28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB7EC; /* jne: not equal / not zero */

loc_000BB7C1: ;
    _fa = (uint32_t)(MEM32(0x96FD2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FD2C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB7EC; /* jne: not equal / not zero */

loc_000BB7C9: ;
    ecx = MEM32(esp + 4);
    MEM32(0x96FD28) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x96FD2C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x96FD30) = ecx;
    MEM32(0x96FD34) = eax;

loc_000BB7EC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BB7EF
 * Original: 0x000BB7EF - 0x000BB85B (108 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB7EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BB7EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(0x96FD28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x96FD28)));
    eax = eax - MEM32(0x96FD28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x96FD34);
    PUSH32(esp, edi);
    edi = MEM32(0x96FD30);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(0x96FD2C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BB820u); RECOMP_ABI_CALL(0x00152850u, sub_00152850); /* call 0x00152850 */

loc_000BB820: ;
    MEM32(ebp + -4) = edx;
    ecx = esi;
    edx = edi;
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { edx = (edx >> _c) | (ecx << (32 - _c)); _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000BB846; /* ja: above (unsigned >) */

loc_000BB831: ;
    if (CMP_B(_fa, _fb)) goto loc_000BB838; /* jb: below (unsigned <) */

loc_000BB833: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB846; /* jae: above or equal (unsigned >=) */

loc_000BB838: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ecx;
    esi = ebx;
    goto loc_000BB850;

loc_000BB846: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_000BB850: ;
    eax = edi;
    POP32(esp, edi);
    edx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BB85B
 * Original: 0x000BB85B - 0x000BB8A7 (76 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB85B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB85B: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BB890; /* je: equal / zero */

loc_000BB868: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBB71E);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB87Bu); RECOMP_ABI_CALL(0x000B7E19u, sub_000B7E19); /* call 0x000B7E19 */

loc_000BB87B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB88B; /* je: equal / zero */

loc_000BB880: ;
    PUSH32(esp, 0x8025);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB88Bu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB88B: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_000BB8A2;

loc_000BB890: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB8A0; /* je: equal / zero */

loc_000BB895: ;
    PUSH32(esp, 0x8025);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB8A0u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BB8A0: ;
    eax = edi;

loc_000BB8A2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB8A7
 * Original: 0x000BB8A7 - 0x000BB905 (94 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB8A7(void)
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

loc_000BB8A7: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB8B7; /* jne: not equal / not zero */

loc_000BB8B1: ;
    MEM32(ecx) = 0x14;

loc_000BB8B7: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB8C3; /* jne: not equal / not zero */

loc_000BB8BC: ;
    MEM32(ecx + 0xC) = 0x50;

loc_000BB8C3: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB8CF; /* jne: not equal / not zero */

loc_000BB8C8: ;
    MEM32(ecx + 8) = 0x1F4;

loc_000BB8CF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB8DB; /* jne: not equal / not zero */

loc_000BB8D4: ;
    MEM32(ecx + 0x10) = 0xF0;

loc_000BB8DB: ;
    fp_push(MEMD(ecx + 0x18)); /* fld double */
    fp_push(MEMD(0x22CA68)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BB8F6; /* jp: parity */

loc_000BB8ED: ;
    fp_push(MEMD(0x282308)); /* fld double */
    MEMD(ecx + 0x18) = fp_top(); fp_pop(); /* fstp */

loc_000BB8F6: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB902; /* jne: not equal / not zero */

loc_000BB8FB: ;
    MEM32(ecx + 0x20) = 0xA;

loc_000BB902: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BB905
 * Original: 0x000BB905 - 0x000BB9B2 (173 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB905(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BB905: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BB927u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_000BB927: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x30))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x4C);
    ecx = 0xFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax + 0x1000;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB95C; /* jae: above or equal (unsigned >=) */

loc_000BB94C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000BB964; /* jb: below (unsigned <) */

loc_000BB950: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000BB964; /* ja: above (unsigned >) */

loc_000BB954: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB97D; /* jae: above or equal (unsigned >=) */

loc_000BB95A: ;
    goto loc_000BB9AF;

loc_000BB95C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB96F; /* jae: above or equal (unsigned >=) */

loc_000BB960: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BB96F; /* jbe: below or equal (unsigned <=) */

loc_000BB964: ;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    POP32(esp, edx);
    goto loc_000BB99D;

loc_000BB96F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB9A5; /* jae: above or equal (unsigned >=) */

loc_000BB973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000BB9AD; /* ja: above (unsigned >) */

loc_000BB977: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000BB9AD; /* ja: above (unsigned >) */

loc_000BB97B: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB97D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esi + 0xC));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esi + 0x20))) >> 32) & 1);
    ebx = ebx + MEM32(esi + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x24)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_000BB996: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BB99D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000BB9A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000BB97B; /* ja: above (unsigned >) */

loc_000BB9A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB97B; /* jae: above or equal (unsigned >=) */

loc_000BB9AD: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB9AF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000BB996;

}

/**
 * sub_000BB9B2
 * Original: 0x000BB9B2 - 0x000BB9DC (42 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB9B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB9B2: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB9C5; /* je: equal / zero */

loc_000BB9C1: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BB9C5: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB9D9; /* je: equal / zero */

loc_000BB9D1: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB9D9; /* jne: not equal / not zero */

loc_000BB9D6: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BB9D9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BB9DC
 * Original: 0x000BB9DC - 0x000BBA15 (57 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB9DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB9DC: ;
    ecx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA12; /* je: equal / zero */

loc_000BB9E5: ;
    PUSH32(esp, esi);

loc_000BB9E6: ;
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    edx = MEM32(ecx);
    if (CMP_B(_fa, _fb)) goto loc_000BBA11; /* jb: below (unsigned <) */

loc_000BB9F1: ;
    if (CMP_A(_fa, _fb)) goto loc_000BB9F9; /* ja: above (unsigned >) */

loc_000BB9F3: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BBA11; /* jb: below (unsigned <) */

loc_000BB9F9: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA05; /* jne: not equal / not zero */

loc_000BB9FF: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA0E; /* je: equal / zero */

loc_000BBA05: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB9E6; /* jne: not equal / not zero */

loc_000BBA0C: ;
    goto loc_000BBA11;

loc_000BBA0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BBA11: ;
    POP32(esp, esi);

loc_000BBA12: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BBA15
 * Original: 0x000BBA15 - 0x000BBAA6 (145 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BBA15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBA15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x54) = MEM32(ecx + 0x54) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA33; /* jne: not equal / not zero */

loc_000BBA28: ;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    goto loc_000BBA9E;

loc_000BBA33: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA5A; /* je: equal / zero */

loc_000BBA3F: ;
    edi = MEM32(edx);
    eax = MEM32(edx + 4);

loc_000BBA44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BBA56; /* ja: above (unsigned >) */

loc_000BBA49: ;
    if (CMP_B(_fa, _fb)) goto loc_000BBA4F; /* jb: below (unsigned <) */

loc_000BBA4B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BBA56; /* jae: above or equal (unsigned >=) */

loc_000BBA4F: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA44; /* jne: not equal / not zero */

loc_000BBA56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA68; /* jne: not equal / not zero */

loc_000BBA5A: ;
    MEM32(ebx + 0xC) = edx;
    eax = MEM32(ecx + 0x18);
    MEM32(edx + 0x10) = eax;
    MEM32(ecx + 0x18) = edx;
    goto loc_000BBA9C;

loc_000BBA68: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA71; /* jne: not equal / not zero */

loc_000BBA6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA8E; /* je: equal / zero */

loc_000BBA71: ;
    eax = MEM32(esi + 0x10);
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0xC) = esi;
    MEM32(esi + 0x10) = edx;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA89; /* jne: not equal / not zero */

loc_000BBA84: ;
    MEM32(ecx + 0x1C) = edx;
    goto loc_000BBA9C;

loc_000BBA89: ;
    MEM32(esi + 0xC) = edx;
    goto loc_000BBA9C;

loc_000BBA8E: ;
    eax = MEM32(ecx + 0x54);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x54) = eax;
    MEM32(ebp + -4) = 0x80004005u;

loc_000BBA9C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000BBA9E: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBAA6
 * Original: 0x000BBAA6 - 0x000BBAD2 (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBAA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BBAA6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBACB; /* je: equal / zero */

loc_000BBAB3: ;
    PUSH32(esp, 0x000BBAB8u); RECOMP_ABI_CALL(0x000BB753u, sub_000BB753); /* call 0x000BB753 */

loc_000BBAB8: ;
    _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x28)));
    eax = eax - MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0x2C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x20)));
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000BBACB; /* jl: less (signed <) */

loc_000BBACA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BBACB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBAD2
 * Original: 0x000BBAD2 - 0x000BBB22 (80 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBAD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBAD2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM32(edi) = ebx;
    PUSH32(esp, 0x000BBAE4u); RECOMP_ABI_CALL(0x000BBAA6u, sub_000BBAA6); /* call 0x000BBAA6 */

loc_000BBAE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB1A; /* je: equal / zero */

loc_000BBAE8: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BBB14; /* jbe: below or equal (unsigned <=) */

loc_000BBAED: ;
    edx = MEM32(esi + 0x20);
    ecx = esi + 0x18;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBB14; /* jne: not equal / not zero */

loc_000BBAF9: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBB14; /* jne: not equal / not zero */

loc_000BBB01: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BBB0Du); RECOMP_ABI_CALL(0x000BB9B2u, sub_000BB9B2); /* call 0x000BB9B2 */

loc_000BBB0D: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    goto loc_000BBB1A;

loc_000BBB14: ;
    MEM32(edi) = 1;

loc_000BBB1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBB22
 * Original: 0x000BBB22 - 0x000BBB3C (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBB22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBB22: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB36; /* je: equal / zero */

loc_000BBB2D: ;
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x10) = edx;

loc_000BBB36: ;
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBB3C
 * Original: 0x000BBB3C - 0x000BBD03 (455 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BBB3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000BBB3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB5D; /* je: equal / zero */

loc_000BBB53: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BBB5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBB57u); } /* indirect call */
    }

loc_000BBB5D: ;
    edx = MEM32(esi + 0x48);
    fp_push((double)SMEM32(esi + 0x80)); /* fild */
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esi + 0x50)));
    edx = edx - MEM32(esi + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000BBB79; /* jge: greater or equal (signed >=) */

loc_000BBB73: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_000BBB79: ;
    eax = MEM32(esi + 0x88);
    MEMD(ebp + -12) = fp_top(); /* fst */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_push((double)SMEM32(esi + 0x88)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000BBB92; /* jge: greater or equal (signed >=) */

loc_000BBB8C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_000BBB92: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BBBA5; /* jnp: not parity */

loc_000BBBA1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_000BBBA5: ;
    fp_push(MEMD(ebp + -12)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esi + 0x70)); /* fmul qword ptr [esi + 0x70] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BBBBC; /* jnp: not parity */

loc_000BBBB8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_000BBBBC: ;
    eax = MEM32(esi + 0x5C);
    MEMD(esi + 0x78) = fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    eax = eax + edx * 8;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(eax)); /* fmul qword ptr [eax] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x5C);
    ecx = eax + edx * 8;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x80) = edi;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x88) = edi;
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(esi + 0x68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [esi + 0x68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BBCA3; /* jp: parity */

loc_000BBBF9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BBCEA; /* jbe: below or equal (unsigned <=) */

loc_000BBC01: ;
    fp_push(MEMD(ecx + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000BBCEA; /* jne: not equal / not zero */

loc_000BBC1D: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x38);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x3C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBC35u); RECOMP_ABI_CALL(0x000BB78Cu, sub_000BB78C); /* call 0x000BB78C */

loc_000BBC35: ;
    ebx = MEM32(esi + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x20)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x24)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x24) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BBCEA; /* jbe: below or equal (unsigned <=) */

loc_000BBC49: ;
    edi = MEM32(esi + 0x18);
    eax = MEM32(edi + 4);
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edi);
    if (CMP_B(_fa, _fb)) goto loc_000BBCEA; /* jb: below (unsigned <) */

loc_000BBC5C: ;
    if (CMP_A(_fa, _fb)) goto loc_000BBC69; /* ja: above (unsigned >) */

loc_000BBC5E: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BBCEA; /* jbe: below or equal (unsigned <=) */

loc_000BBC69: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edx);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBC79u); RECOMP_ABI_CALL(0x000BB9DCu, sub_000BB9DC); /* call 0x000BB9DC */

loc_000BBC79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC99; /* je: equal / zero */

loc_000BBC7D: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBC8Cu); RECOMP_ABI_CALL(0x000BB9B2u, sub_000BB9B2); /* call 0x000BB9B2 */

loc_000BBC8C: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBC97u); RECOMP_ABI_CALL(0x000BBB22u, sub_000BBB22); /* call 0x000BBB22 */

loc_000BBC97: ;
    goto loc_000BBCEA;

loc_000BBC99: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    POP32(esp, eax);
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_000BBCEA;

loc_000BBCA3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BBCEA; /* jae: above or equal (unsigned >=) */

loc_000BBCA9: ;
    fp_push(MEMD(ecx + 8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000BBCEA; /* jne: not equal / not zero */

loc_000BBCC1: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BBCCB; /* jne: not equal / not zero */

loc_000BBCC6: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBCEA; /* je: equal / zero */

loc_000BBCCB: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x38))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBCE1u); RECOMP_ABI_CALL(0x000BB78Cu, sub_000BB78C); /* call 0x000BB78C */

loc_000BBCE1: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x20)) < (uint32_t)(eax));
    MEM32(esi + 0x20) = MEM32(esi + 0x20) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x24)) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x24) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000BBCEA: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD01; /* je: equal / zero */

loc_000BBCF7: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BBD01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBCFBu); } /* indirect call */
    }

loc_000BBD01: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BBD03
 * Original: 0x000BBD03 - 0x000BBD3E (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBD03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBD03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, 0x000BBD10u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BBD10: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD24; /* je: equal / zero */

loc_000BBD1A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000BBD21u); RECOMP_ABI_CALL(0x000BB85Bu, sub_000BB85B); /* call 0x000BB85B */

loc_000BBD21: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BBD24: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x000BBD2Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BBD2E: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x9C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BB71F(); return; /* tail jmp 0x000BB71F */

}

/**
 * sub_000BBD3E
 * Original: 0x000BBD3E - 0x000BBF6C (558 bytes, 197 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BBD3E(void)
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

loc_000BBD3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x90;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBD5Au); RECOMP_ABI_CALL(0x000ADB8Fu, sub_000ADB8F); /* call 0x000ADB8F */

loc_000BBD5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBD85; /* jne: not equal / not zero */

loc_000BBD5E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBD63u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000BBD63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BBD74; /* jg: greater (signed >) */

loc_000BBD67: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBD6Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000BBD6C: ;
    MEM32(ebp + -4) = eax;
    goto loc_000BBF56;

loc_000BBD74: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBD79u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000BBD79: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000BBD6C;

loc_000BBD85: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    fp_push(MEMD(eax + 0x18)); /* fld double */
    MEM32(ebp + -44) = ecx;
    MEMD(ebp + -20) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -12) = eax;
    eax = ebp + -44;
    MEM32(ebp + -40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBDBCu); RECOMP_ABI_CALL(0x000BB8A7u, sub_000BB8A7); /* call 0x000BB8A7 */

loc_000BBDBC: ;
    edi = MEM32(ebp + -44);
    eax = MEM32(ebp + -36);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -28);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBDDEu); RECOMP_ABI_CALL(0x000BB78Cu, sub_000BB78C); /* call 0x000BB78C */

loc_000BBDDE: ;
    fp_push(MEMD(ebp + -20)); /* fld double */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMD(esi + 0x68) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 8) = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000BBDF4; /* jge: greater or equal (signed >=) */

loc_000BBDEE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_000BBDF4: ;
    eax = MEM32(ebp + -12);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x282310)); /* fmul qword ptr [0x282310] */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(ebp + -32);
    MEMD(esi + 0x70) = fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(0.0); /* fldz */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEMD(esi + 0x78) = fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x21);
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    edi = eax;
    eax = MEM32(ebp + -36);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(ebp + -40);
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x4C) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x60) = eax;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBE4Du); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BBE4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBEBB; /* je: equal / zero */

loc_000BBE54: ;
    eax = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBE63u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BBE63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBEBB; /* je: equal / zero */

loc_000BBE6A: ;
    edi = MEM32(esi + 8);
    eax = edi + edi * 2;
    PUSH32(esp, 0x8025);
    eax = eax * 8 + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBE82u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BBE82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBEA1; /* je: equal / zero */

loc_000BBE86: ;
    PUSH32(esp, 0xBB70B);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBE9Cu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_000BBE9C: ;
    eax = MEM32(ebp + 8);
    goto loc_000BBEA3;

loc_000BBEA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBEA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBEBB; /* je: equal / zero */

loc_000BBEA9: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = esi + 0x9C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBEB7u); RECOMP_ABI_CALL(0x000BB735u, sub_000BB735); /* call 0x000BB735 */

loc_000BBEB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBEC7; /* jne: not equal / not zero */

loc_000BBEBB: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_000BBF5B;

loc_000BBEC7: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BBF04; /* jbe: below or equal (unsigned <=) */

loc_000BBED2: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);

loc_000BBED5: ;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi + 8) = ecx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -24;
    MEM32(ecx + 0xC) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + 0x18;
    MEM32(ecx + 0x10) = edi;
    ecx = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BBED5; /* jb: below (unsigned <) */

loc_000BBF04: ;
    eax = MEM32(esi);
    MEM32(esi + 0x14) = eax;
    ecx = eax + 0x18;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    edx = eax + eax * 2 + -6;
    edx = ecx + edx * 8;
    eax = eax + eax * 2;
    MEM32(ecx + eax * 8 + -12) = edx;
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    ecx = eax + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x10));
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    MEM32(edx + eax * 8 + -16) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BBF62; /* jbe: below or equal (unsigned <=) */

loc_000BBF47: ;
    ecx = MEM32(esi + 0x5C);
    fp_push(MEMD(esi + 0x68)); /* fld double */
    MEMD(ecx + eax * 8) = fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BBF47; /* jb: below (unsigned <) */

loc_000BBF56: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BBF62; /* jge: greater or equal (signed >=) */

loc_000BBF5B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBF62u); RECOMP_ABI_CALL(0x000BBD03u, sub_000BBD03); /* call 0x000BBD03 */

loc_000BBF62: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BBF6C
 * Original: 0x000BBF6C - 0x000BBFBE (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBF6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBF6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BBF77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBF71u); } /* indirect call */
    }

loc_000BBF77: ;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x40));
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x000BBF88u); RECOMP_ABI_CALL(0x000BB78Cu, sub_000BB78C); /* call 0x000BB78C */

loc_000BBF88: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000BBFD9(); return; } /* je: equal / zero */

loc_000BBFB6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebp = esi + 0x18;

    g_seh_ebp = ebp; sub_000BBFBE(); return; /* fallthrough 0x000BBFBE */

}

/**
 * sub_000BBFBE
 * Original: 0x000BBFBE - 0x000BBFD9 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBFBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBFBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000BBFC7u); RECOMP_ABI_CALL(0x000BB9B2u, sub_000BB9B2); /* call 0x000BB9B2 */

loc_000BBFC7: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BBFD2u); RECOMP_ABI_CALL(0x000BBB22u, sub_000BBB22); /* call 0x000BBB22 */

loc_000BBFD2: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBFBE; /* jne: not equal / not zero */

loc_000BBFD7: ;
    POP32(esp, edi);
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_000BBFD9(); return; /* fallthrough 0x000BBFD9 */

}

/**
 * sub_000BBFD9
 * Original: 0x000BBFD9 - 0x000BC006 (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBFD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBFD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BBFF6; /* jbe: below or equal (unsigned <=) */

loc_000BBFE0: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x5C);
    MEM32(ecx + eax * 8) = edx;
    edx = MEM32(esi + 0x6C);
    MEM32(ecx + eax * 8 + 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BBFE0; /* jb: below (unsigned <) */

loc_000BBFF6: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBFFAu); } /* indirect call */
    }

loc_000BC000: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC006
 * Original: 0x000BC006 - 0x000BC066 (96 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BC006: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x28)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x24);
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x2C)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x2C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x48)));
    eax = eax - MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x88) = ebp;
    MEM32(esi + 0x80) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC061; /* je: equal / zero */

loc_000BC03E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebx = esi + 0x18;

loc_000BC046: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BC04Fu); RECOMP_ABI_CALL(0x000BB9B2u, sub_000BB9B2); /* call 0x000BB9B2 */

loc_000BC04F: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BC05Au); RECOMP_ABI_CALL(0x000BBB22u, sub_000BBB22); /* call 0x000BBB22 */

loc_000BC05A: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BC046; /* jne: not equal / not zero */

loc_000BC05F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BC061: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC066
 * Original: 0x000BC066 - 0x000BC15A (244 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC066(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BC066: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC07Bu); } /* indirect call */
    }

loc_000BC081: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC08Fu); RECOMP_ABI_CALL(0x000BBAD2u, sub_000BBAD2); /* call 0x000BBAD2 */

loc_000BC08F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BC0F5; /* jne: not equal / not zero */

loc_000BC093: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BC0A4; /* jne: not equal / not zero */

loc_000BC098: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_000BC147;

loc_000BC0A4: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA0), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BC13D; /* jne: not equal / not zero */

loc_000BC0B0: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + 8);
    esi = MEM32(ebx + 0x9C);
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xA0) = 1;
    SET_LO16(eax, MEM16(edx));
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ecx);
    goto loc_000BC13D;

loc_000BC0F5: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebp + 8);
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
    ecx = MEM32(ebx + 0x10);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebx + 0x9C);
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
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xA0) = MEM32(ebx + 0xA0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC13Du); RECOMP_ABI_CALL(0x000BBB22u, sub_000BBB22); /* call 0x000BBB22 */

loc_000BC13D: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x20)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebx + 0x24)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx + 0x24) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_000BC147: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC14Au); } /* indirect call */
    }

loc_000BC150: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC15A
 * Original: 0x000BC15A - 0x000BC16E (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC15A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC15A: ;
    eax = ecx + 0x14;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC165; /* jne: not equal / not zero */

loc_000BC162: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BC165: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC16Du); RECOMP_ABI_CALL(0x000BB9B2u, sub_000BB9B2); /* call 0x000BB9B2 */

loc_000BC16D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC16E
 * Original: 0x000BC16E - 0x000BC2BA (332 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC16E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC16E: ;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC17Du); } /* indirect call */
    }

loc_000BC183: ;
    esi = MEM32(ebp + 8);
    edi = ZX16(MEM16(esi));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x58), 0 (32-bit) */
    MEM8(ebp + 0xB) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000BC1EF; /* jne: not equal / not zero */

loc_000BC19C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x98), 0 (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC1C9; /* je: equal / zero */

loc_000BC1A7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC1ACu); RECOMP_ABI_CALL(0x000BB753u, sub_000BB753); /* call 0x000BB753 */

loc_000BC1AC: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC1BCu); RECOMP_ABI_CALL(0x000BB7B7u, sub_000BB7B7); /* call 0x000BB7B7 */

loc_000BC1BC: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC1C7u); RECOMP_ABI_CALL(0x000BB7EFu, sub_000BB7EF); /* call 0x000BB7EF */

loc_000BC1C7: ;
    goto loc_000BC1CE;

loc_000BC1C9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC1CEu); RECOMP_ABI_CALL(0x000BB753u, sub_000BB753); /* call 0x000BB753 */

loc_000BC1CE: ;
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x28) = eax;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM32(ebx + 0x2C) = edx;
    MEM8(ebx + 0x84) = LO8(eax);
    MEM32(ebx + 0x30) = edi;
    MEM32(ebx + 0x58) = 1;

loc_000BC1EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x84)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 0x84) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC207; /* je: equal / zero */

loc_000BC1F7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC1FEu); RECOMP_ABI_CALL(0x000BBB3Cu, sub_000BBB3C); /* call 0x000BBB3C */

loc_000BC1FE: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebx + 0x84) = LO8(eax);

loc_000BC207: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC213u); RECOMP_ABI_CALL(0x000BB905u, sub_000BB905); /* call 0x000BB905 */

loc_000BC213: ;
    MEM32(ebx + 0x80) = MEM32(ebx + 0x80) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BC24A; /* je: equal / zero */

loc_000BC21E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BC2A7; /* je: equal / zero */

loc_000BC225: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC294; /* jne: not equal / not zero */

loc_000BC228: ;
    eax = MEM32(ebx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xA4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BC294; /* jae: above or equal (unsigned >=) */

loc_000BC236: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC23Eu); RECOMP_ABI_CALL(0x000BC006u, sub_000BC006); /* call 0x000BC006 */

loc_000BC23E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC24Au); RECOMP_ABI_CALL(0x000BB905u, sub_000BB905); /* call 0x000BB905 */

loc_000BC24A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC251u); RECOMP_ABI_CALL(0x000BC15Au, sub_000BC15A); /* call 0x000BC15A */

loc_000BC251: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC294; /* je: equal / zero */

loc_000BC258: ;
    ecx = MEM32(ebp + -16);
    edi = MEM32(eax + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x10);
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
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC27Fu); RECOMP_ABI_CALL(0x000BBA15u, sub_000BBA15); /* call 0x000BBA15 */

loc_000BC27F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000BC294; /* jge: greater or equal (signed >=) */

loc_000BC286: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC28Eu); RECOMP_ABI_CALL(0x000BBB22u, sub_000BBB22); /* call 0x000BBB22 */

loc_000BC28E: ;
    MEM32(ebx + 0x80) = MEM32(ebx + 0x80) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BC294: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC29Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC297u); } /* indirect call */
    }

loc_000BC29D: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_000BC2A7: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x84)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 0x84) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC294; /* jne: not equal / not zero */

loc_000BC2B2: ;
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000BC294;

}

/**
 * sub_000BC2EF
 * Original: 0x000BC2EF - 0x000BC34B (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC2EF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC2EF: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x9C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = 0xFFFF;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x98) = 1;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC3D0
 * Original: 0x000BC3D0 - 0x000BC416 (70 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC3E2; /* je: equal / zero */

loc_000BC3DD: ;
    PUSH32(esp, 0x000BC3E2u); RECOMP_ABI_CALL(0x000BBF6Cu, sub_000BBF6C); /* call 0x000BBF6C */

loc_000BC3E2: ;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x14) = edi;
    edi = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edi = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x50) = eax;
    edi = esi + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC416
 * Original: 0x000BC416 - 0x000BC476 (96 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC416(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC416: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC458; /* je: equal / zero */

loc_000BC427: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC431u); RECOMP_ABI_CALL(0x001AB4DBu, sub_001AB4DB); /* call 0x001AB4DB */

loc_000BC431: ;
    MEM32(ebp + -4) = edi;

loc_000BC434: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC439u); RECOMP_ABI_CALL(0x001AB531u, sub_001AB531); /* call 0x001AB531 */

loc_000BC439: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000BC446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC443u); } /* indirect call */
    }

loc_000BC446: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC434; /* jne: not equal / not zero */

loc_000BC44C: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000BC455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC452u); } /* indirect call */
    }

loc_000BC455: ;
    MEM32(esi + 0x18) = edi;

loc_000BC458: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC462u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC462: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x3C));
    MEM32(esi + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC46Fu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC46F: ;
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BC476
 * Original: 0x000BC476 - 0x000BC496 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC476(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC476: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC47Eu); RECOMP_ABI_CALL(0x000BE6FFu, sub_000BE6FF); /* call 0x000BE6FF */

loc_000BC47E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC490; /* je: equal / zero */

loc_000BC485: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC490u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC490: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC496
 * Original: 0x000BC496 - 0x000BC4B6 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC496(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC496: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC49Eu); RECOMP_ABI_CALL(0x000BBD03u, sub_000BBD03); /* call 0x000BBD03 */

loc_000BC49E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC4B0; /* je: equal / zero */

loc_000BC4A5: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC4B0u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC4B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC4B6
 * Original: 0x000BC4B6 - 0x000BC500 (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC4B6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC4B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC4BEu); RECOMP_ABI_CALL(0x000BC416u, sub_000BC416); /* call 0x000BC416 */

loc_000BC4BE: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC4D0; /* je: equal / zero */

loc_000BC4C5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BC4CCu); RECOMP_ABI_CALL(0x000BC476u, sub_000BC476); /* call 0x000BC476 */

loc_000BC4CC: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BC4D0: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC4E2; /* je: equal / zero */

loc_000BC4D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BC4DEu); RECOMP_ABI_CALL(0x000BC496u, sub_000BC496); /* call 0x000BC496 */

loc_000BC4DE: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BC4E2: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000BC4ECu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC4EC: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x000BC4FAu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC4FA: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC500
 * Original: 0x000BC500 - 0x000BC520 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC508u); RECOMP_ABI_CALL(0x000BE80Au, sub_000BE80A); /* call 0x000BE80A */

loc_000BC508: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC51A; /* je: equal / zero */

loc_000BC50F: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC51Au); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BC51A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC520
 * Original: 0x000BC520 - 0x000BC555 (53 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC520: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC54E; /* jbe: below or equal (unsigned <=) */

loc_000BC535: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = eax;

loc_000BC53C: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC545u); RECOMP_ABI_CALL(0x000BC16Eu, sub_000BC16E); /* call 0x000BC16E */

loc_000BC545: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    if ((_fa != 0)) goto loc_000BC53C; /* jne: not equal / not zero */

loc_000BC54D: ;
    POP32(esp, ebx);

loc_000BC54E: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC555
 * Original: 0x000BC555 - 0x000BC58D (56 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC555(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC555: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x50);
    MEM32(edx) = ecx;
    edi = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = 0x140;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC58D
 * Original: 0x000BC58D - 0x000BC5B3 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC58D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC58D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000BC5A0u); RECOMP_ABI_CALL(0x000BC066u, sub_000BC066); /* call 0x000BC066 */

loc_000BC5A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BC5AD; /* jl: less (signed <) */

loc_000BC5A4: ;
    MEM32(esi + 0x48) = 1;
    goto loc_000BC5B0;

loc_000BC5AD: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BC5B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC5B3
 * Original: 0x000BC5B3 - 0x000BC5CD (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC5B3(void)
{

loc_000BC5B3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000BC5C4u); RECOMP_ABI_CALL(0x000BE712u, sub_000BE712); /* call 0x000BE712 */

loc_000BC5C4: ;
    MEM32(esi + 0x4C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC5CD
 * Original: 0x000BC5CD - 0x000BC686 (185 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC5CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC5CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x5C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC681; /* jne: not equal / not zero */

loc_000BC5E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC5EEu); RECOMP_ABI_CALL(0x000BC555u, sub_000BC555); /* call 0x000BC555 */

loc_000BC5EE: ;
    eax = MEM32(ebx + 0x58);
    ecx = MEM32(ebp + -20);
    edi = MEM32(ebp + -24);
    esi = eax + eax * 4;
    eax = ecx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebx + 0x24);
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
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebx + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebx + 0x58) = edx;
    ecx = MEM32(eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BC62Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC629u); } /* indirect call */
    }

loc_000BC62C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x58), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC67F; /* jne: not equal / not zero */

loc_000BC631: ;
    edi = MEM32(ebx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BC647u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC641u); } /* indirect call */
    }

loc_000BC647: ;
    ecx = MEM32(ebx + 0x54);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, MEM32(ebx + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC657u); RECOMP_ABI_CALL(0x000BE81Eu, sub_000BE81E); /* call 0x000BE81E */

loc_000BC657: ;
    edi = eax;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BC663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC65Du); } /* indirect call */
    }

loc_000BC663: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC67C; /* jne: not equal / not zero */

loc_000BC668: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0x18));
    MEM32(ebx + 0x5C) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC67Au); RECOMP_ABI_CALL(0x001AB4DBu, sub_001AB4DB); /* call 0x001AB4DB */

loc_000BC67A: ;
    goto loc_000BC67F;

loc_000BC67C: ;
    MEM32(ebx + 0x58) = esi;

loc_000BC67F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000BC681: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC686
 * Original: 0x000BC686 - 0x000BC6B8 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC686(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC686: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, 0x000BC691u); RECOMP_ABI_CALL(0x000BBAA6u, sub_000BBAA6); /* call 0x000BBAA6 */

loc_000BC691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC6B6; /* je: equal / zero */

loc_000BC695: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
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
    ecx = ebx;
    PUSH32(esp, 0x000BC6ACu); RECOMP_ABI_CALL(0x000BC58Du, sub_000BC58D); /* call 0x000BC58D */

loc_000BC6AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000BC5B3(); return; /* tail jmp 0x000BC5B3 */

loc_000BC6B6: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC6B8
 * Original: 0x000BC6B8 - 0x000BC6D2 (26 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC6B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC6B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_000BC6C2: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BC6CA; /* jae: above or equal (unsigned >=) */

loc_000BC6C8: ;
    eax = edx;

loc_000BC6CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC6C2; /* jne: not equal / not zero */

loc_000BC6D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC6D2
 * Original: 0x000BC6D2 - 0x000BC77B (169 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC6D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC6D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC6E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC6DBu); } /* indirect call */
    }

loc_000BC6E1: ;
    edi = MEM32(ebp + 8);
    MEM8(ebp + -1) = LO8(eax);
    eax = esi + 0x40;
    edx = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC6F7; /* jb: below (unsigned <) */

loc_000BC6F0: ;
    ebx = 0x80004005u;
    goto loc_000BC772;

loc_000BC6F7: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BC722; /* jae: above or equal (unsigned >=) */

loc_000BC6FE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC711; /* jne: not equal / not zero */

loc_000BC704: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(ecx + edi * 8 + 4) = 0xFFFFD8F0u;
    goto loc_000BC756;

loc_000BC711: ;
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC756; /* jne: not equal / not zero */

loc_000BC718: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(ecx + edi * 8 + 4) = MEM32(ecx + edi * 8 + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + edi * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000BC756;

loc_000BC722: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC73E; /* jne: not equal / not zero */

loc_000BC728: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC756; /* jbe: below or equal (unsigned <=) */

loc_000BC72C: ;
    edx = MEM32(esi + 0x3C);
    MEM32(edx + ecx * 8 + 4) = 0xFFFFD8F0u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC72C; /* jb: below (unsigned <) */

loc_000BC73C: ;
    goto loc_000BC756;

loc_000BC73E: ;
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC756; /* jne: not equal / not zero */

loc_000BC745: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC756; /* jbe: below or equal (unsigned <=) */

loc_000BC749: ;
    edx = MEM32(esi + 0x3C);
    MEM32(edx + ecx * 8 + 4) = MEM32(edx + ecx * 8 + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + ecx * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC749; /* jb: below (unsigned <) */

loc_000BC756: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC760u); RECOMP_ABI_CALL(0x001AD34Cu, sub_001AD34C); /* call 0x001AD34C */

loc_000BC760: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + edi * 4 + 0x28) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC76Cu); } /* indirect call */
    }

loc_000BC772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC77B
 * Original: 0x000BC77B - 0x000BC81C (161 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC77B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC77B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC783u); } /* indirect call */
    }

loc_000BC789: ;
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BC7C0; /* jae: above or equal (unsigned >=) */

loc_000BC797: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC7A3; /* je: equal / zero */

loc_000BC79C: ;
    esi = 0x80004005u;
    goto loc_000BC814;

loc_000BC7A3: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx);
    edi = MEM32(esi + 0x3C);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax + 4) = ecx;
    goto loc_000BC7FC;

loc_000BC7C0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BC79C; /* ja: above (unsigned >) */

loc_000BC7C7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC7F4; /* jbe: below or equal (unsigned <=) */

loc_000BC7CD: ;
    PUSH32(esp, ebx);

loc_000BC7CE: ;
    edi = MEM32(ecx + 4);
    ebx = MEM32(esi + 0x3C);
    eax = edx;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + edi);
    MEM32(ebx + eax + 0x20) = edi;
    edi = MEM32(ecx + 4);
    ebx = MEM32(esi + 0x3C);
    edi = MEM32(eax + edi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + eax + 0x24) = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC7CE; /* jb: below (unsigned <) */

loc_000BC7F3: ;
    POP32(esp, ebx);

loc_000BC7F4: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;

loc_000BC7FC: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC809u); RECOMP_ABI_CALL(0x001AD34Cu, sub_001AD34C); /* call 0x001AD34C */

loc_000BC809: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC80Eu); } /* indirect call */
    }

loc_000BC814: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC81C
 * Original: 0x000BC81C - 0x000BC886 (106 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC81C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC81C: ;
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
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC82Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC827u); } /* indirect call */
    }

loc_000BC82D: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(edi + 0x3C);
    edx = ebp + -44;
    ecx = ebp + -40;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000BC83F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    esi = MEM32(eax);
    MEM32(edx + eax) = esi;
    esi = 0xFFFFD8F0u;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC851; /* je: equal / zero */

loc_000BC84E: ;
    esi = MEM32(eax + 4);

loc_000BC851: ;
    MEM32(ecx + eax) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC83F; /* jb: below (unsigned <) */

loc_000BC85D: ;
    eax = ebp + -44;
    MEM32(ebp + -8) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x18));
    MEM32(ebp + -12) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC876u); RECOMP_ABI_CALL(0x001AB4B9u, sub_001AB4B9); /* call 0x001AB4B9 */

loc_000BC876: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC87Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC879u); } /* indirect call */
    }

loc_000BC87F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC886
 * Original: 0x000BC886 - 0x000BC8BE (56 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BC886: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC88Fu); } /* indirect call */
    }

loc_000BC895: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(ebp + -8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC8B0u); RECOMP_ABI_CALL(0x001AB4B9u, sub_001AB4B9); /* call 0x001AB4B9 */

loc_000BC8B0: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC8B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC8B2u); } /* indirect call */
    }

loc_000BC8B8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC8BE
 * Original: 0x000BC8BE - 0x000BC94B (141 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC8BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC8BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;

loc_000BC8CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC8D1u); RECOMP_ABI_CALL(0x001AB531u, sub_001AB531); /* call 0x001AB531 */

loc_000BC8D1: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000BC8DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC8DBu); } /* indirect call */
    }

loc_000BC8DE: ;
    _fa = (uint32_t)(MEM8(ebp + -6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -6), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC8CC; /* jne: not equal / not zero */

loc_000BC8E4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC8E9u); RECOMP_ABI_CALL(0x001AB531u, sub_001AB531); /* call 0x001AB531 */

loc_000BC8E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC8F3u); RECOMP_ABI_CALL(0x001AB4B4u, sub_001AB4B4); /* call 0x001AB4B4 */

loc_000BC8F3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC8F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC8F3u); } /* indirect call */
    }

loc_000BC8F9: ;
    edi = MEM32(esi + 0x1C);
    MEM8(ebp + -1) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC90A: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000BC917u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC914u); } /* indirect call */
    }

loc_000BC917: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC938; /* je: equal / zero */

loc_000BC91D: ;
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC929u); RECOMP_ABI_CALL(0x000BC555u, sub_000BC555); /* call 0x000BC555 */

loc_000BC929: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ebp + -32;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BC938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC935u); } /* indirect call */
    }

loc_000BC938: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BC90A; /* jb: below (unsigned <) */

loc_000BC93E: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC947u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC941u); } /* indirect call */
    }

loc_000BC947: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000BC94B
 * Original: 0x000BC94B - 0x000BC9D9 (142 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BC94B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC94B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC963u); RECOMP_ABI_CALL(0x000BEA87u, sub_000BEA87); /* call 0x000BEA87 */

loc_000BC963: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BC9D1; /* jl: less (signed <) */

loc_000BC969: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC96Au); } /* indirect call */
    }

loc_000BC970: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, 2);
    MEM8(ebp + 0xB) = LO8(eax);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BC99A; /* je: equal / zero */

loc_000BC97C: ;
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -8) = edi;
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = eax;
    ecx = ebp + -16;
    goto loc_000BC99D;

loc_000BC99A: ;
    ecx = esi + 0x40;

loc_000BC99D: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC9A7u); RECOMP_ABI_CALL(0x001AD34Cu, sub_001AD34C); /* call 0x001AD34C */

loc_000BC9A7: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x000BC9B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC9B0u); } /* indirect call */
    }

loc_000BC9B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BC9D0; /* jl: less (signed <) */

loc_000BC9BA: ;
    MEM32(esi + 0x5C) = edi;
    edi = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC9D0u); RECOMP_ABI_CALL(0x000BC8BEu, sub_000BC8BE); /* call 0x000BC8BE */

loc_000BC9D0: ;
    POP32(esp, edi);

loc_000BC9D1: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BC9D9
 * Original: 0x000BC9D9 - 0x000BCA0A (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC9D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x000BC9E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC9DDu); } /* indirect call */
    }

loc_000BC9E3: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 2 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_000BCA00; /* jne: not equal / not zero */

loc_000BC9EB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(esi + 0x5C) = 3;
    PUSH32(esp, 0x000BCA00u); RECOMP_ABI_CALL(0x001AB4DBu, sub_001AB4DB); /* call 0x001AB4DB */

loc_000BCA00: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BC50)); return; /* indirect tail jmp */

}

/**
 * sub_000BCA0A
 * Original: 0x000BCA0A - 0x000BCA20 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCA0A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA1F; /* jne: not equal / not zero */

loc_000BCA10: ;
    MEM32(ecx + 0x5C) = 4;
    ecx = MEM32(ecx + 0x54);
    g_seh_ebp = ebp; sub_000BE80A(); return; /* tail jmp 0x000BE80A */

loc_000BCA1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCA20
 * Original: 0x000BCA20 - 0x000BCA6A (74 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCA37u); RECOMP_ABI_CALL(0x000BC555u, sub_000BC555); /* call 0x000BC555 */

loc_000BCA37: ;
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebx + 0x24);
    edi = MEM32(ebp + -24);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x140;
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
    ebx = MEM32(ebx + 0x18);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BCA63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCA60u); } /* indirect call */
    }

loc_000BCA63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA6A
 * Original: 0x000BCA6A - 0x000BCA81 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA6A: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA7E; /* jne: not equal / not zero */

loc_000BCA71: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000BCA7Eu); RECOMP_ABI_CALL(0x000BCA20u, sub_000BCA20); /* call 0x000BCA20 */

loc_000BCA7E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCA81
 * Original: 0x000BCA81 - 0x000BCA98 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA81: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA95; /* jne: not equal / not zero */

loc_000BCA88: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000BCA95u); RECOMP_ABI_CALL(0x000BC5CDu, sub_000BC5CD); /* call 0x000BC5CD */

loc_000BCA95: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCA98
 * Original: 0x000BCA98 - 0x000BCBD8 (320 bytes, 115 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCA98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0;
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + -18;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x21);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCACCu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCACC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BCADD; /* jne: not equal / not zero */

loc_000BCAD3: ;
    edi = 0x8007000Eu;
    goto loc_000BCBD0;

loc_000BCADD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx);
    MEM32(esi + 0x40) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BCB13; /* jbe: below or equal (unsigned <=) */

loc_000BCAEF: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(esi + 0x3C);
    eax = ecx;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + edx);
    MEM32(eax + edi) = edx;
    edx = MEM32(ebx + 4);
    edi = MEM32(esi + 0x3C);
    edx = MEM32(edx + eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + eax + 4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BCAEF; /* jb: below (unsigned <) */

loc_000BCB13: ;
    eax = MEM32(ebp + 0x10);
    edi = eax + eax * 4;
    PUSH32(esp, 0x21);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCB24u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCB24: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x24) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000BCB37; /* jne: not equal / not zero */

loc_000BCB2D: ;
    edi = 0x8007000Eu;
    goto loc_000BCBCF;

loc_000BCB37: ;
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
    PUSH32(esp, 0x21);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x280);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCB57u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB2D; /* je: equal / zero */

loc_000BCB5E: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 2);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    ecx = ebp + -20;
    MEM16(ebp + -18) = 1;
    MEM32(ebp + -16) = 0x1F40;
    MEM16(ebp + -6) = 0x10;
    MEM16(ebp + -8) = LO16(eax);
    MEM32(ebp + -12) = 0x3E80;
    MEM16(ebp + -20) = 1;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -44) = 0x40000000;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = 0xBCA81;
    if (CMP_A(_fa, _fb)) goto loc_000BCBB3; /* ja: above (unsigned >) */

loc_000BCBAC: ;
    MEM32(ebp + -32) = 0xBCA6A;

loc_000BCBB3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCBC0u); RECOMP_ABI_CALL(0x001AE995u, sub_001AE995); /* call 0x001AE995 */

loc_000BCBC0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCBCF; /* jl: less (signed <) */

loc_000BCBC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCBCFu); RECOMP_ABI_CALL(0x001AB4B4u, sub_001AB4B4); /* call 0x001AB4B4 */

loc_000BCBCF: ;
    POP32(esp, ebx);

loc_000BCBD0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCBD8
 * Original: 0x000BCBD8 - 0x000BCCB0 (216 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCBD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCBD8: ;
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
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    edi = esi + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 2);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCBFAu); RECOMP_ABI_CALL(0x000BCA98u, sub_000BCA98); /* call 0x000BCA98 */

loc_000BCBFA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCC98; /* jl: less (signed <) */

loc_000BCC04: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC10u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCC10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC1B; /* je: equal / zero */

loc_000BCC14: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    goto loc_000BCC1D;

loc_000BCC1B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCC1D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC93; /* je: equal / zero */

loc_000BCC24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC29u); RECOMP_ABI_CALL(0x000BE7A0u, sub_000BE7A0); /* call 0x000BE7A0 */

loc_000BCC29: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCC98; /* jl: less (signed <) */

loc_000BCC2F: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, 0xB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC3Eu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCC3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC4D; /* je: equal / zero */

loc_000BCC42: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC49u); RECOMP_ABI_CALL(0x000BC2EFu, sub_000BC2EF); /* call 0x000BC2EF */

loc_000BCC49: ;
    edx = eax;
    goto loc_000BCC4F;

loc_000BCC4D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCC4F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC93; /* je: equal / zero */

loc_000BCC56: ;
    PUSH32(esp, 0xA);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    edi = ebp + -40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x96FD04);
    MEM32(ebp + -36) = ebx;
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC7Bu); RECOMP_ABI_CALL(0x000BBD3Eu, sub_000BBD3E); /* call 0x000BBD3E */

loc_000BCC7B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCC98; /* jl: less (signed <) */

loc_000BCC81: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC8Au); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCC8A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000BCCA8; /* jne: not equal / not zero */

loc_000BCC93: ;
    ebx = 0x8007000Eu;

loc_000BCC98: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCC9Fu); RECOMP_ABI_CALL(0x000BC4B6u, sub_000BC4B6); /* call 0x000BC4B6 */

loc_000BCC9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_000BCCA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    goto loc_000BCC9F;

}

/**
 * sub_000BCCB0
 * Original: 0x000BCCB0 - 0x000BCCFA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCCB8u); RECOMP_ABI_CALL(0x000BC416u, sub_000BC416); /* call 0x000BC416 */

loc_000BCCB8: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCCCA; /* je: equal / zero */

loc_000BCCBF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BCCC6u); RECOMP_ABI_CALL(0x000BC476u, sub_000BC476); /* call 0x000BC476 */

loc_000BCCC6: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BCCCA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCCDC; /* je: equal / zero */

loc_000BCCD1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BCCD8u); RECOMP_ABI_CALL(0x000BC496u, sub_000BC496); /* call 0x000BC496 */

loc_000BCCD8: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BCCDC: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000BCCE6u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BCCE6: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x000BCCF4u); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BCCF4: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCCFA
 * Original: 0x000BCCFA - 0x000BCD32 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCCFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCCFA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCD02u); RECOMP_ABI_CALL(0x000BC416u, sub_000BC416); /* call 0x000BC416 */

loc_000BCD02: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCD14; /* je: equal / zero */

loc_000BCD09: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BCD10u); RECOMP_ABI_CALL(0x000BC500u, sub_000BC500); /* call 0x000BC500 */

loc_000BCD10: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BCD14: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x000BCD1Eu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BCD1E: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x000BCD2Cu); RECOMP_ABI_CALL(0x000BA11Cu, sub_000BA11C); /* call 0x000BA11C */

loc_000BCD2C: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCD32
 * Original: 0x000BCD32 - 0x000BCE48 (278 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCD32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCD32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCD48u); RECOMP_ABI_CALL(0x000BCA98u, sub_000BCA98); /* call 0x000BCA98 */

loc_000BCD48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BCE01; /* jl: less (signed <) */

loc_000BCD53: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCD5Fu); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCD5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCD6A; /* je: equal / zero */

loc_000BCD63: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    goto loc_000BCD6C;

loc_000BCD6A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCD6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCDFA; /* je: equal / zero */

loc_000BCD77: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCD7Cu); RECOMP_ABI_CALL(0x000BE7A0u, sub_000BE7A0); /* call 0x000BE7A0 */

loc_000BCD7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BCE01; /* jl: less (signed <) */

loc_000BCD83: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, 0xB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCD92u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCD92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCDA1; /* je: equal / zero */

loc_000BCD96: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCD9Du); RECOMP_ABI_CALL(0x000BC2EFu, sub_000BC2EF); /* call 0x000BC2EF */

loc_000BCD9D: ;
    edx = eax;
    goto loc_000BCDA3;

loc_000BCDA1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCDA3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCDFA; /* je: equal / zero */

loc_000BCDAA: ;
    PUSH32(esp, 0xA);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x96FD04);
    MEM32(ebp + -60) = 0xA;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x28);
    MEM32(ebp + -32) = eax;
    POP32(esp, eax);
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -52) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = edx;
    MEM32(ebp + -56) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCDE1u); RECOMP_ABI_CALL(0x000BBD3Eu, sub_000BBD3E); /* call 0x000BBD3E */

loc_000BCDE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BCE01; /* jl: less (signed <) */

loc_000BCDE8: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCDF1u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCDF1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000BCE11; /* jne: not equal / not zero */

loc_000BCDFA: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_000BCE01: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCE08u); RECOMP_ABI_CALL(0x000BCCB0u, sub_000BCCB0); /* call 0x000BCCB0 */

loc_000BCE08: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_000BCE11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edi = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCE25: ;
    PUSH32(esp, edi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCE31u); RECOMP_ABI_CALL(0x000BC555u, sub_000BC555); /* call 0x000BC555 */

loc_000BCE31: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000BCE40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCE3Du); } /* indirect call */
    }

loc_000BCE40: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BCE25; /* jb: below (unsigned <) */

loc_000BCE46: ;
    goto loc_000BCE08;

}

/**
 * sub_000BCE48
 * Original: 0x000BCE48 - 0x000BCEC3 (123 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCE48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCE48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    PUSH32(esp, 0x000BCE5Du); RECOMP_ABI_CALL(0x000BCA98u, sub_000BCA98); /* call 0x000BCA98 */

loc_000BCE5D: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCEAB; /* jl: less (signed <) */

loc_000BCE65: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x000BCE71u); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCE71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCE88; /* je: equal / zero */

loc_000BCE75: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    goto loc_000BCE8A;

loc_000BCE88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCE8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCEA6; /* je: equal / zero */

loc_000BCE91: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xBB);
    PUSH32(esp, 0x000BCE9Du); RECOMP_ABI_CALL(0x000BA0E4u, sub_000BA0E4); /* call 0x000BA0E4 */

loc_000BCE9D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000BCEBB; /* jne: not equal / not zero */

loc_000BCEA6: ;
    ebp = 0x8007000Eu;

loc_000BCEAB: ;
    ecx = esi;
    PUSH32(esp, 0x000BCEB2u); RECOMP_ABI_CALL(0x000BCCFAu, sub_000BCCFA); /* call 0x000BCCFA */

loc_000BCEB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000BCEBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    goto loc_000BCEB2;

}

/**
 * sub_000BCECA
 * Original: 0x000BCECA - 0x000BCEE2 (24 bytes, 10 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCECA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BCECA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000BCEDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCED9u); } /* indirect call */
    }

loc_000BCEDC: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000BCEE2
 * Original: 0x000BCEE2 - 0x000BCEF5 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCEE2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCEE2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCEF3; /* je: equal / zero */

loc_000BCEEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCEF0u); RECOMP_ABI_CALL(0x000BEB70u, sub_000BEB70); /* call 0x000BEB70 */

loc_000BCEF0: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BCEF3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCEF9
 * Original: 0x000BCEF9 - 0x000BCF2D (52 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCEF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCEF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCF01: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BCF14; /* jbe: below or equal (unsigned <=) */

loc_000BCF12: ;
    esi = eax;

loc_000BCF14: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x140 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BCF01; /* jb: below (unsigned <) */

loc_000BCF1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BCF26; /* jbe: below or equal (unsigned <=) */

loc_000BCF23: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BCF26: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BCF2D
 * Original: 0x000BCF2D - 0x000BCFC6 (153 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCF2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCF2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(eax, ZX8(LO8(eax)));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = ebp + -24;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edx) = LO16(eax);
    SET_LO16(eax, LO16(eax) >> 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esi + 6) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -16) = edx;
    MEM16(ebp + -12) = 8;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCFAC; /* je: equal / zero */

loc_000BCF7C: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BCF86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCF80u); } /* indirect call */
    }

loc_000BCF86: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0xBF030);
    PUSH32(esp, MEM32(0x96FD20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCFA0u); RECOMP_ABI_CALL(0x000BCECAu, sub_000BCECA); /* call 0x000BCECA */

loc_000BCFA0: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BCFAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCFA4u); } /* indirect call */
    }

loc_000BCFAA: ;
    goto loc_000BCFBE;

loc_000BCFAC: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCFBBu); RECOMP_ABI_CALL(0x000BF030u, sub_000BF030); /* call 0x000BF030 */

loc_000BCFBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BCFBE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCFC6
 * Original: 0x000BCFC6 - 0x000BD011 (75 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BCFC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCFC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = ecx + 0x18;
    PUSH32(esp, 0x15);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BCFF3u); RECOMP_ABI_CALL(0x000BEAF0u, sub_000BEAF0); /* call 0x000BEAF0 */

loc_000BCFF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD007; /* je: equal / zero */

loc_000BCFF7: ;
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(ebp + -4) = 0x80004005u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000BD007: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD011
 * Original: 0x000BD011 - 0x000BD084 (115 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BD011(void)
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

loc_000BD011: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD02B; /* je: equal / zero */

loc_000BD021: ;
    eax = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BD02Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD025u); } /* indirect call */
    }

loc_000BD02B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -28;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = 0xBF800000u;
    MEM16(ebp + -16) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD05Du); RECOMP_ABI_CALL(0x000BEE00u, sub_000BEE00); /* call 0x000BEE00 */

loc_000BD05D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD069; /* je: equal / zero */

loc_000BD062: ;
    MEM32(ebp + -4) = 0xBF800000u;

loc_000BD069: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD07D; /* je: equal / zero */

loc_000BD073: ;
    eax = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BD07Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD077u); } /* indirect call */
    }

loc_000BD07D: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BD084
 * Original: 0x000BD084 - 0x000BD0AE (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD084(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD084: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000BD092u); RECOMP_ABI_CALL(0x000BEB30u, sub_000BEB30); /* call 0x000BEB30 */

loc_000BD092: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0A2; /* je: equal / zero */

loc_000BD096: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x000BD0A2u); RECOMP_ABI_CALL(0x000BCEE2u, sub_000BCEE2); /* call 0x000BCEE2 */

loc_000BD0A2: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = 0x258;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD0AE
 * Original: 0x000BD0AE - 0x000BD0CD (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD0AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD0AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD0B7u); RECOMP_ABI_CALL(0x000BD084u, sub_000BD084); /* call 0x000BD084 */

loc_000BD0B7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BD0C8; /* jge: greater or equal (signed >=) */

loc_000BD0BD: ;
    ecx = esi;
    PUSH32(esp, 0x000BD0C4u); RECOMP_ABI_CALL(0x000BCEE2u, sub_000BCEE2); /* call 0x000BCEE2 */

loc_000BD0C4: ;
    eax = edi;
    goto loc_000BD0CA;

loc_000BD0C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD0CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD0CD
 * Original: 0x000BD0CD - 0x000BD139 (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD0CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BD0CD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000BD0E2u); RECOMP_ABI_CALL(0x000BCEF9u, sub_000BCEF9); /* call 0x000BCEF9 */

loc_000BD0E2: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0F7; /* je: equal / zero */

loc_000BD0EB: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x6C) = 0x320;
    goto loc_000BD112;

loc_000BD0F7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x14)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 0x14;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x14);
    edx = 0xC8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x6C) = 0x258;
    MEM32(esi + 0xC) = eax;

loc_000BD112: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD11E; /* jne: not equal / not zero */

loc_000BD119: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD127; /* jne: not equal / not zero */

loc_000BD11E: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0x7530 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BD12D; /* jbe: below or equal (unsigned <=) */

loc_000BD127: ;
    MEM8(esi + 4) = MEM8(esi + 4) + 1;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ecx;

loc_000BD12D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD135; /* je: equal / zero */

loc_000BD131: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(esi + 8) = MEM32(esi + 8) + 0x14;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD135: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD139
 * Original: 0x000BD139 - 0x000BD14D (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD139(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD139: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD14B; /* je: equal / zero */

loc_000BD142: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD148u); RECOMP_ABI_CALL(0x000C1835u, sub_000C1835); /* call 0x000C1835 */

loc_000BD148: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BD14B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD14D
 * Original: 0x000BD14D - 0x000BD1BA (109 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BD14D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD14D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    edx = ecx + 0x44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_000BD162: ;
    edi = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(edi + eax * 4 + 2);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(edx + eax * 2) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BD162; /* jb: below (unsigned <) */

loc_000BD17E: ;
    eax = ZX16(MEM16(ecx + 0xE));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x140);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD1A3u); RECOMP_ABI_CALL(0x000C2482u, sub_000C2482); /* call 0x000C2482 */

loc_000BD1A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_000BD1B1; /* jge: greater or equal (signed >=) */

loc_000BD1A8: ;
    MEM32(edi) = esi;
    MEM32(ebp + -4) = 0x80004005u;

loc_000BD1B1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000BD1BA
 * Original: 0x000BD1BA - 0x000BD22B (113 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BD1BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD1BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = esi;

loc_000BD1D3: ;
    eax = ZX16(MEM16(edi + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BD1DD; /* jb: below (unsigned <) */

loc_000BD1DB: ;
    eax = ebx;

loc_000BD1DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD1F2u); RECOMP_ABI_CALL(0x000C2862u, sub_000C2862); /* call 0x000C2862 */

loc_000BD1F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD222; /* jne: not equal / not zero */

loc_000BD1F6: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BD209; /* jbe: below or equal (unsigned <=) */

loc_000BD205: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BD1D3; /* ja: above (unsigned >) */

loc_000BD209: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD218u); RECOMP_ABI_CALL(0x000BD139u, sub_000BD139); /* call 0x000BD139 */

loc_000BD218: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_000BD222: ;
    MEM32(ebp + -12) = 0x80004005u;
    goto loc_000BD218;

}

/**
 * sub_000BD22B
 * Original: 0x000BD22B - 0x000BD2DD (178 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD22B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD22B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = 0x46464952;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0x45564157;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0x20746D66;
    PUSH32(esp, 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx) = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = 0xA;
    MEM16(edx + 0xE) = 0x10;
    ebx = MEM32(esi + 8);
    MEM32(edx + 8) = ebx;
    SET_LO16(ebx, MEM16(esi + 0xE));
    MEM16(edx + 0xC) = LO16(ebx);
    SET_LO16(ebx, MEM16(esi + 0xC));
    MEM16(edx + 2) = LO16(ebx);
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM16(edx + 0x10) = 0x2E;
    MEM16(edx + 0x12) = 0x10;
    MEM32(edx + 0x14) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x34));
    MEM16(edx + 0x22) = LO16(eax);
    MEM16(edx + 0x20) = LO16(ecx);
    ecx = MEM32(esi + 0x38);
    MEM32(edx + 0x24) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(edx + 0x28) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x2C) = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5C);
    MEM32(edx) = 0x61746164;
    MEM32(edx + 4) = eax;
    POP32(esp, eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BD2DD
 * Original: 0x000BD2DD - 0x000BD2F1 (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD2DD(void)
{

loc_000BD2DD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax + 0x54;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x58) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BD2F1
 * Original: 0x000BD2F1 - 0x000BD37E (141 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BD2F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD2F1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD30F; /* je: equal / zero */

loc_000BD2FB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD308; /* jne: not equal / not zero */

loc_000BD301: ;
    eax = 0x80004005u;
    goto loc_000BD379;

loc_000BD308: ;
    ecx = esi;
    PUSH32(esp, 0x000BD30Fu); RECOMP_ABI_CALL(0x000BD139u, sub_000BD139); /* call 0x000BD139 */

loc_000BD30F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD316u); RECOMP_ABI_CALL(0x000C0935u, sub_000C0935); /* call 0x000C0935 */

loc_000BD316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BD321; /* jge: greater or equal (signed >=) */

loc_000BD31A: ;
    ebp = 0x8007000Eu;
    goto loc_000BD36F;

loc_000BD321: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ebx = esi + 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 5);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x271;
    PUSH32(esp, eax);
    ecx = 0x1F40;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(ebx) = ecx;
    MEM16(esi + 0xC) = LO16(edx);
    MEM32(esi + 8) = eax;
    MEM16(esi + 0x1C) = 5;
    MEM32(esi + 0x2C) = edx;
    PUSH32(esp, 0x000BD359u); RECOMP_ABI_CALL(0x000C08EEu, sub_000C08EE); /* call 0x000C08EE */

loc_000BD359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_000BD36A; /* jl: less (signed <) */

loc_000BD35E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x000BD366u); RECOMP_ABI_CALL(0x000C0987u, sub_000C0987); /* call 0x000C0987 */

loc_000BD366: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BD376; /* jge: greater or equal (signed >=) */

loc_000BD36A: ;
    ebp = 0x80004005u;

loc_000BD36F: ;
    ecx = esi;
    PUSH32(esp, 0x000BD376u); RECOMP_ABI_CALL(0x000BD139u, sub_000BD139); /* call 0x000BD139 */

loc_000BD376: ;
    eax = ebp;
    POP32(esp, ebx);

loc_000BD379: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD380
 * Original: 0x000BD380 - 0x000BD381 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD380(void)
{

loc_000BD380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD390
 * Original: 0x000BD390 - 0x000BD4BD (301 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4B3; /* je: equal / zero */

loc_000BD3A0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4B3; /* je: equal / zero */

loc_000BD3AC: ;
    ecx = MEM32(ebx);
    eax = 0x282320;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD495; /* jne: not equal / not zero */

loc_000BD3BB: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD3CC; /* jne: not equal / not zero */

loc_000BD3C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF2u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD3CC: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x50) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD3DF; /* jle: less or equal (signed <=) */

loc_000BD3D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF5u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD3DF: ;
    eax = MEM32(ebx + 0x54);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD3FF; /* jle: less or equal (signed <=) */

loc_000BD3E8: ;
    edx = MEM32(ebx + 0x40);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD3F4u); RECOMP_ABI_CALL(0x000C3210u, sub_000C3210); /* call 0x000C3210 */

loc_000BD3F4: ;
    eax = MEM32(ebx + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD3E8; /* jl: less (signed <) */

loc_000BD3FF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ebx + 0x54) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000BD486; /* jle: less or equal (signed <=) */

loc_000BD40A: ;
    /* nop */

loc_000BD410: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4B3; /* je: equal / zero */

loc_000BD41F: ;
    ecx = MEM32(esi);
    eax = 0x282318;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD495; /* jne: not equal / not zero */

loc_000BD42A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD49F; /* jne: not equal / not zero */

loc_000BD432: ;
    ecx = MEM32(ebx + 0x40);
    eax = MEM32(ecx + edx * 4);
    esi = MEM32(esi + 0x14);
    edi = eax;
    ecx = 0x2D;
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
    ecx = MEM32(ebx + 0x4C);
    ecx = MEM32(ecx + edx * 4);
    MEM32(eax + 0x70) = ecx;
    ecx = MEM32(ebx + 0x44);
    ecx = ecx + ebp * 4;
    MEM32(eax + 0xB0) = ecx;
    ecx = MEM32(eax + 0x28);
    ebp = ecx + ebp + 2;
    ecx = MEM32(ebx + 0x60);
    MEM32(eax + 0x98) = ecx;
    ecx = MEM32(ebx + 0x64);
    MEM32(eax + 0x9C) = ecx;
    ecx = MEM32(ebx + 0x68);
    MEM32(eax + 0xA4) = ecx;
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD410; /* jl: less (signed <) */

loc_000BD484: ;
    edi = eax;

loc_000BD486: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x48) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD4A9; /* jle: less or equal (signed <=) */

loc_000BD48B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF4u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD495: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF1u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD49F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEDu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD4A9: ;
    MEM32(ebx + 0x54) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD4B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD4F4
 * Original: 0x000BD4F4 - 0x000BD5F8 (260 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD4F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD4F4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000BD517; /* jle: less or equal (signed <=) */

loc_000BD501: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD513u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_000BD513: ;
    ebp = eax;
    goto loc_000BD519;

loc_000BD517: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD519: ;
    edi = MEM32(esi + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD541; /* jle: less or equal (signed <=) */

loc_000BD523: ;
    ecx = MEM32(esi + 0x84);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BD53Bu); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_000BD53B: ;
    MEM32(esp + 0x18) = eax;
    goto loc_000BD549;

loc_000BD541: ;
    MEM32(esp + 0x18) = 0;

loc_000BD549: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD56F; /* jle: less or equal (signed <=) */

loc_000BD553: ;
    ecx = MEM32(esi + 0x88);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BD569u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_000BD569: ;
    MEM32(esp + 0x10) = eax;
    goto loc_000BD577;

loc_000BD56F: ;
    MEM32(esp + 0x10) = 0;

loc_000BD577: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD5A1; /* jle: less or equal (signed <=) */

loc_000BD57B: ;
    ecx = MEM32(esi + 0x90);
    eax = ebx;
    ebx = MEM32(esi + 0x94);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BD59Fu); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_000BD59F: ;
    goto loc_000BD5A3;

loc_000BD5A1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD5A3: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5AD; /* je: equal / zero */

loc_000BD5AB: ;
    MEM32(ecx) = ebp;

loc_000BD5AD: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5BE; /* je: equal / zero */

loc_000BD5B8: ;
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;

loc_000BD5BE: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5CC; /* je: equal / zero */

loc_000BD5C6: ;
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;

loc_000BD5CC: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5D6; /* je: equal / zero */

loc_000BD5D4: ;
    MEM32(ecx) = eax;

loc_000BD5D6: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5E3; /* je: equal / zero */

loc_000BD5DE: ;
    ecx = MEM32(esi + 0x74);
    MEM32(eax) = ecx;

loc_000BD5E3: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5F3; /* je: equal / zero */

loc_000BD5EB: ;
    edx = MEM32(esi + 0x9C);
    MEM32(eax) = edx;

loc_000BD5F3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD600
 * Original: 0x000BD600 - 0x000BDA71 (1137 bytes, 372 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BD600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BD600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA65; /* je: equal / zero */

loc_000BD61D: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA65; /* je: equal / zero */

loc_000BD628: ;
    edx = MEM32(eax);
    ecx = 0x282328;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BDA59; /* jne: not equal / not zero */

loc_000BD637: ;
    edx = MEM32(esi);
    ecx = 0x282320;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BDA59; /* jne: not equal / not zero */

loc_000BD646: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA4D; /* je: equal / zero */

loc_000BD64F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA4D; /* je: equal / zero */

loc_000BD658: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD669; /* je: equal / zero */

loc_000BD65D: ;
    eax = 5;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BD669: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD673u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD673: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD71B; /* je: equal / zero */

loc_000BD67C: ;
    eax = MEM32(esi + 0x54);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000BD6A8; /* jle: less or equal (signed <=) */

loc_000BD685: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD6A0; /* je: equal / zero */

loc_000BD68F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD695u); RECOMP_ABI_CALL(0x000C3340u, sub_000C3340); /* call 0x000C3340 */

loc_000BD695: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BD729; /* jne: not equal / not zero */

loc_000BD6A0: ;
    eax = MEM32(esi + 0x54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000BD685; /* jl: less (signed <) */

loc_000BD6A8: ;
    edx = MEM32(esi + 0x70);
    MEM32(edx + 0xC) = ebx;
    eax = MEM32(esi + 0x70);
    MEM32(eax + 0x1C) = ebx;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD6BDu); RECOMP_ABI_CALL(0x000C5DC0u, sub_000C5DC0); /* call 0x000C5DC0 */

loc_000BD6BD: ;
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD6C6u); RECOMP_ABI_CALL(0x000C4CD0u, sub_000C4CD0); /* call 0x000C4CD0 */

loc_000BD6C6: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD6D0u); RECOMP_ABI_CALL(0x000C5330u, sub_000C5330); /* call 0x000C5330 */

loc_000BD6D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;

loc_000BD71B: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD735; /* jne: not equal / not zero */

loc_000BD722: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = ecx;
    goto loc_000BD738;

loc_000BD729: ;
    eax = 0xFFFFFFEFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BD735: ;
    ecx = MEM32(ebp + 0x14);

loc_000BD738: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000BD9DE; /* jle: less or equal (signed <=) */

loc_000BD744: ;
    eax = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_000BD760;

loc_000BD750: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    /* nop */

loc_000BD760: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD9DE; /* jne: not equal / not zero */

loc_000BD769: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = 0xA0;
    if (CMP_GE(_fas, _fbs)) goto loc_000BD77C; /* jge: greater or equal (signed >=) */

loc_000BD778: ;
    MEM32(esp + 0x10) = eax;

loc_000BD77C: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD815; /* jne: not equal / not zero */

loc_000BD785: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD815; /* je: equal / zero */

loc_000BD78D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000BD815; /* jle: less or equal (signed <=) */

loc_000BD795: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(edx) = ebx;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD7BBu); RECOMP_ABI_CALL(0x000C5AA0u, sub_000C5AA0); /* call 0x000C5AA0 */

loc_000BD7BB: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD815; /* jne: not equal / not zero */

loc_000BD7C8: ;
    edx = MEM32(esi + 0x34);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000BD7D7; /* je: equal / zero */

loc_000BD7D0: ;
    MEM32(esi + 0x20) = 1;

loc_000BD7D7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BD815; /* jne: not equal / not zero */

loc_000BD7DC: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000BD815; /* jle: less or equal (signed <=) */

loc_000BD7EC: ;
    eax = MEM32(ecx + 0x14);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000BD80E; /* jle: less or equal (signed <=) */

loc_000BD7F5: ;
    eax = MEM32(ecx + 8);
    ebx = eax + edi * 4;
    eax = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000BD7F5; /* jl: less (signed <) */

loc_000BD80C: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD80E: ;
    MEM32(ecx + 0x20) = 0x32;

loc_000BD815: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD81Fu); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD81F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD833u); RECOMP_ABI_CALL(0x000C4E40u, sub_000C4E40); /* call 0x000C4E40 */

loc_000BD833: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD840u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD840: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi + 0x78);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = MEM32(esi + 0x7C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x98);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x7C) = edx;
    MEM32(esi + 0x98) = eax;

loc_000BD871: ;
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD87Au); RECOMP_ABI_CALL(0x000C50A0u, sub_000C50A0); /* call 0x000C50A0 */

loc_000BD87A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD99E; /* je: equal / zero */

loc_000BD887: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD891u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD891: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD89Cu); RECOMP_ABI_CALL(0x000C4530u, sub_000C4530); /* call 0x000C4530 */

loc_000BD89C: ;
    eax = MEM32(esi + 0x5C);
    edx = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + edx * 4 + -4);
    ecx = MEM32(esi + 0x70);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x3C));
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD8C3u); RECOMP_ABI_CALL(0x000C3F40u, sub_000C3F40); /* call 0x000C3F40 */

loc_000BD8C3: ;
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esi + 0x70);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + ecx * 2));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD8DCu); RECOMP_ABI_CALL(0x000C3E80u, sub_000C3E80); /* call 0x000C3E80 */

loc_000BD8DC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD8E9u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD8E9: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x80)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 0x80) = MEM32(esi + 0x80) + edx;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x84);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(esi + 0x9C);
    MEM32(esi + 0x84) = ecx;
    ecx = esp + 0x20;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x9C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD928u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD928: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000BD950; /* jle: less or equal (signed <=) */

loc_000BD92F: ;
    /* nop */

loc_000BD930: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD948; /* je: equal / zero */

loc_000BD93A: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD945u); RECOMP_ABI_CALL(0x000C3870u, sub_000C3870); /* call 0x000C3870 */

loc_000BD945: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD948: ;
    eax = MEM32(esi + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000BD930; /* jl: less (signed <) */

loc_000BD950: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BD95Au); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BD95A: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    edi = MEM32(esi + 0x88);
    edx = MEM32(esi + 0x8C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x2C);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xA0);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edx;
    MEM32(esi + 0xA0) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000BD871;

loc_000BD99E: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9AA; /* je: equal / zero */

loc_000BD9A3: ;
    MEM32(esi + 0x28) = 1;

loc_000BD9AA: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA0)) >> 32) & 1);
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0xA0));
    edi = edi - 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x140)) >> 32) & 1);
    edx = edx + 0x140;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000BD750; /* jl: less (signed <) */

loc_000BD9DE: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9EB; /* je: equal / zero */

loc_000BD9E3: ;
    MEM32(esp + 0x18) = 2;

loc_000BD9EB: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA01; /* je: equal / zero */

loc_000BD9F4: ;
    eax = MEM32(esi + 0x28);
    _cf = 0; /* logical op clears CF */
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA01; /* je: equal / zero */

loc_000BD9FE: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000BDA01: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDA0Bu); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_000BDA0B: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = MEM32(esi + 0x90);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x90) = edx;
    edx = MEM32(esi + 0x94);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x94) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA44; /* je: equal / zero */

loc_000BDA42: ;
    MEM32(eax) = edi;

loc_000BDA44: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BDA4D: ;
    eax = 0xFFFFFFF2u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BDA59: ;
    eax = 0xFFFFFFF1u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BDA65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDA80
 * Original: 0x000BDA80 - 0x000BDD93 (787 bytes, 259 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDA80(void)
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

loc_000BDA80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD88; /* je: equal / zero */

loc_000BDA91: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD88; /* je: equal / zero */

loc_000BDA9D: ;
    edx = MEM32(eax);
    ecx = 0x282328;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDD7D; /* jne: not equal / not zero */

loc_000BDAAC: ;
    edx = MEM32(esi);
    ecx = 0x282320;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDD7D; /* jne: not equal / not zero */

loc_000BDABB: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD72; /* je: equal / zero */

loc_000BDAC6: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD72; /* je: equal / zero */

loc_000BDAD1: ;
    ecx = MEM32(esi + 0x54);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000BDBDA; /* jle: less or equal (signed <=) */

loc_000BDAEA: ;
    /* nop */

loc_000BDAF0: ;
    ecx = MEM32(esi + 0x40);
    ebx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDBC6; /* je: equal / zero */

loc_000BDAFE: ;
    eax = MEM32(ebx + 0x5C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000BDBC6; /* jle: less or equal (signed <=) */

loc_000BDB11: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BDBC6; /* jge: greater or equal (signed >=) */

loc_000BDB1A: ;
    edi = MEM32(ebx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(ebx + 0x20);
    if (CMP_LE(_fas, _fbs)) goto loc_000BDB39; /* jle: less or equal (signed <=) */

loc_000BDB28: ;
    eax = MEM32(edi + eax * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDBC6; /* je: equal / zero */

loc_000BDB34: ;
    edi = MEM32(eax + ebp * 4);
    goto loc_000BDB3D;

loc_000BDB39: ;
    edi = MEM32(edi + eax * 4 + 8);

loc_000BDB3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDBC6; /* je: equal / zero */

loc_000BDB45: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BDB6C; /* jge: greater or equal (signed >=) */

loc_000BDB49: ;
    eax = MEM32(esi + 0x58);
    edx = MEM32(edi);
    eax = eax + ecx * 4;

loc_000BDB51: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BDB64; /* jg: greater (signed >) */

loc_000BDB58: ;
    ebp = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDB51; /* jl: less (signed <) */

loc_000BDB64: ;
    edx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);

loc_000BDB6C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BDB76; /* jge: greater or equal (signed >=) */

loc_000BDB71: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;

loc_000BDB76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BDBB6; /* jge: greater or equal (signed >=) */

loc_000BDB7A: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BDBA6; /* jle: less or equal (signed <=) */

loc_000BDB81: ;
    edx = MEM32(esi + 0x58);
    ebp = MEM32(edx + eax * 4);
    edx = edx + eax * 4;
    MEM32(edx + 4) = ebp;
    edx = MEM32(esi + 0x14);
    ebp = MEM32(edx + eax * 4);
    edx = edx + eax * 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edx + 4) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_000BDB81; /* jg: greater (signed >) */

loc_000BDB9E: ;
    edx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);

loc_000BDBA6: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax + ecx * 4) = edi;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4) = edi;

loc_000BDBB6: ;
    eax = MEM32(ebx + 0x5C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x24) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000BDB11; /* jl: less (signed <) */

loc_000BDBC6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BDAF0; /* jl: less (signed <) */

loc_000BDBDA: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esi + 0x2C) = ebp;
    MEM32(esp + 0x24) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000BDD33; /* jle: less or equal (signed <=) */

loc_000BDBEB: ;
    goto loc_000BDBF0;

    /* nop */

loc_000BDBF0: ;
    ecx = MEM32(esi + 0x58);
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + ebp * 4);
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + ecx * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD26; /* je: equal / zero */

loc_000BDC0D: ;
    /* nop */

loc_000BDC10: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDC2A; /* jl: less (signed <) */

loc_000BDC17: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC26; /* je: equal / zero */

loc_000BDC21: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDC35; /* jne: not equal / not zero */

loc_000BDC26: ;
    edx = MEM32(esp + 0x20);

loc_000BDC2A: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDC10; /* jne: not equal / not zero */

loc_000BDC30: ;
    goto loc_000BDD26;

loc_000BDC35: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ecx + 0x38);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BDC44u); RECOMP_ABI_CALL(0x0015220Cu, sub_0015220C); /* call 0x0015220C */

loc_000BDC44: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x14);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDCF7; /* jne: not equal / not zero */

loc_000BDC5B: ;
    fp_push((double)SMEM32(edi + 0xC)); /* fild */
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC73; /* je: equal / zero */

loc_000BDC68: ;
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BDC73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(edi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC7F; /* je: equal / zero */

loc_000BDC7A: ;
    ebp = MEM32(eax + 4);
    goto loc_000BDC81;

loc_000BDC7F: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BDC81: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BDC88; /* jg: greater (signed >) */

loc_000BDC85: ;
    edi = ebp + 1;

loc_000BDC88: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDC96u); RECOMP_ABI_CALL(0x000C3EB0u, sub_000C3EB0); /* call 0x000C3EB0 */

loc_000BDC96: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1BC)); /* fmul dword ptr [0x22c1bc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1BC)); /* fmul dword ptr [0x22c1bc] */
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x18);
    ebp = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6DC)); /* fmul dword ptr [0x22c6dc] */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    MEMF(edx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    ecx = MEM32(ebx + 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1BC)); /* fmul dword ptr [0x22c1bc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000BDD1B;

loc_000BDCF7: ;
    edx = MEM32(ebx + 4);
    fp_push((double)SMEM32(edx + 0xC)); /* fild */
    ecx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1BC)); /* fmul dword ptr [0x22c1bc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x10)); /* fidiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6DC)); /* fmul dword ptr [0x22c6dc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BDD1B: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x2C) = eax;

loc_000BDD26: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x24) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000BDBF0; /* jl: less (signed <) */

loc_000BDD33: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    MEM32(esi + 0x30) = 1;
    MEM32(esi + 0x28) = 0;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD50; /* je: equal / zero */

loc_000BDD4B: ;
    edx = MEM32(esi + 0x14);
    MEM32(eax) = edx;

loc_000BDD50: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD5D; /* je: equal / zero */

loc_000BDD58: ;
    ecx = MEM32(esi + 0x18);
    MEM32(eax) = ecx;

loc_000BDD5D: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD6A; /* je: equal / zero */

loc_000BDD65: ;
    edx = MEM32(esi + 0x2C);
    MEM32(eax) = edx;

loc_000BDD6A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDD72: ;
    POP32(esp, edi);
    eax = 0xFFFFFFF2u;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDD7D: ;
    POP32(esp, edi);
    eax = 0xFFFFFFF1u;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDD88: ;
    POP32(esp, edi);
    eax = 0xFFFFFFF3u;
    POP32(esp, esi);
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
 * sub_000BDDA0
 * Original: 0x000BDDA0 - 0x000BDDB7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDDA0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDB6; /* je: equal / zero */

loc_000BDDA8: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDB6; /* je: equal / zero */

loc_000BDDAE: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_000BDDB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDDC0
 * Original: 0x000BDDC0 - 0x000BDDFC (60 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDDC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDFA; /* je: equal / zero */

loc_000BDDC9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDFA; /* je: equal / zero */

loc_000BDDCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BDDDBu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDDDB: ;
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BDDF8; /* jle: less or equal (signed <=) */

loc_000BDDE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BDDEFu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDDEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BDDE8; /* jne: not equal / not zero */

loc_000BDDF8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BDDFA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDE00
 * Original: 0x000BDE00 - 0x000BDE20 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDE00: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE1F; /* je: equal / zero */

loc_000BDE08: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE1F; /* je: equal / zero */

loc_000BDE0E: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000BDE1D; /* je: equal / zero */

loc_000BDE1B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000BDE1D: ;
    MEM32(edx) = eax;

loc_000BDE1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDE20
 * Original: 0x000BDE20 - 0x000BDE5C (60 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDE20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE5A; /* je: equal / zero */

loc_000BDE29: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE5A; /* je: equal / zero */

loc_000BDE2E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BDE3Bu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDE3B: ;
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BDE58; /* jle: less or equal (signed <=) */

loc_000BDE48: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BDE4Fu); RECOMP_ABI_CALL(0x000BDE00u, sub_000BDE00); /* call 0x000BDE00 */

loc_000BDE4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BDE48; /* jne: not equal / not zero */

loc_000BDE58: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BDE5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDE60
 * Original: 0x000BDE60 - 0x000BDEB6 (86 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDE60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDE72u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDE72: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDEB2; /* je: equal / zero */

loc_000BDE7B: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE97; /* je: equal / zero */

loc_000BDE85: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDE8Cu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDE8C: ;
    esi = MEM32(esi);
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDE85; /* jne: not equal / not zero */

loc_000BDE97: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDEB2; /* je: equal / zero */

loc_000BDE9E: ;
    edi = edi;

loc_000BDEA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDEA7u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDEA7: ;
    esi = MEM32(esi);
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDEA0; /* jne: not equal / not zero */

loc_000BDEB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDEC0
 * Original: 0x000BDEC0 - 0x000BE097 (471 bytes, 173 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BDEC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDED6; /* jne: not equal / not zero */

loc_000BDECC: ;
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDED6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDEE5; /* je: equal / zero */

loc_000BDEDB: ;
    eax = 0xFFFFFFECu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDEE5: ;
    ecx = MEM32(ebx);
    eax = 0x282328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF0A; /* je: equal / zero */

loc_000BDEF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2823B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BDEFDu); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BDEFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFF1u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDF0A: ;
    eax = MEM32(ebx + 4);
    ecx = eax + ebx + -4;
    eax = MEM32(ecx);
    edx = 0x2823AC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF36; /* je: equal / zero */

loc_000BDF1C: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x282380);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BDF29u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BDF29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFF0u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDF36: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20021204) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20021204 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF5F; /* je: equal / zero */

loc_000BDF40: ;
    PUSH32(esp, 0x20021204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x282330);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BDF52u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BDF52: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFEEu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDF5F: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE090; /* jne: not equal / not zero */

loc_000BDF6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDF76u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDF76: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDF82u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDF82: ;
    edi = ebx + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDF8Cu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDF8C: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDF98u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDF98: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDFA4u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDFA4: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDFB0u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDFB0: ;
    edx = MEM32(edi);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000BE087; /* jle: less or equal (signed <=) */

loc_000BDFC8: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000BDFD0: ;
    ecx = MEM32(edi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0xC);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDFE5u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BDFE5: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000BE070; /* jle: less or equal (signed <=) */

loc_000BDFFB: ;
    goto loc_000BE000;

    /* nop */

loc_000BE000: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + esi);
    edx = MEM32(esp + 0x1C);
    ebx = ebp * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BE01Cu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE01C: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + esi);
    eax = MEM32(ebx + edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BE05A; /* je: equal / zero */

loc_000BE02E: ;
    ecx = MEM32(ecx + 4);
    edx = eax;
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + esi + 4);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BE048u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000BE048: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + esi);
    MEM32(ebx + edx) = ebp;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BE05A: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000BE000; /* jl: less (signed <) */

loc_000BE06C: ;
    ebx = MEM32(esp + 0x1C);

loc_000BE070: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    ecx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000BDFD0; /* jl: less (signed <) */

loc_000BE086: ;
    POP32(esp, ebp);

loc_000BE087: ;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = 1;
    POP32(esp, esi);

loc_000BE090: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BE0A0
 * Original: 0x000BE0A0 - 0x000BE2F7 (599 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BE0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0B3u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0B3: ;
    ebx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0BCu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0BC: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0C8u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0C8: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0D4u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0D4: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0E0u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0E0: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0ECu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0EC: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE0F8u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE0F8: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE104u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE104: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE113u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE113: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE11Fu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE11F: ;
    ebp = ebx + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE129u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE129: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE136u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE136: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE143u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE143: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE150u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE150: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE15Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE15D: ;
    ebp = MEM32(ebp);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE170u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE170: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE17Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE17D: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE18Au); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE18A: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE197u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE197: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1A4u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE1A4: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1B1u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE1B1: ;
    ebp = MEM32(ebp);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1C4u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE1C4: ;
    ebp = ebx + 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1CEu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE1CE: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1DBu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE1DB: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1EBu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE1EB: ;
    ebp = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE1FCu); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE1FC: ;
    ebp = ebx + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE206u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE206: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE213u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE213: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE220u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE220: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE22Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE22D: ;
    ebp = MEM32(ebp);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE23Bu); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE23B: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE248u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE248: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE255u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE255: ;
    ebp = MEM32(ebp);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE263u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE263: ;
    MEM32(ebx + 0x18) = 0;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE278u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE278: ;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE282u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE282: ;
    edx = edi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE28Cu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE28C: ;
    PUSH32(esp, 1);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE298u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE298: ;
    ecx = MEM32(edi + 0x28);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = edi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2A9u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE2A9: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    ecx = edi + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2B7u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE2B7: ;
    edx = MEM32(edi + 0x28);
    PUSH32(esp, edx);
    eax = edi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2C5u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE2C5: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, ecx);
    edx = edi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2D3u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE2D3: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    ecx = edi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2E1u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE2E1: ;
    edx = MEM32(edi + 0x58);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE2EFu); RECOMP_ABI_CALL(0x000BDE20u, sub_000BDE20); /* call 0x000BDE20 */

loc_000BE2EF: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE300
 * Original: 0x000BE300 - 0x000BE575 (629 bytes, 238 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE300(void)
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

loc_000BE300: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BE56A; /* je: equal / zero */

loc_000BE311: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE56A; /* je: equal / zero */

loc_000BE31D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BE55F; /* jne: not equal / not zero */

loc_000BE326: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BE55F; /* jne: not equal / not zero */

loc_000BE32F: ;
    edx = MEM32(ebx);
    eax = 0x282320;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE355; /* je: equal / zero */

loc_000BE33A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x282498);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE347u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE347: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFF1u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE355: ;
    edx = MEM32(ecx + 4);
    eax = 0x2823AC;
    esi = MEM32(eax);
    edx = edx + ecx + -4;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE384; /* je: equal / zero */

loc_000BE369: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x282470);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE376u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE376: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFF0u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE384: ;
    edx = MEM32(ebx + 4);
    eax = 0x2823AC;
    esi = MEM32(eax);
    edx = edx + ebx + -4;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3B3; /* je: equal / zero */

loc_000BE398: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28243C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE3A5u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE3A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFF0u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE3B3: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20021204) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20021204 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3DD; /* je: equal / zero */

loc_000BE3BD: ;
    PUSH32(esp, 0x20021204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2823E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE3CFu); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE3CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFEEu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE3DD: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE400; /* jne: not equal / not zero */

loc_000BE3E4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BE3EAu); RECOMP_ABI_CALL(0x000BDEC0u, sub_000BDEC0); /* call 0x000BDEC0 */

loc_000BE3EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3FC; /* je: equal / zero */

loc_000BE3F1: ;
    POP32(esp, esi);
    eax = 0xFFFFFFF2u;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE3FC: ;
    ecx = MEM32(esp + 0x14);

loc_000BE400: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE413; /* je: equal / zero */

loc_000BE408: ;
    POP32(esp, esi);
    eax = 0xFFFFFFEDu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE413: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE422; /* je: equal / zero */

loc_000BE41A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE422: ;
    PUSH32(esp, edi);
    esi = ebx + 0x5C;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE42Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE42D: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE43Cu); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE43C: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(esi);
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x30);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    eax = ebx + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0x000BE460u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE460: ;
    ecx = ebx + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE46Au); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE46A: ;
    edx = ebx + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE474u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE474: ;
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE47Eu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE47E: ;
    esi = ebx + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE488u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE488: ;
    edx = MEM32(esp + 0x54);
    ecx = MEM32(esi);
    eax = MEM32(edx + 0x2C);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE49Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE49D: ;
    edx = MEM32(ebx + 0x50);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = ebx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4AEu); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE4AE: ;
    ecx = ebx + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4B8u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE4B8: ;
    edx = MEM32(ebx + 0x50);
    PUSH32(esp, edx);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4C6u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE4C6: ;
    ecx = ebx + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4D0u); RECOMP_ABI_CALL(0x000BDE60u, sub_000BDE60); /* call 0x000BDE60 */

loc_000BE4D0: ;
    edx = ebx + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4DAu); RECOMP_ABI_CALL(0x000BDE60u, sub_000BDE60); /* call 0x000BDE60 */

loc_000BE4DA: ;
    edi = ebx + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4E4u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE4E4: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4EDu); RECOMP_ABI_CALL(0x000BDE60u, sub_000BDE60); /* call 0x000BDE60 */

loc_000BE4ED: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + 0x38;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE4FAu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE4FA: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE503u); RECOMP_ABI_CALL(0x000BE0A0u, sub_000BE0A0); /* call 0x000BE0A0 */

loc_000BE503: ;
    esi = ebx + 0x70;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE50Du); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE50D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE519u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE519: ;
    eax = MEM32(esi);
    MEM32(eax + 0x30) = 0;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    MEM32(ecx + 0x34) = edx;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esi);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x38) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BE542u); RECOMP_ABI_CALL(0x000ADB8Fu, sub_000ADB8F); /* call 0x000ADB8F */

loc_000BE542: ;
    fp_push((double)SMEM64(esp + 0xC)); /* fild */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEM32(ebx + 0x10) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ebx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE55F: ;
    POP32(esp, esi);
    eax = 0xFFFFFFECu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BE56A: ;
    POP32(esp, esi);
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
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
 * sub_000BE580
 * Original: 0x000BE580 - 0x000BE6DA (346 bytes, 135 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BE580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE590; /* jne: not equal / not zero */

loc_000BE589: ;
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BE590: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BE59C; /* je: equal / zero */

loc_000BE595: ;
    eax = 0xFFFFFFECu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BE59C: ;
    ecx = MEM32(ebx);
    eax = 0x282318;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE5BE; /* je: equal / zero */

loc_000BE5A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28254C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE5B4u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE5B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFF1u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BE5BE: ;
    eax = MEM32(ebx + 4);
    ecx = eax + ebx + -4;
    eax = MEM32(ecx);
    edx = 0x2823AC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE5E7; /* je: equal / zero */

loc_000BE5D0: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x28251C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE5DDu); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE5DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFF0u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BE5E7: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20021204) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20021204 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE60D; /* je: equal / zero */

loc_000BE5F1: ;
    PUSH32(esp, 0x20021204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2824D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BE603u); RECOMP_ABI_CALL(0x000BD380u, sub_000BD380); /* call 0x000BD380 */

loc_000BE603: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFEEu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BE60D: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE6D6; /* jne: not equal / not zero */

loc_000BE618: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE625u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE625: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ebp = esi + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE635u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE635: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BE66D; /* jle: less or equal (signed <=) */

loc_000BE641: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE652u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE652: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + edi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE662u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE662: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BE641; /* jl: less (signed <) */

loc_000BE66D: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE67Au); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE67A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE688u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE688: ;
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE692u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE692: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE69Cu); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE69C: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE6AAu); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE6AA: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE6B9u); RECOMP_ABI_CALL(0x000BDDC0u, sub_000BDDC0); /* call 0x000BDDC0 */

loc_000BE6B9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BE6C9u); RECOMP_ABI_CALL(0x000BDDA0u, sub_000BDDA0); /* call 0x000BDDA0 */

loc_000BE6C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 1;
    POP32(esp, ebp);

loc_000BE6D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE6E7
 * Original: 0x000BE6E7 - 0x000BE6FF (24 bytes, 10 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE6E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BE6E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000BE6F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE6F6u); } /* indirect call */
    }

loc_000BE6F9: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000BE6FF
 * Original: 0x000BE6FF - 0x000BE712 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE6FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE6FF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE710; /* je: equal / zero */

loc_000BE707: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE70Du); RECOMP_ABI_CALL(0x000BEB80u, sub_000BEB80); /* call 0x000BEB80 */

loc_000BE70D: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BE710: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE712
 * Original: 0x000BE712 - 0x000BE7A0 (142 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE712: ;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = eax;
    MEM16(ebp + -6) = 8;
    MEM16(ebp + -12) = 9;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE77D; /* je: equal / zero */

loc_000BE74E: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD4C); PUSH32(esp, 0x000BE758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE752u); } /* indirect call */
    }

loc_000BE758: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0xBF1A0);
    PUSH32(esp, MEM32(0x96FD20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE76Fu); RECOMP_ABI_CALL(0x000BE6E7u, sub_000BE6E7); /* call 0x000BE6E7 */

loc_000BE76F: ;
    esi = eax;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD50); PUSH32(esp, 0x000BE77Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE775u); } /* indirect call */
    }

loc_000BE77B: ;
    goto loc_000BE78E;

loc_000BE77D: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE789u); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BE789: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_000BE78E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE797; /* je: equal / zero */

loc_000BE792: ;
    ebx = 0x80004005u;

loc_000BE797: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BE7A0
 * Original: 0x000BE7A0 - 0x000BE7C2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE7A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE7ADu); RECOMP_ABI_CALL(0x000BEB50u, sub_000BEB50); /* call 0x000BEB50 */

loc_000BE7AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE7BD; /* je: equal / zero */

loc_000BE7B1: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x000BE7BDu); RECOMP_ABI_CALL(0x000BE6FFu, sub_000BE6FF); /* call 0x000BE6FF */

loc_000BE7BD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE7C2
 * Original: 0x000BE7C2 - 0x000BE7E9 (39 bytes, 15 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE7C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BE7C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000BE7E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE7E0u); } /* indirect call */
    }

loc_000BE7E3: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_000BE7E9
 * Original: 0x000BE7E9 - 0x000BE80A (33 bytes, 13 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE7E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_000BE7E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000BE804u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE801u); } /* indirect call */
    }

loc_000BE804: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000BE80A
 * Original: 0x000BE80A - 0x000BE81E (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE80A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE80A: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE81C; /* je: equal / zero */

loc_000BE813: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BE819u); RECOMP_ABI_CALL(0x000C66C2u, sub_000C66C2); /* call 0x000C66C2 */

loc_000BE819: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000BE81C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE81E
 * Original: 0x000BE81E - 0x000BE947 (297 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE81E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE81E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -12) = edi;

loc_000BE837: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE882; /* jne: not equal / not zero */

loc_000BE83C: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE86E; /* jne: not equal / not zero */

loc_000BE843: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE869; /* jne: not equal / not zero */

loc_000BE848: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE84Fu); RECOMP_ABI_CALL(0x000C6761u, sub_000C6761); /* call 0x000C6761 */

loc_000BE84F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esi + 0x54) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BE931; /* je: equal / zero */

loc_000BE85E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80004005u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE931; /* je: equal / zero */

loc_000BE869: ;
    MEM32(esi + 0x44) = edi;
    goto loc_000BE882;

loc_000BE86E: ;
    eax = ZX16(MEM16(esi + 0xE));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x44) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_000BE87F; /* jae: above or equal (unsigned >=) */

loc_000BE87D: ;
    eax = ecx;

loc_000BE87F: ;
    MEM32(esi + 0x50) = eax;

loc_000BE882: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x44));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x50));
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0xC7946);
    PUSH32(esp, MEM32(0x96FD20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE8A7u); RECOMP_ABI_CALL(0x000BE7C2u, sub_000BE7C2); /* call 0x000BE7C2 */

loc_000BE8A7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80004005u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE936; /* je: equal / zero */

loc_000BE8B5: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x48) = MEM32(esi + 0x48) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x50) = MEM32(esi + 0x50) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x44) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BE908; /* je: equal / zero */

loc_000BE8CB: ;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0xC66FC);
    PUSH32(esp, MEM32(0x96FD20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE8EFu); RECOMP_ABI_CALL(0x000BE7E9u, sub_000BE7E9); /* call 0x000BE7E9 */

loc_000BE8EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE936; /* jne: not equal / not zero */

loc_000BE8F3: ;
    ecx = ZX16(MEM16(esi + 0x12));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -16));
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE936; /* jne: not equal / not zero */

loc_000BE902: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000BE908: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE922; /* je: equal / zero */

loc_000BE90D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80040004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80040004u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE922; /* je: equal / zero */

loc_000BE915: ;
    eax = ZX16(MEM16(esi + 0x12));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BE882; /* jae: above or equal (unsigned >=) */

loc_000BE922: ;
    eax = ZX16(MEM16(esi + 0x12));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BE837; /* jae: above or equal (unsigned >=) */

loc_000BE92F: ;
    goto loc_000BE93D;

loc_000BE931: ;
    MEM32(ebp + -4) = ecx;
    goto loc_000BE93D;

loc_000BE936: ;
    MEM32(ebp + -4) = 1;

loc_000BE93D: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BE947
 * Original: 0x000BE947 - 0x000BEA58 (273 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BE947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE947: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    esi = edx + 4;
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    edi = MEM32(eax);
    ecx = 0x282594;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    MEM32(ebp + -4) = 0x80004005u;
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4F; /* jne: not equal / not zero */

loc_000BE974: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000BEA4F; /* jbe: below or equal (unsigned <=) */

loc_000BE987: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    edi = 0x28258C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE999: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    edi = 0x282584;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9AA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9B5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9C1: ;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xE), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9CC: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9D3: ;
    MEM16(edx + 0x10) = 0xA;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    SET_LO16(edi, MEM16(eax + 0xC));
    MEM16(edx + 0xE) = LO16(edi);
    SET_LO16(edi, MEM16(eax + 2));
    MEM16(edx + 0xC) = LO16(edi);
    edi = MEM32(eax + 4);
    MEM32(esi) = edi;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BE9FB: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BEA00: ;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x10), 0x2E (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BEA07: ;
    SET_LO16(esi, MEM16(eax + 0x20));
    MEM16(edx + 0x34) = LO16(esi);
    esi = MEM32(eax + 0x24);
    MEM32(edx + 0x38) = esi;
    esi = MEM32(eax + 0x28);
    MEM32(edx + 0x3C) = esi;
    esi = MEM32(eax + 0x2C);
    MEM32(edx + 0x40) = esi;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    esi = 0x28257C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BEA2F: ;
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFACu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFACu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEA4E; /* jne: not equal / not zero */

loc_000BEA3D: ;
    MEM32(edx + 0x50) = MEM32(edx + 0x50) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x48) = eax;
    MEM32(edx + 0x4C) = ecx;

loc_000BEA4E: ;
    POP32(esp, ebx);

loc_000BEA4F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEA58
 * Original: 0x000BEA58 - 0x000BEA87 (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEA58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEA58: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000BEA64u); RECOMP_ABI_CALL(0x000C74F9u, sub_000C74F9); /* call 0x000C74F9 */

loc_000BEA64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BEA79; /* jge: greater or equal (signed >=) */

loc_000BEA68: ;
    ecx = esi;
    ebx = 0x8007000Eu;
    PUSH32(esp, 0x000BEA74u); RECOMP_ABI_CALL(0x000BE80Au, sub_000BE80A); /* call 0x000BE80A */

loc_000BEA74: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BEA79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_000BEA74;

}

/**
 * sub_000BEA87
 * Original: 0x000BEA87 - 0x000BEAEB (100 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEA87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEA87: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEA96; /* je: equal / zero */

loc_000BEA8F: ;
    eax = 0x80004005u;
    goto loc_000BEAE7;

loc_000BEA96: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BEA9Eu); RECOMP_ABI_CALL(0x000BEA58u, sub_000BEA58); /* call 0x000BEA58 */

loc_000BEA9E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BEAE4; /* jl: less (signed <) */

loc_000BEAA4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x000BEAB3u); RECOMP_ABI_CALL(0x000BE947u, sub_000BE947); /* call 0x000BE947 */

loc_000BEAB3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BEAE4; /* jl: less (signed <) */

loc_000BEAB9: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    MEM16(esi + 0x12) = 2;
    PUSH32(esp, 0x000BEACEu); RECOMP_ABI_CALL(0x000C75B4u, sub_000C75B4); /* call 0x000C75B4 */

loc_000BEACE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BEAD9; /* jge: greater or equal (signed >=) */

loc_000BEAD2: ;
    edi = 0x80004005u;
    goto loc_000BEAE4;

loc_000BEAD9: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x44) = 1;

loc_000BEAE4: ;
    eax = edi;
    POP32(esp, edi);

loc_000BEAE7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEAF0
 * Original: 0x000BEAF0 - 0x000BEB08 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEAF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BEAFFu); RECOMP_ABI_CALL(0x000C7AF0u, sub_000C7AF0); /* call 0x000C7AF0 */

loc_000BEAFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEB10
 * Original: 0x000BEB10 - 0x000BEB23 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEB1Au); RECOMP_ABI_CALL(0x000C7B50u, sub_000C7B50); /* call 0x000C7B50 */

loc_000BEB1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEB30
 * Original: 0x000BEB30 - 0x000BEB45 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BEB3Fu); RECOMP_ABI_CALL(0x000C06B0u, sub_000C06B0); /* call 0x000C06B0 */

loc_000BEB3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEB50
 * Original: 0x000BEB50 - 0x000BEB65 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BEB5Fu); RECOMP_ABI_CALL(0x000C0740u, sub_000C0740); /* call 0x000C0740 */

loc_000BEB5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEB70
 * Original: 0x000BEB70 - 0x000BEB80 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEB7Au); RECOMP_ABI_CALL(0x000C0590u, sub_000C0590); /* call 0x000C0590 */

loc_000BEB7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEB80
 * Original: 0x000BEB80 - 0x000BEB90 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEB8Au); RECOMP_ABI_CALL(0x000C0610u, sub_000C0610); /* call 0x000C0610 */

loc_000BEB8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEBA0
 * Original: 0x000BEBA0 - 0x000BEC10 (112 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEBA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEBBDu); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEBBD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEC0A; /* jne: not equal / not zero */

loc_000BEBC4: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEBD5u); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEBD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEC0A; /* jne: not equal / not zero */

loc_000BEBDC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    edx = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEBEDu); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEBED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEC0A; /* jne: not equal / not zero */

loc_000BEBF4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEC05u); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEC05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BEC0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEC10
 * Original: 0x000BEC10 - 0x000BEC50 (64 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEC10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEC2Du); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEC2D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEC4A; /* jne: not equal / not zero */

loc_000BEC34: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEC45u); RECOMP_ABI_CALL(0x000BEEC0u, sub_000BEEC0); /* call 0x000BEEC0 */

loc_000BEC45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BEC4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEC80
 * Original: 0x000BEC80 - 0x000BEC85 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BEC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEC80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEC90
 * Original: 0x000BEC90 - 0x000BED00 (112 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEC90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BECADu); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BECAD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BECFA; /* jne: not equal / not zero */

loc_000BECB4: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BECC5u); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BECC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BECFA; /* jne: not equal / not zero */

loc_000BECCC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    edx = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BECDDu); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BECDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BECFA; /* jne: not equal / not zero */

loc_000BECE4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BECF5u); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BECF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BECFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BED50
 * Original: 0x000BED50 - 0x000BED90 (64 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BED50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BED6Du); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BED6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BED8A; /* jne: not equal / not zero */

loc_000BED74: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BED85u); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BED85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BED8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEDC0
 * Original: 0x000BEDC0 - 0x000BEDC5 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BEDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEDC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEDD0
 * Original: 0x000BEDD0 - 0x000BEDF3 (35 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEDD0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEDEAu); RECOMP_ABI_CALL(0x000BF1A0u, sub_000BF1A0); /* call 0x000BF1A0 */

loc_000BEDEA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEE00
 * Original: 0x000BEE00 - 0x000BEE18 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEE00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BEE0Fu); RECOMP_ABI_CALL(0x000C04B0u, sub_000C04B0); /* call 0x000C04B0 */

loc_000BEE0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEE20
 * Original: 0x000BEE20 - 0x000BEEBA (154 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE20(void)
{
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

loc_000BEE20: ;
    fp_push(MEMD(0x2825A8)); /* fld double */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi) = 4;
    ecx = MEM32(0x28259C);
    eax = esi + 2;
    MEM32(eax) = ecx;
    edx = MEM32(0x2825A0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x2825A4);
    MEM32(eax + 8) = ecx;
    eax = 0x40;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x24) = 0x3000003;
    MEM32(esi + 0x28) = 0x3010003;
    MEM16(esi + 0x2C) = 0x1F40;
    MEM16(esi + 0x2E) = 0x10;
    MEM16(esi + 0x30) = 0xA0;
    MEM32(esi + 0x38) = 0xC80;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x000BEE8Du); RECOMP_ABI_CALL(0x00150551u, sub_00150551); /* call 0x00150551 */

loc_000BEE8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BEE95u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000BEE95: ;
    MEM16(esi + 0x48) = LO16(eax);
    edx = eax + eax * 4;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 1;
    _fb = (uint32_t)(0x91) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x91;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 0x32) = LO16(eax);
    MEM16(esi + 0x34) = LO16(eax);
    MEM16(esi + 0x4A) = LO16(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BEEC0
 * Original: 0x000BEEC0 - 0x000BF02C (364 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BEEC0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEEDF; /* jne: not equal / not zero */

loc_000BEED2: ;
    eax = 0x181A;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEEDF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEEF3; /* jne: not equal / not zero */

loc_000BEEE6: ;
    eax = 0x17F2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEEF3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEF05; /* jne: not equal / not zero */

loc_000BEEF8: ;
    eax = 0x17ED;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF05: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BEF1C; /* jb: below (unsigned <) */

loc_000BEF0F: ;
    eax = 0x1801;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF1C: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BEF2F; /* jb: below (unsigned <) */

loc_000BEF22: ;
    eax = 0x1806;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF2F: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BEF42; /* jbe: below or equal (unsigned <=) */

loc_000BEF35: ;
    eax = 0x17F7;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF42: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    if (CMP_BE(_fa, _fb)) goto loc_000BEF5B; /* jbe: below or equal (unsigned <=) */

loc_000BEF4D: ;
    POP32(esp, ebp);
    eax = 0x17FC;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF5B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF01D; /* je: equal / zero */

loc_000BEF6B: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF01D; /* jne: not equal / not zero */

loc_000BEF77: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEF8C; /* je: equal / zero */

loc_000BEF7D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x17DE;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BEF8C: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000BEFA0; /* jne: not equal / not zero */

loc_000BEF9B: ;
    MEM32(ebx + 0x44) = eax;
    goto loc_000BEFCD;

loc_000BEFA0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebx + 0x44) = 1;
    PUSH32(esp, 0x000BEFB2u); RECOMP_ABI_CALL(0x000C90A0u, sub_000C90A0); /* call 0x000C90A0 */

loc_000BEFB2: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF012; /* jne: not equal / not zero */

loc_000BEFBC: ;
    eax = MEM32(ebx + 0x48);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEFCAu); RECOMP_ABI_CALL(0x000C87D0u, sub_000C87D0); /* call 0x000C87D0 */

loc_000BEFCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BEFCD: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEFE0u); RECOMP_ABI_CALL(0x000C83D0u, sub_000C83D0); /* call 0x000C83D0 */

loc_000BEFE0: ;
    edx = MEM32(edi + 0x10);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEFF3u); RECOMP_ABI_CALL(0x000C7CA0u, sub_000C7CA0); /* call 0x000C7CA0 */

loc_000BEFF3: ;
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esi + 0x12;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF00Du); RECOMP_ABI_CALL(0x000C7BC0u, sub_000C7BC0); /* call 0x000C7BC0 */

loc_000BF00D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BF012: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF01D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x17D4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BF030
 * Original: 0x000BF030 - 0x000BF19C (364 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BF030: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF04F; /* jne: not equal / not zero */

loc_000BF042: ;
    eax = 0x181A;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF04F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF063; /* jne: not equal / not zero */

loc_000BF056: ;
    eax = 0x17F2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF063: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF075; /* jne: not equal / not zero */

loc_000BF068: ;
    eax = 0x17ED;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF075: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF08C; /* jb: below (unsigned <) */

loc_000BF07F: ;
    eax = 0x1801;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF08C: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF09F; /* jb: below (unsigned <) */

loc_000BF092: ;
    eax = 0x1806;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF09F: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BF0B2; /* jbe: below or equal (unsigned <=) */

loc_000BF0A5: ;
    eax = 0x17F7;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF0B2: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    if (CMP_BE(_fa, _fb)) goto loc_000BF0CB; /* jbe: below or equal (unsigned <=) */

loc_000BF0BD: ;
    POP32(esp, ebp);
    eax = 0x17FC;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF0CB: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF18D; /* je: equal / zero */

loc_000BF0DB: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF18D; /* jne: not equal / not zero */

loc_000BF0E7: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF0FC; /* je: equal / zero */

loc_000BF0ED: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x17DE;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF0FC: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000BF110; /* jne: not equal / not zero */

loc_000BF10B: ;
    MEM32(ebx + 0x44) = eax;
    goto loc_000BF13D;

loc_000BF110: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebx + 0x44) = 1;
    PUSH32(esp, 0x000BF122u); RECOMP_ABI_CALL(0x000C90A0u, sub_000C90A0); /* call 0x000C90A0 */

loc_000BF122: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF182; /* jne: not equal / not zero */

loc_000BF12C: ;
    eax = MEM32(ebx + 0x48);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF13Au); RECOMP_ABI_CALL(0x000C87D0u, sub_000C87D0); /* call 0x000C87D0 */

loc_000BF13A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF13D: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, 1);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF150u); RECOMP_ABI_CALL(0x000C83D0u, sub_000C83D0); /* call 0x000C83D0 */

loc_000BF150: ;
    edx = MEM32(edi + 0x10);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF163u); RECOMP_ABI_CALL(0x000C7CA0u, sub_000C7CA0); /* call 0x000C7CA0 */

loc_000BF163: ;
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esi + 0x12;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF17Du); RECOMP_ABI_CALL(0x000C7BC0u, sub_000C7BC0); /* call 0x000C7BC0 */

loc_000BF17D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BF182: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF18D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x17D4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BF1A0
 * Original: 0x000BF1A0 - 0x000BF461 (705 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF1A0(void)
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

loc_000BF1A0: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x170);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF454; /* je: equal / zero */

loc_000BF1B6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF454; /* jne: not equal / not zero */

loc_000BF1C2: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF1D5; /* je: equal / zero */

loc_000BF1C8: ;
    eax = 0x17E3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF1D5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x17C);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x10);
    MEM32(ebx + 0x1C) = esi;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF1EDu); RECOMP_ABI_CALL(0x000C9310u, sub_000C9310); /* call 0x000C9310 */

loc_000BF1ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF329; /* je: equal / zero */

loc_000BF1F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF20C; /* jne: not equal / not zero */

loc_000BF1FC: ;
    eax = 0x181A;

loc_000BF201: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF20C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF223; /* jne: not equal / not zero */

loc_000BF213: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17F2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF223: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF238; /* jne: not equal / not zero */

loc_000BF228: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17ED;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF238: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF252; /* jb: below (unsigned <) */

loc_000BF242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1801;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF252: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF268; /* jb: below (unsigned <) */

loc_000BF258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1806;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF268: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    ebp = esi + 0x10;
    if (CMP_BE(_fa, _fb)) goto loc_000BF282; /* jbe: below or equal (unsigned <=) */

loc_000BF272: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17F7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF282: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BF298; /* jbe: below or equal (unsigned <=) */

loc_000BF288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17FC;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF298: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BF29Eu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BF29E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF2DF; /* je: equal / zero */

loc_000BF2A5: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BF2B8u); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BF2B8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF201; /* jne: not equal / not zero */

loc_000BF2C3: ;
    eax = MEM32(edi + 4);
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BF2DCu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BF2DC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF2DF: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    MEM8(esp + 0x1F) = 0;
    eax = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BF30Eu); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BF30E: ;
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF324u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BF324: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BF33A;

loc_000BF329: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF1FC; /* je: equal / zero */

loc_000BF331: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF228; /* je: equal / zero */

loc_000BF33A: ;
    edx = MEM32(edi);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BF34Au); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BF34A: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BF369u); RECOMP_ABI_CALL(0x000C9570u, sub_000C9570); /* call 0x000C9570 */

loc_000BF369: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BF36Fu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BF36F: ;
    edx = MEM32(edi);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BF37Bu); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BF37B: ;
    eax = MEM32(edi + 0x80);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF447; /* je: equal / zero */

loc_000BF38C: ;
    eax = MEM32(esp + 0x184);
    fp_push(MEMF(esp + 0x114)); /* fld float */
    ecx = MEM32(esp + 0x4C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;

loc_000BF447: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF454: ;
    eax = 0x17D4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BF470
 * Original: 0x000BF470 - 0x000BF988 (1304 bytes, 394 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF470(void)
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

loc_000BF470: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF97C; /* je: equal / zero */

loc_000BF482: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF97C; /* jne: not equal / not zero */

loc_000BF48E: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    SET_LO8(edx, 0xB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF4A3; /* je: equal / zero */

loc_000BF497: ;
    eax = 0x17E3;
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF4A3: ;
    eax = MEM32(esp + 0x2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BF96F; /* je: equal / zero */

loc_000BF4B3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF96F; /* jne: not equal / not zero */

loc_000BF4BF: ;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF4D3; /* je: equal / zero */

loc_000BF4C5: ;
    POP32(esp, ebx);
    eax = 0x17E3;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF4D3: ;
    esi = MEM32(esp + 0x2D8);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2E4);
    MEM32(ecx + 0x1C) = esi;
    ebx = MEM32(eax + 0x10);
    MEM32(eax + 0x1C) = edi;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF4F8u); RECOMP_ABI_CALL(0x000C9310u, sub_000C9310); /* call 0x000C9310 */

loc_000BF4F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF939; /* je: equal / zero */

loc_000BF503: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF946; /* je: equal / zero */

loc_000BF50B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF548; /* je: equal / zero */

loc_000BF512: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF95F; /* je: equal / zero */

loc_000BF51B: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BF56B; /* jae: above or equal (unsigned >=) */

loc_000BF525: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BF581; /* jae: above or equal (unsigned >=) */

loc_000BF52B: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(ecx, 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BF596; /* ja: above (unsigned >) */

loc_000BF534: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(ecx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BF5AB; /* ja: above (unsigned >) */

loc_000BF539: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF946; /* je: equal / zero */

loc_000BF541: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF558; /* jne: not equal / not zero */

loc_000BF548: ;
    eax = 0x17F2;

loc_000BF54D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF558: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF95F; /* je: equal / zero */

loc_000BF561: ;
    SET_LO16(eax, MEM16(edi + 0xC));
    _fa = (uint32_t)(MEM16(edi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xE), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF57B; /* jb: below (unsigned <) */

loc_000BF56B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x1801;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF57B: ;
    _fa = (uint32_t)(MEM16(edi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BF591; /* jb: below (unsigned <) */

loc_000BF581: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x1806;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF591: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BF5A6; /* jbe: below or equal (unsigned <=) */

loc_000BF596: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x17F7;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF5A6: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BF5BB; /* jbe: below or equal (unsigned <=) */

loc_000BF5AB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x17FC;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF5BB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BF5C1u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BF5C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF651; /* je: equal / zero */

loc_000BF5CC: ;
    eax = MEM32(esp + 0x2D8);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF5E6u); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BF5E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF54D; /* jne: not equal / not zero */

loc_000BF5F1: ;
    eax = MEM32(esp + 0x2DC);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF60Bu); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BF60B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF54D; /* jne: not equal / not zero */

loc_000BF616: ;
    ecx = MEM32(ebp + 4);
    edx = ZX16(MEM16(esi + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0xE;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF632u); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BF632: ;
    ecx = MEM32(ebx + 4);
    edx = ZX16(MEM16(edi + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = edi + 0xE;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF64Eu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BF64E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF651: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    MEM8(esp + 0x1F) = 0;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x13C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BF680u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BF680: ;
    eax = esp + 0x184;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BF696u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BF696: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 4);
    PUSH32(esp, 8);
    eax = esp + 0x3F;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF6B8u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BF6B8: ;
    ecx = esp + 0x25C;
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BF6CEu); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BF6CE: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF6D1: ;
    ecx = MEM32(ebp);
    eax = esp + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BF6E2u); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BF6E2: ;
    eax = MEM32(ebx);
    edx = esp + 0x228;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF6F2u); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BF6F2: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x248;
    PUSH32(esp, ecx);
    edx = esp + 0x198;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BF72Au); RECOMP_ABI_CALL(0x000C9640u, sub_000C9640); /* call 0x000C9640 */

loc_000BF72A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BF730u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BF730: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BF73Du); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BF73D: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BF746u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BF746: ;
    ecx = MEM32(ebx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BF752u); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BF752: ;
    eax = MEM32(ebp + 0x80);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF83F; /* je: equal / zero */

loc_000BF763: ;
    eax = MEM32(esp + 0x2E8);
    fp_push(MEMF(esp + 0x1BC)); /* fld float */
    edx = MEM32(esp + 0x7C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x80);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x88);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x8C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x90);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x94);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x9C);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0xA0);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0xA4);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xA8);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000BF83F: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF92C; /* je: equal / zero */

loc_000BF84D: ;
    eax = MEM32(esp + 0x2EC);
    fp_push(MEMF(esp + 0x270)); /* fld float */
    edx = MEM32(esp + 0xB0);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0xB4);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0xB8);
    ecx = MEM32(esp + 0xBC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC0);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0xC8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0xCC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0xD0);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0xD4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0xD8);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xDC);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x74);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000BF92C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF939: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF946; /* je: equal / zero */

loc_000BF93D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF95F; /* je: equal / zero */

loc_000BF942: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF956; /* jne: not equal / not zero */

loc_000BF946: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x181A;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF956: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF6D1; /* jne: not equal / not zero */

loc_000BF95F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0x17ED;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF96F: ;
    eax = 0x17D4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF97C: ;
    eax = 0x17D4;
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BF990
 * Original: 0x000BF990 - 0x000BFF08 (1400 bytes, 438 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BF990: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* je: equal / zero */

loc_000BF9A2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* jne: not equal / not zero */

loc_000BF9AE: ;
    SET_LO8(edx, MEM8(eax + 0xC));
    SET_LO8(ecx, 0xB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFA17; /* jne: not equal / not zero */

loc_000BF9B7: ;
    eax = MEM32(esp + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* je: equal / zero */

loc_000BF9C6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* jne: not equal / not zero */

loc_000BF9D2: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFA17; /* jne: not equal / not zero */

loc_000BF9D7: ;
    eax = MEM32(esp + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* je: equal / zero */

loc_000BF9E6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* jne: not equal / not zero */

loc_000BF9F2: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFA17; /* jne: not equal / not zero */

loc_000BF9F7: ;
    eax = MEM32(esp + 0x56C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* je: equal / zero */

loc_000BFA06: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0451(); return; } /* jne: not equal / not zero */

loc_000BFA12: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFA23; /* je: equal / zero */

loc_000BFA17: ;
    eax = 0x17E3;
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFA23: ;
    ecx = MEM32(esp + 0x560);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x580);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x580);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x57C);
    MEM32(ecx + 0x1C) = esi;
    ecx = MEM32(esp + 0x570);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x584);
    MEM32(ecx + 0x1C) = edi;
    ecx = MEM32(esp + 0x578);
    MEM32(ecx + 0x1C) = ebp;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x57C);
    MEM32(esp + 0x1C) = eax;
    MEM32(ecx + 0x1C) = ebx;
    eax = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000BFA8Fu); RECOMP_ABI_CALL(0x000C9310u, sub_000C9310); /* call 0x000C9310 */

loc_000BFA8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0408(); return; } /* je: equal / zero */

loc_000BFA9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000BFAA2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFB6F; /* je: equal / zero */

loc_000BFAAD: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000BFAB6: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BFB92; /* jae: above or equal (unsigned >=) */

loc_000BFAC4: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BFBA8; /* jae: above or equal (unsigned >=) */

loc_000BFACE: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(edx, 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBBD; /* ja: above (unsigned >) */

loc_000BFADB: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBD2; /* ja: above (unsigned >) */

loc_000BFAE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000BFAEC: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFB6F; /* je: equal / zero */

loc_000BFAF3: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000BFAFC: ;
    SET_LO16(eax, MEM16(edi + 0xC));
    _fa = (uint32_t)(MEM16(edi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xE), LO16(eax) (16-bit) */
    ecx = edi + 0xE;
    MEM32(esp + 0x2C) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000BFB92; /* jae: above or equal (unsigned >=) */

loc_000BFB11: ;
    _fa = (uint32_t)(MEM16(edi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x12), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BFBA8; /* jae: above or equal (unsigned >=) */

loc_000BFB1B: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBBD; /* ja: above (unsigned >) */

loc_000BFB24: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBD2; /* ja: above (unsigned >) */

loc_000BFB2D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000BFB35: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFB6F; /* je: equal / zero */

loc_000BFB3C: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000BFB46: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xE), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BFB92; /* jae: above or equal (unsigned >=) */

loc_000BFB50: ;
    _fa = (uint32_t)(MEM16(ebp + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x12), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BFBA8; /* jae: above or equal (unsigned >=) */

loc_000BFB56: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBBD; /* ja: above (unsigned >) */

loc_000BFB5B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BFBD2; /* ja: above (unsigned >) */

loc_000BFB60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000BFB68: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFB7F; /* jne: not equal / not zero */

loc_000BFB6F: ;
    eax = 0x17F2;

loc_000BFB74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFB7F: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000BFB88: ;
    SET_LO16(eax, MEM16(ebx + 0xC));
    _fa = (uint32_t)(MEM16(ebx + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xE), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BFBA2; /* jb: below (unsigned <) */

loc_000BFB92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1801;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFBA2: ;
    _fa = (uint32_t)(MEM16(ebx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x12), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BFBB8; /* jb: below (unsigned <) */

loc_000BFBA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1806;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFBB8: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BFBCD; /* jbe: below or equal (unsigned <=) */

loc_000BFBBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17F7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFBCD: ;
    _fa = (uint32_t)(MEM8(ebx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x14), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BFBE2; /* jbe: below or equal (unsigned <=) */

loc_000BFBD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17FC;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFBE2: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFBECu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BFBEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFD12; /* je: equal / zero */

loc_000BFBF7: ;
    ecx = MEM32(esp + 0x570);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFC11u); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BFC11: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFB74; /* jne: not equal / not zero */

loc_000BFC1C: ;
    ecx = MEM32(esp + 0x574);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFC36u); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BFC36: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFB74; /* jne: not equal / not zero */

loc_000BFC41: ;
    ecx = MEM32(esp + 0x578);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFC5Bu); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BFC5B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFB74; /* jne: not equal / not zero */

loc_000BFC66: ;
    ecx = MEM32(esp + 0x57C);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFC80u); RECOMP_ABI_CALL(0x000C9D80u, sub_000C9D80); /* call 0x000C9D80 */

loc_000BFC80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFB74; /* jne: not equal / not zero */

loc_000BFC8B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFCABu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BFCAB: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax + 4);
    edx = ZX16(MEM16(edi + 0xC));
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFCCCu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BFCCC: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx + 4);
    ecx = ZX16(MEM16(ebp + 0xC));
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFCECu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BFCEC: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + 4);
    edx = ZX16(MEM16(ebx + 0xC));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    eax = ebx + 0xE;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD0Fu); RECOMP_ABI_CALL(0x000C99E0u, sub_000C99E0); /* call 0x000C99E0 */

loc_000BFD0F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFD12: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 8);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0;
    MEM8(esp + 0x23) = 0;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    eax = esp + 0x228;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD45u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BFD45: ;
    edx = MEM32(esp + 0x34);
    ecx = esp + 0x2B4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x234;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD5Fu); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BFD5F: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 8);
    edx = esp + 0x3F;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x1C4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD85u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BFD85: ;
    edx = MEM32(esp + 0x64);
    ecx = esp + 0x440;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD9Fu); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BFD9F: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 8);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x1E4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFDC8u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BFDC8: ;
    edx = MEM32(esp + 0x38);
    ecx = esp + 0x368;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1F0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFDE2u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BFDE2: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, 8);
    edx = esp + 0x3F;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x290;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFE08u); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000BFE08: ;
    edx = MEM32(esp + 0x60);
    ecx = esp + 0x4F4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x29C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFE22u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000BFE22: ;
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFE2Fu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BFE2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000BFF08(); return; } /* je: equal / zero */

loc_000BFE3A: ;
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000BFF08(); return; } /* jne: not equal / not zero */

loc_000BFE46: ;
    edx = ZX16(MEM16(esi + 0xC));
    eax = ZX16(MEM16(esi + 0x12));
    ecx = ZX16(MEM16(esi + 0xE));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFE62u); RECOMP_ABI_CALL(0x000C9FA0u, sub_000C9FA0); /* call 0x000C9FA0 */

loc_000BFE62: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFE (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFEF5; /* je: equal / zero */

loc_000BFE6F: ;
    edx = MEM32(esp + 0x2C);
    MEM16(esi + 0xE) = LO16(eax);
    eax = ZX16(MEM16(edi + 0xC));
    ecx = ZX16(MEM16(edi + 0x12));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edx));
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFE92u); RECOMP_ABI_CALL(0x000C9FA0u, sub_000C9FA0); /* call 0x000C9FA0 */

loc_000BFE92: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFE (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFEF5; /* je: equal / zero */

loc_000BFE9B: ;
    edx = MEM32(esp + 0x2C);
    MEM16(edx) = LO16(eax);
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = ZX16(MEM16(ebp + 0x12));
    edx = ZX16(MEM16(ebp + 0xE));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    edi = ebp + 0xE;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFEC1u); RECOMP_ABI_CALL(0x000C9FA0u, sub_000C9FA0); /* call 0x000C9FA0 */

loc_000BFEC1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFE (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFEF5; /* je: equal / zero */

loc_000BFECA: ;
    MEM16(edi) = LO16(eax);
    ecx = ZX16(MEM16(ebx + 0xC));
    edx = ZX16(MEM16(ebx + 0x12));
    eax = ZX16(MEM16(ebx + 0xE));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    edi = ebx + 0xE;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFEECu); RECOMP_ABI_CALL(0x000C9FA0u, sub_000C9FA0); /* call 0x000C9FA0 */

loc_000BFEEC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFE (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFF05; /* jne: not equal / not zero */

loc_000BFEF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1829;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BFF05: ;
    MEM16(edi) = LO16(eax);

    g_seh_ebp = ebp; sub_000BFF08(); return; /* fallthrough 0x000BFF08 */

}

/**
 * sub_000BFF08
 * Original: 0x000BFF08 - 0x000C0000 (248 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFF08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BFF08: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    edx = esp + 0x29C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFF1Cu); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BFF1C: ;
    ebp = MEM32(esp + 0x30);
    edx = MEM32(ebp);
    ecx = esp + 0x40C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFF31u); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BFF31: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFF45u); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BFF45: ;
    ebx = MEM32(esp + 0x3C);
    ecx = MEM32(ebx);
    eax = esp + 0x4D0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFF59u); RECOMP_ABI_CALL(0x000C9170u, sub_000C9170); /* call 0x000C9170 */

loc_000BFF59: ;
    edx = esp + 0x144;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x184;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x128;
    PUSH32(esp, ecx);
    edx = esp + 0xFC;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    ecx = esi + 4;
    esi = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x500;
    PUSH32(esp, eax);
    ecx = esp + 0x39C;
    PUSH32(esp, ecx);
    edx = esp + 0x454;
    PUSH32(esp, edx);
    eax = esp + 0x2F0;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BFFC5u); RECOMP_ABI_CALL(0x000C9790u, sub_000C9790); /* call 0x000C9790 */

loc_000BFFC5: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BFFCEu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BFFCE: ;
    ecx = MEM32(edi);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BFFDAu); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BFFDA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BFFE0u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BFFE0: ;
    edx = MEM32(ebp);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFFEDu); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BFFED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BFFF3u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000BFFF3: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFFFFu); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

loc_000BFFFF: ;
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_000C0000(); return; /* fallthrough 0x000C0000 */

}

/**
 * sub_000C0000
 * Original: 0x000C0000 - 0x000C0005 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0000: ;
    PUSH32(esp, 0x000C0005u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

    g_seh_ebp = ebp; sub_000C0005(); return; /* fallthrough 0x000C0005 */

}

/**
 * sub_000C0005
 * Original: 0x000C0005 - 0x000C0007 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0005: ;
    ecx = MEM32(ebx);

    g_seh_ebp = ebp; sub_000C0007(); return; /* fallthrough 0x000C0007 */

}

/**
 * sub_000C0007
 * Original: 0x000C0007 - 0x000C000B (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0007: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_000C000B(); return; /* fallthrough 0x000C000B */

}

/**
 * sub_000C000B
 * Original: 0x000C000B - 0x000C000C (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C000B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C000B: ;
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_000C000C(); return; /* fallthrough 0x000C000C */

}

/**
 * sub_000C000C
 * Original: 0x000C000C - 0x000C0011 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C000C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C000C: ;
    PUSH32(esp, 0x000C0011u); RECOMP_ABI_CALL(0x000C9320u, sub_000C9320); /* call 0x000C9320 */

    g_seh_ebp = ebp; sub_000C0011(); return; /* fallthrough 0x000C0011 */

}

/**
 * sub_000C0011
 * Original: 0x000C0011 - 0x000C0408 (1015 bytes, 228 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0011(void)
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

loc_000C0011: ;
    eax = MEM32(edi + 0x80);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0125; /* je: equal / zero */

loc_000C0022: ;
    eax = MEM32(esp + 0x590);
    fp_push(MEMF(esp + 0x2EC)); /* fld float */
    edx = MEM32(esp + 0x158);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x15C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x160);
    ecx = MEM32(esp + 0x164);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x168);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x16C);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x170);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x174);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x178);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x17C);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x180);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x184);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x94);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xA0);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0xA4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xA8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xAC);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0xB0);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xB4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0xBC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000C0125: ;
    eax = MEM32(ebp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0212; /* je: equal / zero */

loc_000C0133: ;
    eax = MEM32(esp + 0x594);
    fp_push(MEMF(esp + 0x454)); /* fld float */
    edx = MEM32(esp + 0x30);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0xC4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0xCC);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xD0);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0xD4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xD8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xDC);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0xE0);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xE4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xE8);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0xEC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0xF0);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000C0212: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C02FF; /* je: equal / zero */

loc_000C0220: ;
    eax = MEM32(esp + 0x598);
    fp_push(MEMF(esp + 0x3A0)); /* fld float */
    edx = MEM32(esp + 0x30);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0xF4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xF8);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0xFC);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x100);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x104);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x108);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x10C);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x110);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x114);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x118);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x11C);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x120);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000C02FF: ;
    eax = MEM32(ebp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C03FB; /* je: equal / zero */

loc_000C030D: ;
    eax = MEM32(esp + 0x59C);
    fp_push(MEMF(esp + 0x508)); /* fld float */
    edx = MEM32(esp + 0x124);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x128);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x12C);
    ecx = MEM32(esp + 0x130);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x134);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x138);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x13C);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x140);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x144);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x148);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x14C);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x150);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x6C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x74);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x84);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x8C);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x90);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;

loc_000C03FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C0408
 * Original: 0x000C0408 - 0x000C040F (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0408: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000C040C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */

    g_seh_ebp = ebp; sub_000C040F(); return; /* fallthrough 0x000C040F */

}

/**
 * sub_000C040F
 * Original: 0x000C040F - 0x000C0428 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C040F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C040F: ;
    if (_flags /* je: equal / zero */) { g_seh_ebp = ebp; sub_000C0441(); return; }

loc_000C0411: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000C0415: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000C041A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0428(); return; } /* je: equal / zero */

loc_000C041E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0441(); return; } /* je: equal / zero */

loc_000C0424: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C0438(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000C0428(); return; /* fallthrough 0x000C0428 */

}

/**
 * sub_000C0428
 * Original: 0x000C0428 - 0x000C0438 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0428: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x181A;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C0438
 * Original: 0x000C0438 - 0x000C0441 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0438: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000BFF08(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000C0441(); return; /* fallthrough 0x000C0441 */

}

/**
 * sub_000C0441
 * Original: 0x000C0441 - 0x000C0451 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0441(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0441: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17ED;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C0451
 * Original: 0x000C0451 - 0x000C0460 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0451(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0451: ;
    eax = 0x17D4;
    _fb = (uint32_t)(0x55C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x55C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C0460
 * Original: 0x000C0460 - 0x000C0483 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0460: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x3000003;
    eax = ZX16(MEM16(esp + 4));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C047D; /* je: equal / zero */

loc_000C0472: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C047D; /* je: equal / zero */

loc_000C0475: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C047D; /* je: equal / zero */

loc_000C047A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C047D: ;
    eax = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0490
 * Original: 0x000C0490 - 0x000C04A8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0490: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C04A4; /* je: equal / zero */

loc_000C0494: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x8012);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C04A1u); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C04A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C04A4: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C04B0
 * Original: 0x000C04B0 - 0x000C058E (222 bytes, 81 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000C04B0(void)
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

loc_000C04B0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x50);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM8(esp + 3) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000C04CE; /* jne: not equal / not zero */

loc_000C04C5: ;
    eax = 0x181A;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C04CE: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C04DE; /* jne: not equal / not zero */

loc_000C04D5: ;
    eax = 0x17F2;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C04DE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C04EB; /* jne: not equal / not zero */

loc_000C04E2: ;
    eax = 0x17ED;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C04EB: ;
    SET_LO16(ecx, MEM16(eax + 0xC));
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xE), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C04FE; /* jb: below (unsigned <) */

loc_000C04F5: ;
    eax = 0x1801;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C04FE: ;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C050D; /* jb: below (unsigned <) */

loc_000C0504: ;
    eax = 0x1806;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C050D: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x10));
    SET_LO8(ecx, 7);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C0521; /* jbe: below or equal (unsigned <=) */

loc_000C0517: ;
    eax = 0x17F7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C0521: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C0530; /* jbe: below or equal (unsigned <=) */

loc_000C0526: ;
    eax = 0x17FC;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C0530: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C054Cu); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000C054C: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C0556u); RECOMP_ABI_CALL(0x000CA100u, sub_000CA100); /* call 0x000CA100 */

loc_000C0556: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000C057B; /* jp: parity */

loc_000C0566: ;
    eax = MEM32(esp + 0x58);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C057B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    eax = MEM32(esp + 0x58);
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C050C
 * Original: 0x000C050C - 0x000C058E (130 bytes, 50 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000C050C(void)
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

loc_000C050C: ;
    esp += 4; return; /* ret */

    eax = 0x17F7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C0521: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C0530; /* jbe: below or equal (unsigned <=) */

loc_000C0526: ;
    eax = 0x17FC;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C0530: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C054Cu); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000C054C: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C0556u); RECOMP_ABI_CALL(0x000CA100u, sub_000CA100); /* call 0x000CA100 */

loc_000C0556: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000C057B; /* jp: parity */

loc_000C0566: ;
    eax = MEM32(esp + 0x58);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C057B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    eax = MEM32(esp + 0x58);
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C0590
 * Original: 0x000C0590 - 0x000C0607 (119 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0590: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C05A0; /* jne: not equal / not zero */

loc_000C0599: ;
    eax = 0x181A;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C05A0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C05FF; /* je: equal / zero */

loc_000C05A7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C05FF; /* jne: not equal / not zero */

loc_000C05AF: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C05BD; /* je: equal / zero */

loc_000C05B5: ;
    POP32(esp, esi);
    eax = 0x17E3;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C05BD: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x000C05CCu); RECOMP_ABI_CALL(0x000C7EC0u, sub_000C7EC0); /* call 0x000C7EC0 */

loc_000C05CC: ;
    eax = esi + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C05E6; /* je: equal / zero */

loc_000C05D6: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x8012);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C05E3u); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C05E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C05E6: ;
    PUSH32(esp, 0x8010);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C05F1u); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C05F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C05FF: ;
    POP32(esp, esi);
    eax = 0x17D4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0610
 * Original: 0x000C0610 - 0x000C0697 (135 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C061E; /* jne: not equal / not zero */

loc_000C0618: ;
    eax = 0x181A;
    esp += 4; return; /* ret */

loc_000C061E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0690; /* je: equal / zero */

loc_000C0625: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFACE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFACE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0690; /* jne: not equal / not zero */

loc_000C062D: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C063A; /* je: equal / zero */

loc_000C0633: ;
    eax = 0x17E3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C063A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, ebx);
    MEM32(esi) = 0;
    PUSH32(esp, 0x000C064Eu); RECOMP_ABI_CALL(0x000C92D0u, sub_000C92D0); /* call 0x000C92D0 */

loc_000C064E: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x8011);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C065Cu); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C065C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C0662u); RECOMP_ABI_CALL(0x000C9450u, sub_000C9450); /* call 0x000C9450 */

loc_000C0662: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C067E; /* je: equal / zero */

loc_000C066E: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x8012);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C067Bu); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C067B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C067E: ;
    PUSH32(esp, 0x8010);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C0689u); RECOMP_ABI_CALL(0x000CA0B0u, sub_000CA0B0); /* call 0x000CA0B0 */

loc_000C0689: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C0690: ;
    eax = 0x17D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C06A0
 * Original: 0x000C06A0 - 0x000C06AD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C06A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C06A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xC0460;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}
