#include "Fixed.hpp"



int main( void ) {
    Fixed a( 42.42f );
    // Fixed b( a );
    // Fixed c;
    // c = b;
    std::cout << a.toFloat() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;
    return 0;
}