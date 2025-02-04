#include "Point.hpp"

Point::Point( void ){
	std::cout << "Point: Default constructor called" << std::endl;
}

Point::Point( float nx, float ny ) : x(nx), y(ny) {
	std::cout << "Point: Float constructor called" << std::endl;
}

Point& Point::operator=(const Point& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return *this;
}

// Point::Point(const Point& obj)
// {
// 	*this = obj;
// }

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}