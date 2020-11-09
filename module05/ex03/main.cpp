#include "Intern.hpp"

int main () {

    Intern someRandomIntern;

    Form* rrf;

    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    
    if (rrf) {
        std::cout << *rrf;
    }

    return 0;
}