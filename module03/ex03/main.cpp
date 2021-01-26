#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {

    ClapTrap ct;
    FragTrap ft;
    ScavTrap st;
    NinjaTrap nt;

    nt.meleeAttack(ft.getName());
    nt.rangedAttack(st.getName());

    nt.takeDamage(40);
    nt.takeDamage(40);
    nt.beRepaired(40);
    nt.beRepaired(40);

    nt.ninjaShoebox(ct);
    nt.ninjaShoebox(ft);
    nt.ninjaShoebox(st);
    nt.ninjaShoebox(nt);

    return 0;
}