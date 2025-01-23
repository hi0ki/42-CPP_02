#include <iostream>

class base
{
	public:
		int b;
};

class A
{
	public:
		int a;

		A& operator=(base& other)
		{
			return *this;
		}

};

int main()
{
	A a;
	base b;
	a.a = 5;
	a = b;
	std::cout << "a ="<<a.a << std::endl;
	std::cout << "b ="<<b.b << std::endl;
	return 0;
}
