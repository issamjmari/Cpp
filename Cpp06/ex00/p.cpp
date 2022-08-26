#include <string>
#include <iostream>
#include <limits>

bool parse_char(std::string str)
{
	if(isalpha(str[0]) && str.length() == 1)
		return (1);
	return (0);
}

bool parse_int(std::string str)
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
	if(std::stol(str) <= INT_MAX && std::stol(str) >= INT_MIN)
		return 1;
	else
		return 0;
}

bool parse_float(std::string str)
{
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

bool	parse_double(std::string str)
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
	bool _char = parse_char(str);
	bool _int = parse_int(str);
	bool _float = parse_float(str);
	bool _double = parse_double(str);
	if (_char)
		convert_to_scalar("char", str);
	else if (_int)
		convert_to_scalar("int", str);
	else if (_float)
		convert_to_scalar("float", str);
	else if (_double)
		convert_to_scalar("double", str);
	else
		std::cout << "type is not valid, please try again\n";
}