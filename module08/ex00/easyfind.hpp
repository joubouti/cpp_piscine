#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iterator>
#include <string>

template <typename T>
typename T::iterator easyfind(T &c, int n) {
    return(std::find(c.begin(), c.end(), n));
}

#endif