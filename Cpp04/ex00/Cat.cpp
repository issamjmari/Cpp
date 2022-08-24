#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat was created\n";
}
Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy was called\n";
	this->type = ref.type;
}
const std::string &Cat::getType(void) const
{
	return (this->type);
}
Cat::~Cat(void)
{
	std::cout << "Cat was killed\n";
}
const Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat copy assignment was called\n";
	this->type = ref.type;
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << "Cat is making sound\n";
}