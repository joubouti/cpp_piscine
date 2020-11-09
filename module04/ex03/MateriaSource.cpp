#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
}

MateriaSource::MateriaSource(MateriaSource const & materiaSource) {
    *this = materiaSource;
}

MateriaSource::~MateriaSource() {
}

MateriaSource&      MateriaSource::operator=(MateriaSource const & materiaSource) {
    for (int i = 0; i < 4; i++) {
        _materia_learned[i] = materiaSource._materia_learned[i];
    }
    return *this;
}

void                MateriaSource::learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (_materia_learned[i] == NULL) {
            _materia_learned[i] = materia;
            break;
        }
    }
}

AMateria*           MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_materia_learned[i] && _materia_learned[i]->getType() == type) {
            return _materia_learned[i]->clone();
        }
    }
    return NULL;
}

