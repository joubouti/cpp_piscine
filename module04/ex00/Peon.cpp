#include "Peon.hpp"

Peon::Peon() {
}

Peon::Peon(std::string const & name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & peon) : Victim(peon) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon&   Peon::operator=(Peon const & peon) {
    _name = peon._name;
    return *this;
}

void    Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}