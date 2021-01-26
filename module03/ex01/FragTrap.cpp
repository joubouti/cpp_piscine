#include "FragTrap.hpp"

#define VDX_LEN 10

const std::string	vdx[VDX_LEN] = {"Clap-In-The-Box", "Gun Wizard", "Torgue Fiesta", "Pirate Ship Mode",
"One Shot Wonder", "Laser Inferno", "Shhhh... Trap!", "Meat Unicycle", "Funzerker", "Rubber Ducky"};

FragTrap::FragTrap() :  _name("FR4G-TP"), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
                        _level(1), _melee_attack_damage(30), _ranged_attack_damage(20),
                        _armor_damage_reduction(5)
{
    std::srand(time(0));
    std::cout << "<" << _name << ">: Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
                        _level(1), _melee_attack_damage(30), _ranged_attack_damage(20),
                        _armor_damage_reduction(5)
{
    std::srand(time(0));
    std::cout << "<" << name << ">: Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft)
{
    std::srand(time(0));
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
    std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing "
              << _ranged_attack_damage << " points of damage ! " << "That looks like it hurts!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at melee, causing "
              << _melee_attack_damage << " points of damage ! " << "Take that Heyyah!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
    unsigned int actual_damage = amount * pow(0.99, _armor_damage_reduction);

    if (_hit_points < actual_damage)
        _hit_points = 0;
    else
        _hit_points -= actual_damage;

    std::cout << "<" << _name << "> -" << actual_damage << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;

    std::cout << "<" << _name << "> +" << amount << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
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