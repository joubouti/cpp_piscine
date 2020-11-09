#include "Pony.hpp"
#include <iostream>

int main( void ) {

    std::cout << "Before Stack" << std::endl;
    ponyOnTheStack();
    std::cout << "After Stack && Before Heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "After Heap" << std::endl;
    return 0;
}