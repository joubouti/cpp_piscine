#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
    int                 _fixed_point;
    static int const    _fractional_bits = 8;
public:
    Fixed();
    Fixed(Fixed const & fixed);
    ~Fixed();
    Fixed&  operator=(Fixed const & fixed);
    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
};


#endif