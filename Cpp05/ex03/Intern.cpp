#include "Intern.hpp"

Form *Intern::makeForm(const std::string form, const std::string target)
{
	std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	ShrubberyCreationForm *s_form = new ShrubberyCreationForm(target);
	RobotomyRequestForm *r_form = new RobotomyRequestForm(target);
	PresidentialPardonForm *p_form = new PresidentialPardonForm(target);
	Form *form_arr[3] = {s_form, r_form, p_form};
	int index = ((form == arr[0]) * 0) + ((form == arr[1]) * 1) + ((form == arr[2]) * 2);
	if(index == 0 && (form != arr[0]))
	{
		std::cout << "Invalid form request\n";
		for (int i = 0; i < 3; i++)
				delete form_arr[i];
		return (NULL);
	}
	std::cout << "Intern creates " << form << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if(i != index)
			delete form_arr[i];
	}
	return (form_arr[index]);
}