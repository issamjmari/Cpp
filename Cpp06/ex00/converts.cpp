#include "converts.hpp"

void	convert_from_char(std::string type)
{
	std::cout << "char: \'" << type[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast<int> (type[0]) << std::endl;
	std::cout << "float: " << static_cast<float> (type[0]) << ".0f\n";
	std::cout << "float: " << static_cast<double> (type[0]) << ".0\n";
}

void	convert_from_int(std::string type)
{
	int num = std::stoi(type);
	if(!(num >= 33 && num <= 126))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: \'" << static_cast<char> (num) << "\'" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float> (num) << ".0f\n";
	std::cout << "float: " << static_cast<double> (num) << ".0\n";
}
void	convert_from_float(std::string type)
{
	float f = std::stof(type);
	if(!type.compare("nan") || !type.compare("-inf") || !type.compare("+inf")
	|| !type.compare("-inff") || !type.compare("nanf"))
		std::cout << "char: Impossible";
	else if(!(f >= 33.0f && f < 127.0f))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: \'" << static_cast<char> (f) << "\'" << std::endl;
	if(!(f >= -2147483648.0f && f < 2147483648.0f) ||
	!type.compare("nan") || !type.compare("-inf") || !type.compare("+inf")
	|| !type.compare("-inff") || !type.compare("nanf"))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int> (f) << std::endl;
	if(((int) (f * 10) % 10) == 0)
		std::cout << "float: " << f << ".0f\n";
	else
		std::cout << "float: " << f << "f\n";
	std::cout << "double: " << static_cast<double> (f) << std::endl;
}
void	convert_from_double(std::string type)
{
	
}