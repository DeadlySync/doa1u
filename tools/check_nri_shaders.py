"""Compile the actual NRI/D3D11 shader strings without a GPU or game launch."""
import ast
import ctypes as c
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
compiler = c.WinDLL("d3dcompiler_47.dll")
compile_shader = compiler.D3DCompile
compile_shader.argtypes = [c.c_void_p, c.c_size_t, c.c_char_p, c.c_void_p,
                           c.c_void_p, c.c_char_p, c.c_char_p, c.c_uint,
                           c.c_uint, c.POINTER(c.c_void_p), c.POINTER(c.c_void_p)]
compile_shader.restype = c.c_long


def blob_method(blob, slot, result, *args):
    table = c.cast(blob, c.POINTER(c.POINTER(c.c_void_p))).contents
    return c.WINFUNCTYPE(result, c.c_void_p, *args)(table[slot])


def check(text, name, profile):
    code, errors = c.c_void_p(), c.c_void_p()
    data = text.encode()
    hr = compile_shader(data, len(data), name.encode(), None, None, b"main",
                        profile.encode(), 0, 0, c.byref(code), c.byref(errors))
    message = ""
    if errors:
        address = blob_method(errors, 3, c.c_void_p)(errors)
        message = c.string_at(address).decode(errors="replace")
        blob_method(errors, 2, c.c_ulong)(errors)
    if code:
        blob_method(code, 2, c.c_ulong)(code)
    if hr < 0:
        raise RuntimeError(f"{name}: {hr:#x}\n{message}")
    print(f"PASS {name} ({profile})")


def extract(source, name):
    match = re.search(r"\b" + name + r"\s*=\s*((?:\s*\"(?:\\.|[^\"\\])*\")+)\s*;", source)
    if not match:
        raise RuntimeError(f"Cannot find shader {name}")
    return "".join(ast.literal_eval(x) for x in re.findall(r'"(?:\\.|[^"\\])*"', match[1]))


shared = (ROOT / "src/render/common/guest_shaders.h").read_text()
backend = (ROOT / "src/render/nri/nv2a_backend_nri.cpp").read_text()
for name, profile in [("HLSL_VS", "vs_5_0"), ("HLSL_PS_TEX", "ps_5_0"),
                      ("HLSL_PS_FLAT", "ps_5_0")]:
    check(extract(shared, name), name, profile)
for name, profile in [("present_vs", "vs_5_0"), ("present_ps", "ps_5_0")]:
    check(extract(backend, name), name, profile)

aa = (ROOT / "src/render/common/antialiasing.h").read_text()
for name in ["HLSL_FXAA", "HLSL_SSAA"]:
    check(extract(aa, name), name, "ps_5_0")
