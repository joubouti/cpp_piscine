#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("presidential pardon", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & s) : Form(s) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm const & s) {
    Form::operator=(s);
    return *this;
}

void                    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);

    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
