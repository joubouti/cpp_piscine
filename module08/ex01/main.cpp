#include "span.hpp"
#include <iostream>


void    print(int i) {
    std::cout << "value: " << i << std::endl;
}

int main()
{
    Span sp = Span(10001);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    sp.addNumber(5);

    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //
    srand(time(NULL));
    std::vector<int> vec(10001);
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        *it = rand() % 133742;
    }
    try
    {
        sp.addNumber(vec.begin(), vec.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}