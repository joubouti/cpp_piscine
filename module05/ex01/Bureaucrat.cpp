#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b) {
    *this = b;
}

Bureaucrat::~Bureaucrat() {
}


Bureaucrat&         Bureaucrat::operator=(Bureaucrat const & b) {
    this->_grade = b._grade;
    return *this;
}

std::string const & Bureaucrat::getName() const {
    return _name;
}

int                 Bureaucrat::getGrade() const {
    return _grade;
}

void                Bureaucrat::gradeIncrease() {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void                Bureaucrat::gradeDecrease() {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;

}

std::ostream&   operator<<(std::ostream& out, Bureaucrat const & bureaucrat) {
    return (out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl);
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high (highest possible is 1)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low (lowest possible is 150)");
}

void        Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}
// void        Bureaucrat::signForm(Form const & form) const {
//     if (_grade >= form.getSignGrade()) {
//         if (form.isSigned()) {
//             throw AlreadySigned();
//         }
//     } else {
//         throw GradeTooLowException();
//     }
// }