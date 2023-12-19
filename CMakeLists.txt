cmake_minimum_required(VERSION 3.16)
project(resect C)

find_package(SQLite3 REQUIRED)
# Use current directory name as the build type if not specified
get_filename_component(BUILD_TYPE_FROM_DIR ${CMAKE_BINARY_DIR} NAME)
set(CMAKE_BUILD_TYPE ${BUILD_TYPE_FROM_DIR})

message(STATUS "Build type (from current build dir): ${BUILD_TYPE_FROM_DIR}")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

set(LIBCLANG_DIR "${CMAKE_CURRENT_SOURCE_DIR}/target/${BUILD_TYPE_FROM_DIR}/libclang-bundle")
set(LIBCLANG_INCLUDE_DIRS "${LIBCLANG_DIR}/include")
set(LIBCLANG_LINK_DIRS "${LIBCLANG_DIR}/lib")
set(THIRD_PARTY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third-party")

message(STATUS "LIBCLANG_INCLUDE_DIRS: ${LIBCLANG_INCLUDE_DIRS}")
message(STATUS "LIBCLANG_LINK_DIRS: ${LIBCLANG_LINK_DIRS}")
message(STATUS "THIRD_PARTY_DIR: ${THIRD_PARTY_DIR}")


set(CMAKE_POSITION_INDEPENDENT_CODE ON)
#
# PCRE
#
set(PCRE2_STATIC ON CACHE BOOL "" FORCE)
set(PCRE2_STATIC_RUNTIME ON CACHE BOOL "" FORCE)
set(PCRE2_BUILD_PCRE2_8 ON CACHE BOOL "" FORCE)
set(PCRE2_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(PCRE2_BUILD_PCRE2GREP OFF CACHE BOOL "" FORCE)
set(PCRE2_SUPPORT_LIBZ OFF CACHE BOOL "" FORCE)
set(PCRE2_SUPPORT_LIBBZ2 OFF CACHE BOOL "" FORCE)
set(PCRE2_SUPPORT_LIBREADLINE OFF CACHE BOOL "" FORCE)

add_subdirectory("${THIRD_PARTY_DIR}/pcre2-10.37/")

set_target_properties(pcre2-8 PROPERTIES
        CMAKE_POSITION_INDEPENDENT_CODE ON)
#
# RESECT
#
add_library(resect SHARED
        resect.h
        src/resect_types_private.h
        src/resect_private.h
        src/decl.c
        src/type.c
        src/context.c
        src/util.c
        src/filtering.c
        src/options.c
        src/invocation.c
        src/parser.c
        # src/resect_sqlite_private.h
        # src/resect_sqlite.c
)

add_library(resect_sql_dump SHARED
    src/resect_sqlite_private.h
    src/resect_sqlite.c
)

set_target_properties(resect PROPERTIES
    CMAKE_C_STANDARD 99
    CMAKE_POSITION_INDEPENDENT_CODE ON
    CMAKE_INCLUDE_CURRENT_DIR ON
    LINK_FLAGS_RELEASE -s
    LINK_WHAT_YOU_USE TRUE)

target_include_directories(resect
  SYSTEM BEFORE PUBLIC "${LIBCLANG_INCLUDE_DIRS}"
  SYSTEM BEFORE PUBLIC "${CMAKE_BINARY_DIR}/third-party/pcre2-10.37/"
)

target_link_directories(resect
  PUBLIC "${LIBCLANG_LINK_DIRS}")

target_include_directories(resect_sql_dump
  SYSTEM BEFORE PUBLIC ${SQLite3_INCLUDE_DIRS}
  SYSTEM BEFORE PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
  SYSTEM BEFORE PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

target_link_libraries(resect_sql_dump
  PUBLIC ${SQLite3_LIBRARIES}
  PUBLIC resect
)

add_library(resect_clang_static STATIC IMPORTED)

if (APPLE OR UNIX)

    set_target_properties(resect_clang_static PROPERTIES
        IMPORTED_LOCATION "${LIBCLANG_LINK_DIRS}/libclang_bundled.a")

#    target_link_options(resect PUBLIC "-fuse-ld=gold")
    target_link_libraries(resect
        stdc++ m dl pthread z)
elseif(WIN32)
    set_target_properties(resect_clang_static PROPERTIES
        IMPORTED_LOCATION "${LIBCLANG_LINK_DIRS}/clang_static_bundled.lib")
    target_link_libraries(resect
        version.lib)
endif()

target_link_libraries(resect
    resect_clang_static pcre2-8)

# TESTS
add_subdirectory("${THIRD_PARTY_DIR}/Unity/")

# add_library(unity STATIC "${CMAKE_BINARY_DIR}/third-party/Unity/src/unity.c")
# target_include_directories(unity "${CMAKE_BINARY_DIR}/third-party/Unity/src")

add_executable(resect-test-enums test/test_enums.c)
target_link_libraries(resect-test-enums PUBLIC resect unity)
target_include_directories(resect-test-enums
  # PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/test"
  # SYSTEM BEFORE PUBLIC "${CMAKE_BINARY_DIR}/third-party/Unity/"
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/test"
  unity PUBLIC src
)

# EXAMPLES AND COMMANDS
add_executable(ast_pprint src/ast_pprint_cmd.c)
target_link_libraries(ast_pprint PUBLIC resect)

add_executable(resect_dump_to_sqlite
    src/dump_to_sqlite_cmd.c
)
# target_link_libraries(resect_dump_to_sqlite PUBLIC resect)
target_include_directories(resect_dump_to_sqlite PUBLIC ${SQLite3_INCLUDE_DIRS})
target_link_libraries(resect_dump_to_sqlite PUBLIC resect resect_sql_dump ${SQLite3_LIBRARIES})
