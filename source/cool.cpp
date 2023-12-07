#pragma once

#include <string>

#include "fmt/format.h"

#include "fish.cpp"

using namespace std;
using namespace fmt;

class Cool {

  string name;

  unique_ptr<Fish> fish;

public:

  Cool(string name, int fishPoints) {
    this->name = name;
    if (fishPoints > 0) {
      this->fish = unique_ptr<Fish>(new Fish(fishPoints));
    }

    println("Constructor called");
  }

  ~Cool() {
    println("Destructor called");
  }

  void namePlease() {
    println("I'm {}", this->name);
  }
};