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
			throw std::runtime_error("vector is already full\n");
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
	// std::vector temp;
	// temp = v;
	// std::sort(temp, temp + temp.size());
	return 0;
}
int Span::longestSpan(void)
{
	std::vector<int> temp;
	temp = v;
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator smallest = std::min_element(temp.begin(), temp.end());
	std::vector<int>::iterator largest = std::max_element(temp.begin(), temp.end());
	return (*largest - *smallest);
}

// void addNumbers(void)
// {
	
// }