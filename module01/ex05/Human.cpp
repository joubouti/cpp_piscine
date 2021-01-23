#include "Human.hpp"
#include <iostream>

Human::Human(){
	std::cout << "Human constructor" << std::endl;
}

Human::~Human() {
	std::cout << "Human destructor" << std::endl;
}

std::string Human::identify() const {
    return _brain.identify();
}

const Brain&      Human::getBrain() const {
    return _brain;
}
