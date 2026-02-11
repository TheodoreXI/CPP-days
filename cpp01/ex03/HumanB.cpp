#include "HumanB.hpp"

HumanB::HumanB(std::string val)
    :weapon(NULL)
{
    name = val;
    std::cout << name << " is ready with " << "bare hands." << "\n";
}
void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void    HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}
