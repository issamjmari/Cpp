#include <iostream>
#include "Fixed.hpp"
int main( void ) 
{
	Fixed a(10);
	Fixed b(64.3f);
	Fixed c(9);
	Fixed d(6.55f);
	std::cout << Fixed::min(a, b) << "\n";
	std::cout << Fixed::min(c, d) << "\n";
}