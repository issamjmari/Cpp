#include "FragTrap.hpp"

int main()
{
	FragTrap a("AFrag");
	FragTrap b("BFrag");
	a.highFivesGuys();
	b.highFivesGuys();
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