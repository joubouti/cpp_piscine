#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
    
public:
    PowerFist();
    PowerFist(PowerFist const &);
    PowerFist(std::string const & name, int apcost, int damage);
    virtual ~PowerFist();

    PowerFist&    operator=(PowerFist const &);
    void            attack() const;
};

#endif