#include "../include/libD.hpp"
#include <iostream>
#include "../../libB/include/libB.hpp"
#include "../../libC/include/libC.hpp"


void doSomeThingD(){
    std::cout << "start doSomeThingD" << std::endl;
    doSomeThingB();
    doSomeThingC();
    std::cout << "end doSomeThingD" << std::endl;
}
