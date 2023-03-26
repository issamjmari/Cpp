#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : isOdd(0), leftOddNum(0)
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
	std::sort(this->VecpairValues.begin(), this->VecpairValues.end(), sortBySecond);
	std::vector<std::pair<int, int> >::iterator vecIt2 = this->VecpairValues.begin();
	for(; vecIt2 != this->VecpairValues.end(); vecIt2++)
	{
		if(vecIt2->first < vecIt2->second)
			std::swap(vecIt2->first, vecIt2->second);
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
}
void	PmergeMe::insertSmallerDeqValsToOutput( void )
{
	std::sort(this->DeqpairValues.begin(), this->DeqpairValues.end(), sortBySecond);
	std::deque<std::pair<int, int> >::iterator DeqIt2 = this->DeqpairValues.begin();
	for(; DeqIt2 != this->DeqpairValues.end(); DeqIt2++)
	{
		if(DeqIt2->first < DeqIt2->second)
			std::swap(DeqIt2->first, DeqIt2->second);
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
}
void	PmergeMe::printVecAlgoTime( void )
{
	std::cout << "Time to process a range of " << this->vecSize <<
            " elements with std::vector : "<< this->VecexecuteTime << " us\n";
}
void	PmergeMe::printDeqAlgoTime( void )
{
	gettimeofday(&end_time2, NULL);
	std::cout << "Time to process a range of " << this->vecSize <<
            " elements with std::deque : "<< (static_cast<float>(((end_time2.tv_sec) / 1000000 + end_time2.tv_usec) -
            ((start_time2.tv_sec) / 1000000.0 + start_time2.tv_usec))) << " us\n";
}
void PmergeMe::pairingVector( int vecSize , char **vector)
{
	this->vecSize = vecSize;
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
					num1 = std::atoi(currentArr);
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::atoi(currentArr);
					i++;
					this->VecpairValues.push_back(std::make_pair(num1, num2));
				}
			}
			this->VecinsertedValues.insert(this->VecinsertedValues.begin(), atoi(vector[i]));
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
					num1 = std::atoi(currentArr);
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::atoi(currentArr);
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
	gettimeofday(&this->start_time1, NULL);
	insertSmallerVecValsToOutput();
	gettimeofday(&this->end_time1, NULL);
	this->VecexecuteTime =  static_cast<float>(((end_time1.tv_sec) / 1000000 + end_time1.tv_usec) -
            ((start_time1.tv_sec) / 1000000.0 + start_time1.tv_usec));
	std::cout << "Before: ";
	for(int i = 1; i < vecSize; i++)
		std::cout << vector[i] << " ";
	std::cout << "\n";
	std::cout << "After: ";
	std::vector<int>::iterator outIt = this->VecOutput.begin();
	for(; outIt != this->VecOutput.end(); outIt++)
		std::cout << *outIt << " ";
	std::cout << "\n";
	printVecAlgoTime();
}
void PmergeMe::pairingDeque( int vecSize , char **vector)
{
	this->vecSize = vecSize;
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
					num1 = std::atoi(currentArr);
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::atoi(currentArr);
					i++;
					this->DeqpairValues.push_back(std::make_pair(num1, num2));
				}
			}
			this->DeqinsertedValues.insert(this->DeqinsertedValues.begin(), atoi(vector[i]));
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
					num1 = std::atoi(currentArr);
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					num2 = std::atoi(currentArr);
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
	gettimeofday(&this->start_time2, NULL);
	insertSmallerDeqValsToOutput();
	printDeqAlgoTime();
}

