#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	FragTrap a("fraggy");
	FragTrap b();
	b = a;
	std::cout << a;
	std::cout << b;
}