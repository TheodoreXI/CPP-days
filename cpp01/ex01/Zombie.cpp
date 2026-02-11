#include "Zombie.hpp"

void	Zombie::zombie_set(std::string val)
{
	name = val;
	std::cout << name << " has woken up\n";
}

Zombie::~Zombie()
{
	std::cout << name << " has returned to his grave\n";
}
