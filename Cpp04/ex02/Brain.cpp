#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain was created\n";
}
Brain::Brain(const Brain &ref)
{
	(*this) = ref;
}
Brain::~Brain(void)
{
	std::cout << "A brain was destroyed\n";
}
const Brain &Brain::operator=(const Brain &)
{
	return (*this);
}
const std::string *Brain::get_ideas(void)
{
	return (ideas);
}