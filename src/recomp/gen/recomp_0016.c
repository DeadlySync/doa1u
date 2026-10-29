/**
 * DOAU1 - Recompiled code chunk 16
 * Functions: 250 (0x000989B9 - 0x000A0002)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000989B9
 * Original: 0x000989B9 - 0x00099706 (3405 bytes, 129 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000989B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000989B9: ;
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000989C6u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000989C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x000989D3u); RECOMP_ABI_CALL(0x00096650u, sub_00096650); /* call 0x00096650 */

loc_000989D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00098A84; /* jae: above or equal (unsigned >=) */

loc_000989E0: ;
    edi = esi + esi * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_000989F0: ;
    edx = MEM32(esp + 0xD8);
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + edi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098A2D; /* je: equal / zero */

loc_00098A09: ;
    PUSH32(esp, 0x00098A0Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00098A0E: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00098A17u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098A17: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    ebx = ebp;
    PUSH32(esp, 0x00098A25u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00098A25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098A4A;

loc_00098A2D: ;
    PUSH32(esp, 0x00098A32u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098A32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098A3D; /* je: equal / zero */

loc_00098A36: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00098A4A;

loc_00098A3D: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00098A4A: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_000989F0; /* jne: not equal / not zero */

loc_00098A58: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098A84; /* je: equal / zero */

loc_00098A60: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098A73u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00098A73: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x00098A7Eu); RECOMP_ABI_CALL(0x00097AC0u, sub_00097AC0); /* call 0x00097AC0 */

loc_00098A7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098A84: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000996FB; /* jle: less or equal (signed <=) */

loc_00098A92: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00098A95: ;
    PUSH32(esp, 0x00098A9Au); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AA2; /* je: equal / zero */

loc_00098A9E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098ACB;

loc_00098AA2: ;
    ecx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098AB2u); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00098AB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AC4; /* je: equal / zero */

loc_00098AB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098ABFu); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_00098ABF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098AC9;

loc_00098AC4: ;
    PUSH32(esp, 0x00098AC9u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00098AC9: ;
    ebx = eax;

loc_00098ACB: ;
    PUSH32(esp, 0x00098AD0u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AE8; /* je: equal / zero */

loc_00098AD4: ;
    edx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00098AE5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00098ADFu); } /* indirect call */
    }

loc_00098AE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098AE8: ;
    MEM32(esp + 0x7C) = eax;
    eax = esp + 0x54;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, eax);
    ebx = ebp;
    MEM32(esp + 0x64) = 0x19;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x80) = 4;
    MEM32(esp + 0x94) = esi;
    MEM32(esp + 0x98) = esi;
    MEM32(esp + 0xA4) = esi;
    PUSH32(esp, 0x00098B28u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00098B28: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098A95; /* jl: less (signed <) */

loc_00098B3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000989F0
 * Original: 0x000989F0 - 0x00098A84 (148 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000989F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000989F0: ;
    edx = MEM32(esp + 0xD8);
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + edi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098A2D; /* je: equal / zero */

loc_00098A09: ;
    PUSH32(esp, 0x00098A0Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00098A0E: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00098A17u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098A17: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    ebx = ebp;
    PUSH32(esp, 0x00098A25u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00098A25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098A4A;

loc_00098A2D: ;
    PUSH32(esp, 0x00098A32u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098A32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098A3D; /* je: equal / zero */

loc_00098A36: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00098A4A;

loc_00098A3D: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00098A4A: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_000989F0; /* jne: not equal / not zero */

loc_00098A58: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00098A84(); return; } /* je: equal / zero */

loc_00098A60: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098A73u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00098A73: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x00098A7Eu); RECOMP_ABI_CALL(0x00097AC0u, sub_00097AC0); /* call 0x00097AC0 */

loc_00098A7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00098A84(); return; /* fallthrough 0x00098A84 */

}

/**
 * sub_00098A84
 * Original: 0x00098A84 - 0x00098B46 (194 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098A84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098A84: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* jle: less or equal (signed <=) */

loc_00098A92: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00098A95: ;
    PUSH32(esp, 0x00098A9Au); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AA2; /* je: equal / zero */

loc_00098A9E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098ACB;

loc_00098AA2: ;
    ecx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098AB2u); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00098AB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AC4; /* je: equal / zero */

loc_00098AB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098ABFu); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_00098ABF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098AC9;

loc_00098AC4: ;
    PUSH32(esp, 0x00098AC9u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00098AC9: ;
    ebx = eax;

loc_00098ACB: ;
    PUSH32(esp, 0x00098AD0u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AE8; /* je: equal / zero */

loc_00098AD4: ;
    edx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00098AE5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00098ADFu); } /* indirect call */
    }

loc_00098AE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098AE8: ;
    MEM32(esp + 0x7C) = eax;
    eax = esp + 0x54;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, eax);
    ebx = ebp;
    MEM32(esp + 0x64) = 0x19;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x80) = 4;
    MEM32(esp + 0x94) = esi;
    MEM32(esp + 0x98) = esi;
    MEM32(esp + 0xA4) = esi;
    PUSH32(esp, 0x00098B28u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00098B28: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098A95; /* jl: less (signed <) */

loc_00098B3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00098B46
 * Original: 0x00098B46 - 0x00099706 (3008 bytes, 133 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098B46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098B46: ;
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00098B53u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_00098B53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00098B60u); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_00098B60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00098C17; /* jae: above or equal (unsigned >=) */

loc_00098B6D: ;
    edi = esi + esi * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_00098B80: ;
    edx = MEM32(esp + 0xD8);
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + edi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098BBD; /* je: equal / zero */

loc_00098B99: ;
    PUSH32(esp, 0x00098B9Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00098B9E: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00098BA7u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098BA7: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    ebx = ebp;
    PUSH32(esp, 0x00098BB5u); RECOMP_ABI_CALL(0x00096C70u, sub_00096C70); /* call 0x00096C70 */

loc_00098BB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098BDA;

loc_00098BBD: ;
    PUSH32(esp, 0x00098BC2u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098BC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098BCD; /* je: equal / zero */

loc_00098BC6: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00098BDA;

loc_00098BCD: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00098BDA: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00098B80; /* jne: not equal / not zero */

loc_00098BE8: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098C17; /* je: equal / zero */

loc_00098BF0: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098C04u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00098C04: ;
    edx = MEM32(esp + 0x28);
    ebx = ebp;
    ecx = eax;
    PUSH32(esp, 0x00098C11u); RECOMP_ABI_CALL(0x00097B10u, sub_00097B10); /* call 0x00097B10 */

loc_00098C11: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098C17: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000996FB; /* jle: less or equal (signed <=) */

loc_00098C25: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00098C28: ;
    PUSH32(esp, 0x00098C2Du); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098C2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098C35; /* je: equal / zero */

loc_00098C31: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098C5E;

loc_00098C35: ;
    ecx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098C45u); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00098C45: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098C57; /* je: equal / zero */

loc_00098C4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098C52u); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_00098C52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098C5C;

loc_00098C57: ;
    PUSH32(esp, 0x00098C5Cu); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00098C5C: ;
    ebx = eax;

loc_00098C5E: ;
    PUSH32(esp, 0x00098C63u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098C63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098C7B; /* je: equal / zero */

loc_00098C67: ;
    edx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00098C78u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00098C72u); } /* indirect call */
    }

loc_00098C78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098C7B: ;
    MEM32(esp + 0xAC) = eax;
    eax = esp + 0x54;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, eax);
    ebx = ebp;
    MEM32(esp + 0x64) = 0x19;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x94) = esi;
    MEM32(esp + 0xA4) = esi;
    MEM32(esp + 0xB0) = 4;
    MEM32(esp + 0xC4) = esi;
    MEM32(esp + 0xC8) = esi;
    MEM32(esp + 0xD4) = esi;
    PUSH32(esp, 0x00098CD3u); RECOMP_ABI_CALL(0x00096C70u, sub_00096C70); /* call 0x00096C70 */

loc_00098CD3: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098C28; /* jl: less (signed <) */

loc_00098CE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00098CF1
 * Original: 0x00098CF1 - 0x00099706 (2581 bytes, 137 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098CF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098CF1: ;
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00098CFEu); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_00098CFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00098D0Bu); RECOMP_ABI_CALL(0x000967C0u, sub_000967C0); /* call 0x000967C0 */

loc_00098D0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00098DCE; /* jae: above or equal (unsigned >=) */

loc_00098D18: ;
    edi = esi + esi * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebx;
    goto loc_00098D30;

loc_00098D30: ;
    edx = MEM32(esp + 0xD8);
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + edi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098D7C; /* je: equal / zero */

loc_00098D49: ;
    PUSH32(esp, 0x00098D4Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00098D4E: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00098D57u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098D57: ;
    ecx = MEM32(esp + 0xF4);
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00098D74u); RECOMP_ABI_CALL(0x000971E0u, sub_000971E0); /* call 0x000971E0 */

loc_00098D74: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098D99;

loc_00098D7C: ;
    PUSH32(esp, 0x00098D81u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098D81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098D8C; /* je: equal / zero */

loc_00098D85: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00098D99;

loc_00098D8C: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00098D99: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00098D30; /* jne: not equal / not zero */

loc_00098DA7: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098DCE; /* je: equal / zero */

loc_00098DAF: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x00098DC8u); RECOMP_ABI_CALL(0x00097B70u, sub_00097B70); /* call 0x00097B70 */

loc_00098DC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098DCE: ;
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000996FB; /* jle: less or equal (signed <=) */

loc_00098DDC: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_00098DE0: ;
    PUSH32(esp, 0x00098DE5u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098DE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098DED; /* je: equal / zero */

loc_00098DE9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098E16;

loc_00098DED: ;
    ecx = MEM32(esp + ebx * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098DFDu); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00098DFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098E0F; /* je: equal / zero */

loc_00098E04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098E0Au); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_00098E0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098E14;

loc_00098E0F: ;
    PUSH32(esp, 0x00098E14u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00098E14: ;
    edi = eax;

loc_00098E16: ;
    PUSH32(esp, 0x00098E1Bu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098E1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098E33; /* je: equal / zero */

loc_00098E1F: ;
    edx = MEM32(esp + ebx * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00098E30u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00098E2Au); } /* indirect call */
    }

loc_00098E30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098E33: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x94) = eax;
    eax = MEM32(esp + 0xF4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x70) = 0x19;
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x90) = esi;
    MEM32(esp + 0x9C) = 4;
    MEM32(esp + 0xB0) = esi;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xC0) = esi;
    PUSH32(esp, 0x00098E89u); RECOMP_ABI_CALL(0x000971E0u, sub_000971E0); /* call 0x000971E0 */

loc_00098E89: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098DE0; /* jl: less (signed <) */

loc_00098E9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00098EA7
 * Original: 0x00098EA7 - 0x00099706 (2143 bytes, 138 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098EA7: ;
    edx = MEM32(esp + 0xE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00098EB4u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_00098EB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00098EC1u); RECOMP_ABI_CALL(0x00096860u, sub_00096860); /* call 0x00096860 */

loc_00098EC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00098F88; /* jae: above or equal (unsigned >=) */

loc_00098ECE: ;
    edi = esi + esi * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0xF4);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = ebx;
    goto loc_00098EF0;

loc_00098EF0: ;
    eax = MEM32(esp + 0xD8);
    ebx = MEM32(eax + 0x24);
    ecx = MEM32(ebx + edi + 0x14);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00098F31; /* je: equal / zero */

loc_00098F09: ;
    PUSH32(esp, 0x00098F0Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00098F0E: ;
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x00098F17u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098F17: ;
    ebx = MEM32(ebx + 0x14);
    ecx = edi;
    edi = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098F25u); RECOMP_ABI_CALL(0x000974C0u, sub_000974C0); /* call 0x000974C0 */

loc_00098F25: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098F4E;

loc_00098F31: ;
    PUSH32(esp, 0x00098F36u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00098F36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098F41; /* je: equal / zero */

loc_00098F3A: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00098F4E;

loc_00098F41: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00098F4E: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00098EF0; /* jne: not equal / not zero */

loc_00098F60: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098F88; /* je: equal / zero */

loc_00098F68: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    edi = ebp;
    PUSH32(esp, 0x00098F82u); RECOMP_ABI_CALL(0x00097BC0u, sub_00097BC0); /* call 0x00097BC0 */

loc_00098F82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098F88: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000996FB; /* jle: less or equal (signed <=) */

loc_00098F9C: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_00098FA0: ;
    PUSH32(esp, 0x00098FA5u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098FA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098FAD; /* je: equal / zero */

loc_00098FA9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098FDA;

loc_00098FAD: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + ecx * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098FC1u); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00098FC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098FD3; /* je: equal / zero */

loc_00098FC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098FCEu); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_00098FCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00098FD8;

loc_00098FD3: ;
    PUSH32(esp, 0x00098FD8u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00098FD8: ;
    edi = eax;

loc_00098FDA: ;
    PUSH32(esp, 0x00098FDFu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00098FDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098FFB; /* je: equal / zero */

loc_00098FE3: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + eax * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00098FF8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00098FF2u); } /* indirect call */
    }

loc_00098FF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098FFB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0);
    edi = ebp;
    ebx = esp + 0x5C;
    MEM32(esp + 0x64) = 0x19;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x90) = 4;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xA4) = esi;
    MEM32(esp + 0xA8) = esi;
    MEM32(esp + 0xB4) = esi;
    PUSH32(esp, 0x00099046u); RECOMP_ABI_CALL(0x000974C0u, sub_000974C0); /* call 0x000974C0 */

loc_00099046: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00098FA0; /* jl: less (signed <) */

loc_00099061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009906C
 * Original: 0x0009906C - 0x00099706 (1690 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009906C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009906C: ;
    edx = MEM32(esp + 0xE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099079u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_00099079: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099086u); RECOMP_ABI_CALL(0x00096920u, sub_00096920); /* call 0x00096920 */

loc_00099086: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00099130; /* jae: above or equal (unsigned >=) */

loc_00099093: ;
    edi = esi + esi * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ebx;
    /* nop */

loc_000990A0: ;
    eax = MEM32(esp + 0xD8);
    esi = MEM32(eax + 0x24);
    ecx = MEM32(esi + edi + 0x14);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000990DD; /* je: equal / zero */

loc_000990B9: ;
    PUSH32(esp, 0x000990BEu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_000990BE: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x000990C7u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_000990C7: ;
    edx = MEM32(esi + 0x14);
    ecx = ebx;
    ebx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000990D5u); RECOMP_ABI_CALL(0x00096F60u, sub_00096F60); /* call 0x00096F60 */

loc_000990D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000990FA;

loc_000990DD: ;
    PUSH32(esp, 0x000990E2u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_000990E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000990ED; /* je: equal / zero */

loc_000990E6: ;
    MEM8(esp + 0x13) = 1;
    goto loc_000990FA;

loc_000990ED: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000990FA: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000990A0; /* jne: not equal / not zero */

loc_00099108: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099130; /* je: equal / zero */

loc_00099110: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    SET_LO8(edx, 1);
    ebx = ebp;
    PUSH32(esp, 0x0009912Au); RECOMP_ABI_CALL(0x00097C10u, sub_00097C10); /* call 0x00097C10 */

loc_0009912A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099130: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000996FB; /* jle: less or equal (signed <=) */

loc_0009913E: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00099141: ;
    PUSH32(esp, 0x00099146u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009914E; /* je: equal / zero */

loc_0009914A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00099177;

loc_0009914E: ;
    edx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009915Eu); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_0009915E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099170; /* je: equal / zero */

loc_00099165: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009916Bu); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_0009916B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00099175;

loc_00099170: ;
    PUSH32(esp, 0x00099175u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00099175: ;
    ebx = eax;

loc_00099177: ;
    PUSH32(esp, 0x0009917Cu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0009917C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099194; /* je: equal / zero */

loc_00099180: ;
    ecx = MEM32(esp + edi * 4 + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x23A398); PUSH32(esp, 0x00099191u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0009918Bu); } /* indirect call */
    }

loc_00099191: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099194: ;
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = ebp;
    ecx = eax;
    PUSH32(esp, 0x000991A8u); RECOMP_ABI_CALL(0x00097C10u, sub_00097C10); /* call 0x00097C10 */

loc_000991A8: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00099141; /* jl: less (signed <) */

loc_000991B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000991C2
 * Original: 0x000991C2 - 0x00099420 (606 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000991C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000991C2: ;
    esi = MEM32(esp + 0xE8);
    ebx = MEM32(esp + 0xD8);
    eax = MEM32(esp + 0xDC);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    esi = 0x84;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* ja: above (unsigned >) */

loc_000991EA: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x99720); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000991F1u) goto loc_000991F1;
    if (_jt == 0x000992EDu) goto loc_000992ED;
    if (_jt == 0x000993E5u) goto loc_000993E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000991F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000991F7u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000991F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099204u); RECOMP_ABI_CALL(0x00096650u, sub_00096650); /* call 0x00096650 */

loc_00099204: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_000992A4; /* jbe: below or equal (unsigned <=) */

loc_00099216: ;
    MEM32(esp + 0x14) = 0;
    ebp = ebx;
    MEM32(esp + 0x20) = eax;
    goto loc_00099230;

    /* nop */
    /* nop */

loc_00099230: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099243u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099251; /* je: equal / zero */

loc_00099247: ;
    MEM32(esp + 0x18) = 0;
    goto loc_00099258;

loc_00099251: ;
    edx = edi + 0xC;
    MEM32(esp + 0x18) = edx;

loc_00099258: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099262u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099262: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099276; /* jne: not equal / not zero */

loc_00099268: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099276; /* jne: not equal / not zero */

loc_0009926F: ;
    eax = 1;
    goto loc_00099278;

loc_00099276: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099278: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x00099285u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00099285: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x50;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00099230; /* jne: not equal / not zero */

loc_000992A4: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000992B3: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000992C1: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000992D4u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000992D4: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x000992DFu); RECOMP_ABI_CALL(0x00097AC0u, sub_00097AC0); /* call 0x00097AC0 */

loc_000992DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000992ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000992F3u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000992F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099300u); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_00099300: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_00099399; /* jbe: below or equal (unsigned <=) */

loc_00099312: ;
    edx = eax;
    MEM32(esp + 0x14) = 0;
    ebp = ebx;
    MEM32(esp + 0x20) = edx;

loc_00099322: ;
    eax = MEM32(esp + 0xD8);
    edi = MEM32(eax + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099335u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099343; /* je: equal / zero */

loc_00099339: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0009934A;

loc_00099343: ;
    ecx = edi + 0xC;
    MEM32(esp + 0x18) = ecx;

loc_0009934A: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099354u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099354: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099368; /* jne: not equal / not zero */

loc_0009935A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099368; /* jne: not equal / not zero */

loc_00099361: ;
    eax = 1;
    goto loc_0009936A;

loc_00099368: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009936A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x00099377u); RECOMP_ABI_CALL(0x00096C70u, sub_00096C70); /* call 0x00096C70 */

loc_00099377: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00099322; /* jne: not equal / not zero */

loc_00099399: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000993A8: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000993B6: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000993CAu); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000993CA: ;
    edx = MEM32(esp + 0x28);
    ebx = esi;
    ecx = eax;
    PUSH32(esp, 0x000993D7u); RECOMP_ABI_CALL(0x00097B10u, sub_00097B10); /* call 0x00097B10 */

loc_000993D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000993E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000993EBu); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000993EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x000993F8u); RECOMP_ABI_CALL(0x000967C0u, sub_000967C0); /* call 0x000967C0 */

loc_000993F8: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0009949D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0009940A: ;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    g_seh_ebp = ebp; sub_00099420(); return; /* tail jmp 0x00099420 */

    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00099420(); return; /* fallthrough 0x00099420 */

}

/**
 * sub_000991F1
 * Original: 0x000991F1 - 0x00099706 (1301 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000991F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000991F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000991F7u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000991F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099204u); RECOMP_ABI_CALL(0x00096650u, sub_00096650); /* call 0x00096650 */

loc_00099204: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_000992A4; /* jbe: below or equal (unsigned <=) */

loc_00099216: ;
    MEM32(esp + 0x14) = 0;
    ebp = ebx;
    MEM32(esp + 0x20) = eax;
    goto loc_00099230;

loc_00099230: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099243u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099251; /* je: equal / zero */

loc_00099247: ;
    MEM32(esp + 0x18) = 0;
    goto loc_00099258;

loc_00099251: ;
    edx = edi + 0xC;
    MEM32(esp + 0x18) = edx;

loc_00099258: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099262u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099262: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099276; /* jne: not equal / not zero */

loc_00099268: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099276; /* jne: not equal / not zero */

loc_0009926F: ;
    eax = 1;
    goto loc_00099278;

loc_00099276: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099278: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x00099285u); RECOMP_ABI_CALL(0x00096A70u, sub_00096A70); /* call 0x00096A70 */

loc_00099285: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x50;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00099230; /* jne: not equal / not zero */

loc_000992A4: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000992B3: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000992C1: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000992D4u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000992D4: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x000992DFu); RECOMP_ABI_CALL(0x00097AC0u, sub_00097AC0); /* call 0x00097AC0 */

loc_000992DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000992ED
 * Original: 0x000992ED - 0x00099706 (1049 bytes, 78 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000992ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000992ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000992F3u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000992F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099300u); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_00099300: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_00099399; /* jbe: below or equal (unsigned <=) */

loc_00099312: ;
    edx = eax;
    MEM32(esp + 0x14) = 0;
    ebp = ebx;
    MEM32(esp + 0x20) = edx;

loc_00099322: ;
    eax = MEM32(esp + 0xD8);
    edi = MEM32(eax + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099335u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099343; /* je: equal / zero */

loc_00099339: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0009934A;

loc_00099343: ;
    ecx = edi + 0xC;
    MEM32(esp + 0x18) = ecx;

loc_0009934A: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099354u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099354: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099368; /* jne: not equal / not zero */

loc_0009935A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099368; /* jne: not equal / not zero */

loc_00099361: ;
    eax = 1;
    goto loc_0009936A;

loc_00099368: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009936A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x00099377u); RECOMP_ABI_CALL(0x00096C70u, sub_00096C70); /* call 0x00096C70 */

loc_00099377: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00099322; /* jne: not equal / not zero */

loc_00099399: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000993A8: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000993B6: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000993CAu); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000993CA: ;
    edx = MEM32(esp + 0x28);
    ebx = esi;
    ecx = eax;
    PUSH32(esp, 0x000993D7u); RECOMP_ABI_CALL(0x00097B10u, sub_00097B10); /* call 0x00097B10 */

loc_000993D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000993E5
 * Original: 0x000993E5 - 0x00099706 (801 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000993E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000993E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000993EBu); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000993EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x000993F8u); RECOMP_ABI_CALL(0x000967C0u, sub_000967C0); /* call 0x000967C0 */

loc_000993F8: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_0009949D; /* jbe: below or equal (unsigned <=) */

loc_0009940A: ;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    goto loc_00099420;

loc_00099420: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099433u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009943B; /* je: equal / zero */

loc_00099437: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009943E;

loc_0009943B: ;
    ebp = edi + 0xC;

loc_0009943E: ;
    edx = MEM32(edi);
    edi = MEM32(edi + 4);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x0009944Cu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0009944C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099462; /* jne: not equal / not zero */

loc_00099454: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099462; /* jne: not equal / not zero */

loc_0009945B: ;
    eax = 1;
    goto loc_00099464;

loc_00099462: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099464: ;
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0009947Eu); RECOMP_ABI_CALL(0x000971E0u, sub_000971E0); /* call 0x000971E0 */

loc_0009947E: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00099420; /* jne: not equal / not zero */

loc_0009949D: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000994AC: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000994BA: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x000994D3u); RECOMP_ABI_CALL(0x00097B70u, sub_00097B70); /* call 0x00097B70 */

loc_000994D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099420
 * Original: 0x00099420 - 0x0009949D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099420: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099433u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009943B; /* je: equal / zero */

