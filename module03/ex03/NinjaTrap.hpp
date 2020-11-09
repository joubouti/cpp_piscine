#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:
    NinjaTrap();
    NinjaTrap(NinjaTrap const & NinjaTrap);
    NinjaTrap(std::string const & name);
    ~NinjaTrap();

    NinjaTrap&   operator=(NinjaTrap const & ninjaTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        ninjaShoebox(NinjaTrap const & target);
    void        ninjaShoebox(FragTrap const & target);
    void        ninjaShoebox(ScavTrap const & target);
};


#endif