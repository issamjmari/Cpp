#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "program requires an array\n";
		exit(1);
	}
	PmergeMe sortMethod;
	if((ac - 1) % 2 == 0)
		sortMethod.isOdd = true;
	if(sortMethod.isOdd)
	{
		for(int i = 1; i < ac - 1; i++)
		{
			try
			{
				int num1 = std::stoi(av[i]);
				int num2 = std::stoi(av[i] + 1);
				sortMethod.pairValues.push_back(std::make_pair(num1, num2));
			}
			catch(const std::exception& e)
			{
				
			}
		}

	}
	else
	{

	}
}