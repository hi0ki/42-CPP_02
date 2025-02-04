#include "Fixed.hpp"
#include "Point.hpp"

void Point::print()
{
    std::cout << this->x << " | " << this->y << std::endl;
}
int main( void ) {
    Point b(1, 3);
    Point *a;

    a = &b;
    // a->print();
    // b.print();
    return 0;
}