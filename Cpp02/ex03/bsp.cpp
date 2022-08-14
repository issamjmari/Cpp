#include "Point.hpp"
#include "Fixed.hpp"

float	calculate(Point const &A, Point const &B, Point const &C)
{
   Fixed last(((B.get_x() - A.get_x()) * (C.get_y() - A.get_y())) - ((B.get_y() - A.get_y()) * (C.get_x() - A.get_x())));
   return abs(last.toFloat() / 2.0f);
}
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	float A = calculate(a, b, c);
   float A1 = calculate(point, b, c);
   float A2 = calculate(point, c, a);
   float A3 = calculate(b, a, point);
   if(A1 == 0 || A2 == 0 || A3 == 0)
      return 0;
   return (A == A1 + A2 + A3);
   return 0;
}

int main()
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	Point p(10.0f, 15.0f);
   std::cout << bsp(a, b, c, p) << "\n";
}