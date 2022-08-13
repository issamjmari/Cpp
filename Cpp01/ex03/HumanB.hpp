#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
	#include "Weapon.hpp"
	#include <iostream>
	class HumanB
	{
		private:
			std::string name;
			Weapon		*weapon;
		public:
			void	attack(void);
			HumanB(std::string);
			void setWeapon(Weapon &weapon);
	} ; 
#endif