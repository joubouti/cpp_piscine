#include "Form.hpp"

Form::~Form()
{
}

Form::Form(std::string const name, int const sign_grade, int const exec_grade) : _name(name), _sign_grade(sign_grade),
                                                                                 _exec_grade(exec_grade) {
    if (sign_grade < 1 || exec_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || exec_grade > 150)
        throw GradeTooLowException();
    _signed = false;
}

Form::Form(Form const & form) : _name(form._name), _signed(form._signed),
                                _sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {
}


Form&               Form::operator=(Form const & form) {
    _signed = form._signed;
    return *this;
}

std::string const & Form::getName() const {
    return _name;
}

bool                Form::isSigned() const {
    return _signed;
}

int                 Form::getSignGrade() const {
    return _sign_grade;
}

int                 Form::getExecuteGrade() const {
    return _exec_grade;
}

void                Form::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() <= _sign_grade) {
        if (_signed) {
            throw AlreadySigned();
        }
        _signed = true;
    } else {
        throw GradeTooLowException();
    }
}


const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

const char* Form::AlreadySigned::what() const throw() {
    return ("Form is already signed");
}

std::ostream&   operator<<(std::ostream& out, Form const & form) {
    std::string isSigned = form.isSigned() ? "true" : "false";
    return (out << form.getName() << ", signed: " << isSigned << ",  grade required to sign: " << form.getSignGrade()
         << ", grade required to execute: " << form.getExecuteGrade() << std::endl);
}
