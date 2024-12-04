#include "../include/libB.hpp"
#include <iostream>
#include "../../libA/include/libA.hpp"

void doSomeThingB(){
    std::cout << "start doSomeThingB" << std::endl;
    doSomeThingA();
    std::cout << "end doSomeThingB" << std::endl;
}