#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie newone;

	newone.set_name(name);
	newone.announce();
}