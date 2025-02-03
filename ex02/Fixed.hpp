#ifndef FIXED_HPP
	#define FIXED_HPP

	#include <iostream>
	#include <cmath>

	class Fixed
	{
		private:
			int fixed_p;
			static const int bits;
		public:
			Fixed();
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed& obj);
			~Fixed();
			/* 								*/
			Fixed& operator=(const Fixed& obj);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			/* 								*/
			float toFloat( void ) const;
			int toInt( void ) const;
			/*		 The 6 comparison		*/
			bool operator>(const Fixed& obj) const;
			bool operator<(const Fixed& obj) const;
			bool operator>=(const Fixed& obj) const;
			bool operator<=(const Fixed& obj) const;
			bool operator==(const Fixed& obj) const;
			bool operator!=(const Fixed& obj) const;
			/*		 The 4 arithmetic 		*/
			float operator+(const Fixed& obj) const; 
			float operator-(const Fixed& obj) const;
			float operator*(const Fixed& obj) const;
			float operator/(const Fixed& obj) const;
			/*		 The 4 increment	*/
			Fixed& operator++();
			Fixed operator++(int);
	};
	std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif