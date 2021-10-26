#pragma once

#include <string>

#include "State.h"

class Statemachine {
    State* state = nullptr; //this has to be written in EVERY constructor!

public:
    Statemachine();
    ~Statemachine();
    bool isSuccessful();
    void parse(std::string str);
    void parse(char c);
};