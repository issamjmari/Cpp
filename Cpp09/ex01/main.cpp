#include "RPN.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "invalid number of arguments\n";
		exit(1);
	}
	std::string statement(av[1]);
	RPN rpn;
	int result;
	try
	{
		result = rpn.calculateNums(statement);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
	std::cout << result << std::endl;
}