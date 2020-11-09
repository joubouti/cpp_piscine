#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
private:
    std::string _name;
    int         _ap;
    AWeapon*    _weapon;
    static int  _max_ap;
    Character();
public:
    Character(std::string const & name);
    Character(Character const &);
    ~Character();

    Character&    operator=(Character const &);

    void                recoverAP();
    void                equip(AWeapon*);
    void                attack(Enemy*);
    std::string const & getName() const;
    int                 getAP() const;
    AWeapon*            getWeapon() const;

};

std::ostream&   operator<<(std::ostream&, Character const &);


#endif