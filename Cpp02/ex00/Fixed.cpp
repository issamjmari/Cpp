#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_num(0)
{
	std::cout << "Default constructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_num);
}
void	Fixed::setRawBits(int const raw)
{
	fixed_num = raw;
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

Fixed& Fixed::operator=(const Fixed &point)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_num = point.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
