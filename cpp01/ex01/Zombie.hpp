#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void	zombie_set(std::string val);
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif