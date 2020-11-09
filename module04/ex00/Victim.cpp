#include "Victim.hpp"

Victim::Victim() {
}

Victim::Victim(Victim const & victim) {
    *this = victim;
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const & name) {
    this->_name = name;
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim&   Victim::operator=(Victim const & victim) {
    this->_name = victim._name;
    return *this;
}

std::string    Victim::getName() const {
    return _name;
}

void        Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&   operator<<(std::ostream& out, Victim const & victim) {
    return out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
}