#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(-1, 505416);
	Point c(20, 0);
	Point p(-4000, .011);

   	std::cout << bsp(a, b, c, p) << "\n" ;
}