loc_00099437: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009943E;

loc_0009943B: ;
    ebp = edi + 0xC;

loc_0009943E: ;
    edx = MEM32(edi);
    edi = MEM32(edi + 4);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x0009944Cu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0009944C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099462; /* jne: not equal / not zero */

loc_00099454: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099462; /* jne: not equal / not zero */

loc_0009945B: ;
    eax = 1;
    goto loc_00099464;

loc_00099462: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099464: ;
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0009947Eu); RECOMP_ABI_CALL(0x000971E0u, sub_000971E0); /* call 0x000971E0 */

loc_0009947E: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00099420; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0009949D(); return; /* fallthrough 0x0009949D */

}

/**
 * sub_0009949D
 * Original: 0x0009949D - 0x000994E1 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009949D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009949D: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000994AC: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000996FB(); return; } /* je: equal / zero */

loc_000994BA: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0xEC);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    PUSH32(esp, 0x000994D3u); RECOMP_ABI_CALL(0x00097B70u, sub_00097B70); /* call 0x00097B70 */

loc_000994D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000994E1
 * Original: 0x000994E1 - 0x00099706 (549 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000994E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000994E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000994E7u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_000994E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x000994F4u); RECOMP_ABI_CALL(0x00096860u, sub_00096860); /* call 0x00096860 */

loc_000994F4: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_00099595; /* jbe: below or equal (unsigned <=) */

loc_00099506: ;
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = ecx;
    goto loc_00099520;

loc_00099520: ;
    edx = MEM32(esp + 0xD8);
    edi = MEM32(edx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099533u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099533: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009953B; /* je: equal / zero */

loc_00099537: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009953E;

loc_0009953B: ;
    ebp = edi + 0xC;

loc_0009953E: ;
    eax = MEM32(edi);
    edi = MEM32(edi + 4);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0009954Cu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0009954C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099562; /* jne: not equal / not zero */

loc_00099554: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099562; /* jne: not equal / not zero */

loc_0009955B: ;
    eax = 1;
    goto loc_00099564;

loc_00099562: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099564: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, eax);
    ecx = ebp;
    edi = esi;
    PUSH32(esp, 0x00099576u); RECOMP_ABI_CALL(0x000974C0u, sub_000974C0); /* call 0x000974C0 */

loc_00099576: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00099520; /* jne: not equal / not zero */

loc_00099595: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000995A4: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000995B2: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    edi = esi;
    PUSH32(esp, 0x000995CCu); RECOMP_ABI_CALL(0x00097BC0u, sub_00097BC0); /* call 0x00097BC0 */

loc_000995CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000995DA
 * Original: 0x000995DA - 0x0009961F (69 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000995DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000995DA: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000995EA; /* je: equal / zero */

loc_000995E5: ;
    ebx = MEM32(ebx + 0x28);
    goto loc_000995EC;

loc_000995EA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000995EC: ;
    eax = MEM32(esp + 0xF8);
    ecx = MEM32(esp + 0xEC);
    edx = MEM32(esp + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00099611u); RECOMP_ABI_CALL(0x00098670u, sub_00098670); /* call 0x00098670 */

loc_00099611: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009961F
 * Original: 0x0009961F - 0x00099706 (231 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009961F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009961F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099625u); RECOMP_ABI_CALL(0x00096540u, sub_00096540); /* call 0x00096540 */

loc_00099625: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x69;
    PUSH32(esp, 0x00099632u); RECOMP_ABI_CALL(0x00096920u, sub_00096920); /* call 0x00096920 */

loc_00099632: ;
    eax = MEM32(esp + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x28);
    if (CMP_BE(_fa, _fb)) goto loc_000996C9; /* jbe: below or equal (unsigned <=) */

loc_00099644: ;
    MEM32(esp + 0x14) = 0;
    ebp = ebx;
    MEM32(esp + 0x20) = eax;

loc_00099652: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099665u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099673; /* je: equal / zero */

loc_00099669: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0009967A;

loc_00099673: ;
    edx = edi + 0xC;
    MEM32(esp + 0x18) = edx;

loc_0009967A: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099684u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099684: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099698; /* jne: not equal / not zero */

loc_0009968A: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099698; /* jne: not equal / not zero */

loc_00099691: ;
    eax = 1;
    goto loc_0009969A;

loc_00099698: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009969A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x000996A7u); RECOMP_ABI_CALL(0x00096F60u, sub_00096F60); /* call 0x00096F60 */

loc_000996A7: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00099652; /* jne: not equal / not zero */

loc_000996C9: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000996D4: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000996DE: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    SET_LO8(edx, 1);
    ebx = esi;
    PUSH32(esp, 0x000996F8u); RECOMP_ABI_CALL(0x00097C10u, sub_00097C10); /* call 0x00097C10 */

loc_000996F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099652
 * Original: 0x00099652 - 0x000996C2 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099652(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099652: ;
    ecx = MEM32(esp + 0xD8);
    edi = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099665u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00099665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099673; /* je: equal / zero */

loc_00099669: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0009967A;

loc_00099673: ;
    edx = edi + 0xC;
    MEM32(esp + 0x18) = edx;

loc_0009967A: ;
    ebx = MEM32(edi);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0x00099684u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00099684: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099698; /* jne: not equal / not zero */

loc_0009968A: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099698; /* jne: not equal / not zero */

loc_00099691: ;
    eax = 1;
    goto loc_0009969A;

loc_00099698: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009969A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x000996A7u); RECOMP_ABI_CALL(0x00096F60u, sub_00096F60); /* call 0x00096F60 */

loc_000996A7: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_000996C2(); return; /* fallthrough 0x000996C2 */

}

/**
 * sub_000996C2
 * Original: 0x000996C2 - 0x00099706 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000996C2: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x89) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00099652(); return; } /* jne: not equal / not zero */

loc_000996C9: ;
    eax = MEM32(esp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000996D4: ;
    _fa = (uint32_t)(MEM32(esp + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xE0), 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000996FB; /* je: equal / zero */

loc_000996DE: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    SET_LO8(edx, 1);
    ebx = esi;
    PUSH32(esp, 0x000996F8u); RECOMP_ABI_CALL(0x00097C10u, sub_00097C10); /* call 0x00097C10 */

loc_000996F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC4)) >> 32) & 1);
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000996FB
 * Original: 0x000996FB - 0x00099706 (11 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000996FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099750
 * Original: 0x00099750 - 0x00099769 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00099758u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099758: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00099762; /* jbe: below or equal (unsigned <=) */

loc_0009975F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_00099762: ;
    eax = ~eax;
    eax = eax + ecx + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00099770
 * Original: 0x00099770 - 0x000997D1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099770: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    SET_LO8(edx, 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000997A3; /* je: equal / zero */

loc_00099783: ;
    MEM32(0x923A44) = 0x16;

loc_0009978D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x0009979Bu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0009979B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_000997A0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000997A3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000997A0; /* je: equal / zero */

loc_000997AB: ;
    ecx = MEM32(0x923A44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000997C1; /* jne: not equal / not zero */

loc_000997B5: ;
    MEM32(0x923A44) = 8;
    goto loc_0009978D;

loc_000997C1: ;
    ecx = MEM32(0x923A44);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x923A44) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000997E0
 * Original: 0x000997E0 - 0x00099840 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000997E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000997E0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    edx = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00099816; /* je: equal / zero */

loc_000997F6: ;
    MEM32(0x923A48) = 0x16;

loc_00099800: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x0009980Eu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0009980E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_00099813: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00099816: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00099813; /* je: equal / zero */

loc_0009981E: ;
    ecx = MEM32(0x923A48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099830; /* jne: not equal / not zero */

loc_00099828: ;
    MEM32(0x923A48) = edx;
    goto loc_00099800;

loc_00099830: ;
    ecx = MEM32(0x923A48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x923A48) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099840
 * Original: 0x00099840 - 0x0009986B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099840: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00099855; /* jne: not equal / not zero */

loc_00099850: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009986A; /* je: equal / zero */

loc_00099855: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    esi = 1;
    PUSH32(esp, 0x00099864u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00099864: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_0009986A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00099870
 * Original: 0x00099870 - 0x0009989B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099870: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00099885; /* jne: not equal / not zero */

loc_00099880: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009989A; /* je: equal / zero */

loc_00099885: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E);
    esi = 1;
    PUSH32(esp, 0x00099894u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00099894: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_0009989A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000998A0
 * Original: 0x000998A0 - 0x000998D3 (51 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000998A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000998A0: ;
    ecx = MEM32(0x91E27C);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000998BF; /* jne: not equal / not zero */

loc_000998AF: ;
    PUSH32(esp, 0x000998B4u); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_000998B4: ;
    MEM32(0x923A3C) = 0;
    esp += 4; return; /* ret */

loc_000998BF: ;
    MEM32(0x923A3C) = eax;
    MEM32(0x923A40) = 0;
    g_seh_ebp = ebp; sub_00083670(); return; /* tail jmp 0x00083670 */

}

/**
 * sub_000998E0
 * Original: 0x000998E0 - 0x000999A2 (194 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000998E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000998E0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, 0x104);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM16(esp + 0x1E) = 0x104;
    MEM16(esp + 0x1C) = 0x14;
    MEM16(esp + 0x20) = LO16(esi);
    MEM16(esp + 0x22) = LO16(edi);
    MEM16(esp + 0x24) = LO16(ebx);
    MEM16(esp + 0x26) = LO16(ebp);
    MEM32(esp + 0x28) = 0x40000;
    MEM32(esp + 0x2C) = 0xFF002050u;
    PUSH32(esp, 0x00099946u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00099946: ;
    ecx = MEM32(esp + 0x5C);
    eax = 1;
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, 0x106);
    PUSH32(esp, edx);
    MEM16(esp + 0x3E) = 0x106;
    MEM16(esp + 0x3C) = 0x18;
    MEM16(esp + 0x40) = LO16(esi);
    MEM16(esp + 0x42) = LO16(edi);
    MEM16(esp + 0x44) = LO16(ebx);
    MEM16(esp + 0x46) = LO16(ebp);
    MEM32(esp + 0x48) = 0x60000;
    MEM32(esp + 0x4C) = ecx;
    MEM16(esp + 0x50) = LO16(eax);
    MEM16(esp + 0x52) = LO16(eax);
    PUSH32(esp, 0x00099997u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00099997: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000999B0
 * Original: 0x000999B0 - 0x00099AA6 (246 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000999B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000999B0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    ecx = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x66);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0xFFFFFF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x1D0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM16(esp + 0x24) = LO16(eax);
    eax = 0xFFFF8800u;
    ecx = esp + 0x20;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x105);
    esi = 0xA0;
    PUSH32(esp, ecx);
    MEM16(esp + 0x2A) = 0x105;
    MEM16(esp + 0x28) = 0x20;
    MEM16(esp + 0x2E) = 0xC80;
    MEM16(esp + 0x30) = LO16(edx);
    MEM16(esp + 0x32) = LO16(esi);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x34) = 0x40003;
    PUSH32(esp, 0x00099A47u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00099A47: ;
    eax = 1;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, 0x106);
    PUSH32(esp, edx);
    MEM16(esp + 0x1E) = 0x106;
    MEM16(esp + 0x1C) = 0x18;
    MEM16(esp + 0x20) = 0x1000;
    MEM16(esp + 0x22) = 0xC80;
    MEM16(esp + 0x24) = 0xD00;
    MEM16(esp + 0x26) = LO16(esi);
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    MEM16(esp + 0x30) = LO16(eax);
    MEM16(esp + 0x32) = LO16(eax);
    MEM32(esp + 0x28) = 0x60003;
    PUSH32(esp, 0x00099A9Eu); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00099A9E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099AB0
 * Original: 0x00099AB0 - 0x0009A251 (1953 bytes, 471 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099AB0: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xFC));
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x126);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x78);
    MEM32(esp + 0x11C) = eax;
    esi = 0x3E8;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x00099AE6u); RECOMP_ABI_CALL(0x000998E0u, sub_000998E0); /* call 0x000998E0 */

loc_00099AE6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099AEEu); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_00099AEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x923A3C);
    ebp = 2;
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00099B13; /* jne: not equal / not zero */

loc_00099B01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099B09; /* je: equal / zero */

loc_00099B05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099B13; /* jne: not equal / not zero */

loc_00099B09: ;
    eax = 7;
    MEM32(0x923A3C) = eax;

loc_00099B13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00099F9F; /* ja: above (unsigned >) */

loc_00099B1C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x9A254); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00099B23u) goto loc_00099B23;
    if (_jt == 0x00099B46u) goto loc_00099B46;
    if (_jt == 0x00099BF3u) goto loc_00099BF3;
    if (_jt == 0x00099CF5u) goto loc_00099CF5;
    if (_jt == 0x00099D17u) goto loc_00099D17;
    if (_jt == 0x00099E71u) goto loc_00099E71;
    if (_jt == 0x00099F5Du) goto loc_00099F5D;
    if (_jt == 0x00099F73u) goto loc_00099F73;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00099B23: ;
    _fa = (uint32_t)(MEM32(0x91E27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E27C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099F9F; /* jne: not equal / not zero */

loc_00099B30: ;
    MEM32(0x923A3C) = ebx;
    MEM32(0x923A40) = edi;
    PUSH32(esp, 0x00099B41u); RECOMP_ABI_CALL(0x00083670u, sub_00083670); /* call 0x00083670 */

loc_00099B41: ;
    goto loc_00099F9F;

loc_00099B46: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237E8) = 0x202;
    MEM32(0x923A40) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00099B8D; /* je: equal / zero */

loc_00099B61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12C0);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099B77u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099B77: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x24) = MEM32(esp + 0x24) | 0x20001000;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099B8Au); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099B8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099B8D: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099BAAu); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099BAA: ;
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20001000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x00099BC3u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099BC3: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099BD1u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_00099BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F88; /* je: equal / zero */

loc_00099BD9: ;
    PUSH32(esp, 0x00099BDEu); RECOMP_ABI_CALL(0x00084310u, sub_00084310); /* call 0x00084310 */

loc_00099BDE: ;
    MEM32(0x923A3C) = ebp;
    PUSH32(esp, 0x00099BE9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099BE9: ;
    MEM32(0x923A50) = eax;
    goto loc_00099F9F;

loc_00099BF3: ;
    MEM32(0x9237E8) = ebp;
    MEM32(0x923A40) = edi;
    PUSH32(esp, 0x00099C04u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099C04: ;
    ecx = MEM32(0x923A50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00099C12; /* jbe: below or equal (unsigned <=) */

loc_00099C0E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00099C18;

loc_00099C12: ;
    eax = ~eax;
    eax = eax + ecx + 1;

loc_00099C18: ;
    ecx = 0x3A98;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3A98 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x923A4C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00099C2E; /* jbe: below or equal (unsigned <=) */

loc_00099C2C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099C2E: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3E8);
    eax = 0x45E7B273;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edx;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xC) _cf = (int)(((esi) >> ((0xC) - 1)) & 1);
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x88)) >> 32) & 1);
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099C64u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00099C64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099C75u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00099C75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1490);
    PUSH32(esp, 0x1680);
    PUSH32(esp, edi);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099C95u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099C95: ;
    MEM8(esp + 0x24) = 5;
    eax = MEM32(esp + 0x24);
    edx = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20005000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00099CB2u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099CB2: ;
    eax = MEM32(0x91E27C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099CCE; /* jne: not equal / not zero */

loc_00099CBF: ;
    MEM32(0x923A3C) = 4;
    goto loc_00099F9F;

loc_00099CCE: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00099CD9u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_00099CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F9F; /* je: equal / zero */

loc_00099CE1: ;
    PUSH32(esp, 0x00099CE6u); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_00099CE6: ;
    MEM32(0x923A3C) = 3;
    goto loc_00099F9F;

loc_00099CF5: ;
    _fa = (uint32_t)(MEM32(0x91E27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E27C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099F9F; /* jne: not equal / not zero */

loc_00099D02: ;
    MEM32(0x923A40) = ebx;
    MEM32(0x923A3C) = 4;
    goto loc_00099F9F;

loc_00099D17: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237E8) = 0x202;
    if (CMP_EQ(_fa, _fb)) goto loc_00099D58; /* je: equal / zero */

loc_00099D2C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12C0);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099D42u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099D42: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x24) = MEM32(esp + 0x24) | 0x20001000;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099D55u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099D55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099D58: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099D75u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099D75: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x24) = MEM32(esp + 0x24) | 0x20001000;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099D88u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099D88: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00099D96u); RECOMP_ABI_CALL(0x000997E0u, sub_000997E0); /* call 0x000997E0 */

loc_00099D96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099DB2; /* je: equal / zero */

loc_00099D9A: ;
    _fa = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923A40), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099DAA; /* jne: not equal / not zero */

loc_00099DA2: ;
    MEM32(0x923A40) = edi;
    goto loc_00099DDC;

loc_00099DAA: ;
    eax = MEM32(0x923A40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00099DD7;

loc_00099DB2: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00099DBDu); RECOMP_ABI_CALL(0x00099770u, sub_00099770); /* call 0x00099770 */

loc_00099DBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099DDC; /* je: equal / zero */

loc_00099DC1: ;
    _fa = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923A40), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099DD1; /* jne: not equal / not zero */

loc_00099DC9: ;
    MEM32(0x923A40) = ebp;
    goto loc_00099DDC;

loc_00099DD1: ;
    eax = MEM32(0x923A40);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00099DD7: ;
    MEM32(0x923A40) = eax;

loc_00099DDC: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00099DE7u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_00099DE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F88; /* je: equal / zero */

loc_00099DEF: ;
    eax = MEM32(0x923A40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00099E39; /* je: equal / zero */

loc_00099DF8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00099E15; /* je: equal / zero */

loc_00099DFB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00099F9F; /* jne: not equal / not zero */

loc_00099E02: ;
    MEM32(esp + 0x10) = ebx;
    MEM32(0x923A40) = 0xFFFFFFFFu;
    goto loc_00099F9F;

loc_00099E15: ;
    PUSH32(esp, 0x00099E1Au); RECOMP_ABI_CALL(0x000842A0u, sub_000842A0); /* call 0x000842A0 */

loc_00099E1A: ;
    MEM32(0x923A3C) = 5;
    MEM32(0x923A40) = ebx;
    PUSH32(esp, 0x00099E2Fu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099E2F: ;
    MEM32(0x923A50) = eax;
    goto loc_00099F9F;

loc_00099E39: ;
    PUSH32(esp, 0x00099E3Eu); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_00099E3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099E51; /* jne: not equal / not zero */

loc_00099E42: ;
    MEM32(0x923A3C) = 7;
    goto loc_00099F9F;

loc_00099E51: ;
    PUSH32(esp, 0x00099E56u); RECOMP_ABI_CALL(0x00084310u, sub_00084310); /* call 0x00084310 */

loc_00099E56: ;
    MEM32(0x923A3C) = ebp;
    MEM32(0x923A40) = edi;
    PUSH32(esp, 0x00099E67u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099E67: ;
    MEM32(0x923A50) = eax;
    goto loc_00099F9F;

loc_00099E71: ;
    MEM32(0x9237E8) = ebp;
    MEM32(0x923A40) = ebx;
    PUSH32(esp, 0x00099E82u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00099E82: ;
    ecx = MEM32(0x923A50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00099E90; /* jbe: below or equal (unsigned <=) */

loc_00099E8C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00099E96;

loc_00099E90: ;
    eax = ~eax;
    eax = eax + ecx + 1;

loc_00099E96: ;
    esi = MEM32(0x923A4C);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00099EA6; /* jbe: below or equal (unsigned <=) */

loc_00099EA4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099EA6: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = eax;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x8A)) >> 32) & 1);
    edx = edx + 0x8A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099ED6u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00099ED6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099EE7u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00099EE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1490);
    PUSH32(esp, 0x1680);
    PUSH32(esp, edi);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00099F07u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00099F07: ;
    MEM8(esp + 0x24) = 5;
    eax = MEM32(esp + 0x24);
    edx = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20005000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00099F24u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00099F24: ;
    ecx = MEM32(0x91E27C);
    eax = 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099F3D; /* je: equal / zero */

loc_00099F36: ;
    MEM32(0x923A3C) = eax;
    goto loc_00099F9F;

loc_00099F3D: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00099F48u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_00099F48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F9F; /* je: equal / zero */

loc_00099F4C: ;
    PUSH32(esp, 0x00099F51u); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_00099F51: ;
    MEM32(0x923A3C) = 6;
    goto loc_00099F9F;

loc_00099F5D: ;
    ecx = MEM32(0x91E27C);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099F9F; /* je: equal / zero */

loc_00099F6C: ;
    MEM32(0x923A3C) = eax;
    goto loc_00099F9F;

loc_00099F73: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x36);
    MEM32(0x9237E8) = edi;
    PUSH32(esp, 0x00099F85u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_00099F85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099F88: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00099F93u); RECOMP_ABI_CALL(0x00099870u, sub_00099870); /* call 0x00099870 */

loc_00099F93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F9F; /* je: equal / zero */

loc_00099F97: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_00099F9F: ;
    eax = esi;
    PUSH32(esp, 0x00099FA6u); RECOMP_ABI_CALL(0x000999B0u, sub_000999B0); /* call 0x000999B0 */

loc_00099FA6: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x23A670;
    /* nop */

loc_00099FB0: ;
    eax = MEM32(0x923A3C);
    ecx = ebx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x23A610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x4C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A226; /* je: equal / zero */

loc_00099FCE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x923A40) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebp + 4);
    ecx = 0x1B;
    if (CMP_NE(_fa, _fb)) goto loc_00099FF5; /* jne: not equal / not zero */

loc_00099FDE: ;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1F;
    edx = 0xFF4060A0u;
    MEM32(esp + 0x34) = 0xFFFFFF00u;
    goto loc_0009A002;

loc_00099FF5: ;
    edx = 0xFF002050u;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;

loc_0009A002: ;
    SET_LO16(esi, MEM16(ebp));
    if (4) _cf = (int)(((LO16(esi)) >> (16 - (4))) & 1);
    SET_LO16(esi, LO16(esi) << 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x4C) = edx;
    MEM16(esp + 0x40) = LO16(esi);
    edx = esp + 0x3C;
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0x104);
    MEM32(esp + 0x4C) = 0x40000;
    PUSH32(esp, edx);
    MEM16(esp + 0x46) = 0x104;
    MEM16(esp + 0x44) = 0x14;
    MEM16(esp + 0x4A) = 0xFA0;
    MEM16(esp + 0x4C) = LO16(esi);
    MEM16(esp + 0x4E) = LO16(edi);
    MEM8(esp + 0x51) = 5;
    PUSH32(esp, 0x0009A05Au); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_0009A05A: ;
    SET_LO16(eax, MEM16(ebp));
    ecx = MEM32(esp + 0x40);
    MEM16(esp + 0x64) = LO16(esi);
    esi = 1;
    PUSH32(esp, esi);
    edx = esp + 0x60;
    if (4) _cf = (int)(((LO16(eax)) >> (16 - (4))) & 1);
    SET_LO16(eax, LO16(eax) << 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    PUSH32(esp, 0x106);
    MEM32(esp + 0x70) = 0x60000;
    PUSH32(esp, edx);
    MEM16(esp + 0x6A) = 0x106;
    MEM16(esp + 0x68) = 0x18;
    MEM16(esp + 0x6C) = LO16(eax);
    MEM16(esp + 0x6E) = 0xFA0;
    MEM16(esp + 0x72) = LO16(edi);
    MEM32(esp + 0x78) = ecx;
    MEM16(esp + 0x7C) = LO16(esi);
    MEM16(esp + 0x7E) = LO16(esi);
    MEM8(esp + 0x75) = 5;
    PUSH32(esp, 0x0009A0BAu); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_0009A0BA: ;
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A170; /* je: equal / zero */

loc_0009A0CA: ;
    eax = MEM32(eax * 4 + 0x23A600);
    SET_LO16(ecx, MEM16(ebp));
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(0x923A40);
    if (4) _cf = (int)(((LO16(ecx)) >> (16 - (4))) & 1);
    SET_LO16(ecx, LO16(ecx) << 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x78) = 0x10000000;
    MEM16(esp + 0x68) = 0x20;
    MEM16(esp + 0x6A) = 0x101;
    MEM16(esp + 0x74) = LO16(ecx);
    MEM16(esp + 0x76) = 0xFA0;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM8(esp + 0x79) = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0009A153; /* jne: not equal / not zero */

loc_0009A120: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    MEM32(esp + 0x84) = 0x3F933333;
    MEM32(esp + 0x80) = 0x3F933333;
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0009A14Bu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009A14B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009A226;

loc_0009A153: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    MEM32(esp + 0x88) = 0xFFC0C0C0u;
    PUSH32(esp, 0x0009A168u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009A168: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009A226;

loc_0009A170: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x210);
    PUSH32(esp, 0x0009A17Fu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0009A17F: ;
    MEM32(esp + 0x2C) = 0x10009100;
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x2C) = 5;
    eax = MEM32(esp + 0x2C);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20001000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x923A40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x108;
    MEM16(esp + 0x1C) = 0x1940;
    MEM16(esp + 0x1E) = 0xFC0;
    MEM16(esp + 0x28) = 0;
    MEM8(esp + 0x2A) = 0x40;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3F3F3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFC0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFC0C0C0u)) >> 32) & 1);
    ecx = ecx + 0xFFC0C0C0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x2B) = 0x30;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009A210; /* jne: not equal / not zero */

