#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer) {
    *this = sorcerer;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) {
    this->_name = name;
    this->_title = title;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(Sorcerer const & sorcerer) {
    this->_name = sorcerer._name;
    this->_title = sorcerer._title;
    return *this;
}

std::string    Sorcerer::getName() const {
    return _name;
}
std::string    Sorcerer::getTitle() const {
    return _title;
}

std::ostream&   operator<<(std::ostream& out, Sorcerer const & sorcerer) {
    return out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
}

void        Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}