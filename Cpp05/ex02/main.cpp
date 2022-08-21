#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bur(80, "burA");
		RobotomyRequestForm a("Ali");
		a.execute(Bur);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}