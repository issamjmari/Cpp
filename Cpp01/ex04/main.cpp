#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

void	push_to_file(std::string str, std::ofstream &out_file\
, std::string s1, std::string s2)
{
	size_t found = str.find(s1);
	while (1)
	{
		if (found != std::string::npos)
		{
			out_file << str.substr(0, found);
			out_file << s2;
			str = str.substr(found + s1.length(), str.length());
		}
		else
		{
			out_file << str;
			break;
		}
		found = str.find(s1, 0);
	}
	out_file << "\n";
}

int main(int ac, char **av)
{
	if(ac != 5)
	{
		std::cout << "Please try again with 5 arguments\n";
		exit(-1);
	}
	std::ifstream new_file;
	std::ofstream out_file;
	std::string	s1 = av[2];
	std::string s2 = av[3];
	std::string replace = ".replace";

	new_file.open(av[1], std::ios::in);
	if (!new_file)
	{
		std::cout << "no such file or directory\n";
		exit(-1);
	}
	else
	{
		out_file.open(av[1] + replace, std::ios::out);
		if (!new_file)
		{
			std::cout << "output file error\n";
			exit(-1);
		}
		std::string str;
		while (getline(new_file, str))
			push_to_file(str, out_file, s1, s2);
		out_file.close();
		new_file.close();
	}
}