#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <string>
#include <iostream>
#include <cmath>

class ScavTrap
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
    ScavTrap();
    ScavTrap(ScavTrap const & scavTrap);
    ScavTrap(std::string const & name);
    ~ScavTrap();

    ScavTrap&   operator=(ScavTrap const & scavTrap);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        challengeNewcomer(std::string const & target);
};


#endif