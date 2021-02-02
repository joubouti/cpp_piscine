#include "Bureaucrat.hpp"

int main () {

    try
    {
        Bureaucrat bureaucrat("Oussama", 2);
        bureaucrat.gradeIncrease();
        std::cout << bureaucrat;
        bureaucrat.gradeIncrease();
        std::cout << bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Oussama", 156);
        std::cout << bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Oussama", 0);
        std::cout << bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Oussama", 149);
        bureaucrat.gradeDecrease();
        std::cout << bureaucrat;
        bureaucrat.gradeDecrease();
        std::cout << bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}