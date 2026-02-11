#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	
	std::string t = "Oscar";
	FragTrap l("lFrag");
	ScavTrap m("mScav");
	l.attack(t);
	l.takeDamage(5);
	l.beRepaired(3);
	l.highFivesGuys();
	m.attack(t);
	m.takeDamage(5);
	m.beRepaired(3);
	m.guardGate();
}