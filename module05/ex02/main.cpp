#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {

    ShrubberyCreationForm f1("Home");
    RobotomyRequestForm f2("Home");
    PresidentialPardonForm f3("Home");

    // ShrubberyCreationForm

    Bureaucrat b1("b1", 150);
    b1.signForm(f1); // X
    b1.executeForm(f1); // X
    
    Bureaucrat b2("b2", 140);
    b2.signForm(f1); // O
    b2.executeForm(f1); // X
    
    Bureaucrat b3("b3", 130);
    b3.signForm(f1); // O
    b3.executeForm(f1); // O

    // RobotomyRequestForm
    
    b3.signForm(f2); // X
    b3.executeForm(f2); // X
    
    Bureaucrat b4("b4", 70);
    b4.signForm(f2); // O
    b4.executeForm(f2); // X
    
    Bureaucrat b5("b5", 40);
    b5.signForm(f2); // O
    b5.executeForm(f2); // O

    // PresidentialPardonForm

    b5.signForm(f3); // X
    b5.executeForm(f3); // X
    
    Bureaucrat b6("b6", 20);
    b6.signForm(f3); // O
    b6.executeForm(f3); // X
    
    Bureaucrat b7("b7", 5);
    b7.signForm(f3); // O
    b7.executeForm(f3); // O
    


    // s.execute(bureaucrat);

    return 0;
}