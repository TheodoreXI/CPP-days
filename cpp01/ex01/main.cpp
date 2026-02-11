#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = zombieHorde(2, "lock");
	delete [] z;
}