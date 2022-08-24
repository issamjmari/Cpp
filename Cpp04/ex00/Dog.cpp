#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog was created\n";
}
Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy was called\n";
	this->type = ref.type;
}

const std::string &Dog::getType(void) const
{
	return (this->type);
}

Dog::~Dog(void)
{
	std::cout << "Dog was killed\n";
}
const Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog copy assignment was called\n";
	this->type = ref.type;
	return (*this);
}
void Dog::makeSound(void) const
{
	std::cout << "Dog is making sound\n";
}