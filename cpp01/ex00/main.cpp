#include "Zombie.hpp"

int main()
{
	Zombie *alan;

	alan = newZombie("alan");
	randomChump("verum");

	delete alan;
	return (0);
}