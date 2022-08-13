#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if(!this->weapon)
		std::cout << this->name << " has no weapon at the moment" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
HumanB::HumanB(std::string name) : weapon(NULL)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}