loc_0009A1FE: ;
    MEM32(esp + 0x30) = 0x3F933333;
    MEM32(esp + 0x2C) = 0x3F933333;
    goto loc_0009A218;

loc_0009A210: ;
    MEM32(esp + 0x20) = 0xFFC0C0C0u;

loc_0009A218: ;
    edx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009A223u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A223: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A226: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xC)) >> 32) & 1);
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23A694) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x23A694 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00099FB0; /* jl: less (signed <) */

loc_0009A236: ;
    ecx = MEM32(esp + 0x108);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0009A24Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0009A24A: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xFC)) >> 32) & 1);
    esp = esp + 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A280
 * Original: 0x0009A280 - 0x0009A8C8 (1608 bytes, 373 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A280: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xFC));
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x126);
    PUSH32(esp, 0x78);
    MEM32(esp + 0x11C) = eax;
    PUSH32(esp, 0x0009A2ADu); RECOMP_ABI_CALL(0x000998E0u, sub_000998E0); /* call 0x000998E0 */

loc_0009A2AD: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0009A2BBu); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0009A2BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = 0x3E8;
    if (CMP_NE(_fa, _fb)) goto loc_0009A2D2; /* jne: not equal / not zero */

loc_0009A2C5: ;
    ecx = 6;
    MEM32(0x923A3C) = ecx;
    goto loc_0009A2D8;

loc_0009A2D2: ;
    ecx = MEM32(0x923A3C);

loc_0009A2D8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0009A401; /* ja: above (unsigned >) */

loc_0009A2E1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x9A8C8); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0009A2E8u) goto loc_0009A2E8;
    if (_jt == 0x0009A30Fu) goto loc_0009A30F;
    if (_jt == 0x0009A33Au) goto loc_0009A33A;
    if (_jt == 0x0009A3FDu) goto loc_0009A3FD;
    if (_jt == 0x0009A45Cu) goto loc_0009A45C;
    if (_jt == 0x0009A56Cu) goto loc_0009A56C;
    if (_jt == 0x0009A658u) goto loc_0009A658;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009A2E8: ;
    _fa = (uint32_t)(MEM32(0x91E27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E27C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009A401; /* jne: not equal / not zero */

loc_0009A2F5: ;
    MEM32(0x923A3C) = 1;
    MEM32(0x923A40) = edi;
    PUSH32(esp, 0x0009A30Au); RECOMP_ABI_CALL(0x00083670u, sub_00083670); /* call 0x00083670 */

loc_0009A30A: ;
    goto loc_0009A401;

loc_0009A30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237CC) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A32B: ;
    MEM32(0x923A3C) = 2;
    goto loc_0009A401;

loc_0009A33A: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A378; /* je: equal / zero */

loc_0009A345: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12C0);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0009A35Bu); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0009A35B: ;
    ebp = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0x20001000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x0009A375u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A375: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A378: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0009A395u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0009A395: ;
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20001000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0009A3AFu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A3AF: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009A3BDu); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_0009A3BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A3EE; /* je: equal / zero */

loc_0009A3C1: ;
    PUSH32(esp, 0x0009A3C6u); RECOMP_ABI_CALL(0x000842A0u, sub_000842A0); /* call 0x000842A0 */

loc_0009A3C6: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x923A58);
    MEM32(0x923A3C) = 4;
    PUSH32(esp, 0x0009A3DFu); RECOMP_ABI_CALL(0x0007E660u, sub_0007E660); /* call 0x0007E660 */

loc_0009A3DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009A3E7u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0009A3E7: ;
    MEM32(0x923A54) = eax;
    goto loc_0009A401;

loc_0009A3EE: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A3F9u); RECOMP_ABI_CALL(0x00099870u, sub_00099870); /* call 0x00099870 */

loc_0009A3F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A3FD: ;
    MEM32(esp + 0x10) = ebx;

loc_0009A401: ;
    eax = esi;
    PUSH32(esp, 0x0009A408u); RECOMP_ABI_CALL(0x000999B0u, sub_000999B0); /* call 0x000999B0 */

loc_0009A408: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = edx;
    ebp = 0x23A6F4;

loc_0009A413: ;
    eax = MEM32(0x923A3C);
    ecx = edx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x23A6A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A895; /* je: equal / zero */

loc_0009A431: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x923A40) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebp + 4);
    ecx = 0x1B;
    if (CMP_NE(_fa, _fb)) goto loc_0009A674; /* jne: not equal / not zero */

loc_0009A445: ;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1F;
    edx = 0xFF4060A0u;
    ebx = 0xFFFFFF00u;
    goto loc_0009A67C;

loc_0009A45C: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A499; /* je: equal / zero */

loc_0009A467: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12C0);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0009A47Du); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0009A47D: ;
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20001000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0009A496u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A496: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A499: ;
    edx = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0009A4B6u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0009A4B6: ;
    ecx = MEM32(esp + 0x24);
    eax = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20001000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0009A4D0u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A4D0: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009A4DEu); RECOMP_ABI_CALL(0x00099770u, sub_00099770); /* call 0x00099770 */

loc_0009A4DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009A4F1; /* jne: not equal / not zero */

loc_0009A4E2: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A4EDu); RECOMP_ABI_CALL(0x000997E0u, sub_000997E0); /* call 0x000997E0 */

loc_0009A4ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A4F8; /* je: equal / zero */

loc_0009A4F1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x923A40) = MEM32(0x923A40) ^ 1;
    _fa = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A4F8: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A503u); RECOMP_ABI_CALL(0x00099870u, sub_00099870); /* call 0x00099870 */

loc_0009A503: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009A3FD; /* jne: not equal / not zero */

loc_0009A50B: ;
    eax = MEM32(0x923A40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009A53B; /* je: equal / zero */

loc_0009A514: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009A401; /* jne: not equal / not zero */

loc_0009A51B: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A526u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_0009A526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A52E: ;
    MEM32(esp + 0x10) = 1;
    goto loc_0009A401;

loc_0009A53B: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A546u); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_0009A546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A54E: ;
    PUSH32(esp, 0x0009A553u); RECOMP_ABI_CALL(0x000842A0u, sub_000842A0); /* call 0x000842A0 */

loc_0009A553: ;
    MEM32(0x923A3C) = 4;
    PUSH32(esp, 0x0009A562u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0009A562: ;
    MEM32(0x923A54) = eax;
    goto loc_0009A401;

loc_0009A56C: ;
    PUSH32(esp, 0x0009A571u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0009A571: ;
    ecx = MEM32(0x923A54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0009A57F; /* jbe: below or equal (unsigned <=) */

loc_0009A57B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0009A585;

loc_0009A57F: ;
    eax = ~eax;
    eax = eax + ecx + 1;

loc_0009A585: ;
    esi = MEM32(0x923A58);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0009A595; /* jbe: below or equal (unsigned <=) */

loc_0009A593: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A595: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = eax;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x8A)) >> 32) & 1);
    edx = edx + 0x8A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009A5C5u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0009A5C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009A5D6u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0009A5D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1490);
    PUSH32(esp, 0x1680);
    PUSH32(esp, edi);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0009A5F6u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0009A5F6: ;
    MEM8(esp + 0x24) = 5;
    ebp = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0x20005000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x0009A615u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A615: ;
    eax = MEM32(0x91E27C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A631; /* je: equal / zero */

loc_0009A622: ;
    MEM32(0x923A3C) = 3;
    goto loc_0009A401;

loc_0009A631: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0009A63Cu); RECOMP_ABI_CALL(0x00099840u, sub_00099840); /* call 0x00099840 */

loc_0009A63C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A644: ;
    PUSH32(esp, 0x0009A649u); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_0009A649: ;
    MEM32(0x923A3C) = 5;
    goto loc_0009A401;

loc_0009A658: ;
    _fa = (uint32_t)(MEM32(0x91E27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E27C), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A401; /* je: equal / zero */

loc_0009A665: ;
    MEM32(0x923A3C) = 3;
    goto loc_0009A401;

loc_0009A674: ;
    edx = 0xFF002050u;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A67C: ;
    SET_LO16(esi, MEM16(ebp));
    if (4) _cf = (int)(((LO16(esi)) >> (16 - (4))) & 1);
    SET_LO16(esi, LO16(esi) << 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x50) = edx;
    MEM16(esp + 0x44) = LO16(esi);
    edx = esp + 0x40;
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0x104);
    MEM32(esp + 0x50) = 0x40000;
    PUSH32(esp, edx);
    MEM16(esp + 0x4A) = 0x104;
    MEM16(esp + 0x48) = 0x14;
    MEM16(esp + 0x4E) = 0xFA0;
    MEM16(esp + 0x50) = LO16(esi);
    MEM16(esp + 0x52) = LO16(edi);
    MEM8(esp + 0x55) = 5;
    PUSH32(esp, 0x0009A6D4u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_0009A6D4: ;
    SET_LO16(eax, MEM16(ebp));
    MEM16(esp + 0x64) = LO16(esi);
    esi = 1;
    PUSH32(esp, esi);
    ecx = esp + 0x60;
    if (4) _cf = (int)(((LO16(eax)) >> (16 - (4))) & 1);
    SET_LO16(eax, LO16(eax) << 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    PUSH32(esp, 0x106);
    MEM32(esp + 0x70) = 0x60000;
    PUSH32(esp, ecx);
    MEM16(esp + 0x6A) = 0x106;
    MEM16(esp + 0x68) = 0x18;
    MEM16(esp + 0x6C) = LO16(eax);
    MEM16(esp + 0x6E) = 0xFA0;
    MEM16(esp + 0x72) = LO16(edi);
    MEM32(esp + 0x78) = ebx;
    MEM16(esp + 0x7C) = LO16(esi);
    MEM16(esp + 0x7E) = LO16(esi);
    MEM8(esp + 0x75) = 5;
    PUSH32(esp, 0x0009A730u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_0009A730: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A7E3; /* je: equal / zero */

loc_0009A740: ;
    edx = MEM32(eax * 4 + 0x23A694);
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x923A40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x923A40) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x78) = 0x10000000;
    MEM16(esp + 0x68) = 0x20;
    MEM16(esp + 0x6A) = 0x101;
    MEM32(esp + 0x6C) = edx;
    MEM16(esp + 0x74) = 0x1250;
    MEM16(esp + 0x76) = 0xFA0;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM8(esp + 0x79) = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0009A7C6; /* jne: not equal / not zero */

loc_0009A793: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    MEM32(esp + 0x84) = 0x3F933333;
    MEM32(esp + 0x80) = 0x3F933333;
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0009A7BEu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009A7BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009A895;

loc_0009A7C6: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    MEM32(esp + 0x88) = 0xFFC0C0C0u;
    PUSH32(esp, 0x0009A7DBu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009A7DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009A895;

loc_0009A7E3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x211);
    PUSH32(esp, 0x0009A7F2u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0009A7F2: ;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = 0x10009100;
    MEM8(esp + 0x2C) = 5;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x923A40);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20001000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x108;
    MEM16(esp + 0x1C) = 0x17E0;
    MEM16(esp + 0x1E) = 0xFC0;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM8(esp + 0x2A) = 0x40;
    MEM8(esp + 0x2B) = 0x30;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x24) = ecx;
    MEM16(esp + 0x28) = 0x70;
    if (CMP_NE(_fa, _fb)) goto loc_0009A87F; /* jne: not equal / not zero */

loc_0009A866: ;
    MEM16(esp + 0x28) = 0x76;
    MEM32(esp + 0x30) = 0x3F933333;
    MEM32(esp + 0x2C) = 0x3F933333;
    goto loc_0009A887;

loc_0009A87F: ;
    MEM32(esp + 0x20) = 0xFFC0C0C0u;

loc_0009A887: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A892u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0009A892: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A895: ;
    edx = MEM32(esp + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xC)) >> 32) & 1);
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23A70C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x23A70C (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x34) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0009A413; /* jl: less (signed <) */

loc_0009A8AD: ;
    ecx = MEM32(esp + 0x108);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0009A8C1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0009A8C1: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xFC)) >> 32) & 1);
    esp = esp + 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A8F0
 * Original: 0x0009A8F0 - 0x0009A907 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A8F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A903; /* jne: not equal / not zero */

loc_0009A8F8: ;
    PUSH32(esp, 0x0009A8FDu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0009A8FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0009A903: ;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_0009A910
 * Original: 0x0009A910 - 0x0009A938 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A910: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A91Au); RECOMP_ABI_CALL(0x0009A8F0u, sub_0009A8F0); /* call 0x0009A8F0 */

loc_0009A91A: ;
    ecx = MEM32(esp + 8);
    edx = ZX8(LO8(eax));
    MEM32(0x923A60) = ecx;
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 2;
    eax = MEM32(eax * 4 + 0x2E72B8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A940
 * Original: 0x0009A940 - 0x0009A97A (58 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A940: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 4) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0x10) = LO8(eax);
    eax = 0x3F800000;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 6) = LO16(edx);
    MEM8(ecx + 0x12) = 1;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    MEM8(ecx + 0x11) = 0;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009A980
 * Original: 0x0009A980 - 0x0009A98E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A980: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A990
 * Original: 0x0009A990 - 0x0009A9C3 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009A990: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x0009A99Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009A99F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    MEM8(esp + 6) = LO8(eax);
    MEM8(esp + 5) = LO8(eax);
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x0009A9BAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009A9BA: ;
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009A9D0
 * Original: 0x0009A9D0 - 0x0009A9E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A9D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A9DAu); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009A9DA: ;
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A9F0
 * Original: 0x0009A9F0 - 0x0009AA31 (65 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009A9F0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    esi = ecx;
    PUSH32(esp, 0x0009AA02u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AA02: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x0009AA1Du); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AA1D: ;
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + eax * 4 + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009AA40
 * Original: 0x0009AA40 - 0x0009AA80 (64 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AA40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 4) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM16(ecx + 6) = LO16(eax);
    eax = 0x3F800000;
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ecx + 0x12) = 1;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    MEM8(ecx + 0x11) = 0;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0009AA80
 * Original: 0x0009AA80 - 0x0009ABAF (303 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA80(void)
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

loc_0009AA80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0xFF0FFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(esp + 0x20);
    eax = MEM32(ebx);
    ecx = edi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0009AAB3; /* jge: greater or equal (signed >=) */

loc_0009AAAD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AAB3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    edx = edi;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AAD8; /* jge: greater or equal (signed >=) */

loc_0009AAD2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AAD8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009AAE1u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AAE1: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ebp = eax;
    PUSH32(esp, 0x0009AAECu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AAEC: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AB10; /* jge: greater or equal (signed >=) */

loc_0009AB0A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AB10: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009AB19u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AB19: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AB36; /* jge: greater or equal (signed >=) */

loc_0009AB30: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AB36: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009AB3Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AB3F: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = ebp;
    PUSH32(esp, 0x0009AB4Au); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009AB4A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    ecx = MEM32(ebx + 4);
    edx = edx & 0xFF5FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    edx = edx | 0x500000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0009AB75u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AB75: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEM8(esp + 0x2E) = LO8(eax);
    MEM8(esp + 0x2D) = LO8(eax);
    MEM8(esp + 0x2C) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x0009AB96u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AB96: ;
    MEM8(esp + 0x2F) = LO8(eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0009ABA7u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009ABA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009ABB0
 * Original: 0x0009ABB0 - 0x0009AE05 (597 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ABB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_0009ABB0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1002B);
    PUSH32(esp, 0x0009ABC1u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009ABC1: ;
    SET_LO16(ebp, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ebp, LO16(ebp) - MEM16(eax));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, 0x1002D);
    PUSH32(esp, 0x0009ABD2u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009ABD2: ;
    SET_LO16(ebx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ebx, LO16(ebx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, 0x1002B);
    PUSH32(esp, 0x0009ABE3u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009ABE3: ;
    esi = MEM32(esp + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x44) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x40);
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    MEM32(esp + 0x44) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x44)); /* fidiv dword ptr [esp + 0x44] */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    ecx = MEM32(edi);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x20) = ecx;
    ecx = LO16(ebp);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esp + 0x1C) = 0x20;
    MEM16(esp + 0x1E) = 0x101;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEM32(esp + 0x40) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x0009AC5Bu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AC5B: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(edx, MEM16(esi + 2));
    ecx = MEM32(esp + 0x50);
    SET_LO16(edx, LO16(edx) << 4);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esp + 0x2A) = LO16(edx);
    edx = MEM32(esp + 0x4C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x28) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 0x48));
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(esp + 0x45) = 5;
    PUSH32(esp, 0x0009ACC0u); RECOMP_ABI_CALL(0x0009AA80u, sub_0009AA80); /* call 0x0009AA80 */

loc_0009ACC0: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(edi + 8);
    SET_LO16(ecx, MEM16(esi + 2));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, LO16(eax) << 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esp + 0x34) = 0x20;
    MEM16(esp + 0x36) = 0x101;
    MEM32(esp + 0x38) = edx;
    MEM16(esp + 0x40) = LO16(eax);
    SET_LO16(ecx, LO16(ecx) << 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x44) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM16(esp + 0x42) = LO16(ecx);
    eax = ebx + ebp + -12;
    ebp = MEM32(esp + 0x6C);
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x28033C)); /* fsub dword ptr [0x28033c] */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    MEM8(esp + 0x5D) = 5;
    PUSH32(esp, 0x0009AD4Cu); RECOMP_ABI_CALL(0x0009AA80u, sub_0009AA80); /* call 0x0009AA80 */

loc_0009AD4C: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    edx = MEM32(edi + 8);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0x70) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = edx;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    edx = SX16(LO16(ebx));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(esp + 0x70) = ecx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esp + 0x4C) = 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x70)); /* fiadd dword ptr [esp + 0x70] */
    MEM32(esp + 0x70) = edx;
    MEM16(esp + 0x4E) = 0x101;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    PUSH32(esp, 0x0009AD9Cu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AD9C: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esp + 0x80);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x5C) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 2));
    SET_LO16(eax, LO16(eax) << 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esp + 0x5E) = LO16(eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEM32(esp + 0x78) = 0x3F800000;
    MEM32(esp + 0x80) = 0xFFFFFFFFu;
    MEM8(esp + 0x75) = 5;
    PUSH32(esp, 0x0009ADFAu); RECOMP_ABI_CALL(0x0009AA80u, sub_0009AA80); /* call 0x0009AA80 */

loc_0009ADFA: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009AE10
 * Original: 0x0009AE10 - 0x0009AFA3 (403 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AE10(void)
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

loc_0009AE10: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0xFF0FFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0009AE38u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AE38: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280340)); /* fmul dword ptr [0x280340] */
    MEM8(esp + 0x16) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x0009AE53u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AE53: ;
    MEM8(esp + 0x17) = LO8(eax);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x0009AE64u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009AE64: ;
    ebx = MEM32(esp + 0x24);
    edx = MEM32(ebp + 8);
    eax = ebx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009AE85; /* jge: greater or equal (signed >=) */

loc_0009AE7F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AE85: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AEAA; /* jge: greater or equal (signed >=) */

loc_0009AEA4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AEAA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x0009AEB3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AEB3: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = eax;
    PUSH32(esp, 0x0009AEBEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AEBE: ;
    edx = ebx;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AEE3; /* jge: greater or equal (signed >=) */

loc_0009AEDD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AEE3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x0009AEECu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AEEC: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009AF09; /* jge: greater or equal (signed >=) */

loc_0009AF03: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009AF09: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x0009AF12u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AF12: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x0009AF1Du); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009AF1D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 0xFF5FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    ecx = ecx | 0x500000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x0009AF48u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AF48: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x30) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x0009AF69u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009AF69: ;
    MEM8(esp + 0x33) = LO8(eax);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = edx;
    PUSH32(esp, 0x0009AF7Au); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009AF7A: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ebp + 0x10);
    ecx = ecx & 0xFF3FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x300000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x0009AF9Bu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009AF9B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009AFB0
 * Original: 0x0009AFB0 - 0x0009B41E (1134 bytes, 370 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AFB0(void)
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

loc_0009AFB0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A (32-bit) */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0009B419; /* jl: less (signed <) */

loc_0009AFD1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B419; /* jl: less (signed <) */

loc_0009AFDA: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, ebx);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    PUSH32(esp, 0x0009B003u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B003: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEM32(esp + 0x10) = ebx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    PUSH32(esp, 0x0009B02Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B02E: ;
    esi = MEM32(esp + 0x58);
    edi = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0009B041u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B041: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x0009B057u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B057: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 6));
    _fb = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(edi));
    edi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    edx = SX16(LO16(ebx));
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B082u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B082: ;
    ebx = MEM32(esp + 0x6C);
    ebp = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B0A1u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B0A1: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B0BBu); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B0BB: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B0E5u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B0E5: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C2F4)); /* fsub dword ptr [0x22c2f4] */
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236220)); /* fmul dword ptr [0x236220] */
    PUSH32(esp, esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    eax = esp + 0x48;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B114u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B114: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    MEM32(esp + 0x44) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009B137u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B137: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(eax));
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B14Cu); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B14C: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B163u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B163: ;
    ecx = MEM32(esp + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp + 0x44) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    PUSH32(esp, 0x0009B17Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B17E: ;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0009B199u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B199: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0009B1AFu); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B1AF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 6));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B1DEu); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B1DE: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1E8)); /* fsub dword ptr [0x22c1e8] */
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2FC)); /* fmul dword ptr [0x22c2fc] */
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    edx = esp + 0x48;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009B20Du); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B20D: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0009B227u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B227: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B250u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B250: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009B277u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B277: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x48) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009B299u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B299: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(eax));
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B2AEu); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B2AE: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009B2CDu); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B2CD: ;
    edx = MEM32(esp + 0x74);
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esp + 0x74) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x74)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    PUSH32(esp, 0x0009B2E8u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B2E8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    MEM32(esp + 0x74) = ecx;
    fp_push((double)SMEM32(esp + 0x74)); /* fild */
    MEM32(esp + 0x28) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    PUSH32(esp, 0x0009B302u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B302: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0009B315u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B315: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x0009B32Bu); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B32B: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B34Cu); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B34C: ;
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009B363u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B363: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B37Du); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009B37D: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B3A6u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B3A6: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B3C5u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B3C5: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x74) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0009B3E7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B3E7: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 8);
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009B3FCu); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_0009B3FC: ;
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009B413u); RECOMP_ABI_CALL(0x0009AE10u, sub_0009AE10); /* call 0x0009AE10 */

