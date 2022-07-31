#include "Zombie.hpp"

int main(void)
{
	Zombie *zs = zombieHorde(8, "zombora");
	for(int i = 0; i < 8; i++)
		zs[i].announce();
	delete[] zs;
}
