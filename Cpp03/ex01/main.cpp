#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav1("scavy");
	ScavTrap scav2("scavana");
	ClapTrap one("abana");

	scav1.attack(scav2.get_name());
	one.attack(scav1.get_name());
	scav1.guardGate();
	std::cout << "scavy is \n" << scav1;
}