#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap() : ClapTrap("N1NJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "<" << name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ft)
{
    *this = ft;
	std::cout << "<" << _name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "<" << _name << ">: Are you god? Am I dead?" << std::endl;
}

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const & ft)
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

void	NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "Bop! FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage !" << std::endl;
    
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "Shwing! FR4G-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage !" << std::endl;

}

void    NinjaTrap::ninjaShoebox(NinjaTrap const & target)
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
				  << target.getName() << "> to " << challenge[rand_chl] << " (" << _energy_points << "/" << _max_energy_points << ")" << std::endl;
	} else {
		std::cout << "<" << _name << "> Don't Have Enough Energy Points" << std::endl;
	}
}

void    NinjaTrap::ninjaShoebox(FragTrap const & target)
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
				  << target.getName() << "> to " << challenge[rand_chl] << " (" << _energy_points << "/" << _max_energy_points << ")" << std::endl;
	} else {
		std::cout << "<" << _name << "> Don't Have Enough Energy Points" << std::endl;
	}
}

void    NinjaTrap::ninjaShoebox(ScavTrap const & target)
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
				  << target.getName() << "> to " << challenge[rand_chl] << " (" << _energy_points << "/" << _max_energy_points << ")" << std::endl;
	} else {
		std::cout << "<" << _name << "> Don't Have Enough Energy Points" << std::endl;
	}
}

