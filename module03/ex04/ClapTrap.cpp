#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("CL4P-TP")
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ct)
{
    *this = ct;
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name, uint hit_points, uint max_hit_points, uint energy_points, uint max_energy_points,
        uint level, uint melee_attack_damage, uint ranged_attack_damage, uint armor_damage_reduction) : _name(name), _hit_points(hit_points), _max_hit_points(max_hit_points),
        _energy_points(energy_points), _max_energy_points(max_energy_points), _level(level), _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage), _armor_damage_reduction(armor_damage_reduction) {
    std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called!" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const & ct)
{
	_hit_points = ct._hit_points;
    _max_hit_points = ct._max_hit_points;
    _energy_points = ct._energy_points;
    _max_energy_points = ct._max_energy_points;
    _level = ct._level;
    _name = ct._name;
    _melee_attack_damage = ct._melee_attack_damage;
    _ranged_attack_damage = ct._ranged_attack_damage;
    _armor_damage_reduction = ct._armor_damage_reduction;

    std::cout << "ClapTrap Assignation operator called" << std::endl;
	return (*this);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int actual_damage = amount * pow(0.99, _armor_damage_reduction);

    if (_hit_points < actual_damage)
        _hit_points = 0;
    else
        _hit_points -= actual_damage;

    std::cout << "<" << _name << "> -" << actual_damage << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;

    std::cout << "<" << _name << "> +" << amount << " hit points (" << _hit_points << "/" << _max_hit_points << ")" << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
}