#include "iter.hpp"
#include "TestClass.hpp"

int main()
{
	TestClass a(5);
	TestClass b(6);
	TestClass c(7);
	TestClass arr[3] = {a, b, c};
	iter(arr, 3, f<TestClass>);
}