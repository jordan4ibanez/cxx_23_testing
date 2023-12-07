#pragma once

#include <string>

#include "fmt/format.h"

using namespace std;
using namespace fmt;

class Fish {
  
  int life = 10;

public:

  Fish(int life) {
    this->life = life;
    println("A fish was created with {} life points.", this->life);
  }
  
  ~Fish() {
    println("The fish with {} life points is gone.", this->life);
  }
};