#include "Fixed.hpp"
const int Fixed::fract_bits = 8;
Fixed::Fixed(void) : fixed_num(0) 
{
}
Fixed::Fixed(const int int_num)
{
	this->fixed_num = roundf(int_num * (1 << fract_bits));
}

Fixed::Fixed(const float float_num)
{
	this->fixed_num = roundf(float_num * (1 << fract_bits));
}
Fixed::Fixed(const Fixed &ref)
{
	*this = ref;
}
int Fixed::toInt( void ) const
{
	return (roundf(this->fixed_num / (1 << fract_bits)));
}
Fixed  &Fixed::operator=(const Fixed &point)
{
	this->fixed_num = point.getRawBits();
	return (*this);
}
int  Fixed::operator >(const Fixed &point) const 
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first > second);
}
int	 Fixed::operator <(const Fixed &point) const
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first < second);
}
int  Fixed::operator >=(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first >= second);
}
int  Fixed::operator <=(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first <= second);
}
int  Fixed::operator ==(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first == second);
}
int  Fixed::operator !=(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first != second);
}
float  Fixed::operator+(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first + second);
}
float  Fixed::operator-(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first - second);
}
float  Fixed::operator*(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first * second);
}
float  Fixed::operator/(const Fixed &point)
{
	float first = (float) this->getRawBits() / (float) (1 << 8);
	float second = (float) point.getRawBits() / (float) (1 << 8);
	return (first / second);
}
Fixed	Fixed::operator++ ()
{
	this->fixed_num += roundf(0.00390625 * (1 << 8));
	return (*this);
}
Fixed	Fixed::operator++ (int stuff)
{
	Fixed temp;
	temp = *this;
	(*this).fixed_num += roundf(0.00390625 * (1 << 8));
	return temp;
}
Fixed	Fixed::operator-- ()
{
	this->fixed_num -= roundf(0.00390625 * (1 << 8));
	return (*this);
}
Fixed	Fixed::operator-- (int stuff)
{
	Fixed temp;
	temp = *this;
	(*this).fixed_num -= roundf(0.00390625 * (1 << 8));
	return temp;
}
Fixed::~Fixed(void){}
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return a;
	else
		return b;
}
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return a;
	else
		return b;
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return a;
	else
		return b;
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return a;
	else
		return b;
}
std::ostream& operator<<(std::ostream &os, const Fixed &ref)
{
	
	std::cout << (float) (ref.getRawBits()) / (float)(1 << 8);
	return (os);
}
int Fixed::getRawBits( void ) const
{
	return (this->fixed_num);
}