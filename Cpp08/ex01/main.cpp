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
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "My test : \n";
	int arr[10500];
	srand(time(NULL));
	int i = 0;
	while (i < 10500)
		arr[i++] = rand();
	Span other(10500);
	other.addNumbers(arr, arr + 10500);
	std::cout << other.longestSpan() << std::endl;
	std::cout << other.shortestSpan() << std::endl;
}