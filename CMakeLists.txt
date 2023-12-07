cmake_minimum_required(VERSION 3.20.4)

# set(CMAKE_C_COMPILER "/usr/bin/gcc")
# set(CMAKE_CXX_COMPILER "/usr/bin/g++")

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

target_link_libraries(cool PRIVATE fmt::fmt-header-only)

set_target_properties(
  cool PROPERTIES
  CXX_STANDARD 23
  CXX_EXTENSIONS ON
)


set (CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_STANDARD_REQUIRED 23)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
