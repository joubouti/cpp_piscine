#include "mutantstack.hpp"
#include <iostream>


void    print(int i) {
    std::cout << "value: " << i << std::endl;
}

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;
    std::cout << mstack.top() << std::endl << std::endl;

    // 

    MutantStack<int> mstack2(mstack);

    mstack2.push(3);
    mstack2.push(12);
    mstack2.push(737);
    mstack2.push(0);

    MutantStack<int> mstack3;

    mstack3 = mstack2;
    
    MutantStack<int>::iterator it = mstack3.begin();
    MutantStack<int>::iterator ite = mstack3.end();
    std::for_each(it, ite, print);
    std::cout << std::endl;
    ++it;
    std::for_each(it, ite, print);
    std::cout << std::endl;
    --ite;
    std::for_each(it, ite, print);
    return 0;
}