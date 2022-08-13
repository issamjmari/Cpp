#include "Weapon.hpp"

const std::string Weapon::getType()
{
	return (this->type);
}
void		Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string s)
{
	setType(s);
}