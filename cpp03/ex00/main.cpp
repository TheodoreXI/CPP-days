#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	std::string t = "Oscar";
	a.takeDamage(5);
	a.attack(t);
	a.beRepaired(3);
}