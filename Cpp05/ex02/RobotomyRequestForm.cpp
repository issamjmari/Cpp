#include "RobotomyRequestForm.hpp"

void	robotomize_it(std::string target)
{
	srand(time(0));
	int ra = 1 + (rand() % 100);
	std::cout << ra << "\n";
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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref)
{
	// (*this) = ref;
	// return (*this);
}
// const  RobotomyRequestForm RobotomyRequestForm::operator=(const  RobotomyRequestForm &)
// {

// }
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->get_grade_sign()
	&& executor.getGrade() <= this->get_grade_sign())
	{
		robotomize_it(this->get_Name());
		return (1);
	}
	else
	{
		return (0);
		throw Low_mem;
	}
}