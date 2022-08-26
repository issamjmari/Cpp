#include "converts.hpp"

void	convert_to_char(std::string type)
{
	float f = static_cast<float> (type[0]);
	double d = static_cast<double> (type[0]);
	std::cout << "char: " << "\'" << type[0] << "'\n";
	std::cout << "int: " << static_cast<int> (type[0]) << std::endl;
	std::cout << "float: " << f;
	if(((int) (f * 10) % 10) == 0)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";
	std::cout << "double: " << d;
	if(((int) (d * 10) % 10) == 0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}

void	convert_to_int(std::string type)
{
	int num = std::stoi(type);
	float f = static_cast<float> (num);
	double d = static_cast<double> (num);
	std::cout << "char: " << "\'" << static_cast<char> (num) << "'\n";
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << f;
	if(((int) (f * 10) % 10) == 0)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";
	std::cout << "double: " << d;
	if(((int) (d * 10) % 10) == 0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}
void	convert_to_float(std::string type)
{
	float f_change = std::stof(type);
	float f_cast = static_cast<float> (f_change);
	double d = static_cast<double> (f_change);
	std::cout << "char: " << "\'" << static_cast<char> (f_change) << "'\n";
	std::cout << "int: " << static_cast<int> (f_change) << std::endl;
	std::cout << "float: " << f_cast;
	if(((int) (f_cast * 10) % 10) == 0)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";
	std::cout << "double: " << d;
	if(((int) (d * 10) % 10) == 0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}
void	convert_to_double(std::string type)
{
	double d_change = std::stod(type);
	float f_cast = static_cast<float> (d_change);
	double d_cast = static_cast<double> (d_change);
	std::cout << "char: " << "\'" << static_cast<char> (d_change) << "'\n";
	std::cout << "int: " << static_cast<int> (d_change) << std::endl;
	std::cout << "float: " << f_cast;
	if(((int) (f_cast * 10) % 10) == 0)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";
	std::cout << "double: " << d_cast;
	if(((int) (d_cast * 10) % 10) == 0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}