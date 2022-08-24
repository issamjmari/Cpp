#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal was created\n";
}
Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy was called\n";
	this->type = ref.type;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}
Animal::~Animal(void)
{
	std::cout << "Animal was killed\n";
}
const Animal &Animal::operator=(const Animal &ref)
{
	std::cout << "Animal copy assignment was called\n";
	this->type = ref.type;
	return (*this);
}
void Animal::makeSound(void) const
{
	std::cout << "Animal is making sound\n";
}