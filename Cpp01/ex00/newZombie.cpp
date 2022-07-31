#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newzomb = new Zombie();
	newzomb->set_name(name);
	return (newzomb);
}