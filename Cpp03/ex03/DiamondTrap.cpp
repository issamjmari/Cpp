#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}
DiamondTrap::DiamondTrap(std::string p_Name) : Name(p_Name), ClapTrap(p_Name + "_clap_name")
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}
DiamondTrap::DiamondTrap(DiamondTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " DiamondTrap is created\n";
	(*this) = ref;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap &ref)
{
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	this->Name = ref.Name;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, DiamondTrap &ref)
{
	os << "hit points are : " << ref.get_hit_points() << std::endl \
<< "energy points are : " << ref.get_energy_points() << std::endl \
<< "attack damage is : " << ref.get_attack_damage() << std::endl;
	return (os);
}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond is destroyed\n";
}
void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name << " my parent ClapTrap name is \
" << ClapTrap::get_name() << std::endl;
}