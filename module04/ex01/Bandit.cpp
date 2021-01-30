#include "Bandit.hpp"

Bandit::Bandit() : Enemy(60, "Bandit") {
    std::cout << "Hahaha, Let's mug him!" << std::endl;
}

Bandit::Bandit(Bandit const & bandit) : Enemy(bandit) {
    std::cout << "Hahaha, Let's mug him!" << std::endl;
}

Bandit::Bandit(int hp, std::string const & type) : Enemy(hp, type) {
    std::cout << "Hahaha, Let's mug him!" << std::endl;
}

Bandit::~Bandit() {
    std::cout << "Nooo! I don't wanna die!" << std::endl;
}

Bandit&    Bandit::operator=(Bandit const & bandit) {
    Enemy* enemy = this;
    *enemy = bandit;
    return *this;
}

void    Bandit::takeDamage(int damage) {
    Enemy::takeDamage(damage);
}