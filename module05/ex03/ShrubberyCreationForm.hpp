#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
private:
    std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string const & target);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm&  operator=(ShrubberyCreationForm const &);

    void                    execute(Bureaucrat const & executor) const;
};


#endif