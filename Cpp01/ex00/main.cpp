#include "Zombie.hpp"

int main(void)
{
	Zombie *first = newZombie("zombaa");
	std::cout << first->get_name() << std::endl;
	delete first;
	randomChump("zombra");
}