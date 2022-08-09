#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->Name = "";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap is called\n";
}
ScavTrap::ScavTrap(std::string p_Name)
{
	this->Name = p_Name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << Name << " is created\n";
}
ScavTrap::ScavTrap(ScavTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " ScavTrap is created\n";
	(*this) = ref;
}
ScavTrap &ScavTrap::operator=(ScavTrap &ref)
{
	std::cout << "copy assign was called\n";
	this->set_attack_damage(ref.get_attack_damage());
	this->set_energy_points(ref.get_energy_points());
	this->set_hit_points(ref.get_hit_points());
	this->set_name(ref.get_name());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->get_name() << " is destroyed\n";
}
void ScavTrap::attack(const std::string& target)
{
	if(this->get_energy_points() > 0 && this->get_hit_points() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " attacks "  \
	<< target << ", causing " << this->get_attack_damage() << " points of damage\n";
	}
	else
		std::cout << "ScavTrap " << this->get_name() << " Can not attack due to \
the lack of energy points\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in goalkeeper mode\n";
}