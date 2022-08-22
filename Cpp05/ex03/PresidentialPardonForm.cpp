#include "PresidentialPardonForm.hpp"

void pardoned(std::string target)
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
PresidentialPardonForm::PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->get_grade_sign()
	&& executor.getGrade() <= this->get_grade_sign())
		pardoned(this->get_Name());
	else
		throw Low_mem;
}