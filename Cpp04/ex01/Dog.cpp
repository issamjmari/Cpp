#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	dog_ideas = new Brain();
	std::cout << "Dog was created\n";
}
Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor was called\n";
	this->type = ref.type;
	dog_ideas = new Brain();
    *(this->dog_ideas) = *(ref.dog_ideas);
}

const std::string &Dog::getType(void) const
{
	return (this->type);
}

Dog::~Dog(void)
{
	std::cout << "Dog was killed\n";
	delete dog_ideas;
}
const Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog copy assignment was called\n";
    if (dog_ideas != NULL)
        delete dog_ideas;
    this->type = ref.type;
	dog_ideas = new Brain();
    *(this->dog_ideas) = *(ref.dog_ideas);
	return (*this);
}
void Dog::makeSound(void) const
{
	std::cout << "Dog is making sound\n";
}