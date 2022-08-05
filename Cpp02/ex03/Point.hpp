#ifndef POINT_HPP
#define POINT_HPP
	#include "Fixed.hpp"
	class Point
	{
		private:
			Fixed const x;
			Fixed const y;
		public:
			Point(void);
			Point(const float x, const float y);
			Point(const Point &ref);
			Fixed get_x() const;
			Fixed get_y() const;
			// Point &operator=(const Point &point);
			~Point(void);
	} ;
#endif