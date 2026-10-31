cmake_minimum_required(VERSION 3.30)
project(doa1u_recomp C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(DOA1U_DIAGNOSTIC "Include diagnostic probes, ABI checking and capture helpers" OFF)
option(RECOMP_WITH_RENDERDOC "Enable RenderDoc capture in diagnostic builds" ON)
add_compile_definitions(WIN32_LEAN_AND_MEAN NOMINMAX)
# The ABI checker must be enabled in both guest code and the runtime.
if(DOA1U_DIAGNOSTIC)
    add_compile_definitions(RECOMP_ABI_CHECK)
endif()

set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../xboxrecomp" CACHE PATH
    "Path to the xboxrecomp toolkit")
include(cmake/XboxrecompOverlay.cmake)
add_subdirectory("${DOA1U_XBOXRECOMP_RUNTIME_DIR}" "${CMAKE_BINARY_DIR}/xboxrecomp")


# Pinned, vendored NRI. Initial parity backend is D3D11; no online configure downloads.
set(NRI_STATIC_LIBRARY ON CACHE BOOL "" FORCE)
set(NRI_ENABLE_D3D11_SUPPORT ON CACHE BOOL "" FORCE)
set(NRI_ENABLE_D3D12_SUPPORT ON CACHE BOOL "" FORCE)
set(NRI_ENABLE_VK_SUPPORT ON CACHE BOOL "" FORCE)
set(NRI_ENABLE_IMGUI_EXTENSION ON CACHE BOOL "" FORCE)
set(NRI_ENABLE_VALIDATION_SUPPORT ON CACHE BOOL "" FORCE)
foreach(feature WGPU METAL NONE NVTX NVAPI AMDAGS AGILITY_SDK NIS_SDK NGX_SDK FFX_SDK XESS_SDK)
    if(feature STREQUAL "IMGUI_EXTENSION")
        set(NRI_ENABLE_IMGUI_EXTENSION OFF CACHE BOOL "" FORCE)
    elseif(feature MATCHES "^(NVAPI|AMDAGS|NIS_SDK|NGX_SDK|FFX_SDK|XESS_SDK)$")
        set(NRI_ENABLE_${feature} OFF CACHE BOOL "" FORCE)
    else()
        set(NRI_ENABLE_${feature}_SUPPORT OFF CACHE BOOL "" FORCE)
    endif()
endforeach()
add_subdirectory(src/third_party/NRI)
if(NOT CMAKE_SCRIPT_MODE_FILE)
    set(SDL3_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/third_party/SDL3-vendor/SDL3-3.4.18/cmake")
    find_package(SDL3 3.4.18 EXACT CONFIG REQUIRED)
endif()
if(NOT CMAKE_SCRIPT_MODE_FILE)
    include(cmake/NriSpirv.cmake)
endif()

# Generated code stays in its recompiler-owned directory.
file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "src/recomp/gen/*.c")
if(MSVC AND NOT CMAKE_SCRIPT_MODE_FILE)
    set_source_files_properties(${RECOMP_GEN_SOURCES}
        PROPERTIES COMPILE_OPTIONS "/FI${CMAKE_CURRENT_SOURCE_DIR}/src/render/fighters/collision_watch.h")
endif()
set(GAME_SOURCES
    src/main.c
    src/game/training_stage_change.c
    src/game/throw_move_lookup.c
    src/runtime/recomp_manual.c
    src/runtime/fix_fiber_runtime.c
    src/runtime/reach_gameplay_shims.c
    src/runtime/soft_restart.c
    src/runtime/crash_capture.c
    src/game/game_driver.c
    src/game/game_mode.c
    src/frontend/front_end_menu_tick.c
    src/frontend/state_machine.c
    src/frontend/frontend_pre.c
    src/frontend/host_input.cpp
    src/frontend/launcher_art.cpp
    src/frontend/launcher_startup.cpp
    src/render/d3d8/fix_d3d8_state.c
    src/render/d3d11/nv2a_backend_d3d11.c
    src/render/renderer.c
    src/render/nri/nv2a_backend_nri.cpp
    src/render/nri/nri_d3d11.cpp
    src/render/nri/nri_shaders.cpp
    src/render/nri/nri_imgui.cpp
    src/render/widescreen.c
    src/render/graphics_settings.cpp
    src/render/fighters/fighter_isolation.c
    src/render/fighters/fighters_renderer.c
    src/render/background/background.c
    src/audio/audio.c
    src/audio/sample_bank.c
    src/audio/xbox_adpcm.c
    src/fmv/fmv.c
    src/fmv/sofdec.c
    src/assets/loaders.c
)
if(DOA1U_DIAGNOSTIC)
    list(APPEND GAME_SOURCES
        src/diagnostics/probes.c
        src/diagnostics/renderdoc_capture.c
    )
else()
    # Keep generated shadow/probe call sites linkable without instrumentation.
    list(APPEND GAME_SOURCES src/runtime/diagnostics_disabled.c)
