cmake_minimum_required(VERSION 3.20.4)

# set(CMAKE_C_COMPILER "/usr/bin/gcc")
# set(CMAKE_CXX_COMPILER "/usr/bin/g++")

set (CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_STANDARD_REQUIRED 23)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_EXE_FLAGS "-fmodules-ts=true -std=c++23")
# set(CMAKE_EXE_LINKER_FLAGS "-fmodules-ts=true")

set(CXXFLAGS "-std=c++23 -fmodules-ts")
set(CMAKE_CXX_FLAGS "${CXXFLAGS}")

project(
  cool
  VERSION 1.0
  LANGUAGES CXX
)


include_directories(
  lib
)

add_subdirectory(
  lib/fmt
)

add_executable(cool source/main.cpp)

target_compile_features(cool PUBLIC cxx_std_23)

target_link_libraries(cool PRIVATE fmt::fmt)

# set_target_properties(
#   cool PROPERTIES
#   CXX_STANDARD 23
#   CXX_EXTENSIONS TRUE
# )

