#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	std::fstream new_file;
	std::fstream out_file;
	std::string	s1;
	std::string s2;
	std::string replace = ".replace";
	new_file.open(av[1], std::ios::in);
	if (!new_file)
		std::cout << "no such file or directory";
	else
	{
		out_file.open(av[1] + replace, std::ios::out);
		std::string str;
		while (1)
		{
			new_file >> str;
			out_file << str;
			if(!new_file.eof())
				out_file << std::endl;
			if(new_file.eof())
				break;
		}
	}
}