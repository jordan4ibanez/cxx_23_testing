#include <iostream>
#include <string>

#include "fmt/format.h"

#include "cool.cpp"
#include "fish.cpp"

using namespace std;

int main() {
  println("hi");
  auto blah = unique_ptr<Cool>(new Cool("Frank", 1));
  blah = unique_ptr<Cool>(new Cool("Frank", 22));
  blah->namePlease();

  auto fish = unique_ptr<Fish>(new Fish(1));
  
}
