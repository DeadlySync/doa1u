"""Exercise production target selection with CPU recording sinks; needs cl.exe."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
src = (root / "src/render/nri/nv2a_backend_nri.cpp").read_text(encoding="utf-8")
selection = src[src.index("\tvoid select_guest_target("):src.index("\tvoid create_output(")]
callbacks = src[src.index("\tvoid backend_clear("):src.index("\tvoid backend_flip(")]
present = src[src.index("\tvoid flip()\n"):src.index("\t\tmovie_overlay();", src.index("\tvoid flip()\n"))] + "\n}\n"
build = root / "build/nri_target_check"
build.mkdir(exist_ok=True)
header = r'''
#include <map>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
extern "C" {
#include "nv2a_backend.h"
}
namespace nri { enum class Format { D24_UNORM_S8_UINT }; enum class TextureUsageBits { DEPTH_STENCIL_ATTACHMENT }; enum class TextureView { DEPTH_STENCIL_ATTACHMENT }; }
struct Handle { unsigned id; unsigned operator*() const { return id; } explicit operator bool() const { return id!=0; } };
struct Texture { Handle object={}; uint32_t value=0; };
struct Core { struct Desc { nri::Format format={}; }; Desc GetTextureDesc(unsigned) { return {}; } } core;
Texture scene{{1}},depth{{2}};
std::map<uint32_t,Texture> color_targets,depth_targets;
Texture *active_color=&scene,*active_depth=&depth,*drawn_color=nullptr,*presented_color=nullptr;
uint64_t drawn_area=0;
unsigned render_width=1280,render_height=720,next_object=3,scene_samples=1;
const Nv2aBackend *fallback=nullptr;
bool rendering=false;
void end_rendering() { rendering=false; }
void create_color_target(Texture&t,nri::Format) { t.object={next_object++}; }
void make_texture(Texture&t,unsigned,unsigned,nri::Format,nri::TextureUsageBits,nri::TextureView,unsigned=1,unsigned=1) { t.object={next_object++}; }
void clear(unsigned flags,uint32_t color,uint32_t zs) {
    if(flags&0xf0) active_color->value=color;
    if(flags&3) active_depth->value=zs;
    rendering=true;
}
void draw(const Nv2aSurface*,const Nv2aBatch*) { active_color->value=0xff123456; rendering=true; }
bool ensure() { return true; }
void runtime_error(const std::exception&e) { throw e; }
void require(bool ok,const char *msg) { if(!ok) { std::printf("FAIL %s\n",msg); std::exit(1); } }
'''
tests = r'''
int main() {
    Nv2aSurface a={},b={},small={}; a.color_va=0x1000; a.width=640; a.height=480;
    b=a; b.color_va=0x2000; small=a; small.color_va=0x3000; small.width=64; small.height=64;
    Nv2aRenderState z={}; z.zeta_va=0x4000;
    Nv2aBatch batch={}; batch.count=3; batch.state=&z;
    backend_draw(&a,&batch); auto *a_color=active_color,*shared_z=active_depth;
    backend_clear(&b,&z,0xf0,0xff000000,0);
    require(active_color!=a_color && active_depth==shared_z,"independent color, shared guest depth");
    require(a_color->value==0xff123456,"clear next buffer preserves completed picture");
    flip(); require(active_color==a_color,"present drawn buffer, not last cleared buffer");
    drawn_color=nullptr; drawn_area=0;
    backend_clear(&b,&z,0xf0,0xff000000,0); flip();
    require(active_color==a_color,"clear-only flip keeps last presented image");
    backend_draw(&b,&batch); auto *b_color=active_color;
    backend_draw(&small,&batch); flip();
    require(active_color==b_color,"small offscreen draw cannot select presentation");
    backend_draw(&a,&batch); flip(); require(active_color==a_color,"alternating backbuffers");
    z.zeta_va=0x5000; backend_clear(&a,&z,1,0,123);
    require(active_depth!=shared_z && active_depth->value==123,"depth address selects independent storage");
    require(a_color->value==0xff123456,"depth-only clear preserves color");
    std::puts("PASS guest targets: next-buffer clear, shared/independent depth, draw-selected present, pause, small target, alternation");
}
'''
cpp = build / "check.cpp"
exe = build / "check.exe"
cpp.write_text(header + selection + callbacks + present + tests, encoding="utf-8")
subprocess.run(["cl.exe", "/nologo", "/EHsc", "/std:c++17", "/I" + str(root / "src/xboxrecomp/src/kernel"),
                str(cpp), "/Fe" + str(exe), "/Fo" + str(build / "check.obj")], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
