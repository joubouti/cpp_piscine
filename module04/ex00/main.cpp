#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Villager.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    Villager jay("Jay");

    std::cout << robert << jim << joe << jay;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(jay);

    return 0;
}