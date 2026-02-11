#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string val);
		~FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap &operator=(const FragTrap &obj);
		void	highFivesGuys(void);
};


#endif