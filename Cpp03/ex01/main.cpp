#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Meson");
	ClapTrap b("maron");

	std::cout << "a is \n" << a;
	a.takeDamage(5);
	std::cout << a;
	a.attack(b.get_name());
	std::cout << a;
}