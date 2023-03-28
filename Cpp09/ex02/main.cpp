#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "Error : program requires an array\n";
		exit(1);
	}
	PmergeMe sortMethod;
	try
	{
		sortMethod.pairingVector(ac, av);
		sortMethod.pairingDeque(ac, av);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
}