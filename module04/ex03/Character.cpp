#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        _materia[i] = NULL;
    }
}

Character::Character(Character const & character) {
    *this = character;
}

Character&  Character::operator=(Character const & character) {
    clear();
    this->_name = character._name;
    for (int i = 0; i < 4; i++) {
        if (character._materia[i]) {
            this->_materia[i] = character._materia[i]->clone();
        } else {
            this->_materia[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    clear();
}

void    Character::clear() {
    for (int i = 0; i < 4; i++) {
        if (_materia[i]) {
            delete _materia[i];
            _materia[i] = NULL;
        }
    }
}


std::string const & Character::getName() const {
    return _name;
}

void                Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] == NULL && m != NULL) {
            _materia[i] = m;
            break;
        }
    }
}

void                Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3) {
        if (_materia[idx]) {
            _materia[idx] = NULL;
        }
    }
}

void                Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3) {
        if (_materia[idx]) {
            _materia[idx]->use(target);
        }
    }
}
