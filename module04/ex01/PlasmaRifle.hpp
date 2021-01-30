#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {
    
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &);
    PlasmaRifle(std::string const & name, int apcost, int damage);
    virtual ~PlasmaRifle();

    PlasmaRifle&    operator=(PlasmaRifle const &);
    void            attack() const;
};

#endif