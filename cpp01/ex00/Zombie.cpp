#include "Zombie.hpp"

Zombie::Zombie(const std::string val)
{
	name = val;
	std::cout << name << " has woken up\n";
}
Zombie::~Zombie()
{
	std::cout << name << " has returned to his grave\n";
}