#include "ZombieEvent.hpp"
#include <iostream>

int const MAX_NAMES = 10;

std::string names[MAX_NAMES] = {"Josiah", "Faulkner", "Maxim", "Ochoa", "Alfie",
                        "Best", "Euan", "York", "Angus", "Fowler"};

ZombieEvent::ZombieEvent() {
    std::cout << "ZombieEvent Created" << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "ZombieEvent Destroyed" << std::endl;
}

void    ZombieEvent::setZombieType(std::string type) {
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
    Zombie* zombie = new Zombie(name, _type);
    return zombie;
}

Zombie* ZombieEvent::randomChump() const {
    int r = std::rand() % MAX_NAMES;
    Zombie* zombie = newZombie(names[r]);
    zombie->announce();
    return zombie;
}
