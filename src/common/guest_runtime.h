/* Shared guest registers, memory access and dispatch declarations. */
#ifndef DOA1U_GUEST_RUNTIME_H
#define DOA1U_GUEST_RUNTIME_H

#include <stddef.h>
#include <stdint.h>

#define DOA1U_GUEST_PTR(va, type) ((type *)(void *)((uintptr_t)(uint32_t)(va) + g_xbox_mem_offset))
#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)(uint32_t)(va) + g_xbox_mem_offset))
#define GMEM8(va)  (*(volatile uint8_t  *)((uintptr_t)(uint32_t)(va) + g_xbox_mem_offset))

#if defined(_MSC_VER)
#  define RTLS __declspec(thread)
#else
#  define RTLS __thread
#endif

/* Guest register file + SEH/FS shadow (thread-locals, defined in xbox_memory_layout.c). */
extern RTLS uint32_t g_eax, g_ecx, g_edx, g_esp, g_ebx, g_esi, g_edi, g_ebp;
extern RTLS uint32_t g_fs_base, g_seh_ebp;

/* Guest-memory window: host addr = (uint32)guest_va + g_xbox_mem_offset. */
extern ptrdiff_t g_xbox_mem_offset;

/* Dispatch: resolve a guest VA to its recompiled C function (or NULL). */
typedef void (*recomp_func_t)(void);
extern recomp_func_t recomp_lookup(uint32_t xbox_va);

/* Is `a` a plausible mapped guest address (main RAM or the 0x8000_0000 alias)?
 * Used to gate every speculative GMEM read in the fixes + probes. */
static inline int gmem_ok(uint32_t a)
{
    return (a >= 0x10000u && a < 0x04000000u) ||
           (a >= 0x80000000u && a < 0x84000000u);
}

#endif /* DOA1U_GUEST_RUNTIME_H */
