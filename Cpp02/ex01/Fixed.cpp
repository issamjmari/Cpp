#include "Fixed.hpp"
const int Fixed::fract_bits = 8;

Fixed::Fixed(void) : fixed_num(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called\n";
	this->fixed_num = roundf(int_num * (1 << fract_bits));
}

Fixed::Fixed(const float float_num)
{
	std::cout << "Float constructor called\n";
	this->fixed_num = roundf(float_num * (1 << fract_bits));
}
int		Fixed::getRawBits(void) const
{
	return (this->fixed_num);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_num = raw;
}
Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	this->fixed_num = ref.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &point)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_num = point.getRawBits();
	return (*this);
}

int Fixed::toInt( void ) const
{
	return (roundf(this->fixed_num / (1 << fract_bits)));
}

float Fixed::toFloat( void ) const
{
	return ((float) ((float) this->fixed_num / (float) (1 << fract_bits)));
}

std::ostream& operator<<(std::ostream &os, const Fixed &ref)
{
	std::cout << ref.toFloat();
	return (os);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