endif()

add_executable(${PROJECT_NAME} WIN32 ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
if(WIN32)
    enable_language(RC)
    target_sources(${PROJECT_NAME} PRIVATE src/app.rc)
endif()
add_library(doa1u_imgui STATIC
    src/third_party/imgui/imgui.cpp
    src/third_party/imgui/imgui_draw.cpp
    src/third_party/imgui/imgui_tables.cpp
    src/third_party/imgui/imgui_widgets.cpp
    src/third_party/imgui/backends/imgui_impl_win32.cpp
    src/third_party/imgui/backends/imgui_impl_dx11.cpp)
target_include_directories(doa1u_imgui PUBLIC src/third_party/imgui)
target_link_libraries(doa1u_imgui PRIVATE d3d11 d3dcompiler dwmapi)
# Offline reusable decoder check; never linked into the game.
add_executable(audio_bank_check EXCLUDE_FROM_ALL
    tools/audio_bank_check.c src/audio/xbox_adpcm.c)
add_executable(launcher_check EXCLUDE_FROM_ALL tools/launcher_check.cpp
    src/frontend/host_input.cpp src/frontend/launcher_art.cpp src/app.rc)
target_include_directories(launcher_check PRIVATE src
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/include"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/input"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/kernel")
target_link_libraries(launcher_check PRIVATE NRI doa1u_imgui SDL3::SDL3 windowscodecs ole32 d3d11 dxgi)
target_include_directories(audio_bank_check PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src")
# WARP-only AA shader/readback regression: no window, game, or hardware GPU.
add_executable(antialiasing_check EXCLUDE_FROM_ALL tools/antialiasing_check.cpp)
target_include_directories(antialiasing_check PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(antialiasing_check PRIVATE d3d11 d3dcompiler)

add_executable(widescreen_shadow_check EXCLUDE_FROM_ALL
    tools/widescreen_shadow_check.c src/render/widescreen.c)
target_include_directories(widescreen_shadow_check PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src" "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/kernel")
target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp doa1u_imgui NRI
    SDL3::SDL3 windowscodecs ole32 d3d11 dxgi dxguid d3dcompiler xinput winmm dbghelp)
target_include_directories(${PROJECT_NAME} PRIVATE "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/input")
if(NOT CMAKE_SCRIPT_MODE_FILE)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "$<TARGET_FILE:SDL3::SDL3>" "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    add_custom_command(TARGET launcher_check POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "$<TARGET_FILE:SDL3::SDL3>" "$<TARGET_FILE_DIR:launcher_check>")
endif()
if(DOA1U_DIAGNOSTIC)
    target_compile_definitions(${PROJECT_NAME} PRIVATE DOA1U_DIAGNOSTIC)
    if(RECOMP_WITH_RENDERDOC)
        target_compile_definitions(${PROJECT_NAME} PRIVATE RECOMP_WITH_RENDERDOC)
    endif()
endif()
target_include_directories(${PROJECT_NAME} PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/include"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/kernel"
)

if(MSVC)
    # Keep Release symbols and distinct guest functions for reliable crash stacks.
    target_compile_options(${PROJECT_NAME} PRIVATE /bigobj /Zi /Oy-)
    target_link_options(${PROJECT_NAME} PRIVATE
        /LARGEADDRESSAWARE /DEBUG /OPT:REF /OPT:NOICF
        # Fixed host addresses support the existing CDB scripts.
        /DYNAMICBASE:NO /HIGHENTROPYVA:NO
    )
endif()

# Headless synthetic GPU check, compiling the actual NRI backend (no game runtime).
add_executable(nri_backend_check EXCLUDE_FROM_ALL tools/nri_backend_check.cpp
    src/render/nri/nri_d3d11.cpp src/render/nri/nri_shaders.cpp src/render/nri/nri_imgui.cpp)
target_include_directories(nri_backend_check PRIVATE src "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/kernel")
target_link_libraries(nri_backend_check PRIVATE NRI doa1u_imgui d3d11 d3dcompiler winmm)

if(MSVC)
    target_compile_options(nri_backend_check PRIVATE /Zi)
    target_link_options(nri_backend_check PRIVATE /DEBUG)
endif()

if(NOT CMAKE_SCRIPT_MODE_FILE)
    foreach(target doa1u_recomp nri_backend_check)
        add_dependencies(${target} doa1u_spirv)
        target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/generated")
    endforeach()
endif()

# Offline regression for the recovered training-menu interior switch target.
add_executable(throw_move_lookup_check EXCLUDE_FROM_ALL
    tools/throw_move_lookup_check.c src/game/throw_move_lookup.c)
target_include_directories(throw_move_lookup_check PRIVATE src)

add_executable(training_stage_change_check EXCLUDE_FROM_ALL
    tools/training_stage_change_check.c src/game/training_stage_change.c
    src/runtime/recomp_manual.c)
target_include_directories(training_stage_change_check PRIVATE src)
