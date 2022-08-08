#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(ClapTrap &ref);
	~ScavTrap(void);
	void attack(const std::string& target);
	void guardGate();
} ;
#endif