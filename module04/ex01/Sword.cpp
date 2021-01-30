#include "Sword.hpp"

Sword::Sword() : AWeapon("Sword", 10, 70) {
}

Sword::Sword(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

Sword::Sword(Sword const & sword) : AWeapon(sword) {
}

Sword::~Sword() {
}

Sword&    Sword::operator=(Sword const & weapon) {
    AWeapon* aweapon = this;
    *aweapon = weapon;
    return *this;
}

void    Sword::attack() const {
    std::cout << "* Shwing!! *" << std::endl;
}