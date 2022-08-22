#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bur(30, "burA");
		ShrubberyCreationForm a("shrubby");
		Bur.executeForm(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}