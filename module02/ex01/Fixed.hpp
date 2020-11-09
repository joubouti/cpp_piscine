#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int                 _fixed_point;
    static int const    _fractional_bits = 8;
public:
    Fixed();
    Fixed(Fixed const & fixed);
    Fixed(int const & i);
    Fixed(float const & i);
    ~Fixed();

    Fixed&  operator=(Fixed const & fixed);

    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
    int     toInt() const;
    float   toFloat() const;
};

std::ostream    &operator<<(std::ostream& out, Fixed const & fixed);

#endif