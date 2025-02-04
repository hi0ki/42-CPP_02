#ifndef POINT_HPP
	#define POINT_HPP

	#include "Fixed.hpp"

	class Point
	{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point( float nx, float ny );
		Point(Point& obj);
		Point& operator=(const Point& obj);
		void print();
		~Point();

	};
	
#endif