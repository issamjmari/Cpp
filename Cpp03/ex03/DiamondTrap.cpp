#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(30);
}
DiamondTrap::DiamondTrap(std::string p_Name) : ClapTrap(p_Name + "_clap_name"), Name(p_Name)
{
	std::cout << "Diamond " << this->Name << " is created\n";
	set_name(p_Name);
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(30);
}
DiamondTrap::DiamondTrap(DiamondTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " DiamondTrap is called\n";
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	this->Name = ref.Name;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap &ref)
{
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	this->Name = ref.Name;
	return (*this);
}

unsigned int DiamondTrap::get_hit_points(void)
{
	return (this->hit_points);
}
unsigned int DiamondTrap::get_energy_points(void)
{
	return (this->energy_points);
}
unsigned int DiamondTrap::get_attack_damage(void)
{
	return (this->attack_damage);
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
	std::cout << "Diamond " << this->Name << " is destroyed\n";
}
void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name << " my parent ClapTrap name is \
" << ClapTrap::Name << std::endl;
}