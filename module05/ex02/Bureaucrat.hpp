#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &);
    ~Bureaucrat();

    Bureaucrat& operator=(Bureaucrat const &);

    std::string const & getName() const;
    int                 getGrade() const;
    void                gradeIncrease();
    void                gradeDecrease();
    void                signForm(Form& form) const;
    void                executeForm(Form const & form) const;

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

};

std::ostream&   operator<<(std::ostream&, Bureaucrat const &);

#endif