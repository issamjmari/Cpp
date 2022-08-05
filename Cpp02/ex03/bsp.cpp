#include "Point.hpp"
#include "Fixed.hpp"

float	calculate(Point const first, Point const second, Point const third)
{
	return abs((first.get_x() * (second.get_y() - third.get_y()) + second.get_x() * (third.get_y() - first.get_y()) + third.get_x() * (first.get_y() - second.get_y())) /2.0);
}
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	float A = calculate(a, b, c);
  
   /* Calculate area of triangle PBC */ 
   float A1 = calculate(point, b, c);
  
   /* Calculate area of triangle PAC */ 
   float A2 = calculate(a, point, c);
  
   /* Calculate area of triangle PAB */  
   float A3 = calculate(a, b, point);
   std::cout << A << " " << A1 << " " << A2 << " " << A3 << std::endl;
   return (A == A1 + A2 + A3);
}

int main()
{
	Point a(0.544f, 0.366f);
	Point b(10.11f, 30.22f);
	Point c(20.97f, 0.311f);
	Point p(5.6444f, 2.6499);
	std::cout << bsp(a, b, c, p);
}