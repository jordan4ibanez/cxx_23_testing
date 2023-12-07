cmake_minimum_required(VERSION 3.20.4)

project(
  cool
  VERSION 1.0
  LANGUAGES CXX
)

add_executable(cool source/main.cpp)

# target_compile_features(cool PUBLIC cxx_std_23)
# set (TARGET cool PROPERTY CXX_STANDARD 23)
set (CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_STANDARD_REQUIRED 23)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
