"""Exercise the executor's actual texture-register decoder without a game/GPU."""
from pathlib import Path
import re, subprocess
root=Path(__file__).resolve().parents[1]
s=(root/'src/xboxrecomp/src/kernel/nv2a_pb_exec.c').read_text()
def function(name):
    start=s.index('static void '+name+'('); begin=s.index('{',start); depth=1; end=begin+1
    while depth:
        depth+=(s[end]=='{')-(s[end]=='}'); end+=1
    return s[start:end]
texture=re.search(r'typedef struct \{\s*uint32_t offset;.*?\} Texture;',s,re.S)[0]
code='''#include <stdint.h>
#include <assert.h>
#include <stdio.h>
'''+texture+'''
static struct { Texture texs[4]; } s_gpu;
static int tex_size_from_format(uint32_t f) { return f==0x06; }
static uint32_t dma_resolve(uint32_t v) { return v; }
static void record_tex_reg(uint32_t m,uint32_t v) { (void)m;(void)v; }
#define NV_TEX_FIRST 0x1B00
#define NV097_SET_TEXTURE_OFFSET 0x1B00
#define NV097_SET_TEXTURE_FORMAT 0x1B04
#define NV097_SET_TEXTURE_ADDRESS 0x1B08
#define NV097_SET_TEXTURE_CONTROL1 0x1B10
#define NV097_SET_TEXTURE_IMAGE_RECT 0x1B1C
#define NV097_SET_TEXTURE_PALETTE 0x1B20
'''+function('tex_update_valid')+'\n'+function('tex_stage_method')+'''
int main(void) {
 for(unsigned st=0;st<4;st++) {
  unsigned base=st*0x40;
  tex_stage_method(0x1B00+base,0x100000);
  tex_stage_method(0x1B04+base,0x12<<8);
  tex_stage_method(0x1B10+base,256<<16);
  tex_stage_method(0x1B1C+base,(64<<16)|64);
  assert(!s_gpu.texs[st].valid);
  tex_stage_method(0x1B0C+base,1u<<30); assert(s_gpu.texs[st].valid);
  tex_stage_method(0x1B0C+base,0x1234); assert(!s_gpu.texs[st].valid);
  /* Binding updates cannot re-enable a disabled texture. */
  tex_stage_method(0x1B00+base,0x200000); assert(!s_gpu.texs[st].valid);
  assert(s_gpu.texs[st].offset==0x200000 && s_gpu.texs[st].width==64);
  tex_stage_method(0x1B0C+base,1u<<30); assert(s_gpu.texs[st].valid);
 }
 puts("PASS texture enable: all stages, retained binding, disable/update/re-enable");
}
'''
build=root/'build/texture_enable_check';build.mkdir(exist_ok=True)
c=build/'check.c';exe=build/'check.exe';c.write_text(code)
subprocess.run(['cl.exe','/nologo','/O2',str(c),'/Fe:'+str(exe),'/Fo:'+str(build/'check.obj')],check=True)
subprocess.run([str(exe)],check=True)
