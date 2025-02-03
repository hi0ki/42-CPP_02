#include <iostream>
#include <cmath>

int main() {
    float num1 = 3.44;
    float num2 = 3.5;
    float num3 = 3.99;
    float num4 = -2.1;
    float num5 = -2.5;
    float num6 = -2.9;
    float num7 = 0.000004;
	
    // std::cout << num7 << std::endl; // Output: 3
    std::cout << "round(3.14) = " << roundf(num1) << std::endl; // Output: 3
    // std::cout << "round(3.5) = " << roundf(num2) << std::endl; // Output: 4
    // std::cout << "round(3.99) = " << roundf(num3) << std::endl; // Output: 4
    // std::cout << "round(-2.1) = " << roundf(num4) << std::endl; // Output: -2
    // std::cout << "round(-2.5) = " << roundf(num5) << std::endl; // Output: -3
    // std::cout << "round(-2.9) = " << roundf(num6) << std::endl; // Output: -3

    // // Comparison with floor() and ceil()
    // std::cout << "floor(3.14) = " << floorf(num1) << std::endl; // Output: 3
    // std::cout << "ceil(3.14) = " << ceilf(num1) << std::endl;  // Output: 4
    // std::cout << "floor(3.5) = " << floorf(num2) << std::endl; // Output: 3
    // std::cout << "ceil(3.5) = " << ceilf(num2) << std::endl;  // Output: 4
    // std::cout << "floor(-2.1) = " << floorf(num4) << std::endl; // Output: -3
    // std::cout << "ceil(-2.1) = " << ceilf(num4) << std::endl;  // Output: -2
    // std::cout << "floor(-2.5) = " << floorf(num5) << std::endl; // Output: -3
    // std::cout << "ceil(-2.5) = " << ceilf(num5) << std::endl;  // Output: -2

    return 0;
}
