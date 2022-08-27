#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>

void identify(base& p)
{
	A a;
	B b;
	C c;
	try
	{
		A &ref = dynamic_cast<A &> (p);
		std::cout << "A\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		B &ref = dynamic_cast<B &> (p);
		std::cout << "B\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		C &ref = dynamic_cast<C &> (p);
		std::cout << "C\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
}
void identify(base* p)
{
	A a;
	B b;
	C c;
	if(dynamic_cast<A *> (p) != nullptr)
	{
		std::cout << "A" << std::endl;
	}
	else if(dynamic_cast<B *> (p) != nullptr)
	{
		std::cout << "B" << std::endl;
	}
	else if(dynamic_cast<C *> (p) != nullptr)
	{
		std::cout << "C" << std::endl;
	}
}
base * generate(void)
{
	A a;
	B b;
	C c;
	base *arr[3] = {&a, &b, &c};
	srand(time(NULL));
	int randNum = rand() % 3;
	return (arr[randNum]);
	return (arr[randNum]);
}
int main()
{
	base *a = generate();
	identify(*a);
}