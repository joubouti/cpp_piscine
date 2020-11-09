#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
    FragTrap();
    FragTrap(FragTrap const & FragTrap);
    FragTrap(std::string const & name);
    ~FragTrap();

    FragTrap&   operator=(FragTrap const & fragTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        vaulthunter_dot_exe(std::string const & target);
};


#endif