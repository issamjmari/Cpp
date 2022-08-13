#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "a zombie is created\n" ;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destroyed\n" ;
}