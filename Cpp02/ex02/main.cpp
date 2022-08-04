#include <iostream>
#include "Fixed.hpp"
int main( void ) 
{
	Fixed  a(2);
	Fixed  b(6.54f);
	Fixed f = a * b;
	std::cout << "f is " << f;
}