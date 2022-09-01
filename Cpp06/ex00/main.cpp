#include "converts.hpp"

bool	parse_char(std::string str)
{
	if(isprint(str[0]) && !isnumber(str[0]) && str.length() == 1)
		return (1);
	return (0);
}

bool	parse_int(std::string str)
{
	int i = 0;
	if(str[0] == '-')
		i++;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return 0;
		i++;
	}
	if(str.length() < 12)
	{
		if(std::stol(str) <= INT_MAX && std::stol(str) >= INT_MIN)
			return 1;
	}
	return 0;
}

bool	parse_float(std::string str)
{
	double checks;
	if(!str.compare("nanf") || !str.compare("-inff") || !str.compare("+inff"))
		return 1;
	try
	{
		checks = std::stod(str);
	}
	catch (std::exception &e)
	{
		std::cout << "Invalid type\n";
		exit(-1);
	}
	if(checks > 340282346638528859811704183484516925440.0
	|| checks < -340282346638528859811704183484516925440.0)
		return (0);
	size_t i = 0;
	bool is_float = 0;
	if(str[0] == '-')
		i++;
	while(str[i])
	{
		if(i == str.length() - 1 && str[i] == 'f' && is_float)
			return (1);
		if(isnumber(str[i] - 48) != 0)
			return 0;
		if(str[i] == '.')
			is_float = 1;
		i++;
	}
	return 0;
}

bool	parse_double(std::string str)
{
	if(!str.compare("nan") || !str.compare("-inf") || !str.compare("+inf"))
		return 1;
	try
	{
		double check = std::stod(str);
		(void) check;
	}
	catch (std::exception &e)
	{
		std::cout << "Invalid type\n";
		exit(-1);
	}
	size_t i = 0;
	bool is_double = 0;
	if(str[0] == '-')
		i++;
	while(str[i])
	{
		if(i == str.length() - 1 && str[i] == 'f')
			return (0);
		if(i == str.length() - 1 && is_double)
			return (1);
		if(isnumber(str[i] - 48) != 0)
			return 0;
		if(str[i] == '.')
			is_double = 1;
		i++;
	}
	return 0;
}

int main(int a, char **b)
{
	if(a != 2)
	{
		std::cout << "Invalid arguments\n";
		return (-1);
	}
	std::string str(b[1]);
	int _char = parse_char(str);
	if(_char)
	{
		convert_from_char(str);
		return 1;
	}
	int _int = parse_int(str);
	if(_int)
	{
		convert_from_int(str);
		return 1;
	}
	int _float = parse_float(str);
	if(_float)
	{
		convert_from_float(str);
		return 1;
	}
	int _double = parse_double(str);
	if(_double)
	{
		convert_from_double(str);
		return 1;
	}
	std::cout << "type is not valid, please try again\n";
}