#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat was created\n";
}
WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "WrongCat copy was called\n";
	this->type = ref.type;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat was killed\n";
}
const WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	std::cout << "WrongCat copy assignment was called\n";
	this->type = ref.type;
	return (*this);
}
