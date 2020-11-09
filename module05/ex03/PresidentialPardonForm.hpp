#ifndef PRESIDENTIAL_PARDON_HPP
# define PRESIDENTIAL_PARDON_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string const & target);
    PresidentialPardonForm(PresidentialPardonForm const &);
    ~PresidentialPardonForm();
    PresidentialPardonForm&    operator=(PresidentialPardonForm const &);

    void                    execute(Bureaucrat const & executor) const;
};


#endif