#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		
		Form* rrf;
		rrf = someRandomIntern.makeForm("jhqwdqwd", "Zilavo propska");
		if(rrf != NULL)
			delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}