
#ifndef VILLAGER_HPP
# define VILLAGER_HPP

#include "Victim.hpp"

class Villager : public Victim
{
private:
    Villager();
public:
    Villager(Villager const &);
    Villager(std::string const & name);
    virtual ~Villager();
    Villager&   operator=(Villager const &);

    virtual void    getPolymorphed() const;
};

#endif