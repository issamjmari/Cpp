#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
void randomChump( std::string name );
class Zombie 
{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(void);
		~Zombie(void);
		void		set_name(std::string name);
		std::string	get_name(void);
} ;
Zombie* newZombie( std::string name );
#endif