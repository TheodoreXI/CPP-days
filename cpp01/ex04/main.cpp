#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    std::string s1;
    std::string s2;
    std::string f;
    std::string buffer;
    std::string new_buff;
    size_t      pos;
    if (ac != 4)
    {
        std::cout << "Can only take three parameters.\n";
        return (1);
    }
    s1 = av[1];
    if (s1.empty())
    {
        std::cout << "You entered an empty string.\n";
        return (1);
    }
    s2 = ".replace";
    f = s1 + s2;
    s1 = av[2];
    s2 = av[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "You entered an empty string.\n";
        return (1);
    }
    pos = 0;
    std::fstream    my_infile(av[1]);
    if (!my_infile.is_open())
    {
        std::cout << "not a valid file\n";
        return (1);
    }
    std::ofstream    my_outfile(f.c_str());
    while (getline(my_infile, buffer))
    {
        new_buff += buffer + "\n";
    }
    new_buff = new_buff.substr(0, new_buff.size() - 1);
    pos = new_buff.find(s1);
    while (pos != std::string::npos)
    {
        new_buff.erase(pos, s1.length());
        new_buff.insert(pos, s2);
        pos = new_buff.find(s1, pos+s1.length());
    }
    my_outfile << new_buff;
}

