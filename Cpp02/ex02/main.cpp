#include <iostream>
#include "Fixed.hpp"
int main( void ) 
{
	Fixed a(4.5f);
	Fixed b(3.5f);
	std::cout << (a / b) << "\n";
	std::cout << b << "\n";
}