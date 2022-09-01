#include "easyfind.hpp"
int main()
{
	int arr[] = {10, 20, 30, 16, 50};
	std::vector<int> vect(arr, arr + 5);
	std::array<int, 5> myA = { 9, 7, 5, 3, 1 };
	int found = easyfind(myA, 1);
	std::cout << found;
}