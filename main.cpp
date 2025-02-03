#include <iostream>

class Fixed {
private:
    int value;

public:
    Fixed(int v) : value(v) {}

    int getValue() const { return value; }

    // Friend function for int + Fixed (or Fixed + int)
    friend Fixed operator+(int lhs, const Fixed& rhs); // Correct declaration

};

// Definition of the friend function (outside the class)
Fixed operator+(int lhs, const Fixed& rhs) {
    return Fixed(lhs + rhs.value); // Access value directly since it's a friend
}



std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.getValue();
    return os;
}

int main() {
    Fixed a(10);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) )

    Fixed result1 = num + a;  // Correct usage
    std::cout << result1 << std::endl; // Output: 15
    return 0;
}