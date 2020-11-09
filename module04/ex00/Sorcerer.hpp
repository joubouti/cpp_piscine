#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;
    Sorcerer();
public:
    Sorcerer(Sorcerer const &);
    Sorcerer(std::string const & name, std::string const & title);
    ~Sorcerer();
    Sorcerer&   operator=(Sorcerer const &);

    std::string getName() const;
    std::string getTitle() const;
    void        polymorph(Victim const &) const;
};

std::ostream&   operator<<(std::ostream& out, Sorcerer const & sorcerer);

#endif