#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
                :_name (name), _damage(damage), _apcost(apcost) {
}

AWeapon::AWeapon(AWeapon const & weapon) {
    *this = weapon;
}

AWeapon::~AWeapon()
{
}

AWeapon&    AWeapon::operator=(AWeapon const & weapon) {
    _name = weapon._name;
    _apcost = weapon._apcost;
    _damage = weapon._damage;
    return *this;
}

std::string const & AWeapon::getName() const {
    return _name;
}

int                 AWeapon::getAPCost() const {
    return _apcost;
}

int                 AWeapon::getDamage() const {
    return _damage;
}


