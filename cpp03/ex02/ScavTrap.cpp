#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string val)
	:ClapTrap(val, 20, 100, 50)
{
	std::cout << "Constructor of ScavTrap.\n";
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor called of ScavTrap.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called of ScavTrap.\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_point > 0 && energy_point > 0)
	{
		std::cout << "ScavTrap " << name << " attaks " << target << ", causing " << attack_damage << " points of damage!\n";
		energy_point -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
}
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap in Gate keeper mode.\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->hit_point = obj.hit_point;
	this->energy_point = obj.energy_point;
	return (*this);
}

