#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie {
private:
    std::string _name;
    std::string _type;
public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();
    void        setName(std::string name);
    void        setType(std::string type);
    void        announce() const;
    std::string getName() const;
    std::string getType() const;
};


#endif