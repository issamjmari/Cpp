#include <iostream> // stream with a lot of cream stream qdhqwbdjqwd
#include <string>
#include <fstream>
#include <stdlib.h>

int main(int ac, char **av)
{
	std::ifstream new_file;
	std::ofstream out_file;
	size_t		found;
	std::string	s1 = av[2];
	std::string s2 = av[3];
	std::string replace = ".replace";
	if(ac != 4)
		std::cout << "Please try again with 5 arguments\n";
	new_file.open(av[1], std::ios::in);
	if (!new_file)
		std::cout << "no such file or directory";
	else
	{
		out_file.open(av[1] + replace, std::ios::out);
		std::string str;
		while (getline(new_file, str))
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
		out_file.close();
		new_file.close();
	}
}