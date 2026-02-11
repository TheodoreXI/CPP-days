#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			attack_damage;
		int			hit_point;
		int			energy_point;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(void);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &obj);
};



#endif