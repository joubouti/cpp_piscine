#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria*   _materia_learned[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const &);
    ~MateriaSource();
    MateriaSource&      operator=(MateriaSource const &);
    void                learnMateria(AMateria*);
    AMateria*           createMateria(std::string const & type);

};


#endif
