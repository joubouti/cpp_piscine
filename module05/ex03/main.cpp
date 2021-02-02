#include "Intern.hpp"

int main () {

    Intern someRandomIntern;

    Form* sc;
    Form* rr;
    Form* pp;
    Form* random;

    sc = someRandomIntern.makeForm("shrubbery creation", "Bender");
    rr = someRandomIntern.makeForm("robotomy request", "Home");
    pp = someRandomIntern.makeForm("presidential pardon", "Bender");
    random = someRandomIntern.makeForm("random form", "Hello");
    
    if (sc) {
        std::cout << *sc;
    }
    if (rr) {
        std::cout << *rr;
    }
    if (pp) {
        std::cout << *pp;
    }
    if (random) {
        std::cout << *random;
    }

    return 0;
}