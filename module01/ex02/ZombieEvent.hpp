#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
#include <string>
#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string _type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name) const;
    void    randomChump() const;
};

#endif