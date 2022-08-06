#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0)
{

}
Point::Point(const float f_x, const float f_y) : x(f_x), y(f_y)
{
}
// Point::Point(const Point &ref)
// {
// 	(*this).x = ref.get_x();
// 	(*this).y = ref.get_y();
// }
// Point &Point::operator=(const Point &point)
// {
// 	(*this) = point;
// 	return (*this);
// }
Fixed Point::get_x(void) const
{
	return (this->x);
}
Fixed Point::get_y(void) const
{
	return (this->y);
}
Point::~Point(void)
{
	
}