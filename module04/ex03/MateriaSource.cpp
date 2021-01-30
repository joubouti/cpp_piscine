#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materia_learned[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const & materiaSource) {
    for (int i = 0; i < 4; i++) {
        _materia_learned[i] = NULL;
    }
    *this = materiaSource;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materia_learned[i] != NULL) {
            delete _materia_learned[i];
        }
    }
}

MateriaSource&      MateriaSource::operator=(MateriaSource const & materiaSource) {
    for (int i = 0; i < 4; i++) {
        if (_materia_learned[i]) {
            delete _materia_learned[i];
        }
        if (materiaSource._materia_learned[i]) {
            _materia_learned[i] = materiaSource._materia_learned[i]->clone();
        } else {
            _materia_learned[i] = NULL;
        }
    }
    return *this;
}

void                MateriaSource::learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (_materia_learned[i] == NULL) {
            _materia_learned[i] = materia->clone();
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

