#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* tom;

    Squad* vlc = new Squad;
    Squad* copy = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    std::cout << "VLC has " << vlc->getCount() << std::endl;
    vlc->getUnit(1)->rangedAttack();
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    *copy = *vlc;
    for (int i = 0; i < copy->getCount(); ++i)
    {
        ISpaceMarine* cur = copy->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    tom = bob->clone();
    tom->battleCry();
    delete vlc;
    delete copy;
    return 0;
}
