#include "ScavTrap.hpp"

int main()
{
	std::string t = "Oscar";
	ScavTrap l("lScav");
	l.attack(t);
	l.takeDamage(5);
	l.beRepaired(3);
	l.guardGate();
}