#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _sign_grade;
    int const           _exec_grade;
    Form();
public:
    Form(std::string const name, int const sign_grade, int const exec_grade);
    Form(Form const &);
    virtual ~Form();

    Form&   operator=(Form const &);

    std::string const & getName() const;
    bool                isSigned() const;
    int                 getSignGrade() const;
    int                 getExecuteGrade() const;
    void                beSigned(Bureaucrat const &);
    virtual void        execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    class AlreadySigned : public std::exception {
        virtual const char* what() const throw();
    };

    class FormIsNotSigned : public std::exception {
        virtual const char* what() const throw();
    };

};

std::ostream&   operator<<(std::ostream&, Form const &);


#endif