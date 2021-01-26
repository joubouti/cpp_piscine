#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap() : ClapTrap("N1NJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "<" << _name << ">: Recompiling my combat code!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "<" << name << ">: Recompiling my combat code!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ft)
{
    *this = ft;
	std::cout << "<" << _name << ">: Recompiling my combat code!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "<" << _name << ">: I'll stop talking when I'm dead!" << std::endl;
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
    std::cout << "N1NJ4-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage ! WOW! I hit 'em!" << std::endl;
    
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "N1NJ4-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage ! Heyyah!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on NinjaTrap <" << target.getName() << ">: Give us open ports for remote access or give us death!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on ClapTrap <" << target.getName() << ">: Ha ha ha! Fall before your robot overlord!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on FragTrap <" << target.getName() << ">: I am rubber, and you are so dead!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on ScavTrap <" << target.getName() << ">: Let me teach you the ways of magic!" << std::endl;
}