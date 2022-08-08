#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
	#include "ClapTrap.hpp"
	class FragTrap : public ClapTrap
	{
		public:
			FragTrap(void);
			FragTrap(std::string Name);
			FragTrap(FragTrap &ref);
			FragTrap &operator=(FragTrap &ref);
			void highFivesGuys(void);
			~FragTrap(void);
	} ;
#endif