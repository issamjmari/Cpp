#include "Span.hpp"


int main()
{
	std::cout << "42 test : \n";
	Span sp = Span(100);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "My test : \n";
	Span other(10000);
	other.addNumbers();
	std::cout << other.longestSpan() << std::endl;
	std::cout << other.shortestSpan() << std::endl;
}