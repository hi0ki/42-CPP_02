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
	
	bool bsp( Point const a, Point const b, Point const c, Point const point);
	
#endif