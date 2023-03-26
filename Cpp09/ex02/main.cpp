#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "Error : program requires an array\n";
		exit(1);
	}
	PmergeMe sortMethod;
	sortMethod.pairingVector(ac, av);
	sortMethod.pairingDeque(ac, av);
}