loc_0009B413: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0009B419: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B420
 * Original: 0x0009B420 - 0x0009B4A1 (129 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B420: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esp + 0x24));
    SET_LO16(ecx, MEM16(esp + 0x28));
    SET_LO16(edx, MEM16(esp + 0x2C));
    MEM16(esp) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0x30));
    MEM16(esp + 2) = LO16(ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    MEM16(esp + 8) = LO16(edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    MEM16(esp + 0xE) = LO16(eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0x1002B;
    MEM32(esp + 0x24) = 0x1002E;
    MEM32(esp + 0x28) = 0x1002C;
    MEM32(esp + 0x2C) = 0x1002F;
    MEM32(esp + 0x30) = 0x1002D;
    MEM32(esp + 0x34) = 0x10030;
    PUSH32(esp, 0x0009B49Du); RECOMP_ABI_CALL(0x0009ABB0u, sub_0009ABB0); /* call 0x0009ABB0 */

loc_0009B49D: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B4B0
 * Original: 0x0009B4B0 - 0x0009B663 (435 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B4B0(void)
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

loc_0009B4B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x38) = eax;
    MEM16(esp + 0x1E) = LO16(eax);
    ecx = edi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x34) = ecx;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    MEM16(esp + 0x10) = 0x20;
    MEM16(esp + 0x12) = 0x101;
    MEM32(esp + 0x14) = 0x10031;
    MEM16(esp + 0x1C) = LO16(ebp);
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0009B519; /* jge: greater or equal (signed >=) */

loc_0009B513: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009B519: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    edx = edi;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x44) = edx;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B53E; /* jge: greater or equal (signed >=) */

loc_0009B538: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009B53E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    PUSH32(esp, 0x0009B547u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B547: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ebx = eax;
    PUSH32(esp, 0x0009B552u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B552: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x44) = eax;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B576; /* jge: greater or equal (signed >=) */

loc_0009B570: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009B576: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    PUSH32(esp, 0x0009B57Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B57F: ;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x44) = edi;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B59C; /* jge: greater or equal (signed >=) */

loc_0009B596: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0009B59C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    PUSH32(esp, 0x0009B5A5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B5A5: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x2C) = ebx;
    eax = esp + 0x10;
    SET_LO8(ebx, 5);
    PUSH32(esp, eax);
    MEM8(esp + 0x25) = LO8(ebx);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x0009B5CBu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009B5CB: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    SET_LO16(ecx, MEM16(esp + 0x3C));
    esi = esi | 0x10500000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esp + 0x14) = 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    MEM16(esp + 0x16) = 0x101;
    MEM32(esp + 0x18) = 0x10032;
    MEM16(esp + 0x20) = LO16(ebp);
    MEM16(esp + 0x22) = LO16(ecx);
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0009B60Du); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B60D: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x0009B62Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009B62E: ;
    ecx = MEM32(esp + 0x44);
    MEM8(esp + 0x57) = LO8(eax);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x30) = edx;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM8(esp + 0x29) = LO8(ebx);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x0009B658u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0009B658: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B670
 * Original: 0x0009B670 - 0x0009B886 (534 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B670: ;
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esp + 0xC0));
    SET_LO16(ecx, MEM16(esp + 0xC4));
    SET_LO16(edx, MEM16(esp + 0xC8));
    MEM16(esp) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xCC));
    MEM16(esp + 2) = LO16(ecx);
    ecx = MEM32(esp + 0xDC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xD4);
    MEM16(esp + 8) = LO16(edx);
    edx = MEM32(esp + 0xDC);
    PUSH32(esp, edx);
    MEM16(esp + 0xE) = LO16(eax);
    eax = MEM32(esp + 0xDC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0x13B;
    MEM32(esp + 0x24) = 0x15F;
    MEM32(esp + 0x28) = 0x144;
    MEM32(esp + 0x2C) = 0x156;
    MEM32(esp + 0x30) = 0x14D;
    MEM32(esp + 0x34) = 0x13C;
    MEM32(esp + 0x38) = 0x160;
    MEM32(esp + 0x3C) = 0x145;
    MEM32(esp + 0x40) = 0x157;
    MEM32(esp + 0x44) = 0x14E;
    MEM32(esp + 0x48) = 0x13D;
    MEM32(esp + 0x4C) = 0x161;
    MEM32(esp + 0x50) = 0x146;
    MEM32(esp + 0x54) = 0x158;
    MEM32(esp + 0x58) = 0x14F;
    MEM32(esp + 0x5C) = 0x13E;
    MEM32(esp + 0x60) = 0x162;
    MEM32(esp + 0x64) = 0x147;
    MEM32(esp + 0x68) = 0x159;
    MEM32(esp + 0x6C) = 0x150;
    MEM32(esp + 0x70) = 0x13F;
    MEM32(esp + 0x74) = 0x163;
    MEM32(esp + 0x78) = 0x148;
    MEM32(esp + 0x7C) = 0x15A;
    MEM32(esp + 0x80) = 0x151;
    MEM32(esp + 0x84) = 0x140;
    MEM32(esp + 0x88) = 0x164;
    MEM32(esp + 0x8C) = 0x149;
    MEM32(esp + 0x90) = 0x15B;
    MEM32(esp + 0x94) = 0x152;
    MEM32(esp + 0x98) = 0x141;
    MEM32(esp + 0x9C) = 0x165;
    MEM32(esp + 0xA0) = 0x14A;
    MEM32(esp + 0xA4) = 0x15C;
    MEM32(esp + 0xA8) = 0x153;
    MEM32(esp + 0xAC) = 0x142;
    MEM32(esp + 0xB0) = 0x166;
    MEM32(esp + 0xB4) = 0x14B;
    MEM32(esp + 0xB8) = 0x15D;
    MEM32(esp + 0xBC) = 0x154;
    MEM32(esp + 0xC0) = 0x143;
    MEM32(esp + 0xC4) = 0x167;
    MEM32(esp + 0xC8) = 0x14C;
    MEM32(esp + 0xCC) = 0x15E;
    MEM32(esp + 0xD0) = 0x155;
    PUSH32(esp, 0x0009B87Fu); RECOMP_ABI_CALL(0x0009AFB0u, sub_0009AFB0); /* call 0x0009AFB0 */

loc_0009B87F: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B890
 * Original: 0x0009B890 - 0x0009B89C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B890(void)
{

loc_0009B890: ;
    eax = MEM32(esp + 4);
    eax = eax * 8 + 0x2EF21C;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B8A0
 * Original: 0x0009B8A0 - 0x0009B8AF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B8A0(void)
{

loc_0009B8A0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax * 4 + 0x2EF204;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B8B0
 * Original: 0x0009B8B0 - 0x0009B8CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B8B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B8BAu); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009B8BA: ;
    ecx = ZX16(MEM16(eax));
    edx = MEM32(eax + 8);
    eax = MEM32(edx + ecx * 4);
    eax = MEM32(eax * 4 + 0x2EF230);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B8D0
 * Original: 0x0009B8D0 - 0x0009B8D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B8D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B8E0
 * Original: 0x0009B8E0 - 0x0009B8E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B8E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B8F0
 * Original: 0x0009B8F0 - 0x0009B8F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B8F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B900
 * Original: 0x0009B900 - 0x0009B903 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B900: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B910
 * Original: 0x0009B910 - 0x0009B913 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B910: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B920
 * Original: 0x0009B920 - 0x0009B926 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B920(void)
{

loc_0009B920: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B930
 * Original: 0x0009B930 - 0x0009B936 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B930(void)
{

loc_0009B930: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B940
 * Original: 0x0009B940 - 0x0009B946 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B940(void)
{

loc_0009B940: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B950
 * Original: 0x0009B950 - 0x0009B956 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B950(void)
{

loc_0009B950: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B960
 * Original: 0x0009B960 - 0x0009B961 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B960(void)
{

loc_0009B960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B970
 * Original: 0x0009B970 - 0x0009B97A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B970: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B980
 * Original: 0x0009B980 - 0x0009B988 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B980: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B990
 * Original: 0x0009B990 - 0x0009B99A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B990: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9A0
 * Original: 0x0009B9A0 - 0x0009B9A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9A0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9B0
 * Original: 0x0009B9B0 - 0x0009B9BA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9B0: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9C0
 * Original: 0x0009B9C0 - 0x0009B9C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9C0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9D0
 * Original: 0x0009B9D0 - 0x0009B9DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9D0: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9E0
 * Original: 0x0009B9E0 - 0x0009B9E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9E0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B9F0
 * Original: 0x0009B9F0 - 0x0009BA0C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B9F0: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + eax * 2;
    eax = MEM32(ecx * 4 + 0x2EF124);
    eax = eax + edx * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA10
 * Original: 0x0009BA10 - 0x0009BA29 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA10: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx * 4 + 0x2EF1F0);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA30
 * Original: 0x0009BA30 - 0x0009BA49 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA30: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx * 4 + 0x2EF1F8);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA50
 * Original: 0x0009BA50 - 0x0009BA69 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA50: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx * 4 + 0x2ED990);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA70
 * Original: 0x0009BA70 - 0x0009BA94 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009BA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA70: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009BA91; /* jae: above or equal (unsigned >=) */

loc_0009BA76: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(edx * 4 + 0x2EF230);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0009BA8Eu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_0009BA8E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009BA91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAA0
 * Original: 0x0009BAA0 - 0x0009BAA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009BAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BAA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAB0
 * Original: 0x0009BAB0 - 0x0009BAB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BAB0(void)
{

loc_0009BAB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAC0
 * Original: 0x0009BAC0 - 0x0009BAC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BAC0(void)
{

loc_0009BAC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAD0
 * Original: 0x0009BAD0 - 0x0009BAD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009BAD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BAD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAE0
 * Original: 0x0009BAE0 - 0x0009BC10 (304 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BAE0: ;
    eax = MEM32(0x2EF23C);
    edx = MEM32(0x2EF254);
    ecx = MEM32(0x2EF25C);
    PUSH32(esp, esi);
    esi = MEM32(0x2EF24C);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(0x2EF244)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x2EF244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(0x2EF264);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x2EF26C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x2EF274);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(0x2EF278) = eax;
    PUSH32(esp, 0x0009BB31u); RECOMP_ABI_CALL(0x000A9EA8u, sub_000A9EA8); /* call 0x000A9EA8 */

loc_0009BB31: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x2EF238) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009BC0D; /* je: equal / zero */

loc_0009BB40: ;
    ecx = MEM32(0x2EF244);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BB5D; /* jbe: below or equal (unsigned <=) */

loc_0009BB4A: ;
    edx = MEM32(0x2EF23C);
    edi = edx + eax;
    MEM32(0x2EF240) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BB63;

loc_0009BB5D: ;
    MEM32(0x2EF240) = esi;

loc_0009BB63: ;
    edx = MEM32(0x2EF24C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BB7A; /* jbe: below or equal (unsigned <=) */

loc_0009BB6D: ;
    edi = ecx + eax;
    MEM32(0x2EF248) = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BB80;

loc_0009BB7A: ;
    MEM32(0x2EF248) = esi;

loc_0009BB80: ;
    ecx = MEM32(0x2EF254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BB97; /* jbe: below or equal (unsigned <=) */

loc_0009BB8A: ;
    edi = edx + eax;
    MEM32(0x2EF250) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BB9D;

loc_0009BB97: ;
    MEM32(0x2EF250) = esi;

loc_0009BB9D: ;
    edx = MEM32(0x2EF25C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BBB4; /* jbe: below or equal (unsigned <=) */

loc_0009BBA7: ;
    edi = ecx + eax;
    MEM32(0x2EF258) = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BBBA;

loc_0009BBB4: ;
    MEM32(0x2EF258) = esi;

loc_0009BBBA: ;
    ecx = MEM32(0x2EF264);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BBD1; /* jbe: below or equal (unsigned <=) */

loc_0009BBC4: ;
    edi = edx + eax;
    MEM32(0x2EF260) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BBD7;

loc_0009BBD1: ;
    MEM32(0x2EF260) = esi;

loc_0009BBD7: ;
    edx = MEM32(0x2EF26C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BBEE; /* jbe: below or equal (unsigned <=) */

loc_0009BBE1: ;
    edi = ecx + eax;
    MEM32(0x2EF268) = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009BBF4;

loc_0009BBEE: ;
    MEM32(0x2EF268) = esi;

loc_0009BBF4: ;
    _fa = (uint32_t)(MEM32(0x2EF274)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2EF274), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BC07; /* jbe: below or equal (unsigned <=) */

loc_0009BBFC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x2EF270) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BC07: ;
    MEM32(0x2EF270) = esi;

loc_0009BC0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BC10
 * Original: 0x0009BC10 - 0x0009BC26 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BC10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BC1Au); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BC1A: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BC30
 * Original: 0x0009BC30 - 0x0009BC40 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BC30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BC3Cu); RECOMP_ABI_CALL(0x0009BC10u, sub_0009BC10); /* call 0x0009BC10 */

loc_0009BC3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BC40
 * Original: 0x0009BC40 - 0x0009BC51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BC40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BC4Au); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BC4A: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BC60
 * Original: 0x0009BC60 - 0x0009BC79 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BC60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BC6Au); RECOMP_ABI_CALL(0x0009BC40u, sub_0009BC40); /* call 0x0009BC40 */

loc_0009BC6A: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BC80
 * Original: 0x0009BC80 - 0x0009BCAB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BC80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BCA5; /* je: equal / zero */

loc_0009BC89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BC8Fu); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BC8F: ;
    edx = ZX16(MEM16(eax));
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(eax + edx * 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009BCA5u); RECOMP_ABI_CALL(0x0009BA70u, sub_0009BA70); /* call 0x0009BA70 */

loc_0009BCA5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BCB0
 * Original: 0x0009BCB0 - 0x0009BCF5 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BCB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BCEF; /* je: equal / zero */

loc_0009BCB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BCC2u); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BCC2: ;
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009BCCFu); RECOMP_ABI_CALL(0x000AED33u, sub_000AED33); /* call 0x000AED33 */

loc_0009BCCF: ;
    ecx = MEM32(eax + 4);
    edi = MEM32(esp + 0x18);
    esi = eax;
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
    PUSH32(esp, 0x0009BCECu); RECOMP_ABI_CALL(0x000AED4Eu, sub_000AED4E); /* call 0x000AED4E */

loc_0009BCEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0009BCEF: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BD00
 * Original: 0x0009BD00 - 0x0009BD1C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BD00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30525058) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x30525058 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BD15; /* jne: not equal / not zero */

loc_0009BD0C: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BD18; /* je: equal / zero */

loc_0009BD15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009BD18: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BD20
 * Original: 0x0009BD20 - 0x0009BD21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BD20(void)
{

loc_0009BD20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009BD30
 * Original: 0x0009BD30 - 0x0009BE02 (210 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BD30: ;
    eax = MEM32(0x2EF27C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BD40; /* jne: not equal / not zero */

loc_0009BD3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BD40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(0x2EF27C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0009BD95; /* jle: less or equal (signed <=) */

loc_0009BD79: ;
    /* nop */

loc_0009BD80: ;
    edx = MEM32(eax + 4);
    MEM32(edx + ecx * 8) = esi;
    edx = MEM32(eax + 4);
    MEM32(edx + ecx * 8 + 4) = esi;
    edx = MEM32(eax + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BD80; /* jl: less (signed <) */

loc_0009BD95: ;
    edx = MEM32(eax + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0009BDB5; /* jle: less or equal (signed <=) */

loc_0009BD9F: ;
    /* nop */

loc_0009BDA0: ;
    edx = MEM32(eax + 0xC);
    edi = MEM32(edx + ecx * 4);
    edx = edx + ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edx = MEM32(eax + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BDA0; /* jl: less (signed <) */

loc_0009BDB5: ;
    edx = MEM32(eax + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009BDD5; /* jle: less or equal (signed <=) */

loc_0009BDBE: ;
    edi = edi;

loc_0009BDC0: ;
    edx = MEM32(eax + 0x10);
    edi = MEM32(edx + ecx * 4);
    edx = edx + ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edx = MEM32(eax + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BDC0; /* jl: less (signed <) */

loc_0009BDD5: ;
    ecx = MEM32(eax + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009BDFA; /* jle: less or equal (signed <=) */

loc_0009BDDE: ;
    esi = 0x200;

loc_0009BDE3: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 2), LO16(esi) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009BDF2; /* je: equal / zero */

loc_0009BDEF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009BDF2: ;
    ecx = MEM32(eax + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BDE3; /* jl: less (signed <) */

loc_0009BDFA: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BE10
 * Original: 0x0009BE10 - 0x0009BE1C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BE10(void)
{

loc_0009BE10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x2EF238);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BE20
 * Original: 0x0009BE20 - 0x0009BE28 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BE20: ;
    eax = MEM32(esp + 4);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BE30
 * Original: 0x0009BE30 - 0x0009BE61 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BE30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BE3Cu); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009BE3C: ;
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0009BE47u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009BE47: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE5E; /* je: equal / zero */

loc_0009BE53: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE5E; /* je: equal / zero */

loc_0009BE58: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009BE5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009BE70
 * Original: 0x0009BE70 - 0x0009BECA (90 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BE70: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BEC8; /* je: equal / zero */

loc_0009BE7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009BE81u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009BE81: ;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0009BE8Cu); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009BE8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0x0009BE9Au); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009BE9A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BEA8; /* je: equal / zero */

loc_0009BEA1: ;
    MEM32(esi + 4) = 0;

loc_0009BEA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BEC7; /* jbe: below or equal (unsigned <=) */

loc_0009BEAF: ;
    /* nop */

loc_0009BEB0: ;
    MEM32(edi + eax * 8) = 0;
    MEM32(edi + eax * 8 + 4) = 0;
    ecx = ZX16(MEM16(esi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BEB0; /* jl: less (signed <) */

loc_0009BEC7: ;
    POP32(esp, esi);

loc_0009BEC8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BED0
 * Original: 0x0009BED0 - 0x0009BF67 (151 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009BED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BEDDu); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009BEDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BEE3u); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BEE3: ;
    ebp = MEM32(eax + 4);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(0x2EF238);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BF0B; /* jb: below (unsigned <) */

loc_0009BEF8: ;
    ecx = MEM32(0x2EF278);
    edx = ecx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009BF0B; /* jae: above or equal (unsigned >=) */

loc_0009BF05: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009BF63; /* ja: above (unsigned >) */

loc_0009BF0B: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0009BF10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009BF16u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009BF16: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0009BF1Eu); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009BF1E: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF5C; /* je: equal / zero */

loc_0009BF28: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF5C; /* je: equal / zero */

loc_0009BF2E: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009BF3B; /* jae: above or equal (unsigned >=) */

loc_0009BF37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BF53; /* jb: below (unsigned <) */

loc_0009BF3B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009BF43; /* jae: above or equal (unsigned >=) */

loc_0009BF3F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BF53; /* jb: below (unsigned <) */

loc_0009BF43: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009BF5C; /* ja: above (unsigned >) */

loc_0009BF47: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009BF5C; /* ja: above (unsigned >) */

loc_0009BF4B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BF5C; /* jb: below (unsigned <) */

loc_0009BF4F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BF5C; /* jb: below (unsigned <) */

loc_0009BF53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009BF59u); RECOMP_ABI_CALL(0x0009BE70u, sub_0009BE70); /* call 0x0009BE70 */

loc_0009BF59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009BF5C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BF10; /* jl: less (signed <) */

loc_0009BF62: ;
    POP32(esp, edi);

loc_0009BF63: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BF70
 * Original: 0x0009BF70 - 0x0009BFF8 (136 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009BF70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BF7Au); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0009BF7A: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009BF95; /* ja: above (unsigned >) */

loc_0009BF82: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x9BF98); /* switch: 7 entries, 3 targets */
    if (_jt == 0x0009BF89u) goto loc_0009BF89;
    if (_jt == 0x0009BF8Fu) goto loc_0009BF8F;
    if (_jt == 0x0009BF95u) goto loc_0009BF95;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009BF89: ;
    eax = 0x14;
    esp += 4; return; /* ret */

loc_0009BF8F: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0009BF95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009C000
 * Original: 0x0009C000 - 0x0009C0D4 (212 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C000: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 0xC;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0009C0CD; /* jle: less or equal (signed <=) */

loc_0009C024: ;
    edi = MEM32(esp + 0x18);
    goto loc_0009C030;

    /* nop */

loc_0009C030: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C0C6; /* jge: greater or equal (signed >=) */

loc_0009C03C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C051; /* jne: not equal / not zero */

loc_0009C045: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax + 4;
    goto loc_0009C0AD;

loc_0009C051: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C0C6; /* jne: not equal / not zero */

loc_0009C05D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(edi) = esi;
    PUSH32(esp, 0x0009C066u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009C066: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C06Eu); RECOMP_ABI_CALL(0x0009BF70u, sub_0009BF70); /* call 0x0009BF70 */

loc_0009C06E: ;
    edx = MEM32(esi + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C09E; /* jne: not equal / not zero */

loc_0009C084: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0009C08Eu); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009C08E: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C097u); RECOMP_ABI_CALL(0x0009BF70u, sub_0009BF70); /* call 0x0009BF70 */

loc_0009C097: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009C0A5;

loc_0009C09E: ;
    MEM32(edi + 4) = 0;

loc_0009C0A5: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009C0AD: ;
    eax = MEM32(esp + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0009C030; /* jl: less (signed <) */

loc_0009C0BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009C0CD; /* jl: less (signed <) */

loc_0009C0C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009C0CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C0E0
 * Original: 0x0009C0E0 - 0x0009C130 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0009C0E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C0ECu); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C0EC: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30525058) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30525058 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009C107; /* je: equal / zero */

loc_0009C102: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C107: ;
    if (0x10) _cf = (int)(((edi) >> (32 - (0x10))) & 1);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C110u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009C110: ;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009C11Eu); RECOMP_ABI_CALL(0x0009C000u, sub_0009C000); /* call 0x0009C000 */

loc_0009C11E: ;
    ecx = eax;
    eax = ZX16(MEM16(esi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C130
 * Original: 0x0009C130 - 0x0009C14A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C13Bu); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C13B: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C145u); RECOMP_ABI_CALL(0x0009C0E0u, sub_0009C0E0); /* call 0x0009C0E0 */

loc_0009C145: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C150
 * Original: 0x0009C150 - 0x0009C1A2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C19B; /* je: equal / zero */

loc_0009C15A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C161u); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009C161: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C167u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C167: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0009C16Fu); RECOMP_ABI_CALL(0x0009BE70u, sub_0009BE70); /* call 0x0009BE70 */

loc_0009C16F: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0009C17Du); RECOMP_ABI_CALL(0x0009BED0u, sub_0009BED0); /* call 0x0009BED0 */

loc_0009C17D: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C187u); RECOMP_ABI_CALL(0x0009BC80u, sub_0009BC80); /* call 0x0009BC80 */

loc_0009C187: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C18Du); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C18D: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C197u); RECOMP_ABI_CALL(0x0009C0E0u, sub_0009C0E0); /* call 0x0009C0E0 */

loc_0009C197: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0009C19B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C1B0
 * Original: 0x0009C1B0 - 0x0009C207 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C1B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C200; /* je: equal / zero */

loc_0009C1BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C1C1u); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009C1C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C1C7u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C1C7: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0009C1CFu); RECOMP_ABI_CALL(0x0009BE70u, sub_0009BE70); /* call 0x0009BE70 */

loc_0009C1CF: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0009C1DDu); RECOMP_ABI_CALL(0x0009BED0u, sub_0009BED0); /* call 0x0009BED0 */

loc_0009C1DD: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C1ECu); RECOMP_ABI_CALL(0x0009BCB0u, sub_0009BCB0); /* call 0x0009BCB0 */

loc_0009C1EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C1F2u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C1F2: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C1FCu); RECOMP_ABI_CALL(0x0009C0E0u, sub_0009C0E0); /* call 0x0009C0E0 */

