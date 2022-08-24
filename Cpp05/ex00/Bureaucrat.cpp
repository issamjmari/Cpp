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
		this->Grade = grade;
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