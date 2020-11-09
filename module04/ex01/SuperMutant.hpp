#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy {
public:
    SuperMutant();
    SuperMutant(SuperMutant const &);
    SuperMutant(int hp, std::string const & type);
    ~SuperMutant();

    SuperMutant&    operator=(SuperMutant const &);

    virtual void    takeDamage(int);
};


#endif