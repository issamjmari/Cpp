#ifndef FIXED_HPP
#define FIXED_HPP
	#include <iostream>
	#include <string>
	class Fixed
	{
		private:
			int	fixed_num;
			static const int fract_bits = 8;
		public:
			Fixed(void);
			Fixed(const Fixed &ref);
			Fixed(const int int_num);
			Fixed(const float float_num);
			float toFloat( void ) const;
			int toInt( void ) const;
			Fixed  &operator = (const Fixed &point);
			~Fixed(void);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	} ;
#endif