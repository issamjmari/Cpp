#include "iter.hpp"
#include "TestClass.hpp"

int main()
{
	std::cout << "char array : \n";
	char char_arr[] = {'a', 'v', 'z', 't', 'f'};
	iter(char_arr, 5, f<char>);
	std::cout << "int array : \n";
	int int_arr[] = {25400, 4, 1, 190};
	iter(int_arr, 4, f<int>);
	std::cout << "TestClass array : \n";
	TestClass test_arr[3] = {TestClass(99), TestClass(80), TestClass(30)};
	iter(test_arr, 3, f<TestClass>);
}