#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>

void identify(Base& p)
{
	try
	{
		A &ref = dynamic_cast<A &> (p);
		(void) ref;
		std::cout << "A\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		B &ref = dynamic_cast<B &> (p);
		(void) ref;
		std::cout << "B\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		C &ref = dynamic_cast<C &> (p);
		(void) ref;
		std::cout << "C\n";
		return ;
	}
	catch(std::exception &e)
	{
	}
}
void identify(Base* p)
{
	if(dynamic_cast<A *> (p) != nullptr)
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B *> (p) != nullptr)
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C *> (p) != nullptr)
		std::cout << "C" << std::endl;
}
Base * generate(void)
{
	srand(time(NULL));
	int randNum = rand() % 3;
	if (randNum == 0)
		return (new A());
	if (randNum == 1)
		return (new B());
	return (new C());
}
int main()
{
	Base *a = generate();
	identify(a);
	identify(*a);
}