#include "Span.hpp"

Span::Span(void)
{
}
Span::Span(const Span &ref) : N(ref.N), v(ref.v)
{
}
Span::~Span(void)
{
}
Span &Span::operator=(const Span &ref)
{
	N = ref.N;
	v = ref.v;
	return (*this);
}
Span::Span(unsigned int N_size) : N(N_size)
{
}

int &Span::operator[](unsigned int num)
{
	try
	{
		if(num >= v.size())
			throw std::runtime_error("number is not valid ");
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		return (v[0]);
	}
	return (v[num]);
}
void Span::addNumber(int number)
{
	try
	{
		if(v.size() == this->N)
			throw std::runtime_error("Can not add number, vector is already full\n");
		else
			v.push_back(number);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

int Span::shortestSpan(void)
{
	try
	{
		if(v.size() <= 1)
			throw std::runtime_error("ShortestSpan : There\
are not enough numbers\n");
		int smallest = 2147483647;
		std::vector<int> temp;
		temp = v;
		std::sort(temp.begin(), temp.end());
		unsigned int size_of = temp.size();
		for(unsigned int i = 0; i < size_of - 1; i++)
		{
			if(std::min(temp[i + 1] - temp[i], smallest) == \
		(temp[i + 1] - temp[i]))
				smallest = temp[i + 1] - temp[i];
		}
		return smallest;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		return (-1);
	}
	return (0);
}
int Span::longestSpan(void)
{
	try
	{
		if(v.size() <= 1)
			throw std::runtime_error("LongestSpan : There\
are not enough numbers\n");
		std::vector<int>::iterator smallest = std::min_element(v.begin(), v.end());
		std::vector<int>::iterator largest = std::max_element(v.begin(), v.end());
		return (*largest - *smallest);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		return (-1);
	}
	return (0);
}

void Span::addNumbers(int *first, int *last)
{
	for (; first < last; first++)
		addNumber(*first);
}