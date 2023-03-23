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
	int result = rpn.calculateNums(statement);
	std::cout << result << std::endl;
}