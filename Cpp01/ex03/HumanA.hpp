#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
	#include <string>
	#include <iostream>
	#include "Weapon.hpp"
	class HumanA 
	{
		private:
			std::string name;
			Weapon &weapon;
		public:
			
			void	attack(void);
			HumanA(std::string name, Weapon &weap);
	} ;
#endif