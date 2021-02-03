#include "easyfind.hpp"
#include <vector>
#include <queue>
#include <list>
#include <iostream>

int main(void) {

    // vector

    std::vector<int> v;

    v.push_back(8);
    v.push_back(5);
    v.push_back(2);
    v.push_back(42);

    std::vector<int>::iterator it1 = easyfind(v, 2);
    std::vector<int>::iterator it2 = easyfind(v, 1);
    if (it1 != v.end()) {
        std::cout << "easyfind(v, 2) found: " << *it1 << std::endl;
    }
    if (it2 == v.end()) {
        std::cout << "easyfind(v, 1) not found" << std::endl << std::endl;
    }

    // Deque

    std::deque<int> q;

    q.push_back(4);
    q.push_back(6);
    q.push_back(15);
    q.push_back(2);

    std::deque<int>::iterator it3 = easyfind(q, 4);
    std::deque<int>::iterator it4 = easyfind(q, 11);
    if (it3 != q.end()) {
        std::cout << "easyfind(q, 4) found: " << *it3 << std::endl;
    }
    if (it4 == q.end()) {
        std::cout << "easyfind(q, 11) not found" << std::endl << std::endl;
    }

    // List

    std::list<int> l;

    l.push_back(1337);
    l.push_back(52);
    l.push_back(96);
    l.push_back(36);

    std::list<int>::iterator it5 = easyfind(l, 96);
    std::list<int>::iterator it6 = easyfind(l, 21);
    if (it5 != l.end()) {
        std::cout << "easyfind(l, 96) found: " << *it5 << std::endl;
    }
    if (it6 == l.end()) {
        std::cout << "easyfind(l, 21) not found" << std::endl;
    }
    
    return (0);
} 