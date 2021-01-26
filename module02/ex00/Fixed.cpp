#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed&  Fixed::operator=(Fixed const & fixed) {
    std::cout << "Assignation operator called" << std::endl;
    _fixed_point = fixed.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called with value of " << raw << std::endl;
    _fixed_point = raw;
}
