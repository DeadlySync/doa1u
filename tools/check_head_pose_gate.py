"""CPU-only check of the lifted head-look disable gate against original flow."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
src = (root / "src/recomp/gen/recomp_0005.c").read_text(encoding="utf-8")
code = src[src.index("void sub_00044D60(void)"):src.index("/**\n * sub_00044E30")]
build = root / "build/head_pose_check"
build.mkdir(exist_ok=True)
header = r'''
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
static unsigned char memory[0x400000];
static uint32_t eax,ecx,edx,esi,esp;
#define MEM8(a) (*(uint8_t*)(memory+(uint32_t)(a)))
#define MEM16(a) (*(uint16_t*)(memory+(uint32_t)(a)))
#define MEM32(a) (*(uint32_t*)(memory+(uint32_t)(a)))
#define LO8(a) ((a)&255u)
#define LO16(a) ((a)&65535u)
#define SET_LO8(a,b) ((a)=((a)&~255u)|((b)&255u))
#define SX16(a) ((uint32_t)(int32_t)(int16_t)(a))
#define CMP_EQ(a,b) ((a)==(b))
#define CMP_NE(a,b) ((a)!=(b))
#define CMP_A(a,b) ((a)>(b))
#define PUSH32(s,v) ((s)-=4,MEM32(s)=(v))
#define POP32(s,v) ((v)=MEM32(s),(s)+=4)
// Transcribed control flow of XBE 44D60..44E26 (head-look disable predicate).
static int expected(unsigned mode,unsigned scene,unsigned state,unsigned action,unsigned override,unsigned pending,unsigned active) {
    int disable=1;
    if(mode==1) {
        if(!scene) return 1;
        if(!state) {
            if(action) disable=(action>17 || action==5 || action==6);
            else disable=(pending && active);
        } else if(state==13) disable=(action!=18 && action!=19);
    } else if(mode==2 || mode==3) {
        if(!scene) return 1;
        disable=(action>17 || action==5 || action==6) && action!=18 && action!=19;
    } else return mode==4;
    return disable && !override;
}
'''
tests = r'''
int main(void) {
    unsigned long count=0;
    MEM32(0x3489a4)=0x10000;
    for(unsigned slot=0;slot<2;slot++)
    for(unsigned mode=0;mode<6;mode++)
    for(unsigned scene=0;scene<2;scene++)
    for(unsigned state=0;state<16;state++)
    for(unsigned action=0;action<256;action++)
    for(unsigned override=0;override<2;override++)
    for(unsigned pending=0;pending<2;pending++)
    for(unsigned active=0;active<2;active++) {
        MEM8(0x30c680)=mode; MEM8(0x30ae18)=scene?4:0;
        MEM8(0x1002a)=action; MEM8(0x1002d)=state;
        MEM32(0x349e40+slot*4)=override;
        MEM16(0x348848+slot*2)=pending; MEM16(0x348814+slot*2)=active;
        esp=0x20000; MEM32(esp+4)=slot; esi=0xdeadbeef;
        sub_00044D60();
        if(eax!=(unsigned)expected(mode,scene,state,action,override,pending,active) || esp!=0x20004 || esi!=0xdeadbeef) {
            printf("FAIL mode=%u state=%u action=%u gate=%u\n",mode,state,action,eax); return 1;
        }
        count++;
    }
    printf("PASS head-look gate: %lu state combinations, both slots, stack and callee-save preservation\n",count);
    /* Actual downed and victory samples from the two-round user run. */
    const unsigned actions[]={50,51,27,141};
    const unsigned states[]={12,12,13,13};
    for(unsigned slot=0;slot<2;slot++)
    for(unsigned sample=0;sample<4;sample++)
    for(unsigned mode=0;mode<2;mode++) {
        MEM8(0x30c680)=mode; MEM8(0x30ae18)=sample==3?4:1;
        MEM8(0x1002a)=actions[sample]; MEM8(0x1002d)=states[sample];
        MEM32(0x349e40+slot*4)=0;
        esp=0x20000; MEM32(esp+4)=slot;
        sub_00044D60();
        if(eax!=mode) { puts("FAIL downed/victory mode regression"); return 1; }
    }
    puts("PASS observed downed/victory samples: mode0 wrongly permits look; initialized mode1 disables it, both slots");
}
'''
cpp = build / "check.c"
exe = build / "check.exe"
cpp.write_text(header + code + tests, encoding="utf-8")
subprocess.run(["cl.exe", "/nologo", "/O2", str(cpp), "/Fe" + str(exe),
                "/Fo" + str(build / "check.obj")], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
