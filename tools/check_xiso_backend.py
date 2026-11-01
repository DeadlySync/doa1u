"""Check generated backend ownership, plus fail-closed CMake selection cases.

Usage: python tools/check_xiso_backend.py build [--self-test]
No game launch or game data required. Self-test creates only build-local fixtures.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
import xml.etree.ElementTree as ET

repo = Path(__file__).resolve().parents[1]
build = Path(sys.argv[1] if len(sys.argv) > 1 else "build").resolve()
ns = {"m": "http://schemas.microsoft.com/developer/msbuild/2003"}
projects = list(build.glob("xboxrecomp/src/kernel/xbox_kernel.vcxproj"))
assert len(projects) == 1, "Expected one generated xbox_kernel project"
project = projects[0]
tree = ET.parse(project)
items = tree.findall(".//m:ClCompile[@Include]", ns)
sources = [(item, (project.parent / item.attrib["Include"]).resolve()) for item in items]
expected = repo / "src/filesystem/xbox_file.c"
selected = [(item, path) for item, path in sources if path == expected]
assert len(selected) == 1, "Project-owned file backend must compile exactly once"
assert not any(path.name == "kernel_file.c" for _, path in sources), "Upstream file implementation still compiled"
assert not selected[0][0].findall("m:ExcludedFromBuild", ns), "Backend excluded from a configuration"
adapter = [(item, path) for item, path in sources if path == repo / "src/filesystem/xbox_image_file.cpp"]
assert len(adapter) == 1 and not adapter[0][0].findall("m:ExcludedFromBuild", ns), "Image adapter missing/duplicated/excluded"
bootstrap = [(item, path) for item, path in sources if path == repo / "src/filesystem/disc_bootstrap.cpp"]
assert len(bootstrap) == 1 and not bootstrap[0][0].findall("m:ExcludedFromBuild", ns), "Bootstrap missing/duplicated/excluded"
for retained in ("kernel_path.c", "kernel_virtual_disk.c", "kernel_bridge.c"):
    assert sum(path.name == retained for _, path in sources) == 1, f"Lost/duplicated {retained}"
references = tree.findall(".//m:ProjectReference", ns)
assert sum(Path(r.attrib["Include"]).name == "doa1u_xiso_reader.vcxproj" for r in references) == 1, "Storage dependency missing/duplicated"
configs = {item.attrib["Include"].split("|")[0]
           for item in tree.findall(".//m:ProjectConfiguration", ns)}
assert {"Debug", "Release"} <= configs, "Missing Debug/Release configuration"
print("PASS: Debug/Release compile exactly one project-owned Xbox file backend, image adapter and bootstrap; bridge/path/virtual disk retained; storage dependency present")

if "--self-test" in sys.argv[2:]:
    # Use actual CMake targets, not mocked CMake functions. Nothing is compiled.
    # TemporaryDirectory owns only its newly-created child under this build dir.
    with tempfile.TemporaryDirectory(prefix="xiso-cmake-selection-", dir=build) as temp:
        fixture = Path(temp)
        runtime = fixture / "runtime/src/kernel"
        runtime.mkdir(parents=True)
        (runtime / "kernel_file.c").write_text("/* fixture */\n")
        (fixture / "other.c").write_text("/* fixture */\n")
        (fixture / "kernel_file.c").write_text("/* wrong location */\n")
        module = (repo / "cmake/XboxFileBackend.cmake").as_posix()
        (fixture / "CMakeLists.txt").write_text('''cmake_minimum_required(VERSION 3.30)
project(backend_selection_check C)
add_library(doa1u_xiso_reader INTERFACE)
set(original "${CMAKE_CURRENT_SOURCE_DIR}/runtime/src/kernel/kernel_file.c")
set(sources "${original}" "${CMAKE_CURRENT_SOURCE_DIR}/other.c")
if(CASE STREQUAL "missing")
    list(REMOVE_ITEM sources "${original}")
elseif(CASE STREQUAL "duplicate")
    list(APPEND sources "${original}")
elseif(CASE STREQUAL "wrong-location")
    list(APPEND sources "${CMAKE_CURRENT_SOURCE_DIR}/kernel_file.c")
elseif(CASE STREQUAL "relative")
    set(sources runtime/src/kernel/kernel_file.c other.c)
elseif(CASE STREQUAL "genex")
    list(APPEND sources "$<$<CONFIG:Debug>:other.c>")
endif()
add_library(xbox_kernel STATIC ${sources})
include("''' + module + '''")
doa1u_select_xbox_file_backend(xbox_kernel "${CMAKE_CURRENT_SOURCE_DIR}/runtime")
if(CASE STREQUAL "repeated")
    doa1u_select_xbox_file_backend(xbox_kernel "${CMAKE_CURRENT_SOURCE_DIR}/runtime")
endif()
get_target_property(result xbox_kernel SOURCES)
list(LENGTH result count)
if(NOT count EQUAL 2)
    message(FATAL_ERROR "Replacement changed non-file sources")
endif()
''')
        expected_errors = {
            "valid": None, "relative": None,
            "missing": "requires exactly one kernel_file.c source; found 0",
            "duplicate": "requires exactly one kernel_file.c source; found 2",
            "wrong-location": "Unexpected kernel_file.c source",
            "repeated": "was already selected",
            "genex": "cannot audit generator-expression kernel sources",
        }
        # Reuse one compiler-detection cache, reconfiguring target contents per case.
        for case, error in expected_errors.items():
            result = subprocess.run(["cmake", "-S", str(fixture), "-B", str(fixture / "out"),
                                     f"-DCASE={case}"], text=True, capture_output=True)
            output = result.stdout + result.stderr
            if error is None:
                assert result.returncode == 0, output
            else:
                assert result.returncode != 0 and error in " ".join(output.split()), output
            print(f"PASS: CMake selector {case}")
