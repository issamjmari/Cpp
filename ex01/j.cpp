#include <iostream>
#include <string>

int main()
{
	std::string a, b;
	std::cout << "your 1:";
	getline(std::cin, a);
	std::cout << "your 2:";
	getline(std::cin, b);
	std::cout << a << std::endl;
	std::cout << b;
}
