
#include "BitcoinExchange.hpp"

int main(int ac, char **argv)
{
	if(ac > 2)
	{
		std::cout << "Error: too many arguments.\n";
		exit (1);
	}
	if(ac == 1)
	{
		std::cout << "Error: could not open file.\n";
		exit (1);
	}

	BitcoinExchange exchange;
	try
	{
		exchange.fillExchangeRates();
	}
	catch(const std::exception& e)
	{
		std::cerr << "database had problems" << '\n';
		std::cerr << "the problem was : " << e.what() << '\n';
		return 1;
	}
	try
	{
		exchange.getDateAndVal(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "database had problems" << '\n';
		std::cerr << "the problem was : " << e.what() << '\n';
		return 1;
	}
}