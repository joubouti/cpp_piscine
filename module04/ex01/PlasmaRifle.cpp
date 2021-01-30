#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & pr) : AWeapon(pr) {
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & weapon) {
    AWeapon* aweapon = this;
    *aweapon = weapon;
    return *this;
}

void    PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}