/* Forced include for generated guest translation units. Keep this
 * outside generated sources so regeneration retains the diagnostic. */
#ifndef DOA1U_COLLISION_WATCH_H
#define DOA1U_COLLISION_WATCH_H
#define RECOMP_GENERATED_CODE
#include "recomp/gen/recomp_funcs.h"
uintptr_t fighter_collision_root_access(uint32_t address, const char *file, unsigned line);
#undef XBOX_PTR
/* Evaluate address once; unrelated guest accesses keep the original mapping. */
static inline uintptr_t collision_guest_pointer(uint32_t address, const char *file, unsigned line)
{
    /* Include accesses preceding Y so vector/block stores are visible too. */
    if ((address >= 0x30D9A0u && address <= 0x30D9ACu) ||
        (address >= 0x30D9F8u && address <= 0x30DA04u))
        return fighter_collision_root_access(address, file, line);
    return (uintptr_t)address + g_xbox_mem_offset;
}
#define XBOX_PTR(addr) collision_guest_pointer((uint32_t)(addr), __FILE__, __LINE__)
#endif
