#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	:name("Clapper"), attack_damage(0), hit_point(10), energy_point(10)
{
	std::cout << "Constructor of " << name << " is called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->hit_point = obj.hit_point;
	this->energy_point = obj.energy_point;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor is called.\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit_point > 0 && energy_point > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
		energy_point -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)hit_point < amount)
	{
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
		hit_point = 0;
	}
	else if ((hit_point - amount) >= 0 && energy_point > 0)
	{
		std::cout << "ClapTrap " << name << " has taken " << amount << " of damage.\n";
		hit_point -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((unsigned int)hit_point < amount)
	{
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
		hit_point = 0;
	}
	else if ((hit_point - amount) >= 0 && energy_point > 0)
	{
		std::cout << "ClapTrap " << name << " has healed " << amount << " of damage.\n";
		hit_point += amount;
		energy_point -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " has no hit points or engergy points left.\n";
}
