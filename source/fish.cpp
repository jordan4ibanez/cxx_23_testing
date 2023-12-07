#pragma once

#include <string>

#include "fmt/format.h"
#include "cool.cpp"

using namespace std;
using namespace fmt;

class Fish {
  
  int life = 10;

public:

  Fish(int life) {
    this->life = life;
    println("A fish was created with {} life points.", this->life);
    // Found out why modules were created noooo
    // auto bleh = new Cool("hi", -1);
  }
  
  ~Fish() {
    println("The fish with {} life points is gone.", this->life);
  }
};