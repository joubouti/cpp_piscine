#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant::SuperMutant(SuperMutant const & superMutant) : Enemy(170, "Super Mutant") {
    *this = superMutant;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&    SuperMutant::operator=(SuperMutant const & radScorpion) {
    Enemy* enemy = this;
    *enemy = radScorpion;
    return *this;
}

void    SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}