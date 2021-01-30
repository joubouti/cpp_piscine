#include "ICharacter.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {
}

AMateria::AMateria(AMateria const & materia) {
    this->_type = materia._type;
    *this = materia;
}

AMateria::~AMateria() {
}

AMateria&           AMateria::operator=(AMateria const & materia) {
    this->_xp = materia._xp;
    return *this;
}

std::string const & AMateria::getType() const {
    return _type;
}

unsigned int        AMateria::getXP() const {
    return _xp;
}

void                AMateria::use(ICharacter&) {
    _xp += 10;
}