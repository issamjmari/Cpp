#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("ACLAP");
	ClapTrap b("BCLAP");
	std::cout << a;
	std::cout << b;
	a.attack(b.get_name());
	b.takeDamage(0);
	b.beRepaired(0);
	std::cout << a;
	std::cout << b;
	{
		ClapTrap c("CCLAP");
		ClapTrap d("DCLAP");
		ClapTrap k("KCLAP");
		std::cout << c;
		std::cout << d;
		c.attack(d.get_name());
		d.takeDamage(0);
		d.beRepaired(0);
		std::cout << c;
		std::cout << d;
		d.attack(c.get_name());
		c.takeDamage(0);
		c.beRepaired(0);
		std::cout << c;
		std::cout << d;
	}
}