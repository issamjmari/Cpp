#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
	#include "ClapTrap.hpp"
	class ScavTrap: virtual public ClapTrap
	{
		public:
			ScavTrap(void);
			ScavTrap(std::string Name);
			ScavTrap(ScavTrap &ref);
			~ScavTrap(void);
			ScavTrap &operator=(ScavTrap &ref);
			void attack(const std::string& target);
			void guardGate();
	} ;
#endif