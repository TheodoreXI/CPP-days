#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< "\n";
}
void    Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void    Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}
void    Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout <<  "This is unacceptable! I want to speak to the manager now.\n";
}


void    Harl::complain(std::string level)
{
    int i = 0;
    void    (Harl::*display[4])(void);
    std::string values[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    display[0] = &Harl::debug;
    display[1] = &Harl::info;
    display[2] = &Harl::warning;
    display[3] = &Harl::error;
    for (i = 0; i < 4; i++)
    {
        if (values[i] == level)
            break ;
    }
    switch(i)
    {
        case 0:
            (this->*display[0])();
        case 1:
            (this->*display[1])();
        case 2:
            (this->*display[2])();
        case 3:
            (this->*display[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}


