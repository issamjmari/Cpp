#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
	#include <string>
	#include "Weapon.hpp"
	class HumanA 
	{
		private:
			std::string name;
		public:
			void	attack(void);
			HumanA(Weapon weapon);
	} ;
#endif