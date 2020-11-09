#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(){
}

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::HumanB(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {
}

HumanB::~HumanB() {
}

void    HumanB::attack() const {
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}