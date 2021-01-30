
#include "Villager.hpp"

Villager::Villager() {
}

Villager::Villager(std::string const & name) : Victim(name) {
    std::cout << "The villager " << _name << " just appeared!" << std::endl;
}

Villager::Villager(Villager const & villager) : Victim(villager) {
    std::cout << "The villager " << _name << " just appeared!" << std::endl;
}

Villager::~Villager() {
    std::cout << "The villager " << _name << " just died!" << std::endl;
}

Villager&   Villager::operator=(Villager const & villager) {
    _name = villager._name;
    return *this;
}

void    Villager::getPolymorphed() const {
    std::cout << _name << " has been turned into a pig!" << std::endl;
}