#include "FragTrap.hpp"

#define VDX_LEN 10

const std::string	vdx[VDX_LEN] = {"Clap-In-The-Box", "Gun Wizard", "Torgue Fiesta", "Pirate Ship Mode",
"One Shot Wonder", "Laser Inferno", "Shhhh... Trap!", "Meat Unicycle", "Funzerker", "Rubber Ducky"};

FragTrap::FragTrap() : ClapTrap("FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 3)
{
    std::cout << "<" << _name << ">: Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 3)
{
    std::cout << "<" << name << ">: Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft)
{
    *this = ft;
	std::cout << "<" << _name << ">: Let's get this party started!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "<" << _name << ">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const & ft)
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

void	FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "That looks like it hurts! FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage !" << std::endl;
    
}

void	FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "Take that Heyyah! FR4G-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage !" << std::endl;

}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energy_points >= 25)
	{
		_energy_points -= 25;
		int rand_vdx = rand() % VDX_LEN;
		std::cout << "<" << _name << "> using VaultHunter.EXE <" << vdx[rand_vdx] << "> at <"
				  << target << "> (" << _energy_points << "/" << _max_energy_points << ")" << std::endl;
	} else {
		std::cout << "<" << _name << "> Don't Have Enough Energy Points" << std::endl;
	}
}