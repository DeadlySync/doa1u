# Keep upstream sources unmodified; select the controller-only configuration here.
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
# Preserve the assertion level of the previously shipped Release SDL build.
# The existing startup/render thread handoff trips SDL's debug-only main-thread
# pump assertion; do not change input behavior as part of compiler configuration.
# SDL sources still compile with Debug /Od /Ob0 and full symbols.
set(SDL_ASSERTIONS release CACHE STRING "Existing SDL assertion behavior" FORCE)
foreach(subsystem AUDIO VIDEO GPU RENDER CAMERA HAPTIC POWER SENSOR DIALOG TRAY)
    set(SDL_${subsystem} OFF CACHE BOOL "" FORCE)
endforeach()
# Gamepad rumble uses joystick drivers, not the separate general-purpose haptic API.
set(SDL_JOYSTICK ON CACHE BOOL "" FORCE)
set(SDL_HIDAPI ON CACHE BOOL "" FORCE)
set(SDL_HIDAPI_JOYSTICK ON CACHE BOOL "" FORCE)
set(SDL_VIRTUAL_JOYSTICK ON CACHE BOOL "" FORCE)
set(SDL_XINPUT ON CACHE BOOL "" FORCE)
add_subdirectory(src/third_party/SDL3/upstream EXCLUDE_FROM_ALL)
if(NOT TARGET SDL3::SDL3-static)
    message(FATAL_ERROR "Controller support requires vendored static SDL3")
endif()
