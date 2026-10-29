"""Offline checks of the renderer's actual CPU mip code; no GPU/game launch.
Requires cl.exe and its standard build environment (same as the port build).
"""
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]
source = (ROOT / "src/render/nri/nv2a_backend_nri.cpp").read_text()
# Compile the production implementation against a recording upload sink.
code = source[source.index("\tunsigned mip_count("):source.index("\tTexture *get_texture(")]
build = ROOT / "build/nri_cpu_check"
build.mkdir(exist_ok=True)
harness = r'''
#include <algorithm>
#include <cstdint>
#include <vector>
#include <stdexcept>
#include <cstdio>
struct Texture { unsigned mips; };
std::vector<uint32_t> decoded;
struct Level { unsigned w,h; std::vector<uint32_t> data; };
std::vector<Level> levels;
void upload_texture(Texture&,const void* p,unsigned w,unsigned h,unsigned mip) {
    if(mip != levels.size()) throw std::runtime_error("mip ordering");
    auto data = static_cast<const uint32_t*>(p);
    levels.push_back({w,h,{data,data+(size_t)w*h}});
}
'''
tests = r'''
void require(bool ok) { if(!ok) throw std::runtime_error("mip regression"); }
void run(unsigned w,unsigned h,std::vector<uint32_t> pixels) {
    levels.clear(); decoded=std::move(pixels); Texture t{mip_count(w,h)};
    upload_mips(t,w,h);
    require(levels.size()==t.mips && levels.back().w==1 && levels.back().h==1);
    require(levels.front().data==decoded);
}
int main() {
    run(1,1,{0x12345678}); require(levels.size()==1);
    run(2,2,{0xffff0000,0x000000ff,0x000000ff,0x000000ff});
    require(levels.back().data[0]==0x40ff0000); // alpha-weighted, no blue fringe
    run(3,3,{0xff000000,0xff000000,0xff000000,0xff000000,0xff000000,
             0xff000000,0xff000000,0xff000000,0xff0000ff});
    require((levels.back().data[0]&255)==28); // includes last NPOT row/column
    run(1,5,std::vector<uint32_t>(5,0x80765432));
    require(levels.back().data[0]==0x80765432);
    run(3,5,std::vector<uint32_t>(15,0));
    require(levels.size()==3 && levels[1].w==1 && levels[1].h==2);
    require(levels.back().data[0]==0);
    std::puts("PASS mip chain: 1x1, NPOT/one-dimensional, alpha weighting, transparent pixels, base preservation");
}
'''
cpp = build / "check.cpp"
exe = build / "check.exe"
cpp.write_text(harness + code + tests)
subprocess.run(["cl.exe", "/nologo", "/EHsc", "/std:c++17", str(cpp),
                "/Fe" + str(exe), "/Fo" + str(build / "check.obj")], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
