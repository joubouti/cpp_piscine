#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria*   _materia[4];
    Character();
    void    clear();
public:
    Character(std::string const & name);
    Character(Character const &);
    ~Character();
    Character&          operator=(Character const &);
    std::string const & getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);

};

#endif