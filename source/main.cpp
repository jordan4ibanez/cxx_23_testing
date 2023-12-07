import Test;
#include <iostream>
// #include "fmt/core.h"

// using namespace fmt;

int main() {
  const float testing = 1.2345999f;
  // println("Hello world!{} {} {} {} {}", "this", "is", "multiple", "inputs", testing);
  // println("");
  if (__cplusplus == 202101L) std::cout << "C++23";
  else if (__cplusplus == 202002L) std::cout << "C++20";
  else if (__cplusplus == 201703L) std::cout << "C++17";
  else if (__cplusplus == 201402L) std::cout << "C++14";
  else if (__cplusplus == 201103L) std::cout << "C++11";
  else if (__cplusplus == 199711L) std::cout << "C++98";
  else std::cout << "pre-standard C++." << __cplusplus;
  std::cout << "\n";
}
