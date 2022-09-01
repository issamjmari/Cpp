#include "converts.hpp"

void	convert_from_char(std::string type)
{
	std::cout << "char: \'" << type[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast<int> (type[0]) << std::endl;
	std::cout << "float: " << static_cast<float> (type[0]) << ".0f\n";
	std::cout << "double: " << static_cast<double> (type[0]) << ".0\n";
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
	std::cout << "double: " << static_cast<double> (num) << ".0\n";
}
void	convert_from_float(std::string type)
{
	float f = std::stod(type);
	if(!type.compare("-inff") || !type.compare("nanf") ||
	!type.compare("+inff"))
		std::cout << "char: Impossible\n";
	else if(f < 33.0f || f > 126.999f)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: \'" << static_cast<char> (f) << "\'" << std::endl;
	if(!type.compare("-inff") || !type.compare("nanf") ||
	!type.compare("+inff"))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int> (f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double> (f) << std::endl;
}
void	convert_from_double(std::string type)
{
	double d = std::stod(type);
	if(!type.compare("nan") || !type.compare("-inf") || !type.compare("+inf"))
		std::cout << "char: Impossible\n";
	else if(d < 33.0 || d > 126.999)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: \'" << static_cast<char> (d) << "\'" << std::endl;
	if(!type.compare("nan") || !type.compare("-inf") || !type.compare("+inf"))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int> (d) << std::endl;
	std::cout << "float: " << static_cast<float> (d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}