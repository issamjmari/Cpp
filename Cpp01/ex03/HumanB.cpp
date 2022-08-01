#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = new Weapon;
	this->weapon = &weapon;
}