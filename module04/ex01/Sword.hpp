#ifndef SWORD_HPP
# define SWORD_HPP

#include "AWeapon.hpp"
#include <iostream>

class Sword : public AWeapon {
    
public:
    Sword();
    Sword(Sword const &);
    Sword(std::string const & name, int apcost, int damage);
    virtual ~Sword();

    Sword&    operator=(Sword const &);
    void            attack() const;
};

#endif