loc_0009C1FC: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0009C200: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C210
 * Original: 0x0009C210 - 0x0009C26C (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C261; /* je: equal / zero */

loc_0009C21A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C220u); RECOMP_ABI_CALL(0x0009B8A0u, sub_0009B8A0); /* call 0x0009B8A0 */

loc_0009C220: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0009C22Au); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C22A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0009C236u); RECOMP_ABI_CALL(0x0009BAD0u, sub_0009BAD0); /* call 0x0009BAD0 */

loc_0009C236: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C268; /* je: equal / zero */

loc_0009C23A: ;
    eax = esi;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C245u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009C245: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C261; /* jne: not equal / not zero */

loc_0009C24E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C254u); RECOMP_ABI_CALL(0x0009B890u, sub_0009B890); /* call 0x0009B890 */

loc_0009C254: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C25Eu); RECOMP_ABI_CALL(0x0009C0E0u, sub_0009C0E0); /* call 0x0009C0E0 */

loc_0009C25E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C261: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C268: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C270
 * Original: 0x0009C270 - 0x0009C2AF (63 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009C270: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO16(eax, MEM16(esp + 4));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(ecx, MEM16(esp + 0xC));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    MEM16(esi) = LO16(eax);
    MEM16(esi + 2) = LO16(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009C2A5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009C2A5: ;
    MEM16(esi + 4) = LO16(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C2B0
 * Original: 0x0009C2B0 - 0x0009C2C7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C2B0: ;
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0x17F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0x17F (16-bit) */
    eax = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0009C2C6; /* jae: above or equal (unsigned >=) */

loc_0009C2BE: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C2C6; /* je: equal / zero */

loc_0009C2C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C2C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C2D0
 * Original: 0x0009C2D0 - 0x0009C2EA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009C2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C2D0: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF61) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF61 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009C2E7; /* jb: below (unsigned <) */

loc_0009C2DB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF9F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF9F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009C2E7; /* ja: above (unsigned >) */

loc_0009C2E1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009C2E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009C2F0
 * Original: 0x0009C2F0 - 0x0009C303 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C2F0: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x1809B0);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C310
 * Original: 0x0009C310 - 0x0009C50C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C310: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C32B; /* jge: greater or equal (signed >=) */

loc_0009C315: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x0009C323u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C323: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0009C32B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C350; /* jge: greater or equal (signed >=) */

loc_0009C333: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0009C350: ;
    if (CMP_NE(_fa, _fb)) goto loc_0009C359; /* jne: not equal / not zero */

loc_0009C352: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C358u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_0009C358: ;
    esp += 4; return; /* ret */

loc_0009C359: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C368; /* jne: not equal / not zero */

loc_0009C361: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C367u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_0009C367: ;
    esp += 4; return; /* ret */

loc_0009C368: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C377; /* jne: not equal / not zero */

loc_0009C370: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C376u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_0009C376: ;
    esp += 4; return; /* ret */

loc_0009C377: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C386; /* jne: not equal / not zero */

loc_0009C37F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C385u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0009C385: ;
    esp += 4; return; /* ret */

loc_0009C386: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C395; /* jne: not equal / not zero */

loc_0009C38E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C394u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_0009C394: ;
    esp += 4; return; /* ret */

loc_0009C395: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3A4; /* jne: not equal / not zero */

loc_0009C39D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3A3u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_0009C3A3: ;
    esp += 4; return; /* ret */

loc_0009C3A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3B3; /* jne: not equal / not zero */

loc_0009C3AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3B2u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_0009C3B2: ;
    esp += 4; return; /* ret */

loc_0009C3B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3C2; /* jne: not equal / not zero */

loc_0009C3BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3C1u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0009C3C1: ;
    esp += 4; return; /* ret */

loc_0009C3C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3D1; /* jne: not equal / not zero */

loc_0009C3CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3D0u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0009C3D0: ;
    esp += 4; return; /* ret */

loc_0009C3D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3E0; /* jne: not equal / not zero */

loc_0009C3D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3DFu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0009C3DF: ;
    esp += 4; return; /* ret */

loc_0009C3E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3EF; /* jne: not equal / not zero */

loc_0009C3E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3EEu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0009C3EE: ;
    esp += 4; return; /* ret */

loc_0009C3EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3FE; /* jne: not equal / not zero */

loc_0009C3F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C3FDu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0009C3FD: ;
    esp += 4; return; /* ret */

loc_0009C3FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C40D; /* jne: not equal / not zero */

loc_0009C406: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C40Cu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0009C40C: ;
    esp += 4; return; /* ret */

loc_0009C40D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C41C; /* jne: not equal / not zero */

loc_0009C415: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C41Bu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0009C41B: ;
    esp += 4; return; /* ret */

loc_0009C41C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C42B; /* jne: not equal / not zero */

loc_0009C424: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C42Au); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0009C42A: ;
    esp += 4; return; /* ret */

loc_0009C42B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C43A; /* jne: not equal / not zero */

loc_0009C433: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C439u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0009C439: ;
    esp += 4; return; /* ret */

loc_0009C43A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C449; /* jne: not equal / not zero */

loc_0009C442: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C448u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_0009C448: ;
    esp += 4; return; /* ret */

loc_0009C449: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C458; /* jne: not equal / not zero */

loc_0009C451: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C457u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_0009C457: ;
    esp += 4; return; /* ret */

loc_0009C458: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C467; /* jne: not equal / not zero */

loc_0009C460: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C466u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_0009C466: ;
    esp += 4; return; /* ret */

loc_0009C467: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C476; /* jne: not equal / not zero */

loc_0009C46F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C475u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_0009C475: ;
    esp += 4; return; /* ret */

loc_0009C476: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C485; /* jne: not equal / not zero */

loc_0009C47E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C484u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_0009C484: ;
    esp += 4; return; /* ret */

loc_0009C485: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C494; /* jne: not equal / not zero */

loc_0009C48D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C493u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0009C493: ;
    esp += 4; return; /* ret */

loc_0009C494: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4A3; /* jne: not equal / not zero */

loc_0009C49C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4A2u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_0009C4A2: ;
    esp += 4; return; /* ret */

loc_0009C4A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4B2; /* jne: not equal / not zero */

loc_0009C4AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4B1u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_0009C4B1: ;
    esp += 4; return; /* ret */

loc_0009C4B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4C1; /* jne: not equal / not zero */

loc_0009C4BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4C0u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_0009C4C0: ;
    esp += 4; return; /* ret */

loc_0009C4C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4D0; /* jne: not equal / not zero */

loc_0009C4C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4CFu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0009C4CF: ;
    esp += 4; return; /* ret */

loc_0009C4D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4DF; /* jne: not equal / not zero */

loc_0009C4D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4DEu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0009C4DE: ;
    esp += 4; return; /* ret */

loc_0009C4DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4EE; /* jne: not equal / not zero */

loc_0009C4E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4EDu); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0009C4ED: ;
    esp += 4; return; /* ret */

loc_0009C4EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C4FD; /* jne: not equal / not zero */

loc_0009C4F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C4FCu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0009C4FC: ;
    esp += 4; return; /* ret */

loc_0009C4FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C50B; /* jne: not equal / not zero */

loc_0009C505: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C50Bu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0009C50B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C510
 * Original: 0x0009C510 - 0x0009C586 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C510: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0009C53B; /* jge: greater or equal (signed >=) */

loc_0009C517: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0009C51E: ;
    edi = MEM32(0x1809A8);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x1809B0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C53B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C549; /* jge: greater or equal (signed >=) */

loc_0009C540: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_0009C51E;

loc_0009C549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C558; /* jne: not equal / not zero */

loc_0009C54E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C555u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009C555: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C567; /* jne: not equal / not zero */

loc_0009C55D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C564u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_0009C564: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C576; /* jne: not equal / not zero */

loc_0009C56C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C573u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_0009C573: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009C583; /* jg: greater (signed >) */

loc_0009C57B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C583u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_0009C583: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C590
 * Original: 0x0009C590 - 0x0009C5AA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C590: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C5A9; /* je: equal / zero */

loc_0009C598: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 2;

loc_0009C5A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C5B0
 * Original: 0x0009C5B0 - 0x0009C5CA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C5B0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C5C9; /* je: equal / zero */

loc_0009C5B8: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 5;

