#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(ScavTrap const & scavTrap);
    ScavTrap(std::string const & name);
    ~ScavTrap();

    ScavTrap&   operator=(ScavTrap const & scavTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        challengeNewcomer(std::string const & target);
};


#endif