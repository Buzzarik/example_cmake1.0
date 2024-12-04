#include "../../libD/include/libD.hpp"
// #include "../../libA/include/libA.hpp"
// #include "../../libB/include/libB.hpp"
// #include "../../libC/include/libC.hpp"
#include <iostream>
#include <fstream>

int main(){
    int n;
    std::ifstream input("test");
    input >> n;
    doSomeThingD();
    std::cout << n << std::endl;
    // doSomeThingA();
    // doSomeThingB();
    // doSomeThingC();
    return 0;
}