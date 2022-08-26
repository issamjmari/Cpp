#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void)
{
	std::cout << "A bureaucrat is created\n";
}

Bureaucrat::Bureaucrat(int grade, const std::string p_Name) : Name(p_Name)
{
	std::cout << "A bureaucrat is created\n";
	if (grade < 1)
		throw High_mem;
	else if(grade > 150)
		throw Low_mem;
	else
	{
		this->Grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : Name(ref.Name), Grade(ref.Grade)
{
	std::cout << "A bureaucrat is created\n";
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "A bureaucrat is destroyed\n";
}
void Bureaucrat::increment_grade(void)
{
	this->Grade--;
	if (this->Grade < 1)
		throw High_mem;
}
void Bureaucrat::decrement_grade(void)
{
	this->Grade++;
	if(this->Grade > 150)
		throw Low_mem;
}
const std::string Bureaucrat::getName(void) const
{
	return (this->Name);
}

void	Bureaucrat::signForm(Form &form)
{
	if(form.get_v_signed())
		std::cout << this->Name << " signed " << form.get_Name() << std::endl;
	else if(form.get_grade_sign() > this->Grade && !form.get_v_signed())
		std::cout << this->Name << " couldn't sign " << form.get_Name() << " because he didn't ask for a sign yet\n";
	else
		std::cout << this->Name << " couldn't sign " << form.get_Name() << " because Bureaucrat grade is too low\n";
}
int		Bureaucrat::getGrade(void) const
{
	return (this->Grade);
}
const Bureaucrat Bureaucrat::operator=(const Bureaucrat &ref)
{
	return (Bureaucrat(ref.Grade, ref.Name));
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &ref)
{
	std::cout << ref.getName() << ", bureaucrat grade " << ref.getGrade() << ".\n";
	return os;
}

void Bureaucrat::executeForm(Form const & form)
{
	if(form.get_grade_sign() > this->Grade && form.get_grade_exec() > this->Grade)
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.get_Name() << std::endl;
	}
	else
		std::cout << "Bureaucrat " << this->Name << " failed executing form\n";
}