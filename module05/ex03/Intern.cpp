#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const &) {
}

Intern::~Intern() {
}

Intern& Intern::operator=(Intern const &) {
    return *this;
}

Form*  Intern::makeShrubberyCreation(std::string const & target) const {
    return new ShrubberyCreationForm(target);
}

Form*  Intern::makeRobotomyRequest(std::string const & target) const {
    return new RobotomyRequestForm(target);
}

Form*  Intern::makePresidentialPardon(std::string const & target) const {
    return new PresidentialPardonForm(target);
}

Form*   Intern::makeForm(std::string const & formName, std::string const & target) const {
    std::string const form_keys[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    // Form* (Intern::*form_v)(const std::string &) = &makeShrubberyCreation;
    // typedef Form* (Intern::*MakeForm)(std::string const &str) const ;
    Form* (Intern::*form_values[3])(std::string const &str) const = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};


    for (int i = 0; i < 3; i++) {
        if (form_keys[i] == formName) {
            // return *(form_v)(target);
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*(form_values[i]))(target);
        }
    }
    std::cout << "Form Not Found" << std::endl;
    
    return NULL;
}

