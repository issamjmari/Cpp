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
		Bureaucrat Bur(30, "burA");

		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Zilavo propska");
		if(rrf != NULL)
		{
			rrf->execute(Bur);
			delete rrf;
		}
		Form *other;
		other = someRandomIntern.makeForm("shrubbery creation", "POLO");
		if(other != NULL)
		{
			other->execute(Bur);
			delete other;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}