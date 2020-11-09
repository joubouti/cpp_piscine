#ifndef ROBOTO_MYREQUEST_HPP
# define ROBOTO_MYREQUEST_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string const & target);
    RobotomyRequestForm(RobotomyRequestForm const &);
    ~RobotomyRequestForm();
    RobotomyRequestForm&    operator=(RobotomyRequestForm const &);

    void                    execute(Bureaucrat const & executor) const;
};


#endif