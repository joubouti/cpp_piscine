#include "iter.hpp"
#include <iostream>

template <typename T>
void doubling(T &i) {
    i *= 2;
}

template <typename T>
void    print(T &i) {
    std::cout << "value: " << i << std::endl;
}


class Awesome {

public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }

private:
int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


int main(void) {
    int arr1[] = {5, 1, 42, 96, 3, 1337};
    
    float arr2[] = {5.5, 14.8, 42.0, 9.6, 8.3, 13.37};

    std::string arr3[] = {"Hello", "World", "I", "am", "Oussama"};
    Awesome tab4[5];

    iter(arr1, 6, print);
    iter(arr2, 6, doubling);
    iter(arr2, 6, print);
    iter(arr3, 5, print);
    iter( tab4, 5, print );

    return (0);
}