#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
    std::string _name;
    Victim();
public:
    Victim(Victim const & victim);
    Victim(std::string const & name);
    virtual ~Victim();
    Victim&         operator=(Victim const & victim);

    std::string     getName() const;
    virtual void    getPolymorphed() const;
};

std::ostream&   operator<<(std::ostream& out, Victim const & victim);

#endif