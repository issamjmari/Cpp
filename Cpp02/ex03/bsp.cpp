#include "Point.hpp"
#include "Fixed.hpp"

float	calculate(Point const &A, Point const &B, Point const &C)
{
   float ABC = (((B.get_x().toFloat() - A.get_x().toFloat()) * (C.get_y().toFloat() - A.get_y().toFloat()))\
 - ((B.get_y().toFloat() - A.get_y().toFloat()) * (C.get_x().toFloat() - A.get_x().toFloat())));
   ABC = abs(ABC / 2);
   return ABC;
}
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
   
	float A = calculate(a, point, c);
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
	Point a(0.555f, 1.0f);
	Point b(20.999f, 0.0f);
	Point c(10.0f, 30.0f);
	Point p(10.0f, 15.788f);
   std::cout << bsp(a, b, c, p) << "\n";
}