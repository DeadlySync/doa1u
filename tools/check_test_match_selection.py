"""Generate a CPU-only check using the production diagnostic selection code.
Compile build/test_match_selection_check.c with /I src; never launches the game.
"""
from pathlib import Path
root = Path(__file__).resolve().parents[1]
s = (root / "src/frontend/frontend_pre.c").read_text(encoding="utf-8")
body = s[s.index("static int s_frontend_stage_override"):s.index("static void frontend_main_loop(void)")]
header = r'''
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common/guest_addresses.h"
#include "common/guest_runtime.h"
static unsigned char guest[0x400000];
ptrdiff_t g_xbox_mem_offset = (ptrdiff_t)guest;
RTLS uint32_t g_esp;
static int loads, tasks;
static long long stage_request=3;
static void require(int ok) { if (!ok) { puts("FAIL diagnostic selection"); exit(1); } }
static long long gd_envll(const char *name, long long def) { (void)name; (void)def; return stage_request; }
#define GC0(va) ((void)(va))
#define GC2(va,a,b) (require((va)==DOA1U_REGISTER_TASK_FIBER_VA && (a)==2 && (b)==0x338C0 && GMEM8(DOA1U_SCENE_MODE_VA)==1), tasks++)
void sub_000300E0_gen(void) { GMEM8(DOA1U_STAGE_ID_VA)=0; g_esp+=4; }
void sub_00032830_gen(void) {
    loads++;
    if (tasks) {
        require(GMEM8(DOA1U_P1_FIGHTER_ID_VA)==5);
        require(GMEM8(DOA1U_P2_FIGHTER_ID_VA)==2);
        require(GMEM8(DOA1U_STAGE_ID_VA)==(stage_request<0 ? 0 : stage_request));
        require(GMEM8(DOA1U_P1_HUMAN_VA)==0);
    }
    g_esp+=4;
}
'''
tail = r'''
int main(void) {
    /* Ordinary startup must not force fighters or stage. */
    GMEM8(DOA1U_P1_FIGHTER_ID_VA)=4; GMEM8(DOA1U_P2_FIGHTER_ID_VA)=7;
    g_esp=100; sub_000300E0(); sub_00032830();
    require(g_esp==108 && GMEM8(DOA1U_STAGE_ID_VA)==0);
    require(GMEM8(DOA1U_P1_FIGHTER_ID_VA)==4 && GMEM8(DOA1U_P2_FIGHTER_ID_VA)==7);
    test_fighter_stage_render();
    require(tasks==1 && GMEM8(DOA1U_LOADED_STAGE_ID_VA)==255);
    require(GMEM8(DOA1U_GAME_MODE_VA)==0 && GMEM8(DOA1U_SCENE_MODE_VA)==1);
    require(GMEM8(DOA1U_LOADED_P1_FIGHTER_ID_VA)==255 && GMEM8(DOA1U_LOADED_P2_FIGHTER_ID_VA)==255);
    for (int i=0;i<3;i++) {
        stage_request = i==0 ? 3 : i==1 ? 12 : -1;
        s_frontend_stage_override=(int)stage_request;
        /* Simulate later Arcade CPU/stage selection overwriting startup. */
        GMEM8(DOA1U_P2_FIGHTER_ID_VA)=0;
        sub_000300E0();
        require(GMEM8(DOA1U_STAGE_ID_VA)==(stage_request<0 ? 0 : stage_request));
        /* Simulate another intervening setup write before actual load. */
        GMEM8(DOA1U_STAGE_ID_VA)=0; GMEM8(DOA1U_P2_FIGHTER_ID_VA)=0;
        sub_00032830();
        require(GMEM8(DOA1U_PAUSE_FLAG_VA)==0);
    }
    require(loads==4 && g_esp==132);
    /* Later scene-mode changes must not be overwritten by selection hooks. */
    GMEM8(DOA1U_SCENE_MODE_VA)=4;
    select_match_stage();
    require(GMEM8(DOA1U_SCENE_MODE_VA)==4);
    puts("PASS: normal path, distinct Arcade/scene modes before task registration, Arcade overwrite, loader boundary, stage override/automatic, guest stack, no pause, no repeated mode forcing");
    return 0;
}
'''
out=root / "build/test_match_selection_check.c"
out.write_text(header+body+tail,encoding="utf-8")
print(out)
