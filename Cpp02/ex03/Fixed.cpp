#include "Fixed.hpp"
const int Fixed::fract_bits = 8;
Fixed::Fixed(void) : fixed_num(0) 
{
}

Fixed::~Fixed(void){};
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
	// std::cout << "COPY\n";
	this->fixed_num = ref.getRawBits();
}
int Fixed::toInt( void ) const
{
	return (roundf(this->fixed_num / (1 << fract_bits)));
}
float Fixed::toFloat( void ) const
{
	return ((float) ((float) this->fixed_num / (float) (1 << fract_bits)));
}
Fixed  &Fixed::operator=(const Fixed &point)
{
	this->fixed_num = point.getRawBits();
	return (*this);
}
int  Fixed::operator >(const Fixed &point) const 
{
	return (this->getRawBits() > point.getRawBits());
}
int	 Fixed::operator <(const Fixed &point) const
{
	return (this->getRawBits() < point.getRawBits());
}
int  Fixed::operator >=(const Fixed &point)
{
	return (this->getRawBits() >= point.getRawBits());
}
int  Fixed::operator <=(const Fixed &point)
{
	return (this->getRawBits() <= point.getRawBits());
}
int  Fixed::operator ==(const Fixed &point)
{
	return (this->getRawBits() == point.getRawBits());
}
int  Fixed::operator !=(const Fixed &point)
{
	return (this->getRawBits() != point.getRawBits());
}
Fixed	Fixed::operator+(const Fixed &point)
{
	Fixed temp;
	temp.fixed_num = ((this->fixed_num + point.getRawBits()));
	return (temp);
}
Fixed	Fixed::operator-(const Fixed &point)
{
	Fixed temp;
	temp.fixed_num = ((this->fixed_num - point.getRawBits()));
	return (temp);
}
Fixed	Fixed::operator*(const Fixed &point)
{
	Fixed temp;
	temp.fixed_num = ((this->fixed_num * point.getRawBits()) / (1 << 8));
	return (temp);
}
Fixed	Fixed::operator/(const Fixed &point)
{
	Fixed temp;
	temp.fixed_num = ((this->fixed_num * (1 << 8)) / (point.getRawBits()));
	return (temp);
}
Fixed	Fixed::operator++ ()
{
	this->fixed_num += (0.00390625 * (1 << 8));
	return (*this);
}
Fixed	Fixed::operator++ (int stuff)
{
	(void) stuff;
	Fixed temp;
	temp = *this;
	(*this).fixed_num += (0.00390625 * (1 << 8));
	return temp;
}
Fixed	Fixed::operator-- ()
{
	this->fixed_num -= (0.00390625 * (1 << 8));
	return (*this);
}
Fixed	Fixed::operator-- (int stuff)
{
	(void) stuff;
	Fixed temp;
	temp = *this;
	(*this).fixed_num -= (0.00390625 * (1 << 8));
	return temp;
}

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
	std::cout << ref.toFloat();
	return (os);
}
int Fixed::getRawBits( void ) const
{
	return (this->fixed_num);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_num = raw;
}