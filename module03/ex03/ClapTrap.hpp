#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>
#include <cmath>

 
class ClapTrap
{
protected:
    std::string _name;
    uint        _hit_points;
    uint        _max_hit_points;
    uint        _energy_points;
    uint        _max_energy_points;
    uint        _level;
    uint        _melee_attack_damage;
    uint        _ranged_attack_damage;
    uint        _armor_damage_reduction;

public:
    ClapTrap();
    ClapTrap(ClapTrap const & ClapTrap);
    ClapTrap(std::string const & name, uint hit_points, uint max_hit_points, uint energy_points, uint max_energy_points,
            uint level, uint melee_attack_damage, uint ranged_attack_damage, uint armor_damage_reduction);
    ~ClapTrap();

    ClapTrap&   operator=(ClapTrap const & clapTrap);

    void        takeDamage(uint amount);
    void        beRepaired(uint amount);
    std::string getName() const;
};


#endif