#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap is called\n";
}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name, 100, 100, 30)
{
	std::cout << "FragTrap " << Name << " is created\n";
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
	std::cout << "copy assign was called\n";
	this->set_attack_damage(ref.get_attack_damage());
	this->set_energy_points(ref.get_energy_points());
	this->set_hit_points(ref.get_hit_points());
	this->set_name(ref.get_name());
	return (*this);
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->get_name() << " is destroyed\n";
}