/* Compile the actual movie-start wrapper with a decoder spy. No guest code,
 * renderer or audio playback runs; sequencing/register writes remain real. */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/game_driver.h"
#include "fmv/sofdec.h"
RTLS uint32_t g_eax, g_esp;
ptrdiff_t g_xbox_mem_offset;
static unsigned calls, checks;
static char received[MAX_PATH];
extern void cri_movie_start(void);
static void check(int ok, const char *why) {
    ++checks; if (!ok) { fprintf(stderr, "FAIL: %s\n", why); exit(1); }
}
void gd_guest_call(uint32_t fn, int nargs, const uint32_t *args, uint32_t retaddr) {
    (void)fn; (void)nargs; (void)args; (void)retaddr; g_eax = 0;
}
Sofdec *sofdec_open(const char *path) {
    ++calls; check(strlen(path) < sizeof(received), "Truncated spy path");
    memcpy(received, path, strlen(path) + 1); return NULL;
}
void sofdec_close(Sofdec *movie) { (void)movie; }
const uint8_t *sofdec_next_frame(Sofdec *movie) { (void)movie; return NULL; }
unsigned sofdec_width(const Sofdec *movie) { (void)movie; return 0; }
unsigned sofdec_height(const Sofdec *movie) { (void)movie; return 0; }
double sofdec_fps(const Sofdec *movie) { (void)movie; return 0; }
const int16_t *sofdec_audio(const Sofdec *movie, unsigned *rate, unsigned *channels, size_t *samples) {
    (void)movie; *rate = *channels = 0; *samples = 0; return NULL;
}
static void run(uint32_t address, const char *text, uint32_t id, const char *expected) {
    if (text) memcpy((void *)((uintptr_t)address + g_xbox_mem_offset), text, strlen(text) + 1);
    for (unsigned i = 0; i < 21; ++i) GMEM32(0x2E13F8 + i * 4) = address;
    g_esp = 0x20000; GMEM32(g_esp + 4) = id; g_eax = 123;
    unsigned before = calls;
    cri_movie_start();
    check(g_esp == 0x20004 && g_eax == 0 && GMEM32(0x6E94CC) == 0 && GMEM32(0x6E94C0) == 3,
        "cdecl/error state changed");
    check(calls == before + (expected ? 1u : 0u), "Invalid path reached decoder or valid path lost");
    if (expected) check(!strcmp(received, expected), "Xbox movie path was stripped/normalized/truncated");
}
int main(void) {
    void *ram = VirtualAlloc(NULL, 0x04000000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    check(ram != NULL, "Cannot allocate headless guest RAM");
    g_xbox_mem_offset = (ptrdiff_t)ram;
    const char *paths[] = {"D:\\DOA1\\ss_opn.sfd", "D:\\DOA1\\ss_end.sfd", "d:/DOA1/ss_opn.sfd",
        "\\Device\\CdRom0\\DOA1\\ss_end.sfd", "\\??\\D:\\DOA1\\ss_opn.sfd"};
    for (unsigned i = 0; i < sizeof(paths) / sizeof(paths[0]); ++i) run(0x30000, paths[i], i, paths[i]);
    run(0x30000, paths[0], 999, paths[0]); // Existing invalid-ID fallback to slot zero.
    run(0x30000, "", 0, NULL);
    run(0, NULL, 0, NULL);
    run(0x50000000, NULL, 0, NULL);
    char long_path[MAX_PATH + 1]; memset(long_path, 'a', sizeof(long_path)); long_path[MAX_PATH] = 0;
    run(0x30000, long_path, 0, NULL); // Never accept a truncated path.
    long_path[MAX_PATH - 1] = 0; run(0x30000, long_path, 0, long_path);
    GMEM8(0x03fffffe) = 'D'; GMEM8(0x03ffffff) = ':';
    run(0x03fffffe, NULL, 0, NULL); // No read past the mapped guest-memory edge.
    GMEM8(0x03ffffff) = 0; run(0x03fffffe, NULL, 0, "D");
    VirtualFree(ram, 0, MEM_RELEASE);
    printf("PASS: actual CRI wrapper path/guest-boundary checks (%u checks)\n", checks);
    return 0;
}
