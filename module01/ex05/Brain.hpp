#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
class Brain
{
private:
    unsigned int    _weight;
    unsigned int    _iq;
public:
    Brain();
    ~Brain();
    std::string     identify() const;
    void            setWeight(unsigned int weight);
    void            setIQ(unsigned int iq);
    unsigned int    getWeight() const;
    unsigned int    getIQ() const;
};


#endif