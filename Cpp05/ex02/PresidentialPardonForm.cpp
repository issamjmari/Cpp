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

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref)
{
	// (*this) = ref;
	// return (*this);
}
// const  PresidentialPardonForm PresidentialPardonForm::operator=(const  PresidentialPardonForm &)
// {

// }
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