#include "Human.hpp"
#include <iostream>
#include <iomanip>

Human::Human(){
}

Human::~Human() {
}

std::string Human::identify() const {
    std::stringstream ss;
    ss << &_brain;
    return ss.str();
}

const Brain&      Human::getBrain() const {
    return _brain;
}
