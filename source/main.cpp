#include <iostream>
#include <string>

#include "fmt/format.h"
#include "cool.cpp"

using namespace std;

int main() {
  println("hi");
  auto blah = unique_ptr<Cool>(new Cool("Frank", 1));
  blah = unique_ptr<Cool>(new Cool("Frank", 22));
  blah->namePlease();
}
