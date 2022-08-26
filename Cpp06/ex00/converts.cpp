#include "converts.hpp"

void	convert_to_char(std::string type)
{
	std::cout << "*************a\n";
	std::cout << "char: " << "\'" << type[0] << "'";
	std::cout << "int: " << static_cast<int> (type[0]) << std::endl;
	std::cout << "float: " << static_cast<float> (type[0]) << std::endl;
	std::cout << "double: " << static_cast<double> (type[0]) << std::endl;
}

void	convert_to_int(std::string type)
{
	int num = std::stoi(type);
	std::cout << "char: " << "\'" << static_cast<char> (num) << "'";
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float> (num) << std::endl;
	std::cout << "double: " << static_cast<double> (num) << std::endl;
}
void	convert_to_float(std::string type)
{
	float f = std::stof(type);
	std::cout << "char: " << "\'" << static_cast<char> (f) << "'";
	std::cout << "int: " << static_cast<int> (f) << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << static_cast<double> (f) << std::endl;
}
void	convert_to_double(std::string type)
{
	float d = std::stod(type);
	std::cout << "char: " << "\'" << static_cast<char> (d) << "'";
	std::cout << "int: " << static_cast<int> (d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << d << std::endl;
}