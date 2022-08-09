#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name(""), hit_points(10), energy_points(10) \
, attack_damage(0)
{
	std::cout << "ClapTrap is called\n";
}
ClapTrap::ClapTrap(std::string p_Name) : Name(p_Name), hit_points(10), energy_points(10) \
, attack_damage(0)
{
	std::cout << "ClapTrap " << this->Name << " is created\n";
}

ClapTrap::ClapTrap(std::string p_Name, \
			unsigned int hit_p, \
			unsigned int energy_p, \
			unsigned int attack_d) : Name(p_Name), hit_points(hit_p), \
energy_points(energy_p), attack_damage(attack_d)
{
	std::cout << "ClapTrap " << this->Name << " is created\n";
}
ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy Constructor of " << ref.Name << " ClapTrap is created\n";
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	return (*this);
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap is destroyed\n";
}
void ClapTrap::attack(const std::string& target)
{
	if(this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks "  \
	<< target << ", causing " << this->attack_damage << " points of damage\n";
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->Name << " Can not attack due to \
the lack of energy points\n";
}
std::string	&ClapTrap::get_name()
{
	return (this->Name);
}
unsigned int ClapTrap::get_hit_points(void)
{
	return (this->hit_points);
}
unsigned int ClapTrap::get_energy_points(void)
{
	return (this->energy_points);
}
unsigned int ClapTrap::get_attack_damage(void)
{
	return (this->attack_damage);
}

void	ClapTrap::set_name(std::string &s)
{
	this->Name = s;
}
void	ClapTrap::set_hit_points(unsigned int hit_p)
{
	this->hit_points = hit_p;
}
void	ClapTrap::set_energy_points(unsigned int energy_p)
{
	this->energy_points = energy_p;
}
void	ClapTrap::set_attack_damage(unsigned int attack_d)
{
	this->attack_damage = attack_d;
}
std::ostream& operator<<(std::ostream &os, ClapTrap &ref)
{
	os << "hit points are : " << ref.get_hit_points() << std::endl \
<< "energy points are : " << ref.get_energy_points() << std::endl \
<< "attack damage is : " << ref.get_attack_damage() << std::endl;
	return (os);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " Took " << amount << " of damage\n";
	this->hit_points -= amount;
	this->attack_damage += amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " repaired himself and got " \
	<< amount << " of hit points back\n";
		this->energy_points--;
		this->hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->Name << " Can not be repaired due to \
the lack of energy points\n";
}