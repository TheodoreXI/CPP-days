#include "FragTrap.hpp"

FragTrap::FragTrap(std::string val)
	:ClapTrap(val, 30, 100, 100)
{
	std::cout << "Constructor of FragTrap.\n";
}

FragTrap::FragTrap(void)
{
	std::cout << "Default Constructor called of FragTrap.\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called of FragTrap.\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " asks for a positive high five.\n";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->hit_point = obj.hit_point;
	this->energy_point = obj.energy_point;
	return (*this);
}

