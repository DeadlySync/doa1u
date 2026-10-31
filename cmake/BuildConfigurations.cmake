# Debug is for CDB, source stepping and reliable local variables/stack frames.
# Release keeps the original, tested speed optimization. Diagnostics remain an
# independent DOA1U_DIAGNOSTIC option; no upstream dependency sources are edited.
if(MSVC)
    foreach(language C CXX)
        set(CMAKE_${language}_FLAGS_DEBUG "/Od /Ob0 /Zi /Oy- /D_DEBUG"
            CACHE STRING "Unoptimized debugging with symbols and frame pointers" FORCE)
        set(CMAKE_${language}_FLAGS_RELEASE "/O2 /Ob2 /DNDEBUG"
            CACHE STRING "Original Release speed optimization" FORCE)
    endforeach()
    foreach(kind EXE SHARED MODULE)
        set(CMAKE_${kind}_LINKER_FLAGS_DEBUG "/DEBUG:FULL /INCREMENTAL:NO /OPT:NOREF /OPT:NOICF"
            CACHE STRING "Complete Debug symbols, distinct functions, no linker thunks" FORCE)
        set(CMAKE_${kind}_LINKER_FLAGS_RELEASE "/INCREMENTAL:NO /DEBUG:NONE"
            CACHE STRING "Release without linker PDB generation" FORCE)
    endforeach()
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>")
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_DEBUG OFF)
endif()

# Some runtime libraries hard-code /O2 on their targets. Override it last for
# Debug, without changing those upstream CMake files or Release behavior.
function(doa1u_finalize_debug_targets directory)
    if(NOT MSVC)
        return()
    endif()
    get_property(children DIRECTORY "${directory}" PROPERTY SUBDIRECTORIES)
    foreach(child IN LISTS children)
        doa1u_finalize_debug_targets("${child}")
    endforeach()
    get_property(targets DIRECTORY "${directory}" PROPERTY BUILDSYSTEM_TARGETS)
    foreach(target IN LISTS targets)
        get_target_property(kind "${target}" TYPE)
        if(kind MATCHES "^(EXECUTABLE|STATIC_LIBRARY|SHARED_LIBRARY|MODULE_LIBRARY|OBJECT_LIBRARY)$")
            target_compile_options("${target}" PRIVATE "$<$<CONFIG:Debug>:/Od;/Ob0;/Oy->")
            set_property(TARGET "${target}" PROPERTY INTERPROCEDURAL_OPTIMIZATION_DEBUG FALSE)
            # NRI explicitly requests Release symbols. Remove those requests at
            # the integration boundary without modifying the vendored project.
            foreach(property COMPILE_OPTIONS LINK_OPTIONS INTERFACE_COMPILE_OPTIONS INTERFACE_LINK_OPTIONS)
                get_target_property(options "${target}" "${property}")
                if(options AND NOT options MATCHES "-NOTFOUND$")
                    list(REMOVE_ITEM options "$<$<CONFIG:Release>:/Zi>" "$<$<CONFIG:Release>:/DEBUG>")
                    set_property(TARGET "${target}" PROPERTY "${property}" "${options}")
                endif()
            endforeach()
        endif()
    endforeach()
endfunction()
