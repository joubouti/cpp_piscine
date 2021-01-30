#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon {
private:
    std::string _name;
    int         _damage;
    int         _apcost;
    AWeapon();
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const &);
    virtual ~AWeapon();

    AWeapon&    operator=(AWeapon const &);
    std::string const & getName() const;
    int                 getAPCost() const;
    int                 getDamage() const;
    virtual void        attack() const = 0;

};

#endif