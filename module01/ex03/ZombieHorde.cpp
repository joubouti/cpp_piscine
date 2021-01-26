#include "ZombieHorde.hpp"
#include <iostream>

int const MAX_NAMES = 10;

std::string names[MAX_NAMES] = {"Josiah", "Faulkner", "Maxim", "Ochoa", "Alfie",
                        "Best", "Euan", "York", "Angus", "Fowler"};

ZombieHorde::ZombieHorde(size_t n) : _zombieNum(n), _type("Zombie") {
    std::cout << "ZombieHorde Created With "<< n << " Zombies" << std::endl;
    _zombieHorde = new Zombie[n];
    for (size_t i = 0; i < n; i++) {
        int r = std::rand() % MAX_NAMES;
        _zombieHorde[i].setName(names[r]);
        _zombieHorde[i].setType(_type);
    }
}

ZombieHorde::ZombieHorde(size_t n, std::string type) : _zombieNum(n), _type(type) {
    std::cout << "ZombieHorde Created with size of " << n << std::endl;
    _zombieHorde = new Zombie[n];
    for (size_t i = 0; i < n; i++) {
        int r = std::rand() % MAX_NAMES;
        _zombieHorde[i].setName(names[r]);
        _zombieHorde[i].setType(_type);
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] _zombieHorde;
    std::cout << "ZombieHorde Destroyed" << std::endl;
}

void    ZombieHorde::announce() const {
    for (size_t i = 0; i < _zombieNum; i++) {
        _zombieHorde[i].announce();
    }
}
