#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(NULL, 100, 50, 20)
{
	std::cout << "ScavTrap is called\n";
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
	std::cout << "ScavTrap " << Name << " is created\n";
}
ScavTrap::ScavTrap(ClapTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " ScavTrap is created\n";
	(*this) = ref;
}
ScavTrap::~ScavTrap(void)
{

}
void ScavTrap::attack(const std::string& target)
{

}

void ScavTrap::guardGate()
{

}