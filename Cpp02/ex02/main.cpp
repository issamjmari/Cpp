#include <iostream>
#include "Fixed.hpp"
int main( void ) 
{
	Fixed a(10.5977f);
	Fixed b(64.3f);
	const Fixed c(9);
	const Fixed d(6.55f);
	std::cout << Fixed::min(a, b) << "\n";
	std::cout << Fixed::max(c, d) << "\n";
}