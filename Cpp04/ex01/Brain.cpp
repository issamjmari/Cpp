#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain was created\n";
}
Brain::Brain(const Brain &ref)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
}
Brain::~Brain(void)
{
	std::cout << "A brain was destroyed\n";
}
const Brain &Brain::operator=(const Brain &ref)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return (*this);
}
const std::string *Brain::get_ideas(void)
{
	return (ideas);
}