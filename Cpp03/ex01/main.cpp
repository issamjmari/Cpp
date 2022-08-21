#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("AScav");
	ScavTrap b("BScav");
	a.guardGate();
	b.guardGate();
	std::cout << a;
	std::cout << b;
	a.attack(b.get_name());
	b.takeDamage(20);
	std::cout << a;
	std::cout << b;
	b.beRepaired(20);
	std::cout << a;
	std::cout << b;
}