#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
}

Enemy::Enemy(Enemy const & enemy) {
    *this = enemy;
}

Enemy::~Enemy() {
}

Enemy&              Enemy::operator=(Enemy const & enemy) {
    _hp = enemy._hp;
    _type = enemy._type;
    return *this;
}

std::string const & Enemy::getType() const {
    return _type;
}

int                 Enemy::getHP() const {
    return _hp;
}

void                Enemy::takeDamage(int damage) {
    if (damage > 0) {
        _hp -= damage;
        if (_hp < 0)
            _hp = 0;
    }
}
