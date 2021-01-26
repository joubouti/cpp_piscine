#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:
    SuperTrap();
    SuperTrap(SuperTrap const & superTrap);
    SuperTrap(std::string const & name);
    ~SuperTrap();

    SuperTrap&   operator=(SuperTrap const & SuperTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    uint        getHealth() const;

};


#endif