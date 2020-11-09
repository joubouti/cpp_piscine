#include "Bureaucrat.hpp"

int main () {

    Bureaucrat bureaucrat("Oussama", 51);
    Form form("WARA9A TANA9OL", 50, 20);

    std::cout << form;

    bureaucrat.signForm(form);

    std::cout << form;

    return 0;
}