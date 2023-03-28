#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : biggest(-1), is_sorted(1), isOdd(0)
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


bool PmergeMe::isVecsorted(std::vector<int>& vec) 
{
	if(vec.size() < 2) return false;
    for (size_t i = 1; i < vec.size(); i++) {
        if (vec[i] < vec[i - 1]) 
		{
            return false;
        }
    }
    return true;
}
bool PmergeMe::isDeqsorted(std::deque<int> &deq) 
{
	if(deq.size() < 2) return false;
    for (size_t i = 1; i < deq.size(); i++) {
        if (deq[i] < deq[i - 1]) 
            return false;
    }
    return true;
}

bool	PmergeMe::sortByFirst(std::pair<int, int> &firstPair
   , std::pair<int, int> &secondPair )
{
	return firstPair.first < secondPair.first;
}

void	PmergeMe::errorCause( const char *s)
{
	std::cout << s << std::endl;
	exit(1);
}
void	PmergeMe::insertSmallerVecValsToOutput( void )
{
	std::vector<std::pair<int, int> >::iterator vecIt = this->VecpairValues.begin();
	for(; vecIt != this->VecpairValues.end(); vecIt++)
	{
		if(vecIt->first < vecIt->second)
			std::swap(vecIt->first, vecIt->second);
	}
	std::sort(this->VecpairValues.begin(), this->VecpairValues.end(), sortByFirst);
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
}
void	PmergeMe::insertSmallerDeqValsToOutput( void )
{
	std::deque<std::pair<int, int> >::iterator DeqIt = this->DeqpairValues.begin();
	for(; DeqIt != this->DeqpairValues.end(); DeqIt++)
	{
		if(DeqIt->first < DeqIt->second)
			std::swap(DeqIt->first, DeqIt->second);
	}
	std::sort(this->DeqpairValues.begin(), this->DeqpairValues.end(), sortByFirst);
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
}
void	PmergeMe::printVecAlgoTime( void )
{
	std::cout << "Time to process a range of " << this->vecSize - 1 <<
            " elements with std::vector : "<< this->VecexecuteTime << " us\n";
}
void	PmergeMe::printDeqAlgoTime( void )
{
	gettimeofday(&end_time2, NULL);
	std::cout << "Time to process a range of " << this->vecSize - 1 <<
            " elements with std::deque : "<< (static_cast<float>(((end_time2.tv_sec) / 1000000 + end_time2.tv_usec) -
            ((start_time2.tv_sec) / 1000000.0 + start_time2.tv_usec))) << " us\n";
}

bool 	PmergeMe::isAllDigit( std::string &str )
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
			return 0;
	}
	return 1;
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
					std::string str = std::string(currentArr); 
					if(!isAllDigit(str))
					{
						std::cout << "input " << str << " is not a positive integer\n";
						exit(1);
					}
					num1 = std::atoi(currentArr);
					if(num1 < 0)
					{
						std::cout << "number " << currentArr << " is too large for an integer\n";
						exit(1);
					}
					if(num1 < this->biggest)
						this->is_sorted = false;
					this->biggest = num1;
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					std::string str = std::string(currentArr); 
					if(!isAllDigit(str))
					{
						std::cout << "input " << str << " is not a positive integer\n";
						exit(1);
					}
					num2 = std::atoi(currentArr);
					if(num2 < 0)
					{
						std::cout << "number " << currentArr << " is too large for an integer\n";
						exit(1);
					}
					if(num2 < this->biggest)
						this->is_sorted = false;
					this->biggest = num2;
					i++;
					this->VecpairValues.push_back(std::make_pair(num1, num2));
				}
			}
			std::string str = std::string(vector[i]); 
			if(!isAllDigit(str))
			{
				std::cout << "input " << str << " is not a positive integer\n";
				exit(1);
			}
			int last_num = atoi(vector[i]);
			if(last_num < 0)
			{
				std::cout << "number " << vector[i] << " is too large for an integer\n";
				exit(1);
			}
			if(last_num < this->biggest)
				this->is_sorted = false;
			this->VecinsertedValues.insert(this->VecinsertedValues.begin(), last_num);
		}
		catch(const std::exception& e)
		{
			errorCause("Error: something wrong happened");
		}
		if(this->is_sorted == true)
		{
			std::cout << "array is already sorted\n";
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
					std::string str = std::string(vector[i]); 
					if(!isAllDigit(str))
					{
						std::cout << "input " << str << " is not a positive integer\n";
						exit(1);
					}
					num1 = std::atoi(currentArr);
					if(num1 < 0)
					{
						std::cout << "number " << currentArr << " is too large for an integer\n";
						exit(1);
					}
					if(num1 < this->biggest)
						this->is_sorted = false;
					this->biggest = num1;
					i++;
				}
				currentArr = vector[i];
				if(currentArr)
				{
					std::string str = std::string(vector[i]); 
					if(!isAllDigit(str))
					{
						std::cout << "input " << str << " is not a positive integer\n";
						exit(1);
					}
					num2 = std::atoi(currentArr);
					if(num2 < 0)
					{
						std::cout << "number " << currentArr << " is too large for an integer\n";
						exit(1);
					}
					if(num2 < this->biggest)
						this->is_sorted = false;
					this->biggest = num2;
					i++;
					this->VecpairValues.push_back(std::make_pair(num1, num2));
				}
			}
		}
		catch(const std::exception& e)
		{
			errorCause("Error: something wrong happened");
		}
		if(this->is_sorted == true)
		{
			std::cout << "array is already sorted\n";
			exit(1);
		}
	}
	gettimeofday(&this->start_time1, NULL);
	insertSmallerVecValsToOutput();
	gettimeofday(&this->end_time1, NULL);
	this->VecexecuteTime =  static_cast<float>(((end_time1.tv_sec) / 1000000.0 + end_time1.tv_usec) -
            ((start_time1.tv_sec) / 1000000.0 + start_time1.tv_usec));
	std::cout << "Before: ";
	for(int i = 1; i < vecSize; i++)
	{
		if(i > 5)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << vector[i] << " ";
	}
	std::cout << "\n";
	std::cout << "After: ";
	std::vector<int>::iterator outIt = this->VecOutput.begin();
	for(int i = 0; outIt != this->VecOutput.end(); outIt++, i++)
	{
		if(i > 4)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *outIt << " ";
	}
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
			errorCause("Error: something wrong happened");
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
			errorCause("Error: something wrong happened");
		}
	}
	gettimeofday(&this->start_time2, NULL);
	insertSmallerDeqValsToOutput();
	printDeqAlgoTime();
}

