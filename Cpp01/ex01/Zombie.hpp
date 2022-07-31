#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <string>
class Zombie 
{
	private:
		std::string name;
	public:
		void announce(void);
		~Zombie(void);
		void		set_name(std::string name = "test");
		std::string	get_name(void);
} ;
Zombie* zombieHorde( int N, std::string name );

#endif