#include "Human.hpp"
#include <iostream>


void    Human::meleeAttack(std::string const & target) {
    std::cout << "You have melee attacked " << target << std::endl;
}

void    Human::rangedAttack(std::string const & target) {
    std::cout << "You have ranged attacked " << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target) {
    std::cout << "You have Intimidating Shout " << target << std::endl;
}

void    Human::action(std::string const & action_name, std::string const & target) {
    // static void (*func)(std::string const) = {meleeAttack, rangedAttack, intimidatingShout};
}

