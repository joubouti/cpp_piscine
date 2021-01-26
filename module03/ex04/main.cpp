#include "SuperTrap.hpp"

int main() {

    SuperTrap   st1;
    NinjaTrap   nt;
    FragTrap    ft;
    SuperTrap   st2("SUP3R-TP");

    st1 = st2;

    st1.meleeAttack("Skag");
    st2.rangedAttack("Drifter");

    st1.takeDamage(55);
    st1.takeDamage(55);
    st1.beRepaired(90);
    st1.beRepaired(25);

    st2.vaulthunter_dot_exe("Bandit");
    st2.vaulthunter_dot_exe("Bandit");
    st2.ninjaShoebox(nt);
    st2.ninjaShoebox(ft);
    return 0;
}