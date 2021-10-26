#include <iostream>

#include "State.h"
#include "Statemachine.h"


int main(){
    Statemachine m;
    m.parse("aba");
    std::cout << m.isSuccessful() << std::endl;
    return 0;
}