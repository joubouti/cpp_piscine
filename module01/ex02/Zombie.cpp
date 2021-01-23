#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
    std::cout << "Zombie Created" << std::endl;
}

Zombie::Zombie(const std::string name,const std::string type) : _name(name), _type(type) {
    std::cout << "Zombie " << name << " Created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " Destroyed" << std::endl;
}

void        Zombie::announce() const {
    std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void        Zombie::setName(std::string name) {
    _name = name;
}

void        Zombie::setType(std::string type) {
    _type = type;
}

std::string Zombie::getName() const {
    return _name;
}

std::string Zombie::getType() const {
    return _type;
}
