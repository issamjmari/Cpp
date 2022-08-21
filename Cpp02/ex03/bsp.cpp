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
   std::cout << "ABC IS " << A << std::endl;
   float A1 = calculate(point, b, c);
   std::cout << "BPC IS " << A1 << std::endl;
   float A2 = calculate(point, c, a);
   std::cout << "PCA IS " << A2 << std::endl;
   float A3 = calculate(b, a, point);
   std::cout << "BAP IS " << A3 << std::endl;
   std::cout << "ALL " << A1 + A2 + A3 << std::endl;
   if(A1 == 0 || A2 == 0 || A3 == 0)
      return 0;
   return (A == A1 + A2 + A3);
   return 0;
}