#include <iostream>
#include <limits>
#include <cfloat>
#include <climits>


int main() {
    std::cout << "Maximum float value: " << FLT_MAX << "\n";
    std::cout << "Maximum double value: " << DBL_MAX << "\n";
    std::cout << "Maximum float value: " << -FLT_MAX << "\n";
    std::cout << "Maximum double value: " << -DBL_MAX << "\n";
	char i = 48;
	int *c = (int *)&i;
	std::cout << c << "\n";
    return 0;
}

