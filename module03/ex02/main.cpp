#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    FragTrap ft1;
    FragTrap ft2("CL4P-TP");

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

    ScavTrap st1;
    ScavTrap st2("SC4V-TP");

    st1 = st2;

    st1.meleeAttack("Skag");
    st2.rangedAttack("Drifter");

    st1.takeDamage(55);
    st1.takeDamage(55);
    st1.beRepaired(90);
    st1.beRepaired(25);

    st2.challengeNewcomer("Bandit");
    st2.challengeNewcomer("Bandit");
    st2.challengeNewcomer("Bandit");

    return 0;
}