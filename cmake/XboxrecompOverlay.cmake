# Build an isolated runtime source view: unchanged upstream + tracked DOA1U fixes.
# Copying headers too ensures quoted includes cannot accidentally use old ABI types.
set(DOA1U_XBOXRECOMP_RUNTIME_DIR "${CMAKE_BINARY_DIR}/xboxrecomp-runtime")
if(CMAKE_SCRIPT_MODE_FILE)
    return() # Source-list validation must not materialize a runtime/build tree.
endif()
if(NOT EXISTS "${XBOXRECOMP_DIR}/CMakeLists.txt")
    message(FATAL_ERROR "Set XBOXRECOMP_DIR to an xboxrecomp checkout; see README.md")
endif()
file(GLOB_RECURSE runtime_files CONFIGURE_DEPENDS LIST_DIRECTORIES false
    "${XBOXRECOMP_DIR}/src/*" "${XBOXRECOMP_DIR}/include/*" "${XBOXRECOMP_DIR}/tests/*")
list(APPEND runtime_files "${XBOXRECOMP_DIR}/CMakeLists.txt")
foreach(source IN LISTS runtime_files)
    if(source MATCHES "(/CMakeLists[.]txt$|[.](c|h|cpp|hpp|inl|inc|cmake)$)")
        file(RELATIVE_PATH relative "${XBOXRECOMP_DIR}" "${source}")
        configure_file("${source}" "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/${relative}" COPYONLY)
    endif()
endforeach()
file(GLOB_RECURSE overrides CONFIGURE_DEPENDS LIST_DIRECTORIES false
    "${CMAKE_CURRENT_SOURCE_DIR}/src/xboxrecomp/src/*"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/xboxrecomp/tests/*")
foreach(source IN LISTS overrides)
    file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}/src/xboxrecomp" "${source}")
    configure_file("${source}" "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/${relative}" COPYONLY)
endforeach()
message(STATUS "xboxrecomp: tracked DOA1U overrides applied from src/xboxrecomp")
