#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream new_file;
	std::ofstream out_file;
	size_t		found;
	std::string	s1 = av[2];
	std::string s2 = av[3];
	std::string replace = ".replace";
	new_file.open(av[1], std::ios::in);
	if (!new_file)
		std::cout << "no such file or directory";
	else
	{
		out_file.open(av[1] + replace, std::ios::out);
		std::string str;
		int k = 0;
		while (getline(new_file, str))
		{
			int found = str.find(s1);
			int i = 0;
			while (str[i])
			{
				if (found != std::string::npos)
				{
					while (str[i] && i < found)
						out_file << str[i++];
					out_file << s2;
					i += s1.length();
				}
				else
				{
					while (str[i])
						out_file << str[i++];
					break;
				}
				found = str.find(s1, found + 1);
			}
			out_file << "\n";
		}
		out_file.close();
		new_file.close();
	}
}