loc_0009C5C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C5D0
 * Original: 0x0009C5D0 - 0x0009C5D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5D0(void)
{

loc_0009C5D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C5E0
 * Original: 0x0009C5E0 - 0x0009C5E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5E0(void)
{

loc_0009C5E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C5F0
 * Original: 0x0009C5F0 - 0x0009C76F (383 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x0009C5FBu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0009C5FB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    PUSH32(esp, 0x0009C607u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C607: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x180CB0) = esi;
    PUSH32(esp, 0x0009C615u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0009C615: ;
    edx = MEM32(0x1809A8);
    edx = edx | 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x1809A8) = edx;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x0009C633u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0009C633: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x0009C642u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C642: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = 1;
    PUSH32(esp, 0x0009C65Bu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C65B: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009C674u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C674: ;
    eax = 2;
    MEM32(0x1809E8) = eax;
    MEM32(0x1809F8) = eax;
    MEM32(0x1809BC) = eax;
    MEM32(0x1809C0) = eax;
    eax = MEM32(0x1809A8);
    ecx = 4;
    PUSH32(esp, esi);
    eax = eax | 0x3A01;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x180CAC) = 0x303;
    MEM32(0x180D48) = esi;
    MEM32(0x180D4C) = esi;
    MEM32(0x180D50) = esi;
    MEM32(0x1809E0) = ecx;
    MEM32(0x1809EC) = esi;
    MEM32(0x1809F0) = ecx;
    MEM32(0x1809FC) = esi;
    MEM32(0x1809DC) = esi;
    MEM32(0x1809A8) = eax;
    MEM32(0x1809C4) = esi;
    PUSH32(esp, 0x0009C6E8u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009C6E8: ;
    eax = MEM32(0x1809A8);
    eax = eax | 0xC02;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    MEM32(0x180A04) = esi;
    MEM32(0x180A60) = 1;
    MEM32(0x180A70) = 1;
    MEM32(0x1809A8) = eax;
    MEM32(0x180A5C) = esi;
    PUSH32(esp, 0x0009C723u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009C723: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(0x180CA0) = esi;
    PUSH32(esp, 0x0009C730u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0009C730: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C737u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009C737: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009C73Fu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009C73F: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C746u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009C746: ;
    ecx = MEM32(0x1809A8);
    eax = 3;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809B0) = eax;
    MEM32(0x1809B4) = eax;
    MEM32(0x180A30) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180A34) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C770
 * Original: 0x0009C770 - 0x0009C77D (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C770(void)
{

loc_0009C770: ;
    PUSH32(esp, 0x0009C775u); RECOMP_ABI_CALL(0x0009C5F0u, sub_0009C5F0); /* call 0x0009C5F0 */

loc_0009C775: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009C77Cu); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0009C77C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C780
 * Original: 0x0009C780 - 0x0009C826 (166 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C780(void)
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

loc_0009C780: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(esi) = 1;
    MEM16(esi + 2) = 0x1C;
    SET_LO16(eax, MEM16(edi + 0xC));
    MEM16(esi + 4) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0xE));
    MEM16(esi + 6) = LO16(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009C7CDu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009C7CD: ;
    MEM16(esi + 8) = LO16(eax);
    fp_push(MEMF(edi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009C7F7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009C7F7: ;
    MEM16(esi + 0xA) = LO16(eax);
    edx = MEM32(edi + 0x1C);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x10);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x14) = ecx;
    SET_LO16(edx, MEM16(edi + 8));
    MEM16(esi + 0x18) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0xA));
    POP32(esp, edi);
    MEM16(esi + 0x1A) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C830
 * Original: 0x0009C830 - 0x0009C861 (49 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009C830: ;
    fp_push(MEMF(0x935038)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    PUSH32(esp, 0x0009C841u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009C841: ;
    ecx = MEM32(esp + 4);
    MEM16(ecx) = LO16(eax);
    fp_push(MEMF(0x93503C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    PUSH32(esp, 0x0009C859u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009C859: ;
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(eax);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C870
 * Original: 0x0009C870 - 0x0009C8C7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C870: ;
    eax = ZX16(MEM16(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(esp + 0x10));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009C8BF; /* jl: less (signed <) */

loc_0009C88E: ;
    ebp = MEM32(esp + 0x1C);

loc_0009C892: ;
    eax = edi + ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + eax * 2;
    edx = ebp + ecx * 2;
    ecx = ZX16(MEM16(edx));
    edx = ZX16(MEM16(edx + 2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C8B6; /* jge: greater or equal (signed >=) */

loc_0009C8B1: ;
    ebx = eax + 1;
    goto loc_0009C8BB;

loc_0009C8B6: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0009C8C2; /* jle: less or equal (signed <=) */

loc_0009C8B8: ;
    edi = eax + -1;

loc_0009C8BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009C892; /* jle: less or equal (signed <=) */

loc_0009C8BF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009C8C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C8D0
 * Original: 0x0009C8D0 - 0x0009C93A (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C8D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0009C933; /* jne: not equal / not zero */

loc_0009C8D9: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C8E8u); RECOMP_ABI_CALL(0x00152073u, sub_00152073); /* call 0x00152073 */

loc_0009C8E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C933; /* je: equal / zero */

loc_0009C8EF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C8FBu); RECOMP_ABI_CALL(0x00152073u, sub_00152073); /* call 0x00152073 */

loc_0009C8FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C933; /* je: equal / zero */

loc_0009C902: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, 0x2C6);
    PUSH32(esp, 0x2F1688);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C91Eu); RECOMP_ABI_CALL(0x0009C870u, sub_0009C870); /* call 0x0009C870 */

loc_0009C91E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C933; /* je: equal / zero */

loc_0009C926: ;
    ecx = eax + eax * 2;
    eax = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x2F168C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C933: ;
    eax = MEM32(0x2EF2B8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C940
 * Original: 0x0009C940 - 0x0009C941 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C940(void)
{

loc_0009C940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C950
 * Original: 0x0009C950 - 0x0009C951 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C950(void)
{

loc_0009C950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C960
 * Original: 0x0009C960 - 0x0009C961 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C960(void)
{

loc_0009C960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C970
 * Original: 0x0009C970 - 0x0009C971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C970(void)
{

loc_0009C970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C980
 * Original: 0x0009C980 - 0x0009CADC (348 bytes, 83 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x344);
    PUSH32(esp, 0x0009C98Eu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0009C98E: ;
    edx = MEM32(0x1809A8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = 2;
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 3;
    PUSH32(esp, edi);
    MEM32(0x1809E8) = ebx;
    MEM32(0x1809EC) = edi;
    MEM32(0x1809E0) = esi;
    MEM32(0x1809F8) = ebx;
    MEM32(0x1809FC) = edi;
    MEM32(0x1809A8) = edx;
    MEM32(0x1809F0) = 4;
    PUSH32(esp, 0x0009C9DBu); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009C9DB: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x401;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x14);
    MEM32(0x1809B0) = esi;
    MEM32(0x1809B4) = esi;
    MEM32(0x180A04) = ebx;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009CA05u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009CA05: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009CA0Fu); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009CA0F: ;
    MEM32(0x180A68) = ebx;
    MEM32(0x180A78) = ebx;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x800;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(0x180A6C) = edi;
    MEM32(0x180A60) = 4;
    MEM32(0x180A7C) = edi;
    MEM32(0x180A70) = ebx;
    PUSH32(esp, 0x0009CA4Du); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009CA4D: ;
    eax = MEM32(0x1809A8);
    MEM32(0x180A30) = esi;
    MEM32(0x180A34) = esi;
    esi = MEM32(esp + 0x18);
    eax = eax | 0x402;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;
    MEM32(0x180A84) = edi;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009CA7Bu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009CA7B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009CA85u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009CA85: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0x0009CA91u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CA91: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = ebx;
    PUSH32(esp, 0x0009CAA6u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CAA6: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009CABFu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CABF: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x0009CAD0u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009CAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009CAD7u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009CAD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CAE0
 * Original: 0x0009CAE0 - 0x0009CB4A (106 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CAE0: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x0009CAEAu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0009CAEA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0009CAF1u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0009CAF1: ;
    ecx = 3;
    eax = 1;
    MEM32(0x180A68) = ecx;
    MEM32(0x180A78) = ecx;
    ecx = MEM32(0x1809A8);
    PUSH32(esp, 0);
    ecx = ecx | 0xC02;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(0x1809E0) = 4;
    MEM32(0x180A04) = 0;
    MEM32(0x180A44) = eax;
    MEM32(0x180A60) = eax;
    MEM32(0x180A6C) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180A7C) = eax;
    PUSH32(esp, 0x0009CB49u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0009CB49: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CB50
 * Original: 0x0009CB50 - 0x0009CB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CB50(void)
{

loc_0009CB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CB60
 * Original: 0x0009CB60 - 0x0009CB61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CB60(void)
{

loc_0009CB60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CB70
 * Original: 0x0009CB70 - 0x0009CCB5 (325 bytes, 74 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CB70: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CBAB; /* jne: not equal / not zero */

loc_0009CB78: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CB87u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CB87: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009CBA0u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CBA0: ;
    MEM32(0x180CAC) = 0x303;
    esp += 4; return; /* ret */

loc_0009CBAB: ;
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CBDF; /* jne: not equal / not zero */

loc_0009CBB5: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CBC1u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CBC1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40348;
    MEM32(0x180CA8) = esi;
    PUSH32(esp, 0x0009CBD3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CBD3: ;
    MEM32(0x180CAC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CBDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CC02; /* jne: not equal / not zero */

loc_0009CBE4: ;
    edx = 0x307;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CBF3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CBF3: ;
    MEM32(0x180CA8) = 0x307;
    goto loc_0009CC9A;

loc_0009CC02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CC34; /* jne: not equal / not zero */

loc_0009CC07: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CC16u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC16: ;
    edx = esi;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009CC2Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC2C: ;
    MEM32(0x180CAC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CC34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CC83; /* jne: not equal / not zero */

loc_0009CC39: ;
    edx = 0x8003;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CC48u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC48: ;
    edx = 0x8004;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x8003;
    PUSH32(esp, 0x0009CC61u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC61: ;
    esi = MEM32(esp + 0x10);
    edx = esi;
    ecx = 0x4034C;
    MEM32(0x180CAC) = 0x8004;
    PUSH32(esp, 0x0009CC7Bu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC7B: ;
    MEM32(0x180CDC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CC83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CCB3; /* jne: not equal / not zero */

loc_0009CC88: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0x0009CC94u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CC94: ;
    MEM32(0x180CA8) = esi;

loc_0009CC9A: ;
    ecx = 0x40348;
    edx = 0x303;
    PUSH32(esp, 0x0009CCA9u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009CCA9: ;
    MEM32(0x180CAC) = 0x303;

loc_0009CCB3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CCC0
 * Original: 0x0009CCC0 - 0x0009CCC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CCC0(void)
{

loc_0009CCC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CCD0
 * Original: 0x0009CCD0 - 0x0009CCE0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CCD0: ;
    PUSH32(esp, 0x0009CCD5u); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_0009CCD5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009CCDD; /* je: equal / zero */

loc_0009CCDA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009CCDD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009CCF0
 * Original: 0x0009CCF0 - 0x0009CCFF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CCF0(void)
{

loc_0009CCF0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x923D70);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD00
 * Original: 0x0009CD00 - 0x0009CD10 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD00(void)
{

loc_0009CD00: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x923D6C);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD30
 * Original: 0x0009CD30 - 0x0009CD31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD30(void)
{

loc_0009CD30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD40
 * Original: 0x0009CD40 - 0x0009CD41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD40(void)
{

loc_0009CD40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD50
 * Original: 0x0009CD50 - 0x0009CD51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD50(void)
{

loc_0009CD50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD60
 * Original: 0x0009CD60 - 0x0009CD77 (23 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD60(void)
{

loc_0009CD60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x9357D4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CD71u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009CD71: ;
    eax = MEM32(0x9357EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CD80
 * Original: 0x0009CD80 - 0x0009CD97 (23 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD80(void)
{

loc_0009CD80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x9357D4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CD91u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009CD91: ;
    eax = MEM32(0x9357EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CDA0
 * Original: 0x0009CDA0 - 0x0009CDCA (42 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CDA0(void)
{

loc_0009CDA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x9357D4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CDB1u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009CDB1: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(0x9357E8);
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    ecx = MEM32(0x9357EC);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009CDD0
 * Original: 0x0009CDD0 - 0x0009CE88 (184 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CDD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO16(eax, MEM16(esp + 4));
    if (CMP_EQ(_fa, _fb)) goto loc_0009CE6B; /* je: equal / zero */

loc_0009CDE1: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x40 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CDED; /* jne: not equal / not zero */

loc_0009CDE7: ;
    eax = 0x5B;
    esp += 4; return; /* ret */

loc_0009CDED: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5B (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CDF9; /* jne: not equal / not zero */

loc_0009CDF3: ;
    eax = 0x54;
    esp += 4; return; /* ret */

loc_0009CDF9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE05; /* jne: not equal / not zero */

loc_0009CDFF: ;
    eax = 0x55;
    esp += 4; return; /* ret */

loc_0009CE05: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x41 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE11; /* jne: not equal / not zero */

loc_0009CE0B: ;
    eax = 0xBF;
    esp += 4; return; /* ret */

loc_0009CE11: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x42 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE1D; /* jne: not equal / not zero */

loc_0009CE17: ;
    eax = 0xC0;
    esp += 4; return; /* ret */

loc_0009CE1D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x58 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE29; /* jne: not equal / not zero */

loc_0009CE23: ;
    eax = 0xC1;
    esp += 4; return; /* ret */

loc_0009CE29: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x59 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE35; /* jne: not equal / not zero */

loc_0009CE2F: ;
    eax = 0xC2;
    esp += 4; return; /* ret */

loc_0009CE35: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x57 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE41; /* jne: not equal / not zero */

loc_0009CE3B: ;
    eax = 0xC3;
    esp += 4; return; /* ret */

loc_0009CE41: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4B (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE4D; /* jne: not equal / not zero */

loc_0009CE47: ;
    eax = 0xC4;
    esp += 4; return; /* ret */

loc_0009CE4D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE59; /* jne: not equal / not zero */

loc_0009CE53: ;
    eax = 0xC5;
    esp += 4; return; /* ret */

loc_0009CE59: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x52) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x52 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE65; /* jne: not equal / not zero */

loc_0009CE5F: ;
    eax = 0xC6;
    esp += 4; return; /* ret */

loc_0009CE65: ;
    eax = MEM32(0x2EF3C0);
    esp += 4; return; /* ret */

loc_0009CE6B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x178) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x178 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE77; /* jne: not equal / not zero */

loc_0009CE71: ;
    eax = 0x92;
    esp += 4; return; /* ret */

loc_0009CE77: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009CE65; /* jae: above or equal (unsigned >=) */

loc_0009CE7D: ;
    eax = ZX16(LO16(eax));
    eax = MEM32(eax * 4 + 0x2EF3C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CE90
 * Original: 0x0009CE90 - 0x0009CEB5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CE90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009CE9Bu); RECOMP_ABI_CALL(0x001520A0u, sub_001520A0); /* call 0x001520A0 */

loc_0009CE9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CEAE; /* je: equal / zero */

loc_0009CEA2: ;
    eax = ZX16(LO16(esi));
    eax = MEM32(eax * 4 + 0x2F266C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CEAE: ;
    eax = MEM32(0x2F272C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009CEC0
 * Original: 0x0009CEC0 - 0x0009CEFA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CEC0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CEEC; /* jne: not equal / not zero */

loc_0009CEC8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009CED3u); RECOMP_ABI_CALL(0x001520A0u, sub_001520A0); /* call 0x001520A0 */

loc_0009CED3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CEE1; /* je: equal / zero */

loc_0009CEDA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CEE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x20 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CEEC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CEF6u); RECOMP_ABI_CALL(0x001520A0u, sub_001520A0); /* call 0x001520A0 */

loc_0009CEF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009CF00
 * Original: 0x0009CF00 - 0x0009CF25 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CF00: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC0 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009CF11; /* jb: below (unsigned <) */

loc_0009CF0B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009CF11: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA0 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009CF22; /* jb: below (unsigned <) */

loc_0009CF17: ;
    eax = ZX16(LO16(eax));
    eax = ZX8(MEM8(eax + 0x2F15C8));
    esp += 4; return; /* ret */

loc_0009CF22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009CF30
 * Original: 0x0009CF30 - 0x0009CF44 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CF30: ;
    eax = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax));
    ecx = MEM32(esp + 8);
    edx = ZX16(MEM16(ecx));
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009CF50
 * Original: 0x0009CF50 - 0x0009D00E (190 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CF50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF61) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF61 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009CF6F; /* jb: below (unsigned <) */

loc_0009CF5A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF9F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF9F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009CF6F; /* ja: above (unsigned >) */

loc_0009CF60: ;
    eax = ZX16(LO16(eax));
    eax = ZX16(MEM16(eax * 2 + 0x2D1726));
    MEM32(esp + 4) = eax;

loc_0009CF6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x2F14F8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009CF80;

    /* nop */

loc_0009CF80: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + ecx * 2 + -2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edx + ecx * 2 + -2) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009CF98; /* jbe: below or equal (unsigned <=) */

loc_0009CF8D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009CF80; /* jb: below (unsigned <) */

loc_0009CF96: ;
    goto loc_0009CFF3;

loc_0009CF98: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x9CF30);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009CFB1u); RECOMP_ABI_CALL(0x00152128u, sub_00152128); /* call 0x00152128 */

loc_0009CFB1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CFEF; /* je: equal / zero */

loc_0009CFB8: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 4) = edi;
    edi = ZX16(MEM16(esi + 8));
    ecx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ebx + 8) = LO16(edx);
    esi = ZX16(MEM16(esi + 8));
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ebx + 0xA) = LO16(eax);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009CFEF: ;
    eax = MEM32(esp + 0xC);

loc_0009CFF3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFD (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D00B; /* je: equal / zero */

loc_0009CFF9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFD);
    PUSH32(esp, 0x0009D008u); RECOMP_ABI_CALL(0x0009CF50u, sub_0009CF50); /* call 0x0009CF50 */

loc_0009D008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009D00B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D010
 * Original: 0x0009D010 - 0x0009D031 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D010: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    edx = ZX8(MEM8(0x935610));
    eax = eax >> 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + ecx * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D040
 * Original: 0x0009D040 - 0x0009D05B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0009D040: ;
    ecx = MEM32(0x93560C);
    eax = MEM32(esp + 4);
    edx = ecx + eax;
    eax = 0x930D88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D060
 * Original: 0x0009D060 - 0x0009D08A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D060: ;
    ecx = MEM32(0x935028);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x935020) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x935020 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009D071; /* jbe: below or equal (unsigned <=) */

loc_0009D06E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009D071: ;
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x935028) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D090
 * Original: 0x0009D090 - 0x0009D091 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D090(void)
{

loc_0009D090: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D0A0
 * Original: 0x0009D0A0 - 0x0009D0A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D0A0(void)
{

loc_0009D0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D0B0
 * Original: 0x0009D0B0 - 0x0009D10C (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009D0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D0B0: ;
    eax = MEM32(esp + 4);
    ecx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(0xFFFFFDFFu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFDFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009D109; /* ja: above (unsigned >) */

loc_0009D0C3: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x9D10C); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0009D0CAu) goto loc_0009D0CA;
    if (_jt == 0x0009D0D0u) goto loc_0009D0D0;
    if (_jt == 0x0009D0F1u) goto loc_0009D0F1;
    if (_jt == 0x0009D0FDu) goto loc_0009D0FD;
    if (_jt == 0x0009D109u) goto loc_0009D109;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009D0CA: ;
    eax = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0009D0D0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D0F8; /* jne: not equal / not zero */

loc_0009D0D7: ;
    PUSH32(esp, 0x0009D0DCu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0009D0DC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    esp += 4; return; /* ret */

loc_0009D0F1: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D109; /* je: equal / zero */

loc_0009D0F8: ;
    eax = ZX8(MEM8(eax + 0x12));
    esp += 4; return; /* ret */

loc_0009D0FD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D0F8; /* jne: not equal / not zero */

loc_0009D104: ;
    eax = ZX8(MEM8(eax + 0xF));
    esp += 4; return; /* ret */

loc_0009D109: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D150
 * Original: 0x0009D150 - 0x0009D1AD (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D150: ;
    edx = MEM32(0x935030);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009D168; /* jl: less (signed <) */

loc_0009D15B: ;
    MEM32(0x935030) = 0x31;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009D168: ;
    ecx = MEM32(esp + 4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(0x935090) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x935090;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = esi;
    ecx = MEM32(ecx + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x18) = ecx;
    MEM32(0x935030) = edx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D1B0
 * Original: 0x0009D1B0 - 0x0009D204 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D1B0: ;
    eax = MEM32(0x935030);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x935030) = eax;
    if ((_fas >= 0)) goto loc_0009D1CA; /* jns: not sign (positive) */

loc_0009D1BD: ;
    MEM32(0x935030) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009D1CA: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(0x935090) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x935090;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D210
 * Original: 0x0009D210 - 0x0009D211 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D210(void)
{

loc_0009D210: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D220
 * Original: 0x0009D220 - 0x0009D221 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D220(void)
{

loc_0009D220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D230
 * Original: 0x0009D230 - 0x0009D28E (94 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D230: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D23Bu); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009D23B: ;
    ecx = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D24B; /* je: equal / zero */

loc_0009D246: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D24F; /* je: equal / zero */

loc_0009D24B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0009D24F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    MEM32(esi + 8) = edi;
    eax = MEM32(0x935870);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D26E; /* je: equal / zero */

loc_0009D262: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D268u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D268: ;
    MEM32(0x935870) = edi;

loc_0009D26E: ;
    eax = MEM32(0x935874);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D283; /* je: equal / zero */

loc_0009D277: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D27Du); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D27D: ;
    MEM32(0x935874) = edi;

loc_0009D283: ;
    MEM32(esi + 4) = edi;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D290
 * Original: 0x0009D290 - 0x0009D2DA (74 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D290: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    MEM32(esi + 8) = ecx;
    eax = MEM32(0x935870);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D2BA; /* je: equal / zero */

loc_0009D2AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D2B4u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D2B4: ;
    MEM32(0x935870) = edi;

loc_0009D2BA: ;
    eax = MEM32(0x935874);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D2CF; /* je: equal / zero */

loc_0009D2C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D2C9u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D2C9: ;
    MEM32(0x935874) = edi;

loc_0009D2CF: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D2E0
 * Original: 0x0009D2E0 - 0x0009D32C (76 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D2E0(void)
{

loc_0009D2E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D2E6u); RECOMP_ABI_CALL(0x00164580u, sub_00164580); /* call 0x00164580 */

loc_0009D2E6: ;
    MEM32(0x935870) = eax;
    PUSH32(esp, 0x0009D2F0u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_0009D2F0: ;
    esi = MEM32(esp + 8);
    MEM32(0x935874) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D303u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0009D303: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D313u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0009D313: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009D32Au); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_0009D32A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D330
 * Original: 0x0009D330 - 0x0009D3B8 (136 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009D33Bu); RECOMP_ABI_CALL(0x00164580u, sub_00164580); /* call 0x00164580 */

loc_0009D33B: ;
    edi = eax;
    PUSH32(esp, 0x0009D342u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_0009D342: ;
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D354u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0009D354: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D364u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0009D364: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009D37Eu); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_0009D37E: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009D389u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0009D389: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D39D; /* je: equal / zero */

loc_0009D390: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D396u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D396: ;
    MEM32(esi + 4) = 0;

loc_0009D39D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D3A7; /* je: equal / zero */

loc_0009D3A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009D3A7u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D3A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D3B1; /* je: equal / zero */

loc_0009D3AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009D3B1u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D3B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D3C0
 * Original: 0x0009D3C0 - 0x0009D3F5 (53 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D3C0(void)
{

loc_0009D3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D3C6u); RECOMP_ABI_CALL(0x00164580u, sub_00164580); /* call 0x00164580 */

loc_0009D3C6: ;
    MEM32(0x935870) = eax;
    PUSH32(esp, 0x0009D3D0u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_0009D3D0: ;
    esi = MEM32(esp + 8);
    MEM32(0x935874) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D3E3u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0009D3E3: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D3F3u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0009D3F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D400
 * Original: 0x0009D400 - 0x0009D45F (95 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D400: ;
    eax = MEM32(0x935874);
    ecx = MEM32(0x935870);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D412u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0009D412: ;
    eax = MEM32(0x935870);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D42B; /* je: equal / zero */

loc_0009D41B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D421u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D421: ;
    MEM32(0x935870) = 0;

loc_0009D42B: ;
    eax = MEM32(0x935874);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D444; /* je: equal / zero */

loc_0009D434: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D43Au); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D43A: ;
    MEM32(0x935874) = 0;

loc_0009D444: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D45D; /* je: equal / zero */

loc_0009D450: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D456u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0009D456: ;
    MEM32(esi + 4) = 0;

loc_0009D45D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D460
 * Original: 0x0009D460 - 0x0009D467 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D460(void)
{

loc_0009D460: ;
    eax = ecx;
    MEM8(eax + 0x25) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D470
 * Original: 0x0009D470 - 0x0009D478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D470(void)
{

loc_0009D470: ;
    MEM8(0x935969) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D480
 * Original: 0x0009D480 - 0x0009D4D0 (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D480: ;
    ecx = MEM32(0x1809B0);
    eax = MEM32(esp + 8);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(0x1809B4);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(0x180A30);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(0x180A34);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(0x1809A8);
    eax = 3;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809B0) = eax;
    MEM32(0x1809B4) = eax;
    MEM32(0x180A30) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180A34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D4E0
 * Original: 0x0009D4E0 - 0x0009D524 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D4E0: ;
    SET_LO8(eax, MEM8(0x935969));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D523; /* je: equal / zero */

loc_0009D4E9: ;
    eax = MEM32(0x93596C);
    ecx = MEM32(0x935970);
    edx = MEM32(0x935974);
    MEM32(0x1809B0) = eax;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 3;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x935978);
    MEM8(0x935969) = 0;
    MEM32(0x1809B4) = ecx;
    MEM32(0x180A30) = edx;
    MEM32(0x180A34) = eax;

loc_0009D523: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D530
 * Original: 0x0009D530 - 0x0009D531 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D530(void)
{

loc_0009D530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D540
 * Original: 0x0009D540 - 0x0009D57F (63 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D540: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D572u); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_0009D572: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D57Du); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009D57D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D580
 * Original: 0x0009D580 - 0x0009D5BC (60 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D5AFu); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_0009D5AF: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D5BAu); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009D5BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D5C0
 * Original: 0x0009D5C0 - 0x0009D5FF (63 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D5C0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009D5F2u); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_0009D5F2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D5FDu); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009D5FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D600
 * Original: 0x0009D600 - 0x0009D63B (59 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D600: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D62Eu); RECOMP_ABI_CALL(0x001A648Cu, sub_001A648C); /* call 0x001A648C */

loc_0009D62E: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D639u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0009D639: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D640
 * Original: 0x0009D640 - 0x0009D6B5 (117 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D64Bu); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009D64B: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D663; /* jne: not equal / not zero */

loc_0009D656: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009D663: ;
    PUSH32(esp, 0x9359A4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D670u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009D670: ;
    eax = MEM32(0x9359A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D6B3; /* je: equal / zero */

loc_0009D67A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D68C; /* je: equal / zero */

loc_0009D67F: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009D68C: ;
    eax = MEM32(0x9359B8);
    edx = MEM32(esi);
    ecx = eax * 4;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(0x9359BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2E);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D6B3u); RECOMP_ABI_CALL(0x001A648Cu, sub_001A648C); /* call 0x001A648C */

loc_0009D6B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D6C0
 * Original: 0x0009D6C0 - 0x0009D6EA (42 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D6C0: ;
    eax = MEM32(0x2F2754);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D6E9; /* je: equal / zero */

loc_0009D6C9: ;
    PUSH32(esp, 0x70);
    MEM32(0x2F2754) = 0;
    PUSH32(esp, 0x0009D6DAu); RECOMP_ABI_CALL(0x00160450u, sub_00160450); /* call 0x00160450 */

loc_0009D6DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x930FC8) = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x930FD0) = LO8(eax);

loc_0009D6E9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D6F0
 * Original: 0x0009D6F0 - 0x0009D70C (28 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D6F0: ;
    SET_LO8(eax, MEM8(0x930FD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D70B; /* je: equal / zero */

loc_0009D6F9: ;
    eax = MEM32(0x930FC8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D706u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_0009D706: ;
    MEM32(0x930FCC) = eax;

loc_0009D70B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D710
 * Original: 0x0009D710 - 0x0009D729 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009D726; /* jg: greater (signed >) */

loc_0009D71A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009D726; /* jg: greater (signed >) */

loc_0009D720: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009D726: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D730
 * Original: 0x0009D730 - 0x0009D749 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009D73E; /* jle: less or equal (signed <=) */

loc_0009D73C: ;
    eax = ecx;

loc_0009D73E: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009D748; /* jge: greater or equal (signed >=) */

loc_0009D746: ;
    eax = ecx;

loc_0009D748: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D750
 * Original: 0x0009D750 - 0x0009D76C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D750: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009D761; /* jle: less or equal (signed <=) */

loc_0009D75E: ;
    MEM8(ecx) = LO8(edx);
    esp += 4; return; /* ret */

loc_0009D761: ;
    SET_LO8(edx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009D75E; /* jg: greater (signed >) */

loc_0009D769: ;
    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D770
 * Original: 0x0009D770 - 0x0009D785 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D770(void)
{

loc_0009D770: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x5C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D790
 * Original: 0x0009D790 - 0x0009D7A5 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D790(void)
{

loc_0009D790: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x60) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D7B0
 * Original: 0x0009D7B0 - 0x0009D7D4 (36 bytes, 11 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D7B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D7B0: ;
    fp_push(MEMF(0x2EF280)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(ecx) = (float)fp_top(); /* fst */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEM32(ecx + 0x38) = eax;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D7E0
 * Original: 0x0009D7E0 - 0x0009D800 (32 bytes, 9 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D7E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D7E0: ;
    fp_push(MEMF(0x2EF280)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x3C) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D850
 * Original: 0x0009D850 - 0x0009D863 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D850(void)
{

loc_0009D850: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D870
 * Original: 0x0009D870 - 0x0009D8D7 (103 bytes, 25 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D870: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x68) = eax;
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(ecx + 0x50) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D8E0
 * Original: 0x0009D8E0 - 0x0009D933 (83 bytes, 23 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D8E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D8E0: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x68) = eax;
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    MEMF(ecx + 0x50) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D940
 * Original: 0x0009D940 - 0x0009D997 (87 bytes, 23 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D940(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D940: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x14);
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x68) = eax;
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(ecx + 0x50) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D9A0
 * Original: 0x0009D9A0 - 0x0009D9B5 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D9A0(void)
{

loc_0009D9A0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x74) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D9C0
 * Original: 0x0009D9C0 - 0x0009D9D4 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D9C0(void)
{

loc_0009D9C0: ;
    eax = 0x3F800000;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x78) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D9E0
 * Original: 0x0009D9E0 - 0x0009DA28 (72 bytes, 21 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009D9E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009D9E0: ;
    fp_push(MEMF(0x2EF280)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2EF280)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEM32(ecx + 0x28) = eax;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    MEM32(ecx + 0x48) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(ecx + 0x4C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009DA30
 * Original: 0x0009DA30 - 0x0009DA43 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DA30(void)
{

loc_0009DA30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x7C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009DA50
 * Original: 0x0009DA50 - 0x0009DAC9 (121 bytes, 26 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009DA50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009DA50: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(ecx + eax * 8 + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + eax * 8 + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(ecx + eax * 8 + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + eax * 8 + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + eax * 8 + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    MEMF(ecx + eax * 8 + 0x60) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(ecx + eax * 8 + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + eax * 8 + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009DAD0
 * Original: 0x0009DAD0 - 0x0009DAD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DAD0(void)
{

loc_0009DAD0: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DAE0
 * Original: 0x0009DAE0 - 0x0009DAFF (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DAE0(void)
{

loc_0009DAE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO16(eax, MEM16(eax + 0x12));
    MEM16(ecx + 0x12) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009DB00
 * Original: 0x0009DB00 - 0x0009DB04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB00(void)
{

loc_0009DB00: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB10
 * Original: 0x0009DB10 - 0x0009DB14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB10(void)
{

loc_0009DB10: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB20
 * Original: 0x0009DB20 - 0x0009DB24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB20(void)
{

loc_0009DB20: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB30
 * Original: 0x0009DB30 - 0x0009DB34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB30(void)
{

loc_0009DB30: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB40
 * Original: 0x0009DB40 - 0x0009DB44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB40(void)
{

loc_0009DB40: ;
    SET_LO8(eax, MEM8(ecx + 0x17));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB50
 * Original: 0x0009DB50 - 0x0009DB54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB50(void)
{

loc_0009DB50: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DB60
 * Original: 0x0009DB60 - 0x0009DB6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB60(void)
{

loc_0009DB60: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x18) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009DB70
 * Original: 0x0009DB70 - 0x0009DBA9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DB70: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x3F800000;
    MEM16(ecx) = LO16(edx);
    MEM16(ecx + 2) = LO16(edx);
    MEM16(ecx + 4) = 0x2D00;
    MEM16(ecx + 6) = 0x1E00;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = edx;
    MEM16(ecx + 0x1C) = 0x2D00;
    MEM16(ecx + 0x1E) = 0x1E00;
    MEM32(ecx + 0x20) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DBB0
 * Original: 0x0009DBB0 - 0x0009DBB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DBB0(void)
{

loc_0009DBB0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DBC0
 * Original: 0x0009DBC0 - 0x0009DBE1 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DBC0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 2) = LO8(edx);
    MEM8(ecx) = LO8(edx);
    MEM8(ecx + 3) = LO8(edx);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 1) = LO8(edx);
    MEM32(ecx + 0xC) = 0x3F800000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009DBF0
 * Original: 0x0009DBF0 - 0x0009DBFA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DBF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 4));
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC00
 * Original: 0x0009DC00 - 0x0009DC0D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 4));
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC10
 * Original: 0x0009DC10 - 0x0009DC1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 4));
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC20
 * Original: 0x0009DC20 - 0x0009DC29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC20: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC30
 * Original: 0x0009DC30 - 0x0009DC4D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC30: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC50
 * Original: 0x0009DC50 - 0x0009DC6B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC50: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(eax, LO8(eax) << 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC70
 * Original: 0x0009DC70 - 0x0009DC82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC70: ;
    SET_LO8(eax, MEM8(0x935852));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DC7C; /* je: equal / zero */

loc_0009DC79: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009DC7C: ;
    SET_LO8(eax, MEM8(0x935851));
    esp += 4; return; /* ret */

}

/**
 * sub_0009DC90
 * Original: 0x0009DC90 - 0x0009DC96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC90(void)
{

loc_0009DC90: ;
    eax = 0x935838;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DCA0
 * Original: 0x0009DCA0 - 0x0009DCC9 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DCA0: ;
    SET_LO16(edx, MEM16(0x93583E));
    eax = MEM32(0x93583C);
    ecx = MEM32(0x935838);
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x935854) = LO16(eax);
    MEM16(0x935856) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009DCD0
 * Original: 0x0009DCD0 - 0x0009DCD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DCD0(void)
{

loc_0009DCD0: ;
    MEM8(0x935610) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DCE0
 * Original: 0x0009DCE0 - 0x0009DD75 (149 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DCE0: ;
    ecx = ZX8(MEM8(esp + 0xC));
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if ((_fa != 0)) goto loc_0009DD00; /* jne: not equal / not zero */

loc_0009DCF4: ;
    SET_LO16(edx, MEM16(esi));
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009DD2F;

loc_0009DD00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DD1C; /* jne: not equal / not zero */

loc_0009DD05: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = MEM32(esp + 8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(esi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009DD2F;

loc_0009DD1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DD2F; /* jne: not equal / not zero */

loc_0009DD21: ;
    SET_LO16(edx, MEM16(esi + 0x1C));
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(eax) = LO16(edx);

loc_0009DD2F: ;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DD43; /* jne: not equal / not zero */

loc_0009DD36: ;
    SET_LO16(ecx, MEM16(esi + 2));
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009DD43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DD60; /* jne: not equal / not zero */

loc_0009DD48: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = MEM32(esp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009DD60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DD73; /* jne: not equal / not zero */

loc_0009DD65: ;
    SET_LO16(ecx, MEM16(esi + 0x1E));
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(eax) = LO16(ecx);

loc_0009DD73: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009DD80
 * Original: 0x0009DD80 - 0x0009DE1A (154 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DD80(void)
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

loc_0009DD80: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    eax = esi;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0009DDC3; /* jne: not equal / not zero */

loc_0009DD95: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x0009DDBEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DDBE: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi) = MEM16(edi) + LO16(eax);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009DDCF;

loc_0009DDC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DDCF; /* jne: not equal / not zero */

loc_0009DDC8: ;
    SET_LO16(ecx, MEM16(edi + 4));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi) = MEM16(edi) - LO16(ecx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009DDCF: ;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE0A; /* jne: not equal / not zero */

loc_0009DDDA: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 6);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x0009DE03u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DE03: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) + LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009DE0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE17; /* jne: not equal / not zero */

loc_0009DE0F: ;
    SET_LO16(eax, MEM16(edi + 6));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) - LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009DE17: ;
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
 * sub_0009DE20
 * Original: 0x0009DE20 - 0x0009DE76 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DE20: ;
    ecx = ZX8(MEM8(esp + 0xC));
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE3D; /* jne: not equal / not zero */

loc_0009DE32: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1680) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 0x1680;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009DE50;

loc_0009DE3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE50; /* jne: not equal / not zero */

loc_0009DE42: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, 0x2D00);
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(eax) = LO16(edx);

loc_0009DE50: ;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE62; /* jne: not equal / not zero */

loc_0009DE58: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xF00) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 0xF00;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009DE62: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE75; /* jne: not equal / not zero */

loc_0009DE67: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, 0x1E00);
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(eax) = LO16(ecx);

loc_0009DE75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DE80
 * Original: 0x0009DE80 - 0x0009DE8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DE80(void)
{

loc_0009DE80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x923D80) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0009DE90
 * Original: 0x0009DE90 - 0x0009DF00 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DE90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009DE90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 2));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0009DEABu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DEAB: ;
    ecx = ZX8(MEM8(esi + 1));
    MEM32(esp + 4) = ecx;
    MEM8(esp + 0xE) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0009DEC4u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DEC4: ;
    edx = ZX8(MEM8(esi));
    MEM32(esp + 4) = edx;
    MEM8(esp + 0xD) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0009DEDCu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DEDC: ;
    MEM8(esp + 0xC) = LO8(eax);
    eax = ZX8(MEM8(esi + 3));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, 0x0009DEF5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009DEF5: ;
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
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
 * sub_0009DF20
 * Original: 0x0009DF20 - 0x0009DF2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DF20(void)
{

loc_0009DF20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DF30
 * Original: 0x0009DF30 - 0x0009E0AC (380 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DF30(void)
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

loc_0009DF30: ;
    eax = MEM32(0x93583C);
    ecx = MEM32(0x935838);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = eax + ecx;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(0x93583E));
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x935854) = LO16(ebx);
    MEM16(0x935856) = LO16(edi);
    SET_LO8(edx, MEM8(esi + 0xC));
    MEM8(0x935851) = LO8(edx);
    eax = MEM32(esi + 0x14);
    MEM32(0x935848) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(0x93584C) = ecx;
    SET_LO16(edx, MEM16(esi + 8));
    MEM16(0x93583C) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(0x93583E) = LO16(eax);
    SET_LO8(ecx, MEM8(esi + 0x13));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x935858) = LO8(ecx);
    edx = MEM32(esi + 0x10);
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x935859) = LO8(edx);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009DFBC; /* jne: not equal / not zero */

loc_0009DFB5: ;
    MEM8(0x935850) = LO8(eax);
    goto loc_0009DFC3;

loc_0009DFBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x935850));

loc_0009DFC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO16(ecx, MEM16(esi + 4));
    MEM16(0x935838) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 6));
    MEM16(0x93583A) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E059; /* je: equal / zero */

loc_0009DFDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x93583A);
    PUSH32(esp, 0x935838);
    PUSH32(esp, 0x0009DFEDu); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_0009DFED: ;
    ecx = MEM32(0x935850);
    eax = ecx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E013; /* jne: not equal / not zero */

loc_0009DFFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x935838) = MEM16(0x935838) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x935838)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009E028;

loc_0009E013: ;
    edx = ecx;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E028; /* jne: not equal / not zero */

loc_0009E01D: ;
    SET_LO16(eax, MEM16(esi + 8));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x935838) = MEM16(0x935838) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x935838)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009E028: ;
    edx = ecx;
    edx = edx & 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E046; /* jne: not equal / not zero */

loc_0009E032: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93583A) = MEM16(0x93583A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009E059;

loc_0009E046: ;
    ecx = ecx & 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E059; /* jne: not equal / not zero */

loc_0009E04E: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x93583A) = MEM16(0x93583A) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009E059: ;
    ecx = ZX8(MEM8(esi + 0xE));
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(0x935844) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(MEM8(esi + 0xD));
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(0x935840) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E09A; /* jne: not equal / not zero */

loc_0009E092: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    MEM8(0x935850) = LO8(eax);

loc_0009E09A: ;
    MEM16(0x935856) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x935854) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E0B0
 * Original: 0x0009E0B0 - 0x0009E354 (676 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E0B0(void)
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

loc_0009E0B0: ;
    eax = MEM32(0x935838);
    ecx = MEM32(0x93583C);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(0x93583E));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    SET_LO16(edx, LO16(ebp));
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(0x935854) = LO16(ecx);
    MEM16(0x935856) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E0F9; /* je: equal / zero */

loc_0009E0E5: ;
    PUSH32(esp, 0x935838);
    PUSH32(esp, 0x0009E0EFu); RECOMP_ABI_CALL(0x0009D150u, sub_0009D150); /* call 0x0009D150 */

loc_0009E0EF: ;
    SET_LO16(ebp, MEM16(0x93583E));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009E0F9: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E10C; /* jne: not equal / not zero */

loc_0009E107: ;
    MEM8(0x935850) = LO8(eax);

loc_0009E10C: ;
    SET_LO8(eax, MEM8(0x935850));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E130; /* jne: not equal / not zero */

loc_0009E115: ;
    SET_LO16(edx, MEM16(ecx + 4));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x935838) = MEM16(0x935838) + LO16(edx);
    _fa = (uint32_t)(MEM16(0x935838)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ecx + 6));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93583A) = MEM16(0x93583A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009E275;

loc_0009E130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x935850);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x30 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E154; /* jne: not equal / not zero */

loc_0009E140: ;
    SET_LO16(esi, MEM16(0x935838));
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x935838) = LO16(esi);
    goto loc_0009E1A5;

loc_0009E154: ;
    edx = edi;
    edx = edx & 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E181; /* jne: not equal / not zero */

loc_0009E15E: ;
    eax = (uint32_t)(int32_t)SMEM16(0x93583C);
    SET_LO16(esi, MEM16(0x935838));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + LO16(eax));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x935838) = LO16(esi);
    goto loc_0009E1A5;

loc_0009E181: ;
    eax = edi;
    eax = eax & 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E19E; /* jne: not equal / not zero */

loc_0009E18A: ;
    SET_LO16(esi, MEM16(0x935854));
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(esi, LO16(esi) - MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(0x935838) = LO16(esi);
    goto loc_0009E1A5;

loc_0009E19E: ;
    SET_LO16(esi, MEM16(0x935838));

loc_0009E1A5: ;
    edx = edi;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E1BF; /* jne: not equal / not zero */

loc_0009E1AF: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + LO16(eax));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009E1CC;

loc_0009E1BF: ;
    eax = edi;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E1D3; /* jne: not equal / not zero */

loc_0009E1C8: ;
    _fb = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(esi, LO16(esi) - MEM16(ecx + 8));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009E1CC: ;
    MEM16(0x935838) = LO16(esi);

loc_0009E1D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0xC0 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E1EF; /* jne: not equal / not zero */

loc_0009E1DB: ;
    SET_LO16(esi, MEM16(0x93583A));
    _fb = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x93583A) = LO16(esi);
    goto loc_0009E245;

loc_0009E1EF: ;
    edx = edi;
    edx = edx & 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E21F; /* jne: not equal / not zero */

loc_0009E1FC: ;
    eax = (uint32_t)(int32_t)SMEM16(0x93583E);
    SET_LO16(esi, MEM16(0x93583A));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + LO16(eax));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x93583A) = LO16(esi);
    goto loc_0009E245;

loc_0009E21F: ;
    eax = edi;
    eax = eax & 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E23E; /* jne: not equal / not zero */

loc_0009E22A: ;
    SET_LO16(esi, MEM16(0x935856));
    _fb = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(esi, LO16(esi) - MEM16(ecx + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(0x93583A) = LO16(esi);
    goto loc_0009E245;

loc_0009E23E: ;
    SET_LO16(esi, MEM16(0x93583A));

loc_0009E245: ;
    edx = edi;
    edx = edx & 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E25F; /* jne: not equal / not zero */

loc_0009E24F: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + LO16(eax));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_0009E26C;

loc_0009E25F: ;
    eax = edi;
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E273; /* jne: not equal / not zero */

loc_0009E268: ;
    _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(esi, LO16(esi) - MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_0009E26C: ;
    MEM16(0x93583A) = LO16(esi);

loc_0009E273: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0009E275: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x10), 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E287; /* jne: not equal / not zero */

loc_0009E27E: ;
    SET_LO8(edx, MEM8(ecx + 0x11));
    MEM8(0x935850) = LO8(edx);

loc_0009E287: ;
    eax = ZX8(MEM8(ecx + 0xE));
    MEM32(esp + 0xC) = eax;
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebp, LO16(ebp) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935844)); /* fmul dword ptr [0x935844] */
    MEMF(0x935844) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(MEM8(ecx + 0xD));
    MEM32(esp + 0xC) = edx;
    SET_LO8(edx, MEM8(0x935851));
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935840)); /* fmul dword ptr [0x935840] */
    MEMF(0x935840) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ecx + 0xC));
    fp_push(MEMF(0x935848)); /* fld float */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x935851) = LO8(edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(0x935848) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x93584C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    MEMF(0x93584C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(edx, MEM16(ecx + 8));
    MEM16(0x93583C) = LO16(edx);
    SET_LO16(eax, MEM16(ecx + 0xA));
    MEM16(0x93583E) = LO16(eax);
    SET_LO8(edx, MEM8(ecx + 0x13));
    SET_LO8(eax, MEM8(0x935858));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = MEM32(0x935838);
    MEM8(0x935858) = LO8(eax);
    eax = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(0x935859));
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x935859) = LO8(ecx);
    ecx = MEM32(0x93583C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x935856) = LO16(ebp);
    MEM16(0x935854) = LO16(ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E360
 * Original: 0x0009E360 - 0x0009E3C3 (99 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009E360: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x13));
    SET_LO8(edx, MEM8(0x935858));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x935858) = LO8(edx);
    edx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(0x935859));
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x935838);
    MEM8(0x935859) = LO8(eax);
    PUSH32(esp, 0x0009E397u); RECOMP_ABI_CALL(0x0009D1B0u, sub_0009D1B0); /* call 0x0009D1B0 */

loc_0009E397: ;
    SET_LO16(edx, MEM16(0x93583A));
    eax = MEM32(0x935838);
    ecx = MEM32(0x93583C);
    _fb = (uint32_t)(MEM16(0x93583E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(0x93583E));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x935854) = LO16(eax);
    MEM16(0x935856) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009E3D0
 * Original: 0x0009E3D0 - 0x0009E40E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009E3D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0009E3E4u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009E3E4: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM16(esi + 4) = LO16(ecx);
    MEM16(esi + 6) = LO16(ecx);
    PUSH32(esp, 0x0009E3F9u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009E3F9: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009E410
 * Original: 0x0009E410 - 0x0009E413 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E410(void)
{

loc_0009E410: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009E420
 * Original: 0x0009E420 - 0x0009E4D0 (176 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009E420: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x1809A8);
    edx = edx | 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x1809A8) = edx;
    esi = 1;
    edx = esi;
    ecx = 0x4035C;
    MEM32(0x180D20) = 0;
    PUSH32(esp, 0x0009E44Fu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009E44F: ;
    PUSH32(esp, esi);
    MEM32(0x180CB0) = esi;
    PUSH32(esp, 0x0009E45Bu); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0009E45B: ;
    eax = MEM32(0x1809A8);
    PUSH32(esp, 0);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x1809B0) = esi;
    MEM32(0x1809B4) = esi;
    MEM32(0x180A30) = esi;
    MEM32(0x1809A8) = eax;
    MEM32(0x180A34) = esi;
    PUSH32(esp, 0x0009E489u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009E489: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x0009E498u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009E498: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009E4B1u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009E4B1: ;
    MEM32(esp + 4) = 0x3F800000;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x0009E4CDu); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0009E4CD: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009E4E0
 * Original: 0x0009E4E0 - 0x0009E5D1 (241 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E4E0(void)
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

loc_0009E4E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = ZX8(MEM8(esi + 0x17));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM8(edi) = 5;
    MEM16(edi + 2) = 0x18;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = edi + 0xC;
    ebp = edi + 0x12;
    MEMF(edi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(ecx, MEM16(esi + 4));
    MEM16(eax) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 6));
    ecx = edi + 0xE;
    MEM16(ecx) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 8));
    MEM16(edi + 0x10) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 0xA));
    MEM16(ebp) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E5A7; /* je: equal / zero */

loc_0009E537: ;
    PUSH32(esp, 0x935838);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E544u); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009E544: ;
    PUSH32(esp, 0x935838);
    PUSH32(esp, ebx);
    eax = edi + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E554u); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009E554: ;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009E56Au); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009E56A: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009E583u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009E583: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    SET_LO8(eax, MEM8(0x935852));
    SET_LO8(ebx, MEM8(0x935851));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x16));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebp);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009E5A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E5AFu); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_0009E5AF: ;
    PUSH32(esp, ebx);
    eax = edi + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E5BAu); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_0009E5BA: ;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    SET_LO8(eax, MEM8(esi + 0x16));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E5E0
 * Original: 0x0009E5E0 - 0x0009E650 (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009E5E0(void)
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

loc_0009E5E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, edi);
    PUSH32(esp, 0x935838);
    ecx = esi + 6;
    edx = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009E5FEu); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009E5FE: ;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009E614u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009E614: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x935852));
    SET_LO8(edx, MEM8(0x935851));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0x10) = LO8(ecx);
    fp_push(MEMF(0x935848)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    POP32(esp, edi);
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x93584C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E6A0
 * Original: 0x0009E6A0 - 0x0009E6E0 (64 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E6A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x935088);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009E6B7u); RECOMP_ABI_CALL(0x0009C980u, sub_0009C980); /* call 0x0009C980 */

loc_0009E6B7: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009E6CAu); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_0009E6CA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0009E6D9u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009E6D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009CAE0(); return; /* tail jmp 0x0009CAE0 */

}

/**
 * sub_0009E720
 * Original: 0x0009E720 - 0x0009E87F (351 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E720(void)
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

loc_0009E720: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x7C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x14) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEM32(esp + 0x30) = 0x3F800000;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x80);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x64) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x68) = 0x3F800000;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x40) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    edx = eax;
    MEM32(esp + 0x48) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    edx = MEM32(esp + 0x84);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 0x28) = ecx;
    ecx = eax;
    MEM32(esp + 0x2C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    ecx = esp + 0x10;
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009E7FEu); RECOMP_ABI_CALL(0x0009D870u, sub_0009D870); /* call 0x0009D870 */

loc_0009E7FE: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E816; /* je: equal / zero */

loc_0009E805: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 5;

loc_0009E816: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(0x935088);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009E83Au); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_0009E83A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009E847u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009E847: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009E852u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009E852: ;
    PUSH32(esp, 0x1C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0009E862u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009E862: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E87B; /* je: equal / zero */

loc_0009E86A: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 2;

loc_0009E87B: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E880
 * Original: 0x0009E880 - 0x0009E8F6 (118 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009E880: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax));
    MEM16(0x9359C0) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(0x9359C2) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 4));
    MEM16(0x9359C4) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 6));
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM16(0x9359C6) = LO16(edx);
    MEM32(0x9359D4) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_0009E8EB; /* jne: not equal / not zero */

