#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : isOdd(0), leftOddNum(-1)
{

}
PmergeMe::PmergeMe(const PmergeMe &)
{

}
PmergeMe::~PmergeMe(void)
{

}
PmergeMe &PmergeMe::operator=(const PmergeMe &)
{
	return *this;
}

bool	PmergeMe::sortBySecond(std::pair<int, int> &firstPair
   , std::pair<int, int> &secondPair )
{
	return firstPair.first < secondPair.first;
}

void	PmergeMe::insertSmallerValsToOutput( void )
{
	std::vector<std::pair<int, int> >::iterator vecIt = this->pairValues.begin();
	for(; vecIt != this->pairValues.end(); vecIt++)
	{
		if(vecIt->first < vecIt->second)
			std::swap(vecIt->first, vecIt->second);
	}
	std::sort(this->pairValues.begin(), this->pairValues.end(), sortBySecond);
	std::vector<std::pair<int, int> >::iterator vecIt2 = this->pairValues.begin();
	for(; vecIt2 != this->pairValues.end(); vecIt2++)
	{
		this->Output.push_back(vecIt2->first);
		this->insertedValues.push_back(vecIt2->second);
	}
	std::vector<int>::iterator insIt = this->insertedValues.begin();
	for(; insIt != this->insertedValues.end(); insIt++)
	{
		std::vector<int>::iterator pos 
			= std::upper_bound(this->Output.begin(), this->Output.end(), *insIt);
		this->Output.insert(pos, *insIt);
	}
	if(this->isOdd)
	{
		std::vector<int>::iterator pos 
			= std::upper_bound(this->Output.begin(), this->Output.end(), leftOddNum);
		this->Output.insert(pos, leftOddNum);
	}
}
void	PmergeMe::printAlgoTime( void )
{
	this->algoEnd = clock();
	double duration = (double)(this->algoEnd - this->algoBeg) / ((double)CLOCKS_PER_SEC / 1000000);
	std::cout << "Time to process a range of " << this->vecSize - 1 << " elements with std::vector : " << duration << " us" << std::endl;
}
void PmergeMe::pairingVector( int vecSize , char **vector)
{
	this->vecSize = vecSize;
	this->algoBeg = clock();
	if((vecSize - 1) % 2 != 0)
		this->isOdd = true;
	if(this->isOdd)
	{
		try
		{
			int i = 1;
			while(i < vecSize - 1)
			{
				int num1 = 0, num2 = 0;
				char *currentArr = vector[i];
				if(currentArr)
				{
					num1 = std::stoi(std::string(currentArr));
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::stoi(std::string(currentArr));
					i++;
					this->pairValues.push_back(std::make_pair(num1, num2));
				}
			}
			this->leftOddNum = std::stoi(vector[i]);
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
			while(i < vecSize - 1)
			{
				int num1 = 0, num2 = 0;
				char *currentArr = vector[i];
				if(currentArr)
				{
					num1 = std::stoi(std::string(currentArr));
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::stoi(std::string(currentArr));
					i++;
					this->pairValues.push_back(std::make_pair(num1, num2));
				}
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: something wrong happened\n";
			exit(1);
		}
	}
	insertSmallerValsToOutput();
	std::cout << "Before: ";
	for(int i = 1; i < vecSize; i++)
		std::cout << vector[i] << " ";
	std::cout << "\n";
	std::cout << "After: ";
	std::vector<int>::iterator outIt = this->Output.begin();
	for(; outIt != this->Output.end(); outIt++)
	{
		std::cout << *outIt << " ";
	}
	std::cout << "\n";
	printAlgoTime();
}