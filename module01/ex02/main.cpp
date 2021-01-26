#include "ZombieEvent.hpp"

int main( void ) {

    // Stack Zombies

    Zombie zombie1("CREEPER", "Walkers");
    Zombie zombie2("GEEK", "Runners");
    
    zombie1.announce();
    zombie2.announce();

    // Heap Zombies

    Zombie* zombie3 = new Zombie("LAMEBRAINS", "Ghouls");
    Zombie* zombie4 = new Zombie("ZOZO", "BrainEater");

    zombie3->announce();
    zombie4->announce();

    delete zombie3;
    delete zombie4;

    // Zombie Event

    ZombieEvent zombieEvent;

    zombieEvent.setZombieType("Screamers");

    // newZombie method

    Zombie* firstScreamer = zombieEvent.newZombie("Houston");
    Zombie* secondScreamer = zombieEvent.newZombie("Mullen");

    firstScreamer->announce();
    secondScreamer->announce();

    delete firstScreamer;
    delete secondScreamer;

    // randomChump method

    zombieEvent.randomChump();
    zombieEvent.randomChump();

    return 0;
}