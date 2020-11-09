#include "ZombieEvent.hpp"

int main( void ) {

    // Stack Zombies

    Zombie zombie1("CREEPER", "Walkers");
    Zombie zombie2("GEEK", "Runners");
    
    zombie1.anounce();
    zombie2.anounce();

    // Heap Zombies

    Zombie* zombie3 = new Zombie("LAMEBRAINS", "Ghouls");
    Zombie* zombie4 = new Zombie("ZOZO", "BrainEater");

    zombie3->anounce();
    zombie4->anounce();

    delete zombie3;
    delete zombie4;

    // Zombie Event

    ZombieEvent zombieEvent;

    zombieEvent.setZombieType("Screamers");

    // newZombie method

    Zombie* firstScreamer = zombieEvent.newZombie("Houston");
    Zombie* secondScreamer = zombieEvent.newZombie("Mullen");

    firstScreamer->anounce();
    secondScreamer->anounce();

    delete firstScreamer;
    delete secondScreamer;

    // randomChump method

    Zombie* thirdScreamer = zombieEvent.randomChump();
    Zombie* fourthScreamer = zombieEvent.randomChump();
    
    thirdScreamer->anounce();
    fourthScreamer->anounce();

    delete thirdScreamer;
    delete fourthScreamer;

    return 0;
}