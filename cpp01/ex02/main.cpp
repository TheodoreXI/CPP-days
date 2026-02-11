#include <iostream>

int main()
{
	std::string name = "HI THIS IS BRAIN";
	std::string	*name_ptr = &name;
	std::string	&name_ref = name;

	std::cout << "This is the address of the string variable: " << &name << "\n";
	std::cout << "This is the address held by the string pointer: " << name_ptr << "\n";
	std::cout << "This is the address held by the string reference: " << &name_ref << "\n";

	std::cout << "This is the value of the string variable: " << name << "\n";
	std::cout << "This is the value pointed to by the string pointer: " << *name_ptr << "\n";
	std::cout << "This is the value pointed to by the string reference: " << name_ref << "\n";

}