#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (std::cout << "Only two characters are accepted.\n", 1);
    Harl h;
    h.complain(argv[1]);
    return (0);
}