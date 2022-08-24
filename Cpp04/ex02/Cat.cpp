#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	cat_ideas = new Brain();
	std::cout << "Cat was created\n";
}
Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor was called\n";
	this->type = ref.type;
	cat_ideas = new Brain();
    *(this->cat_ideas) = *(ref.cat_ideas);
}
const std::string &Cat::getType(void) const
{
	return (this->type);
}
Cat::~Cat(void)
{
	std::cout << "Cat was killed\n";
	delete cat_ideas;
}
const Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat copy assignment was called\n";
	if (cat_ideas != NULL)
        delete cat_ideas;
    this->type = ref.type;
	cat_ideas = new Brain();
    *(this->cat_ideas) = *(ref.cat_ideas);
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << "Cat is making sound\n";
}