#ifndef BANDIT_HPP
# define BANDIT_HPP

#include "Enemy.hpp"
#include <iostream>

class Bandit : public Enemy {
public:
    Bandit();
    Bandit(Bandit const &);
    Bandit(int hp, std::string const & type);
    virtual ~Bandit();

    Bandit&    operator=(Bandit const &);

    virtual void    takeDamage(int);
};


#endif