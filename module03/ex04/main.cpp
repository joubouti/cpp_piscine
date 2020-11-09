#include "SuperTrap.hpp"

int main() {

    SuperTrap ft1;
    SuperTrap ft2("SUP3R-TP");

    ft1 = ft2;

    ft1.meleeAttack("Skag");
    ft2.rangedAttack("Drifter");

    ft1.takeDamage(55);
    ft1.takeDamage(55);
    ft1.beRepaired(90);
    ft1.beRepaired(25);

    ft2.vaulthunter_dot_exe("Bandit");
    ft2.vaulthunter_dot_exe("Bandit");
    ft2.vaulthunter_dot_exe("Bandit");
    ft2.vaulthunter_dot_exe("Bandit");
    ft2.vaulthunter_dot_exe("Bandit");
    return 0;
}