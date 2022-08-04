#include <iostream>
#include <cmath>
int main()
{
	float a = roundf(0.00390625 * (1 << 8));
	std::cout << (float) (a) / (float)(1 << 8);
}