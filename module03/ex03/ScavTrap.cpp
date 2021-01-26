#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "<" << name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ft)
{
    *this = ft;
	std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<" << _name << ">: Are you god? Am I dead?" << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & ft)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage ! Bop!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage ! Shwing!" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    const int chl_len = 3;
    const std::string challenge[chl_len] =
	{
        "Make corona virus cure",
        "Win rock paper scissors",
        "Make him laugh",
    };
    int rand_chl = rand() % chl_len;
    std::cout << "<" << _name << "> challenges <"
                << target << "> to " << challenge[rand_chl] << std::endl;
}