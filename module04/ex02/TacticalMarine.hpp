#ifndef TACTICAL_MATINE_HPP
# define TACTICAL_MATINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
private:
    /* data */
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const &);
    ~TacticalMarine();

    TacticalMarine& operator=(TacticalMarine const &);
    ISpaceMarine*   clone() const;
    void            battleCry() const;
    void            rangedAttack() const;
    void            meleeAttack() const;

};


#endif