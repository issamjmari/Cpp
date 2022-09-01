#include "Span.hpp"


int main()
{
	std::cout << "subject test : \n";
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(19);
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "My test : \n";
	Span other(10000);
	other.addNumbers();
	std::cout << other.longestSpan() << std::endl;
	std::cout << other.shortestSpan() << std::endl;
}