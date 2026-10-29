/* Guest-context driver API. Call helpers only on a guest fiber with valid g_esp. */
#ifndef DOA1U_GAME_DRIVER_H
#define DOA1U_GAME_DRIVER_H

#include <stdint.h>
#include "common/guest_runtime.h"

/* ── env helpers ── */
int gd_enabled(const char* name); /* true if set and not "0" */
long long gd_envll(const char* name, long long def);

/* ── guest-context call primitives (valid-g_esp fiber only) ──
 * cdecl: push args right-to-left + a benign guest return address, call the
 * (possibly shadowed) guest fn via the dispatch table, then restore g_esp
 * (caller cleans its own args). retaddr is cosmetic (guest backtrace only). */
void gd_register_task(uint32_t id, uint32_t fn);  /* register_task_fiber  */
void gd_dispatch(uint32_t va); /* call guest fn by VA */
void gd_guest_call(uint32_t fn_va, int nargs, const uint32_t* args, uint32_t retaddr);

/* task-fiber gate (the core owns register_task_fiber / sub_00052240)
EVERY task-fiber registration -- the game's own and ours -- funnels
through the sub_00052240 shadow in game_driver.c, which consults this gate.
A blocked id is NOT registered (the game's scheduler never pumps that fiber). */
void gd_block_task_id(uint32_t id, int blocked); /* 1 = block, 0 = allow */
int  gd_task_blocked(uint32_t id); /* current gate decision for id */

/* Parse a comma/space separated id list from env `name` into table[256]
 * (table[id]=1 for each listed id in 0..255). Returns the count parsed.
 * Shared helper for id-blocklists (tasks, audio cues/types). */
int  gd_parse_id_list(const char* name, unsigned char* table256);

/* ── per-frame module ──
 * Called every main-loop frame from the core's frame_end shadow, on the main
 * fiber (valid g_esp). 'frame' counts main-loop frames since the first tick.
 * A module registers by being listed in game_driver.c's gd_run_frame_modules().
 * Each module must self-gate on its own enable env. Add a new block here + in
 * gd_run_frame_modules() when its driver TU lands. */
typedef void (*gd_frame_fn)(uint64_t frame);

void audio_frame_module(uint64_t frame);       /* audio.c (cue auditioner) */
void game_mode_frame_module(uint64_t frame);   /* game_mode.c (read-only flow trace) */

#endif /* DOA1U_GAME_DRIVER_H */
