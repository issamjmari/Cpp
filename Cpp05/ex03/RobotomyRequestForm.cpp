#include "RobotomyRequestForm.hpp"

void	robotomize_it(std::string target)
{
	srand(time(0));
	int ra = 1 + (rand() % 100);
	std::cout << "drrrrrr ... drrrrrr\n";
	std::cout << "drrrrrr ... drrrrrr\n";
	std::cout << "drrrrrr ... drrrrrr\n";
	std::cout << "drrrrrr ... drrrrrr\n";
	std::cout << "drrrrrr ... drrrrrr\n";
	std::cout << "drrrrrr ... drrrrrr\n";
	if(ra < 50)
		std::cout << target << " has been robotomized successfully\n";
	else
		std::cout << "robotomy failed\n";
}
RobotomyRequestForm::RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45)
{
}
const RobotomyRequestForm	RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
  return (RobotomyRequestForm(ref.get_Name()));
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : Form(ref.get_Name(), ref.get_grade_sign(), ref.get_grade_exec())
{
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->get_grade_sign()
	&& executor.getGrade() <= this->get_grade_sign())
	{
		robotomize_it(this->get_Name());
	}
	else
		throw Low_mem;
}