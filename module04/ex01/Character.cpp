#include "Character.hpp"

int Character::_max_ap = 40;

Character::Character() {
}


Character::Character(std::string const & name)
                    : _name(name), _ap(_max_ap), _weapon(NULL) {
}
Character::Character(Character const & character) {
    *this = character;
}

Character::~Character() {
}

Character&    Character::operator=(Character const & character) {
    _name = character._name;
    _ap = character._ap;
    _weapon = character._weapon;
    return *this;
}

void                Character::recoverAP() {
    _ap += 10;
    if (_ap > _max_ap) {
        _ap = _max_ap;
    }
}

void                Character::equip(AWeapon* weapon) {
    _weapon = weapon;
}

void                Character::attack(Enemy* enemy) {
    if (_weapon && _ap >= _weapon->getAPCost()) {
        _ap -= _weapon->getAPCost();
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::string const & Character::getName() const {
    return _name;
}

int                 Character::getAP() const {
    return _ap;
}

AWeapon*            Character::getWeapon() const {
    return _weapon;
}

std::ostream&       operator<<(std::ostream& out, Character const & character) {
    AWeapon* weapon = character.getWeapon();
    if (weapon)
        return out << character.getName() << " has " << character.getAP() << " AP and wields a " << weapon->getName() << std::endl;
    else
        return out << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
}
