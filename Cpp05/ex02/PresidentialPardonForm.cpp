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

const PresidentialPardonForm	PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
  return (PresidentialPardonForm(ref.get_Name()));
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : Form(ref.get_Name(), ref.get_grade_sign(), ref.get_grade_exec())
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