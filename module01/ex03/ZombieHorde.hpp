#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
private:
    Zombie* _zombieHorde;
    size_t  _zombieNum;
public:
    ZombieHorde(size_t n, std::string type);
    ~ZombieHorde();
    void    announce() const;
};

#endif