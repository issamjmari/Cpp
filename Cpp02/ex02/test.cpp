#include <iostream>
#include <cmath>
int main()
{
	int i = 7;
	int j = 9;
	int *p = &++i;
	std::cout << *p;
}