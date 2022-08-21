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
	std::cout << "ScavTrap " << p_Name << " is created\n";
	this->Name = p_Name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}
ScavTrap::ScavTrap(ScavTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.get_name() << " ScavTrap is created\n";
	(*this) = ref;
}
ScavTrap &ScavTrap::operator=(ScavTrap &ref)
{
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
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
		this->energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->get_name() << " Can not attack due to \
the lack of energy points\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in goalkeeper mode\n";
}