#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy {
public:
    RadScorpion();
    RadScorpion(RadScorpion const &);
    RadScorpion(int hp, std::string const & type);
    virtual ~RadScorpion();

    RadScorpion&    operator=(RadScorpion const &);

    virtual void    takeDamage(int);
};


#endif