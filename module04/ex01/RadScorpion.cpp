#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & radScorpion) : Enemy(radScorpion) {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type) {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&    RadScorpion::operator=(RadScorpion const & radScorpion) {
    Enemy* enemy = this;
    *enemy = radScorpion;
    return *this;
}

void    RadScorpion::takeDamage(int damage) {
    Enemy::takeDamage(damage);
}