loc_0009E8C3: ;
    MEM16(0x9359C8) = LO16(eax);
    MEM16(0x9359CA) = LO16(eax);
    eax = MEM32(esp + 8);
    MEM16(0x9359CC) = 0x2D00;
    MEM16(0x9359CE) = 0x1E00;
    MEM32(0x9359D0) = eax;
    esp += 4; return; /* ret */

loc_0009E8EB: ;
    ecx = MEM32(esp + 8);
    MEM32(0x9359D0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009E900
 * Original: 0x0009E900 - 0x0009E9F5 (245 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E900(void)
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

loc_0009E900: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 8);
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x5C) = ecx;
    edx = ecx;
    ecx = 0x3F800000;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x40) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    MEM32(esp + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(eax) = (float)fp_top(); /* fst */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2EF280)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 0x3C) = (float)fp_top(); /* fst */
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E9D0; /* jne: not equal / not zero */

loc_0009E9B2: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    edx = ecx;
    PUSH32(esp, 6);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x64) = edx;
    PUSH32(esp, 0x0009E9CFu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009E9CF: ;
    esp += 4; return; /* ret */

loc_0009E9D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x1C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    MEM32(eax + 0x48) = edx;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    MEM32(eax + 0x64) = ecx;
    PUSH32(esp, 0x0009E9F4u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009E9F4: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009EA00
 * Original: 0x0009EA00 - 0x0009EBD6 (470 bytes, 123 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009EA00(void)
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

loc_0009EA00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009EA22u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0009EA22: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(0x2F2768) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(0x2F277C) = eax;
    MEM32(0x2F2760) = ecx;
    edx = ecx;
    MEM32(0x2F2774) = edx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEM32(esp + 4) = edx;
    PUSH32(esp, 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, 0x2F2758);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(0x2F2758) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(0x2F275C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(0x2F276C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x2F2770) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009EB07u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009EB07: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x14);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F275C)); /* fadd dword ptr [0x2f275c] */
    MEMF(0x2F275C) = (float)fp_top(); /* fst */
    MEMF(0x2F2770) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2F2758);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0009EB39u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009EB39: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2F2758);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(0x2F2758) = (float)fp_top(); /* fst */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x28) = edx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(0x2F275C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x2F276C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    fp_push(MEMF(0x2F275C)); /* fld float */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEM32(esp + 0x28) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esp + 0x28)); /* fisub dword ptr [esp + 0x28] */
    MEMF(0x2F2770) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009EB9Fu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009EB9F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2F2758);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F2758)); /* fadd dword ptr [0x2f2758] */
    MEMF(0x2F2758) = (float)fp_top(); /* fst */
    MEMF(0x2F276C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009EBD1u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009EBD1: ;
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
 * sub_0009EBE0
 * Original: 0x0009EBE0 - 0x0009EC9D (189 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009EBE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009EBE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    MEM32(0x2F27B8) = eax;
    ecx = MEM32(esi + 8);
    MEM32(0x2F27CC) = ecx;
    edx = MEM32(esi + 0x14);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0009EC05u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0009EC05: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    MEM32(esp + 0x10) = ecx;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x14);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x2F27A8);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF284)); /* fadd dword ptr [0x2ef284] */
    MEMF(0x2F27A8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    MEM32(esp + 0x20) = edx;
    MEM32(0x2F27B0) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF284)); /* fadd dword ptr [0x2ef284] */
    MEMF(0x2F27AC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF284)); /* fadd dword ptr [0x2ef284] */
    MEMF(0x2F27BC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    MEM32(esp + 0x20) = edx;
    MEM32(0x2F27C4) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF284)); /* fadd dword ptr [0x2ef284] */
    MEMF(0x2F27C0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009EC9Bu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009EC9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009ECA0
 * Original: 0x0009ECA0 - 0x0009EEC1 (545 bytes, 175 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ECA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009ECA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebx;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xB), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009ECBE; /* je: equal / zero */

loc_0009ECB7: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009ECBE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009ECFC; /* jne: not equal / not zero */

loc_0009ECC8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0x9359D8;
    MEM8(0x9359DA) = LO8(ebx);
    MEM8(0x9359D8) = LO8(ebx);
    MEM8(0x9359DB) = LO8(ebx);
    MEM32(0x9359E0) = eax;
    MEM32(0x9359DC) = eax;
    MEM8(0x9359D9) = LO8(ebx);
    MEM32(0x9359E4) = 0x3F800000;

loc_0009ECFC: ;
    ebp = MEM32(esp + 0x14);
    MEM8(edi + 1) = LO8(ebx);
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EEB6; /* je: equal / zero */

loc_0009ED10: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EE58; /* je: equal / zero */

loc_0009ED18: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x40 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EE54; /* jne: not equal / not zero */

loc_0009ED22: ;
    eax = MEM32(esi);
    SET_LO16(ecx, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x73 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009ED61; /* jne: not equal / not zero */

loc_0009ED2F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    SET_LO16(edx, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x2D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009ED44; /* jne: not equal / not zero */

loc_0009ED3D: ;
    ecx = 0xFFFFFFFFu;
    goto loc_0009ED4D;

loc_0009ED44: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x2B (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_0009ED4D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    SET_LO8(eax, MEM8(ebp + eax * 2));
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009ED61: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x77 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EDAF; /* jne: not equal / not zero */

loc_0009ED67: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp + eax * 2;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0009ED74u); RECOMP_ABI_CALL(0x0015220Cu, sub_0015220C); /* call 0x0015220C */

loc_0009ED74: ;
    SET_LO8(ecx, MEM8(edi + 3));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 3) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009ED81: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), 0x20 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009ED9F; /* je: equal / zero */

loc_0009ED8B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM32(esi) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0009ED81; /* jl: less (signed <) */

loc_0009ED94: ;
    POP32(esp, edi);
    ecx = eax;
    eax = ebp + ecx * 2;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009ED9F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009EEB6; /* jge: greater or equal (signed >=) */

loc_0009EDA8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EDAF: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x63 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EE4E; /* jne: not equal / not zero */

loc_0009EDB9: ;
    edx = MEM32(edi + 8);
    MEM32(edi + 4) = edx;
    eax = MEM32(esi);
    eax = ZX16(MEM16(ebp + eax * 2 + 2));
    _fb = (uint32_t)(0xFFFFFFB9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFB9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009EE43; /* ja: above (unsigned >) */

loc_0009EDCE: ;
    ecx = ZX8(MEM8(eax + 0x9EEE0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x9EEC4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0009EDDCu) goto loc_0009EDDC;
    if (_jt == 0x0009EDF1u) goto loc_0009EDF1;
    if (_jt == 0x0009EE06u) goto loc_0009EE06;
    if (_jt == 0x0009EE18u) goto loc_0009EE18;
    if (_jt == 0x0009EE2Au) goto loc_0009EE2A;
    if (_jt == 0x0009EE3Cu) goto loc_0009EE3C;
    if (_jt == 0x0009EE43u) goto loc_0009EE43;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009EDDC: ;
    MEM32(edi + 8) = 0xFFFF0000u;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EDF1: ;
    MEM32(edi + 8) = 0xFFFF9F00u;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE06: ;
    MEM32(edi + 8) = 0xFFFFFFFFu;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE18: ;
    MEM32(edi + 8) = 0xFF00FF80u;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE2A: ;
    MEM32(edi + 8) = 0xFF2020FFu;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE3C: ;
    MEM32(edi + 8) = 0xFFFFFF80u;

loc_0009EE43: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 2) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE4E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EEB2; /* jne: not equal / not zero */

loc_0009EE54: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009EE92;

loc_0009EE58: ;
    eax = MEM32(esi);
    SET_LO16(eax, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EE87; /* jne: not equal / not zero */

loc_0009EE65: ;
    SET_LO8(eax, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EE77; /* jne: not equal / not zero */

loc_0009EE6C: ;
    ecx = MEM32(edi + 4);
    MEM32(edi + 8) = ecx;
    MEM8(edi + 2) = LO8(ebx);
    goto loc_0009EE92;

loc_0009EE77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EE82; /* jne: not equal / not zero */

loc_0009EE7B: ;
    MEM32(edi + 0xC) = 0x3F800000;

loc_0009EE82: ;
    MEM8(edi + 2) = LO8(ebx);
    goto loc_0009EE92;

loc_0009EE87: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x40 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009EEB6; /* jne: not equal / not zero */

loc_0009EE8D: ;
    edx = 1;

loc_0009EE92: ;
    eax = MEM32(esi);
    SET_LO16(ecx, MEM16(ebp + eax * 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009ED10; /* jne: not equal / not zero */

loc_0009EEA7: ;
    POP32(esp, edi);
    ecx = eax;
    eax = ebp + ecx * 2;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009EEB2: ;
    MEM8(edi + 1) = 1;

loc_0009EEB6: ;
    ecx = MEM32(esi);
    POP32(esp, edi);
    eax = ebp + ecx * 2;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009EF20
 * Original: 0x0009EF20 - 0x0009EF3C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009EF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009EF20: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009EF38u); RECOMP_ABI_CALL(0x0009ECA0u, sub_0009ECA0); /* call 0x0009ECA0 */

loc_0009EF38: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009EF40
 * Original: 0x0009EF40 - 0x0009EF5B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009EF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009EF40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009EF58; /* jl: less (signed <) */

loc_0009EF4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009EF58; /* jg: greater (signed >) */

loc_0009EF52: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009EF58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009EF60
 * Original: 0x0009EF60 - 0x0009EF86 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009EF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009EF60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009EF77; /* jle: less or equal (signed <=) */

loc_0009EF69: ;
    eax = 0xE;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2F14F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F14F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009EF77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009EF7D; /* jge: greater or equal (signed >=) */

loc_0009EF7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009EF7D: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2F14F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F14F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009EF90
 * Original: 0x0009EF90 - 0x0009F0F6 (358 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009EF90(void)
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

loc_0009EF90: ;
    SET_LO16(edx, MEM16(0x93583E));
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(0x935838);
    eax = MEM32(0x93583C);
    MEM16(0x935856) = LO16(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x935854) = LO16(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    SET_LO16(eax, MEM16(edi + 0x12));
    MEM16(esi + 0x12) = LO16(eax);
    SET_LO8(eax, MEM8(0x935852));
    SET_LO8(edx, MEM8(0x935851));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi + 0xC;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edi + 0x10));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0x10) = LO8(edx);
    fp_push(MEMF(0x935848)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    ebx = MEM32(esi + 0x10);
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x93584C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM8(0x935858);
    edx = MEM32(edi + 0x10);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebx;
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edx;
    ebx = MEM32(edi + 0x10);
    eax = edx;
    edx = (uint32_t)(int32_t)SMEM8(0x935859);
    edx = edx << 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x2000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x10), 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009F063; /* je: equal / zero */

loc_0009F059: ;
    SET_LO8(eax, MEM8(0x935850));
    MEM8(esi + 0x11) = LO8(eax);
    goto loc_0009F069;

loc_0009F063: ;
    SET_LO8(edx, MEM8(edi + 0x11));
    MEM8(esi + 0x11) = LO8(edx);

loc_0009F069: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, 0x935838);
    edx = esi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009F07Eu); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009F07E: ;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F094u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009F094: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009F0F2; /* je: equal / zero */

loc_0009F0A4: ;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F0BAu); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009F0BA: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F0D3u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009F0D3: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009F0ECu); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009F0EC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;

