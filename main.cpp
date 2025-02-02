#include <iostream>


int main()
{
	int value = 0;
	int shift_times = 8;
	float floit_point= 1234.4321f;

	std::cout << "test =" << 5  *  255 << std::endl;
	std::cout << "test =" << 5 * (1 << 8) << std::endl;
	// value = (int)(floit_point * (1 << shift_times));
	// std::cout << "value = " << value << std::endl;
	// std::cout << "floit_point = " << (float)(value) / (float)(1 << shift_times) << std::endl;
	return 0;
}
