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

void	PmergeMe::insertSmallerVecValsToOutput( void )
{
	std::vector<std::pair<int, int> >::iterator vecIt = this->VecpairValues.begin();
	for(; vecIt != this->VecpairValues.end(); vecIt++)
	{
		if(vecIt->first < vecIt->second)
			std::swap(vecIt->first, vecIt->second);
	}
	std::sort(this->VecpairValues.begin(), this->VecpairValues.end(), sortBySecond);
	std::vector<std::pair<int, int> >::iterator vecIt2 = this->VecpairValues.begin();
	for(; vecIt2 != this->VecpairValues.end(); vecIt2++)
	{
		this->VecOutput.push_back(vecIt2->first);
		this->VecinsertedValues.push_back(vecIt2->second);
	}
	std::vector<int>::iterator insIt = this->VecinsertedValues.begin();
	for(; insIt != this->VecinsertedValues.end(); insIt++)
	{
		std::vector<int>::iterator pos 
			= std::upper_bound(this->VecOutput.begin(), this->VecOutput.end(), *insIt);
		this->VecOutput.insert(pos, *insIt);
	}
	if(this->isOdd)
	{
		std::vector<int>::iterator pos 
			= std::upper_bound(this->VecOutput.begin(), this->VecOutput.end(), leftOddNum);
		this->VecOutput.insert(pos, leftOddNum);
	}
}
void	PmergeMe::insertSmallerDeqValsToOutput( void )
{
	std::deque<std::pair<int, int> >::iterator DeqIt = this->DeqpairValues.begin();
	for(; DeqIt != this->DeqpairValues.end(); DeqIt++)
	{
		if(DeqIt->first < DeqIt->second)
			std::swap(DeqIt->first, DeqIt->second);
	}
	std::sort(this->DeqpairValues.begin(), this->DeqpairValues.end(), sortBySecond);
	std::deque<std::pair<int, int> >::iterator DeqIt2 = this->DeqpairValues.begin();
	for(; DeqIt2 != this->DeqpairValues.end(); DeqIt2++)
	{
		this->DeqOutput.push_back(DeqIt2->first);
		this->DeqinsertedValues.push_back(DeqIt2->second);
	}
	std::deque<int>::iterator insIt = this->DeqinsertedValues.begin();
	for(; insIt != this->DeqinsertedValues.end(); insIt++)
	{
		std::deque<int>::iterator pos 
			= std::upper_bound(this->DeqOutput.begin(), this->DeqOutput.end(), *insIt);
		this->DeqOutput.insert(pos, *insIt);
	}
	if(this->isOdd)
	{
		std::deque<int>::iterator pos 
			= std::upper_bound(this->DeqOutput.begin(), this->DeqOutput.end(), leftOddNum);
		this->DeqOutput.insert(pos, leftOddNum);
	}
	// std::deque<int>::iterator DeqIt3 = this->DeqOutput.begin();
	// 	std::cout << "deque sorted : \n";
	// for(; DeqIt3 != this->DeqOutput.end(); DeqIt3++)
	// {
	// 	std::cout << *DeqIt3 << std::endl;
	// }
}
void	PmergeMe::printVecAlgoTime( void )
{
	gettimeofday(&end_time1, NULL);
	long seconds = end_time1.tv_sec - start_time1.tv_sec;
    long microseconds = end_time1.tv_usec - start_time1.tv_usec;
	std::cout << "seconds " << seconds;
	std::cout << "microseconds " << microseconds << std::endl;
    double duration = seconds + (double)microseconds / 1000000;
	std::cout << "Time to process a range of " << this->vecSize - 1 << " elements with std::vector : " << duration << " us" << std::endl;
}
void	PmergeMe::printDeqAlgoTime( void )
{
	gettimeofday(&end_time2, NULL);
	long seconds = end_time2.tv_sec - start_time2.tv_sec;
    long microseconds = end_time2.tv_usec - start_time2.tv_usec;
	std::cout << "seconds " << seconds;
	std::cout << "microseconds " << microseconds << std::endl;
    float duration = seconds + (float)microseconds / 1000000;
	std::cout << "Time to process a range of " << this->vecSize - 1 << " elements with std::deque : " << duration << " us" << std::endl;
}
void PmergeMe::pairingVector( int vecSize , char **vector)
{
	this->vecSize = vecSize;
    gettimeofday(&start_time1, NULL);
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
					this->VecpairValues.push_back(std::make_pair(num1, num2));
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
					this->VecpairValues.push_back(std::make_pair(num1, num2));
				}
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: something wrong happened\n";
			exit(1);
		}
	}
	insertSmallerVecValsToOutput();
	std::cout << "Before: ";
	for(int i = 1; i < vecSize; i++)
		std::cout << vector[i] << " ";
	std::cout << "\n";
	std::cout << "After: ";
	std::vector<int>::iterator outIt = this->VecOutput.begin();
	for(; outIt != this->VecOutput.end(); outIt++)
	{
		std::cout << *outIt << " ";
	}
	std::cout << "\n";
	printVecAlgoTime();
}
void PmergeMe::pairingDeque( int vecSize , char **vector)
{
	this->vecSize = vecSize;
    gettimeofday(&start_time2, NULL);
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
					this->DeqpairValues.push_back(std::make_pair(num1, num2));
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
					this->DeqpairValues.push_back(std::make_pair(num1, num2));
				}
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: something wrong happened\n";
			exit(1);
		}
	}
	insertSmallerDeqValsToOutput();
	printDeqAlgoTime();
}

