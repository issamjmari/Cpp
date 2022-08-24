#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bur(30, "burA");
		std::cout << "************* Shurubbery *****************\n";
		ShrubberyCreationForm a("shrubby");
		Bur.executeForm(a);
		std::cout << "*************** Robotomy ***************\n";
		RobotomyRequestForm b("Roby");
		b.execute(Bur);
		std::cout << "*************** Zaphod Beeblebrox pardon ***************\n";
		PresidentialPardonForm c("Clammoro");
		Bur.executeForm(c);
		c.execute(Bur);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}