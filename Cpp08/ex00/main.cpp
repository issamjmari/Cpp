#include "easyfind.hpp"

int main()
{
	int arr1[] = {10, 20, 30, 16, 50};
	std::vector<int> vect(arr1, arr1 + 5);
	std::array<int, 5> myA = { 12, 3, 87, 166, 510 };
	int arr2[] = {12, 3, 87, 166, 510};
	int found1 = easyfind(vect, 1);
	int found2 = easyfind(myA, 166);
	std::cout << found1 << std::endl;
	std::cout << found2;
}