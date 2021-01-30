#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon();
public:
    Peon(Peon const &);
    Peon(std::string const & name);
    virtual ~Peon();
    Peon&   operator=(Peon const &);

    virtual void    getPolymorphed() const;
};

#endif