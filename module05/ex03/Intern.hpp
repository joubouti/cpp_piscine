#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
public:
    Intern();
    Intern(Intern const &);
    ~Intern();
    Intern& operator=(Intern const &);

    Form*   makeForm(std::string const & formName, std::string const & target) const;

    Form*  makeShrubberyCreation(std::string const & target) const ;
    Form*  makeRobotomyRequest(std::string const & target) const ;
    Form*  makePresidentialPardon(std::string const & target) const ;
};


#endif