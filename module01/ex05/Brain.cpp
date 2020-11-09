#include "Brain.hpp"
#include <iomanip>
#include <iostream>

Brain::Brain() {
}

Brain::~Brain() {
}


void            Brain::setWeight(unsigned int weight) {
    _weight = weight;
}

void            Brain::setIQ(unsigned int iq) {
    _iq = iq;
}

unsigned int    Brain::getWeight() const {
    return _weight;
}

unsigned int    Brain::getIQ() const {
    return _iq;
}

std::string     Brain::identify() const {
    std::stringstream ss;
    ss << this;
    return ss.str();
}
