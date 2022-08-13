#include "Zombie.hpp"

int main(void)
{
	Zombie *first = newZombie("zombaa");
	first->announce();
	delete first;
	randomChump("zombra");
}