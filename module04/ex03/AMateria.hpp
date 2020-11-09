#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
private:
    std::string     _type;
    unsigned int    _xp;
    AMateria();
public:
    AMateria(std::string const & type);
    AMateria(AMateria const &);
    virtual ~AMateria();

    AMateria&   operator=(AMateria const &);

    std::string const & getType() const; //Returns the materia type
    unsigned int        getXP() const; //Returns the Materia's XP
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
};


#endif