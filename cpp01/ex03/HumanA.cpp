#include "HumanA.hpp"

HumanA::HumanA(std::string val, Weapon& w)
    :name(val), weapon(w)
{
    std::cout << name << " is ready with " << weapon.getType() << "\n";
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
