#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(int const & i) {
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = i << _fractional_bits;
}

Fixed::Fixed(float const & f) {
    std::cout << "Float constructor called" << std::endl;
    _fixed_point = roundf(f * (1 << _fractional_bits));
}

Fixed&  Fixed::operator=(Fixed const & fixed) {
    std::cout << "Assignation operator called" << std::endl;
    _fixed_point = fixed._fixed_point;
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

int     Fixed::toInt() const {
    return (_fixed_point >> _fractional_bits);
}

float   Fixed::toFloat() const {
    return ((float)_fixed_point / (1 << _fractional_bits));
}

std::ostream&   operator<<(std::ostream& out, Fixed const & fixed) {
    return out << fixed.toFloat();
}