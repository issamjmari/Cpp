#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal was created\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << "WrongAnimal copy was called\n";
	this->type = ref.type;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal was killed\n";
}
const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	std::cout << "WrongAnimal copy assignment was called\n";
	this->type = ref.type;
	return (*this);
}
void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal is making sound\n";
}