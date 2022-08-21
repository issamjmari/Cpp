#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Diammy");
	DiamondTrap b("DIAMOLO");
	a.whoAmI();
	b.whoAmI();
	a.highFivesGuys();
	a.guardGate();
	a.attack(b.get_name());
	b.takeDamage(30);
	std::cout << a;
	std::cout << b;

	b.attack(a.get_name());
	a.takeDamage(30);
	std::cout << a;
	std::cout << b;
	a.beRepaired(30);
	std::cout << a;
	std::cout << b;
}