cmake_minimum_required(VERSION 3.27.9)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API
  "2182bf5c-ef0d-489a-91da-49dbc3090d2a")

set (CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_STANDARD_REQUIRED 23)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

project(
  cool
  VERSION 1.0
  LANGUAGES CXX
)

add_executable(cool source/main.cpp)

set_target_properties(
  cool PROPERTIES
  CXX_STANDARD 23
  CXX_EXTENSIONS TRUE
)

target_compile_features(cool PUBLIC cxx_std_23)

add_subdirectory(
  lib/fmt
)

target_link_libraries(cool PRIVATE fmt::fmt-header-only)
