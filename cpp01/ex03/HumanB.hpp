#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string val);
        void    attack(void);
        void    setWeapon(Weapon& w);
}; 

#endif