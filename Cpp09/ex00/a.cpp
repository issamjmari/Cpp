#include <algorithm>
#include <iostream>
#include <map>
int main()
{
	std::map<int, int, std::greater<int>> m = {{1,2}, {3,9}, {5,6}};
	std::map<int, int>::iterator num = m.lower_bound(2);
	std::cout << num->second << std::endl;
}