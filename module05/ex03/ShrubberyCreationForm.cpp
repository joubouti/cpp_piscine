#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("shrubbery", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & s) : Form(s) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm const & s) {
    Form::operator=(s);
    return *this;
}

void                    ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::ofstream file(_target + "_shrubbery");
    file <<
            "         * \n"
            "        /|\\\n"
            "       /*|O\\\n"
            "      /*/|\\*\\\n"
            "     /X/O|*\\X\\\n"
            "    /*/X/|\\X\\*\\\n"
            "   /O/*/X|*\\O\\X\\\n"
            "  /*/O/X/|\\X\\O\\*\\\n"
            " /X/O/*/X|O\\X\\*\\O\\\n"
            "/O/X/*/O/|\\X\\*\\O\\X\\\n"
            "        |X|      \n"
            "        |X|    ";
    file.close();
}
