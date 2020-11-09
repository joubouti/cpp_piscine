#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include <cmath>

class FragTrap
{
private:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _max_hit_points;
    unsigned int    _energy_points;
    unsigned int    _max_energy_points;
    unsigned int    _level;
    unsigned int    _melee_attack_damage;
    unsigned int    _ranged_attack_damage;
    unsigned int    _armor_damage_reduction;

public:
    FragTrap();
    FragTrap(FragTrap const & FragTrap);
    FragTrap(std::string const & name);
    ~FragTrap();

    FragTrap&   operator=(FragTrap const & fragTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        vaulthunter_dot_exe(std::string const & target);
};


#endif