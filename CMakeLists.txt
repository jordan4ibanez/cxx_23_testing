cmake_minimum_required(VERSION 3.20.4)

project(
  coolbeans
  VERSION 1.0
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD_REQUIRED 23)

add_executable(cool source/main.cpp)