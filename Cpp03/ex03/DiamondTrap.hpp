#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
	#include "ScavTrap.hpp"
	#include "FragTrap.hpp"
	#include "ClapTrap.hpp"
	class DiamondTrap : public ScavTrap, public FragTrap
	{
		private:
			std::string Name;
		public:
			DiamondTrap(void);
			DiamondTrap(std::string Name);
			DiamondTrap(DiamondTrap &ref);
			DiamondTrap &operator=(DiamondTrap &ref);
			~DiamondTrap(void);
			void whoAmI();
	} ;
#endif