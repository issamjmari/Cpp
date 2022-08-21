#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a(9, "B_1");
		Bureaucrat b(a);
		Bureaucrat c(1, "C_1");
		std::cout << a;
		std::cout << b;
		std::cout << c;
		c.increment_grade();
		std::cout << c;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}