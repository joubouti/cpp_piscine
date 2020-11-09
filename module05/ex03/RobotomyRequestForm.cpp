#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("roboto my request", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & s) : Form(s) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm const & s) {
    Form::operator=(s);
    return *this;
}

void                    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    int r = rand() % 2;

    std::cout << "Prprprprpr..." << std::endl;
    if (r)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "failed to robotomized " << _target << std::endl;
}
