#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

PowerFist::PowerFist(PowerFist const & pf) {
    *this = pf;
}

PowerFist::~PowerFist() {
}

PowerFist&    PowerFist::operator=(PowerFist const & weapon) {
    AWeapon* aweapon = this;
    *aweapon = weapon;
    return *this;
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}