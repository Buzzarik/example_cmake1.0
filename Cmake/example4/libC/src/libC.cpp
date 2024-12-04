#include "../include/libC.hpp"
#include <iostream>
#include "../../libA/include/libA.hpp"

void doSomeThingC(){
    std::cout << "start doSomeThingC" << std::endl;
    doSomeThingA();
    std::cout << "end doSomeThingC" << std::endl;
}