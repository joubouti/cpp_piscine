#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : ClapTrap("SUPER-TP", 100, 100, 120, 120, 1, 60, 20, 5)
{
    std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
    std::cout << "<" << name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & ft)
{
    *this = ft;
	std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "<" << _name << ">: Are you god? Am I dead?" << std::endl;
}

SuperTrap&   SuperTrap::operator=(SuperTrap const & ft)
{
	_hit_points = ft._hit_points;
    _max_hit_points = ft._max_hit_points;
    _energy_points = ft._energy_points;
    _max_energy_points = ft._max_energy_points;
    _level = ft._level;
    _name = ft._name;
    _melee_attack_damage = ft._melee_attack_damage;
    _ranged_attack_damage = ft._ranged_attack_damage;
    _armor_damage_reduction = ft._armor_damage_reduction;

    std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}


void	SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}

