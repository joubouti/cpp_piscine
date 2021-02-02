#include "Bureaucrat.hpp"

int main () {

    Bureaucrat bureaucrat("Yassin", 51);
    Bureaucrat bureaucrat2("Oussama", 20);
    Form form("WARA9A TANA9OL", 50, 20);

    std::cout << form;

    bureaucrat.signForm(form);

    std::cout << form;

    bureaucrat2.signForm(form);

    std::cout << form;

    return 0;
}