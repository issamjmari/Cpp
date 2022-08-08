#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
	#include <string>
	#include <iostream>
	class ClapTrap
	{
		private:
			std::string Name;
			unsigned int hit_points;
			unsigned int energy_points;
			unsigned int attack_damage;
		public:
			ClapTrap(void);
			ClapTrap(std::string Name);
			ClapTrap(const ClapTrap &ref);
			ClapTrap &operator=(const ClapTrap &ref);
			~ClapTrap(void);
			std::string	get_name(void);
			unsigned int get_hit_points(void);
			unsigned int get_energy_points(void);
			unsigned int get_attack_damage(void);
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	} ;
	std::ostream& operator<<(std::ostream &os, ClapTrap &ref);
#endif