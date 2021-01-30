#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    MateriaSource* src = new MateriaSource();
    Ice *tmp_ice = new Ice();
    Cure *tmp_cure = new Cure();
    src->learnMateria(tmp_ice);
    src->learnMateria(tmp_cure);
    delete tmp_ice;
    delete tmp_cure;


    ICharacter* me = new Character("me");

    AMateria* ice;
    ice = src->createMateria("ice");
    me->equip(ice);
    AMateria* cure;
    cure = src->createMateria("cure");
    me->equip(cure);

    ICharacter* bob = new Character("bob");

    std::cout << ice->getType() << " " << ice->getXP() << std::endl;
    me->use(0, *bob);
    me->use(0, *bob);
    me->use(0, *bob);
    std::cout << ice->getType() << " " << ice->getXP() << std::endl;
    std::cout << cure->getType() << " " << cure->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << cure->getType() << " " << cure->getXP() << std::endl;

    std::cout << "-----------" << std::endl;

    me->unequip(1);
    me->use(1, *bob);
    std::cout << cure->getType() << " " << cure->getXP() << std::endl;
    me->equip(cure);
    *cure = *ice;
    me->use(1, *bob);
    std::cout << cure->getType() << " " << cure->getXP() << std::endl;
    
    std::cout << "-----------" << std::endl;

    MateriaSource src2 = *src;
    AMateria* ice1;
    ice1 = src2.createMateria("ice");
    me->equip(ice1);
    me->use(2, *bob);
    std::cout << ice1->getType() << " " << ice1->getXP() << std::endl;


    delete bob;
    delete me;
    delete src;
    return 0;
}
