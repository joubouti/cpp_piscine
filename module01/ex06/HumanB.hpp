#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;
public:
    HumanB(std::string name);
    ~HumanB();

    void        attack() const;
    void        setWeapon(Weapon& weapon);
};



#endif