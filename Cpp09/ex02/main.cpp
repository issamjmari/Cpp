#include "PmergeMe.hpp"

bool	sortBySecond(std::pair<int, int> &firstPair
   , std::pair<int, int> &secondPair )
{
	return firstPair.first < secondPair.first;
}

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "Error : program requires an array\n";
		exit(1);
	}
	PmergeMe sortMethod;
	if((ac - 1) % 2 != 0)
		sortMethod.isOdd = true;
	if(sortMethod.isOdd)
	{
		try
		{
			int i = 1;
			while(i < ac - 1)
			{
				int num1 = 0, num2 = 0;
				char *currentArr = av[i];
				if(currentArr)
				{
					num1 = std::stoi(std::string(currentArr));
					i++;
				}
				currentArr = av[i];
				if(currentArr)
				{
					num2 = std::stoi(std::string(currentArr));
					i++;
					sortMethod.pairValues.push_back(std::make_pair(num1, num2));
				}
			}
			sortMethod.leftOddNum = std::stoi(av[i]);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: something wrong happened\n";
			exit(1);
		}
	}
	else
	{
		try
		{
			int i = 1;
			while(i < ac - 1)
			{
				int num1 = 0, num2 = 0;
				char *currentArr = av[i];
				if(currentArr)
				{
					num1 = std::stoi(std::string(currentArr));
					i++;
				}
				currentArr = av[i];
				if(currentArr)
				{
					num2 = std::stoi(std::string(currentArr));
					i++;
					sortMethod.pairValues.push_back(std::make_pair(num1, num2));
				}
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: something wrong happened\n";
			exit(1);
		}
	}
	std::vector<std::pair<int, int> >::iterator vecIt = sortMethod.pairValues.begin();
	for(; vecIt != sortMethod.pairValues.end(); vecIt++)
	{
		if(vecIt->first < vecIt->second)
			std::swap(vecIt->first, vecIt->second);
	}
	std::sort(sortMethod.pairValues.begin(), sortMethod.pairValues.end(), sortBySecond);
	std::vector<std::pair<int, int> >::iterator vecIt2 = sortMethod.pairValues.begin();
	for(; vecIt2 != sortMethod.pairValues.end(); vecIt2++)
	{
		sortMethod.Output.push_back(vecIt2->first);
		sortMethod.insertedValues.push_back(vecIt2->second);
	}
	std::vector<int>::iterator insIt = sortMethod.insertedValues.begin();
	for(; insIt != sortMethod.insertedValues.end(); insIt++)
	{
		std::vector<int>::iterator pos 
			= std::upper_bound(sortMethod.Output.begin(), sortMethod.Output.end(), *insIt);
		sortMethod.Output.insert(pos, *insIt);
	}
	std::vector<int>::iterator outIt = sortMethod.Output.begin();
}