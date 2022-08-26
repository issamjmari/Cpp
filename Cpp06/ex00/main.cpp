#include "converts.hpp"

int	parse_char(std::string str)
{
	if(!str.compare("nan") || !str.compare("-inf") || !str.compare("+inf")
	|| !str.compare("-inff") || !str.compare("nanf"))
		return (-1);
	if(str.length() != 1)
		return (-1);
	if(isalpha(str[0]) && str.length() == 1)
		return (1);
	return (0);
}

int	parse_int(std::string str)
{
	if(!str.compare("nan") || !str.compare("-inf") || !str.compare("+inf")
	|| !str.compare("-inff") || !str.compare("nanf"))
		return (-1);
	if(std::stoi(str) < -2147483648 &&
	std::stoi(str) > 2147483647)
		return (-2);
	int i = 0;
	if(str[0] == '-')
		i++;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return 0;
		i++;
	}
	if(std::stol(str) <= INT_MAX && std::stol(str) >= INT_MIN)
		return 1;
	else
		return 0;
}

int	parse_float(std::string str)
{
	if(std::stod(str) < FLT_MIN && std::stod(str) > FLT_MAX)
		return -1;
	if(str.compare("-inff") == 0 || str.compare("+inff") == 0 || \
str.compare("nanf") == 0)
	return 1;
	int i = 0;
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

int	parse_double(std::string str)
{
	if(str.compare("-inf") == 0 || str.compare("+inf") == 0 || \
str.compare("nan") == 0)
	return 1;
	int i = 0;
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
	std::string str(b[1]);
	int _char = parse_char(str);
	if (_char)
	{
		if(_char == -1)
			std::cout << "char: impossible\n";
		else if(_char == -2)
			std::cout << "char: Non displayable";
		convert_to_char(str);
		return 1;
	}
	int _int = parse_int(str);
	if (_int)
	{
		if(_int == -1)
			std::cout << "int: impossible\n";
		else if(_int == -2)
			std::cout << "int: Non displayable";
		convert_to_int(str);
		return 1;
	}
	int _float = parse_float(str);
	if (_float)
	{
		if(_float == -1)
			std::cout << "float: impossible\n";
		convert_to_float(str);
		return 1;
	}
	int _double = parse_double(str);
	if (_double)
	{
		convert_to_double(str);
		return 1;
	}
	std::cout << "type is not valid, please try again\n";
}