#include "Weapon.hpp"

Weapon::Weapon(std::string val)
        :type(val)
{
}

std::string &Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string val)
{
    type = val;
}
