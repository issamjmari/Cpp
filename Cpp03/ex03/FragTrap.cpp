#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap is called\n";
}
FragTrap::FragTrap(std::string p_Name)
{
	std::cout << "FragTrap " << p_Name << " is created\n";
	this->Name = p_Name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}
FragTrap::FragTrap(FragTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " FragTrap is created\n";
	(*this) = ref;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "High five guys ! ! !\n";
}
FragTrap &FragTrap::operator=(FragTrap &ref)
{
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	return (*this);
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->get_name() << " is destroyed\n";
}