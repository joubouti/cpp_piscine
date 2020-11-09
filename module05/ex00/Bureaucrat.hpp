#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

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

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream&   operator<<(std::ostream&, Bureaucrat const &);

#endif