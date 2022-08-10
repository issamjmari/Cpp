#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
	#include <string>
	#include <iostream>
	class ClapTrap
	{
		protected:
			std::string Name;
			unsigned int hit_points;
			unsigned int energy_points;
			unsigned int attack_damage;
		public:
			ClapTrap(void);
			ClapTrap(std::string Name);
			ClapTrap(const ClapTrap &ref);
			ClapTrap(std::string Name, \
			unsigned int hit_points, \
			unsigned int energy_points, \
			unsigned int attack_damage);
			ClapTrap &operator=(const ClapTrap &ref);
			~ClapTrap(void);
			virtual std::string	&get_name(void);
			virtual unsigned int get_hit_points(void);
			virtual unsigned int get_energy_points(void);
			virtual unsigned int get_attack_damage(void);
			virtual	void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	} ;
	std::ostream& operator<<(std::ostream &os, ClapTrap &ref);
#endif