loc_0009F0F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009F100
 * Original: 0x0009F100 - 0x0009F1A5 (165 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F100(void)
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

loc_0009F100: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO16(eax, MEM16(esi + 8));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM16(edi + 0xC) = LO16(eax);
    SET_LO16(ecx, MEM16(esi + 0xA));
    ebx = edi + 0xC;
    MEM16(edi + 0xE) = LO16(ecx);
    edx = MEM32(0x935844);
    eax = MEM32(0x935840);
    ebp = edi + 0xE;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009F138u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009F138: ;
    MEM32(edi + 0x1C) = eax;
    SET_LO8(edx, MEM8(0x935852));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, MEM8(0x935851));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(esi + 0x12));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 0x10) = LO8(edx);
    fp_push(MEMF(0x935848)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(edi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x93584C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009F185; /* je: equal / zero */

loc_0009F17B: ;
    SET_LO8(eax, MEM8(0x935850));
    MEM8(edi + 0x11) = LO8(eax);
    goto loc_0009F18B;

loc_0009F185: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    MEM8(edi + 0x11) = LO8(ecx);

loc_0009F18B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x11));
    PUSH32(esp, 0x935838);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009F19Du); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009F19D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009F1B0
 * Original: 0x0009F1B0 - 0x0009F375 (453 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F1B0(void)
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

loc_0009F1B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ebx = edi + 0x1C;
    PUSH32(esp, 0x0009F1CBu); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F1CB: ;
    ebp = eax;
    edx = (uint32_t)(int32_t)SMEM16(ebp);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009F202u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009F202: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    MEM16(esp + 0x14) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 6);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009F239u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009F239: ;
    SET_LO16(edx, MEM16(esi + 0xC));
    MEM16(esp + 0x16) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esp + 0x12) = LO16(eax);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(esp + 0x10) = LO16(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0009F270; /* jne: not equal / not zero */

loc_0009F258: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x11));
    edx = esp + 0x12;
    eax = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F26Du); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_0009F26D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F270: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x11));
    edx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F280u); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_0009F280: ;
    SET_LO16(ecx, ZX8(MEM8(0x935610)));
    eax = MEM32(esi + 0x10);
    eax = eax >> 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    MEM8(edi) = 0;
    MEM8(edi + 1) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + eax * 4;
    MEM16(edi + 2) = LO16(edx);
    eax = MEM32(esi + 0x1C);
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009F2D9; /* je: equal / zero */

loc_0009F2BD: ;
    MEM8(edi + 1) = MEM8(edi + 1) | 1;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x20);
    MEM32(ebx) = ecx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F2D9: ;
    SET_LO8(eax, MEM8(0x935610));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F312; /* je: equal / zero */

loc_0009F2E2: ;
    MEM8(edi + 1) = MEM8(edi + 1) | 2;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = (uint32_t)(int32_t)SMEM16(0x9357CC);
    MEM32(ebx) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x9357CE);
    MEM32(ebx + 4) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x9357D0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x9357D2);
    MEM32(ebx + 4) = ecx;

loc_0009F312: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    SET_LO16(eax, MEM16(esp + 0x12));
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(edi + 4) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x16));
    MEM16(edi + 6) = LO16(eax);
    MEM16(edi + 0xA) = LO16(edx);
    MEM16(edi + 8) = LO16(ecx);
    SET_LO16(eax, MEM16(0x9357F0));
    MEM16(edi + 0xE) = LO16(eax);
    SET_LO8(ecx, MEM8(esi + 0x13));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0xC) = LO8(ecx);
    edx = MEM32(esi + 0x10);
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0xD) = LO8(edx);
    eax = MEM32(esi + 0x10);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edi + 0x18) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0009F380
 * Original: 0x0009F380 - 0x0009F44B (203 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F380: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F391u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009F391: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F446; /* je: equal / zero */

loc_0009F39E: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F3ABu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009F3AB: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009F404; /* je: equal / zero */

loc_0009F3BC: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0009F3E6; /* je: equal / zero */

loc_0009F3C8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x0009F3E1u); RECOMP_ABI_CALL(0x0009D8E0u, sub_0009D8E0); /* call 0x0009D8E0 */

loc_0009F3E1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F3E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x0009F3FFu); RECOMP_ABI_CALL(0x0009D8E0u, sub_0009D8E0); /* call 0x0009D8E0 */

loc_0009F3FF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F404: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0009F42E; /* je: equal / zero */

loc_0009F411: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x0009F429u); RECOMP_ABI_CALL(0x0009D8E0u, sub_0009D8E0); /* call 0x0009D8E0 */

loc_0009F429: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F42E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x0009F446u); RECOMP_ABI_CALL(0x0009D8E0u, sub_0009D8E0); /* call 0x0009D8E0 */

loc_0009F446: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009F450
 * Original: 0x0009F450 - 0x0009F532 (226 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F450: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F45Du); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009F45D: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F52E; /* je: equal / zero */

loc_0009F46A: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F476u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009F476: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_0009F4DA; /* je: equal / zero */

loc_0009F482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F4B0; /* je: equal / zero */

loc_0009F486: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F4ACu); RECOMP_ABI_CALL(0x0009D940u, sub_0009D940); /* call 0x0009D940 */

loc_0009F4AC: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F4B0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F4D6u); RECOMP_ABI_CALL(0x0009D940u, sub_0009D940); /* call 0x0009D940 */

loc_0009F4D6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F4DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F508; /* je: equal / zero */

loc_0009F4DE: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F504u); RECOMP_ABI_CALL(0x0009D940u, sub_0009D940); /* call 0x0009D940 */

loc_0009F504: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009F508: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F52Eu); RECOMP_ABI_CALL(0x0009D940u, sub_0009D940); /* call 0x0009D940 */

loc_0009F52E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009F540
 * Original: 0x0009F540 - 0x0009F5DA (154 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009F540(void)
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

loc_0009F540: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F5D6; /* je: equal / zero */

loc_0009F54F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F55Cu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009F55C: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    eax = MEM32(esp + 0x3C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x30);
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x34)); /* fdiv dword ptr [esp + 0x34] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    edx = MEM32(eax + 0x14);
    MEM32(eax + 0x4C) = edx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x34)); /* fdiv dword ptr [esp + 0x34] */
    MEMF(eax + 0x30) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    MEMF(eax + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x6C) = ecx;
    MEMF(eax + 0x68) = (float)fp_top(); fp_pop(); /* fstp */

loc_0009F5D6: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009F5E0
 * Original: 0x0009F5E0 - 0x0009F612 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F5E0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009F5EC; /* jl: less (signed <) */

loc_0009F5E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009F5FA; /* jl: less (signed <) */

loc_0009F5EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009F5F4; /* jle: less or equal (signed <=) */

loc_0009F5F0: ;
    SET_LO8(eax, 9);
    goto loc_0009F5FA;

loc_0009F5F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009F5FA; /* jge: greater or equal (signed >=) */

loc_0009F5F8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0009F5FA: ;
    ecx = SX8(LO8(eax));
    edx = MEM32(ecx * 4 + 0x9357F8);
    eax = MEM32(esp + 4);
    MEM32(edx) = eax;
    MEM32(ecx * 4 + 0x9357F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F620
 * Original: 0x0009F620 - 0x0009F65A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F620: ;
    ecx = MEM32(0x935608);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009F638; /* jl: less (signed <) */

loc_0009F62B: ;
    MEM32(0x935608) = 0x31;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009F638: ;
    eax = ecx * 8 + 0x935618;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x935608) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F660
 * Original: 0x0009F660 - 0x0009F69A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F660: ;
    MEM32(0x935608) = MEM32(0x935608) - 1;
    _fa = (uint32_t)(MEM32(0x935608)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0009F675; /* jns: not sign (positive) */

loc_0009F668: ;
    MEM32(0x935608) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009F675: ;
    eax = MEM32(0x935608);
    edx = MEM32(eax * 8 + 0x935618);
    ecx = MEM32(esp + 4);
    eax = eax * 8 + 0x935618;
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F6A0
 * Original: 0x0009F6A0 - 0x0009F705 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F6A0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ecx = ebx * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009F6C3; /* jbe: below or equal (unsigned <=) */

loc_0009F6BE: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009F6C3: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009F6D6u); RECOMP_ABI_CALL(0x0009D580u, sub_0009D580); /* call 0x0009D580 */

loc_0009F6D6: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = ecx + ebx * 4;
    PUSH32(esp, edx);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009F6EDu); RECOMP_ABI_CALL(0x0009D600u, sub_0009D600); /* call 0x0009D600 */

loc_0009F6ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009F6F8u); RECOMP_ABI_CALL(0x0009D290u, sub_0009D290); /* call 0x0009D290 */

loc_0009F6F8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F710
 * Original: 0x0009F710 - 0x0009F76C (92 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F710: ;
    SET_LO8(eax, MEM8(0x935969));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F76B; /* jne: not equal / not zero */

loc_0009F719: ;
    SET_LO8(eax, 1);
    MEM8(0x935969) = LO8(eax);
    MEM8(0x935968) = LO8(eax);
    MEM8(0x93596A) = LO8(eax);
    eax = MEM32(0x935088);
    edx = 0x2D0;
    ecx = 0x1E0;
    PUSH32(esp, 0x935944);
    PUSH32(esp, eax);
    MEM32(0x935950) = 0x935954;
    MEM16(0x935944) = LO16(edx);
    MEM16(0x935946) = LO16(ecx);
    MEM32(0x935948) = edx;
    MEM32(0x93594C) = ecx;
    PUSH32(esp, 0x0009F768u); RECOMP_ABI_CALL(0x0009D480u, sub_0009D480); /* call 0x0009D480 */

loc_0009F768: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F76B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F770
 * Original: 0x0009F770 - 0x0009F7F9 (137 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0009F770: ;
    SET_LO8(eax, MEM8(0x935969));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(0x935088);
    if (CMP_NE(_fa, _fb)) goto loc_0009F7F7; /* jne: not equal / not zero */

loc_0009F780: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(esp + 0xC));
    SET_LO16(edx, MEM16(esp + 0x10));
    PUSH32(esp, 0x9359E8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(0x935969) = 1;
    MEM8(0x935968) = 0;
    MEM32(0x935950) = eax;
    MEM16(0x935944) = LO16(ecx);
    MEM16(0x935946) = LO16(edx);
    PUSH32(esp, 0x0009F7BCu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_0009F7BC: ;
    edx = MEM32(0x9359E8);
    eax = MEM32(0x9359FC);
    ecx = MEM32(0x935A00);
    PUSH32(esp, edx);
    MEM32(0x935948) = eax;
    MEM32(0x93594C) = ecx;
    PUSH32(esp, 0x0009F7DEu); RECOMP_ABI_CALL(0x001A6CEDu, sub_001A6CED); /* call 0x001A6CED */

loc_0009F7DE: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x935944);
    PUSH32(esp, esi);
    MEM8(0x93596A) = LO8(eax);
    PUSH32(esp, 0x0009F7F4u); RECOMP_ABI_CALL(0x0009D480u, sub_0009D480); /* call 0x0009D480 */

loc_0009F7F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F7F7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F800
 * Original: 0x0009F800 - 0x0009F869 (105 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F800: ;
    PUSH32(esp, 0x2B);
    MEM32(0x923D68) = 0;
    PUSH32(esp, 0x0009F811u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F811: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, 0x2B);
    MEM16(0x923D6C) = LO16(ecx);
    MEM16(0x923D6E) = LO16(ecx);
    PUSH32(esp, 0x0009F82Du); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F82D: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    MEM32(0x923D70) = ecx;
    { uint32_t _icall_target = MEM32(0x2EF298); PUSH32(esp, 0x0009F847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F841u); } /* indirect call */
    }

loc_0009F847: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F84Du); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F84D: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x923D6E) = LO16(ecx);
    MEM32(0x923D70) = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F870
 * Original: 0x0009F870 - 0x0009F8B7 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F870: ;
    PUSH32(esp, 0x10A);
    MEM32(0x923D74) = 0;
    PUSH32(esp, 0x0009F884u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F884: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, 0x10A);
    MEM16(0x923D78) = LO16(ecx);
    MEM16(0x923D7A) = LO16(ecx);
    PUSH32(esp, 0x0009F8A3u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009F8A3: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x923D7C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F8C0
 * Original: 0x0009F8C0 - 0x0009F963 (163 bytes, 48 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009F8C0(void)
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

loc_0009F8C0: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x18));
    eax = esi;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F901; /* jne: not equal / not zero */

loc_0009F8D0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009F8F1u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009F8F1: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(MEMF(eax) - fp_top()); /* fsubr dword ptr [eax] */
    goto loc_0009F910;

loc_0009F901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F912; /* jne: not equal / not zero */

loc_0009F906: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */

loc_0009F910: ;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0009F912: ;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F950; /* jne: not equal / not zero */

loc_0009F91D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009F93Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009F93E: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(MEMF(eax) - fp_top()); /* fsubr dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_0009F950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F961; /* jne: not equal / not zero */

loc_0009F955: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0009F961: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009F970
 * Original: 0x0009F970 - 0x0009FA08 (152 bytes, 53 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F970(void)
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

loc_0009F970: ;
    fp_push(MEMF(0x2EF280)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    edi = 0x3F800000;
    fp_push(MEMF(0x2EF280)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, edi);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi);
    MEM32(esi + 0x48) = ecx;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esi + 0x24) = (float)fp_top(); /* fst */
    MEM32(esi + 8) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEM32(esi + 0x74) = edx;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x30) = edi;
    MEMF(esi + 0x4C) = (float)fp_top(); /* fst */
    MEM32(esi + 0x54) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0x78) = edi;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009F9E9u); RECOMP_ABI_CALL(0x0009DA50u, sub_0009DA50); /* call 0x0009DA50 */

loc_0009F9E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0009F9F4u); RECOMP_ABI_CALL(0x0009DA50u, sub_0009DA50); /* call 0x0009DA50 */

loc_0009F9F4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x7C) = eax;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009FA10
 * Original: 0x0009FA10 - 0x0009FA90 (128 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FA10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x2D00;
    ecx = 0x1E00;
    MEM32(0x9357F0) = eax;
    MEM16(0x935838) = LO16(eax);
    MEM16(0x93583A) = LO16(eax);
    MEM16(0x93583C) = LO16(edx);
    MEM16(0x93583E) = LO16(ecx);
    MEM32(0x935840) = 0x3F800000;
    MEM32(0x935844) = 0x3F800000;
    MEM32(0x935848) = 0x3F800000;
    MEM32(0x93584C) = 0x3F800000;
    MEM32(0x935850) = eax;
    MEM16(0x935854) = LO16(edx);
    MEM16(0x935856) = LO16(ecx);
    MEM32(0x935858) = eax;
    MEM32(0x9357F4) = eax;
    MEM8(0x93502C) = LO8(eax);
    MEM8(0x935610) = LO8(eax);
    MEM32(0x930F08) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FA90
 * Original: 0x0009FA90 - 0x0009FBD0 (320 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FA90: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x930FD8) = ebx;
    MEM32(0x930FDC) = ebx;
    MEM32(0x9357F8) = 0x930FD8;
    MEM32(0x930FE0) = ebx;
    MEM32(0x930FE4) = ebx;
    MEM32(0x9357FC) = 0x930FE0;
    MEM32(0x930FE8) = ebx;
    MEM32(0x930FEC) = ebx;
    MEM32(0x935800) = 0x930FE8;
    MEM32(0x930FF0) = ebx;
    MEM32(0x930FF4) = ebx;
    MEM32(0x935804) = 0x930FF0;
    MEM32(0x930FF8) = ebx;
    MEM32(0x930FFC) = ebx;
    MEM32(0x935808) = 0x930FF8;
    MEM32(0x931000) = ebx;
    MEM32(0x931004) = ebx;
    MEM32(0x93580C) = 0x931000;
    MEM32(0x931008) = ebx;
    MEM32(0x93100C) = ebx;
    MEM32(0x935810) = 0x931008;
    MEM32(0x931010) = ebx;
    MEM32(0x931014) = ebx;
    MEM32(0x935814) = 0x931010;
    MEM32(0x931018) = ebx;
    MEM32(0x93101C) = ebx;
    MEM32(0x935818) = 0x931018;
    MEM32(0x931020) = ebx;
    MEM32(0x931024) = ebx;
    MEM32(0x93581C) = 0x931020;
    PUSH32(esp, 0x0009FB74u); RECOMP_ABI_CALL(0x0009FA10u, sub_0009FA10); /* call 0x0009FA10 */

loc_0009FB74: ;
    MEM32(0x935028) = 0x931028;
    MEM32(0x93560C) = 0x923D88;
    MEM8(0x935878) = LO8(ebx);
    PUSH32(esp, 0x0009FB93u); RECOMP_ABI_CALL(0x0009D470u, sub_0009D470); /* call 0x0009D470 */

loc_0009FB93: ;
    MEM32(0x930FC0) = ebx;
    MEM32(0x9357C8) = ebx;
    MEM8(0x930F04) = LO8(ebx);
    MEM8(0x935610) = LO8(ebx);
    MEM16(0x9357CC) = LO16(ebx);
    MEM16(0x9357CE) = LO16(ebx);
    MEM16(0x9357D0) = LO16(ebx);
    MEM16(0x9357D2) = LO16(ebx);
    MEM8(0x923D80) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FC10
 * Original: 0x0009FC10 - 0x0009FDC9 (441 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FC10(void)
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

loc_0009FC10: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x935088);
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x0009FC26u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0009FC26: ;
    edx = MEM32(0x1809A8);
    esi = MEM32(esp + 0x84);
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809E0) = 4;
    MEM32(0x1809F0) = 4;
    MEM32(0x1809A8) = edx;
    MEM32(0x1809FC) = 0;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FC66u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0009FC66: ;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x935A08);
    ebx = eax;
    PUSH32(esp, 0x0009FC7Bu); RECOMP_ABI_CALL(0x0009F1B0u, sub_0009F1B0); /* call 0x0009F1B0 */

loc_0009FC7B: ;
    edx = MEM32(0x935A1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009FC87u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_0009FC87: ;
    esi = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009FC97u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009FC97: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009FCA1u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009FCA1: ;
    edx = MEM32(0x935A18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009FCB0u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_0009FCB0: ;
    eax = (uint32_t)(int32_t)SMEM16(0x935A10);
    ecx = (uint32_t)(int32_t)SMEM16(0x935A0C);
    MEM32(esp + 0x18) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x935A0E);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x94);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEM32(esp + 0x24) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x1C);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x54) = edx;
    edx = (uint32_t)(int32_t)SMEM16(0x935A12);
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x3C) = ecx;
    ecx = eax;
    MEM32(esp + 0x40) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(MEM8(0x935A15));
    edx = eax;
    MEM32(esp + 0x5C) = edx;
    edx = ZX8(MEM8(0x935A14));
    PUSH32(esp, ecx);
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(0x935A24);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x88) = eax;
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x70) = 0x3F800000;
    MEM32(esp + 0x8C) = 0x3F800000;
    PUSH32(esp, 0x0009FDAFu); RECOMP_ABI_CALL(0x0009F380u, sub_0009F380); /* call 0x0009F380 */

loc_0009FDAF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0009FDC2u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0009FDC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009FDD0
 * Original: 0x0009FDD0 - 0x0009FFA2 (466 bytes, 120 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FDD0(void)
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

loc_0009FDD0: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x935088);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x88);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009FDFD; /* je: equal / zero */

loc_0009FDF0: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_000A009C(); return; } /* je: equal / zero */

loc_0009FDFD: ;
    eax = MEM32(esp + 0x8C);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x104;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_0009FE34; /* je: equal / zero */

loc_0009FE0C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009FE25; /* je: equal / zero */

loc_0009FE0F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_000A009B(); return; } /* jne: not equal / not zero */

loc_0009FE16: ;
    MEM32(esp + 0x10) = 0x18;
    esi = 0x935820;
    goto loc_0009FE41;

loc_0009FE25: ;
    MEM32(esp + 0x10) = 0x20;
    esi = 0x9357A8;
    goto loc_0009FE41;

loc_0009FE34: ;
    MEM32(esp + 0x10) = 0x14;
    esi = 0x93585C;

loc_0009FE41: ;
    PUSH32(esp, ebx);
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x0009FE51u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009FE51: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0009FE6Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0009FE6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x0009FE7Du); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0009FE7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009FE86u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0009FE86: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO16(ecx, MEM16(edi + 4));
    ebx = esi + 4;
    MEM16(ebx) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 6));
    eax = esi + 6;
    MEM16(eax) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009FF4B; /* je: equal / zero */

loc_0009FEA2: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935848)); /* fmul dword ptr [0x935848] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009FECBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009FECB: ;
    MEM16(esi + 8) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x93584C)); /* fmul dword ptr [0x93584c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x0009FEF8u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0009FEF8: ;
    edx = MEM32(0x935844);
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebp = edi + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0009FF12u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_0009FF12: ;
    MEM32(esi + 0x10) = eax;
    SET_LO8(eax, MEM8(edi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009FF2B; /* je: equal / zero */

loc_0009FF1F: ;
    SET_LO8(ecx, MEM8(0x935850));
    MEM8(esp + 0x10) = LO8(ecx);
    goto loc_0009FF32;

loc_0009FF2B: ;
    SET_LO8(edx, MEM8(edi + 0xD));
    MEM8(esp + 0x10) = LO8(edx);

loc_0009FF32: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x935838);
    PUSH32(esp, eax);
    eax = esi + 6;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009FF46u); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_0009FF46: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009FF7A;

loc_0009FF4B: ;
    SET_LO16(ecx, MEM16(edi + 8));
    MEM16(esi + 8) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0xA));
    MEM16(esi + 0xA) = LO16(edx);
    ecx = MEM32(edi + 0x10);
    ebp = edi + 0x10;
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, MEM8(edi + 0xD));
    MEM8(esp + 0x10) = LO8(edx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009FF77u); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_0009FF77: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FF7A: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM16(esi + 2) = LO16(edx);
    PUSH32(esp, 0x0009FF8Eu); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_0009FF8E: ;
    eax = MEM32(esp + 0x9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0009FFD8(); return; } /* jne: not equal / not zero */

loc_0009FF9F: ;
    MEM8(esi) = 2;

    g_seh_ebp = ebp; sub_0009FFA2(); return; /* fallthrough 0x0009FFA2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009FFA2
 * Original: 0x0009FFA2 - 0x0009FFD8 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FFA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FFA2: ;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(ebp);
    edi = MEM32(esp + 0x18);
    edx = edx >> 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009FFBAu); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_0009FFBA: ;
    ecx = MEM32(0x9357F4);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009FFCDu); RECOMP_ABI_CALL(0x0009E900u, sub_0009E900); /* call 0x0009E900 */

loc_0009FFCD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009FFD8
 * Original: 0x0009FFD8 - 0x000A0002 (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FFD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FFD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x105) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x105 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A006B(); return; } /* jne: not equal / not zero */

loc_0009FFE3: ;
    eax = MEM32(esp + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A004B(); return; } /* je: equal / zero */

loc_0009FFEE: ;
    edx = MEM32(0x935844);
    ebx = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A0002u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

    g_seh_ebp = ebp; sub_000A0002(); return; /* fallthrough 0x000A0002 */

}

/**
 * sub_000A0002
 * Original: 0x000A0002 - 0x000A0005 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0002: ;
    MEM32(esi + 0x10) = eax;

    g_seh_ebp = ebp; sub_000A0005(); return; /* fallthrough 0x000A0005 */

}
