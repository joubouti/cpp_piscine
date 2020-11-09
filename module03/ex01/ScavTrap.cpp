#include "ScavTrap.hpp"


ScavTrap::ScavTrap() :  _name("SC4V-TP"), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50),
                        _level(1), _melee_attack_damage(20), _ranged_attack_damage(15),
                        _armor_damage_reduction(3)
{
    std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50),
                        _level(1), _melee_attack_damage(20), _ranged_attack_damage(15),
                        _armor_damage_reduction(3)
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
    std::cout << "Bop! FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage !" << std::endl;
    
}

void	ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Shwing! FR4G-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage !" << std::endl;

}

void	ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int actual_damage = amount * pow(0.99, _armor_damage_reduction);

    if (_hit_points < actual_damage)
        _hit_points = 0;
    else
        _hit_points -= actual_damage;

    std::cout << "<" << _name << "> -" << actual_damage << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;

    std::cout << "<" << _name << "> +" << amount << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    const int chl_len = 5;
    const std::string challenge[chl_len] =
	{
		"wear sandle all day",
		"sneeze with your mouth closed",
		"eat apple with bread",
		"eat spagete with your fingers"
    };


	if (_energy_points >= 25)
	{
		_energy_points -= 25;
		int rand_chl = rand() % chl_len;
		std::cout << "<" << _name << "> challenges <"
				  << target << "> to " << challenge[rand_chl] << " (" << _energy_points << "/" << _max_energy_points << ")" << std::endl;
	} else {
		std::cout << "<" << _name << "> Don't Have Enough Energy Points" << std::endl;
	}
}