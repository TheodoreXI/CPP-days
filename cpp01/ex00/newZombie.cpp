#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	return (z);
}
