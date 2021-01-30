#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Bandit.hpp"
#include "Sword.hpp"

int main()
{
    Character* me = new Character("Oussama");
    std::cout << *me;

    Enemy* mutant = new SuperMutant();
    std::cout << mutant->getType() << " " << mutant->getHP() << " HP" << std::endl;
    Enemy* scorpion = new RadScorpion();
    std::cout << scorpion->getType() << " " << scorpion->getHP() << " HP" << std::endl;

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pf);
    std::cout << *me;
    me->attack(scorpion);
    std::cout << *me;
    std::cout << scorpion->getType() << " " << scorpion->getHP() << " HP" << std::endl;
    me->attack(mutant);
    std::cout << *me;
    std::cout << mutant->getType() << " " << mutant->getHP() << " HP" << std::endl;

    me->equip(pr);
    std::cout << *me;
    me->attack(mutant);
    std::cout << *me;
    std::cout << mutant->getType() << " " << mutant->getHP() << " HP" << std::endl;
    me->attack(scorpion);
    std::cout << *me;
    std::cout << scorpion->getType() << " " << scorpion->getHP() << " HP" << std::endl;
    me->attack(scorpion);
    // std::cout << *me;
    // std::cout << scorpion->getType() << " " << scorpion->getHP() << " HP" << std::endl;


    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;

    Enemy* bandit = new Bandit();
    AWeapon* sword = new Sword();

    me->equip(sword);
    std::cout << *me;
    me->attack(bandit);

    delete mutant;
    delete pr;
    delete pf;
    delete sword;
    return 0;
}
