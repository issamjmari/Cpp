#ifndef FIXED_HPP
#define FIXED_HPP
	#include <iostream>
	#include <string>
	#include <cmath>
	class Fixed
	{
		private:
			int	fixed_num;
			static const int fract_bits;
		public:
			Fixed(void);
			Fixed(const Fixed &ref);
			Fixed(const int int_num);
			Fixed(const float float_num);
			float toFloat( void ) const;
			int toInt( void ) const;
			Fixed  &operator=(const Fixed &point);
			int  operator >(const Fixed &point) const;
			int	 operator <(const Fixed &point) const;
			int  operator >=(const Fixed &point);
			int  operator <=(const Fixed &point);
			int  operator ==(const Fixed &point);
			int  operator !=(const Fixed &point);
			Fixed operator+(const Fixed &point);
			Fixed operator-(const Fixed &point);
			Fixed operator*(const Fixed &point);
			Fixed operator/(const Fixed &point);
			Fixed operator++ ();
			Fixed operator++ (int);
			Fixed operator-- ();
			Fixed operator-- (int);
			~Fixed(void);
			static Fixed &min(Fixed &a, Fixed &b);
			const static Fixed &min(const Fixed &a, const Fixed &b);
			const static Fixed &max(const Fixed &a, const Fixed &b);
			static Fixed &max(Fixed &a, Fixed &b);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	} ;
	std::ostream& operator<<(std::ostream &os, const Fixed &ref);
#endif