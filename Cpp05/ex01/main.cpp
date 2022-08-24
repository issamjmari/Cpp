#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bur(6, "bur");
		Form form("Formy", 19, 19);
		
		std::cout << bur;
		std::cout << form;
		bur.signForm(form);
		form.beSigned(bur);
		bur.signForm(form);
		std::cout << bur;
		std::cout << form;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}