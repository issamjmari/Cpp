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
			unsigned int get_hit_points(void);
			unsigned int get_energy_points(void);
			unsigned int get_attack_damage(void);
			DiamondTrap &operator=(DiamondTrap &ref);
			~DiamondTrap(void);
			void whoAmI();
	} ;
#endif