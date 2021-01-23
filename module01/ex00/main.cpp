#include "Pony.hpp"
#include <iostream>

int main( void ) {

    std::cout << "\tBefore Stack" << std::endl;
    ponyOnTheStack();
    std::cout << "\tAfter Stack && Before Heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "\tAfter Heap" << std::endl;
    return 0;
}