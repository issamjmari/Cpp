#include "Form.hpp"

const std::string Form::get_Name(void) const
{
	return (this->Name);
}
bool		Form::get_v_signed(void) const
{
	return (this->v_signed);
}
int	Form::get_grade_sign(void) const
{
	return (this->grade_sign);
}
int	Form::get_grade_exec(void) const
{
	return (this->grade_exec);
}

Form::Form(const std::string p_Name, const int grade_s, const int grade_ex) : Name(p_Name), v_signed(0) , grade_sign(grade_s),\
grade_exec(grade_ex)
{
	if(grade_ex > 150 || grade_s > 150)
		throw Low_mem;
	if(grade_ex < 1 || grade_s < 1)
		throw High_mem;
}
Form::Form(void) : Name(""), v_signed(0), grade_sign(1), grade_exec(1)
{

}
Form::Form(const Form &ref)  : v_signed(0) , grade_sign(ref.grade_sign), grade_exec(ref.grade_exec)
{
}

void	Form::beSigned(Bureaucrat &Bur)
{
	if(Bur.getGrade() <= this->grade_sign)
		v_signed = 1;
	else
		throw Low_mem;
}
void Form::operator=(const Form &)
{
}
std::ostream& operator<<(std::ostream &os, const Form &ref)
{
	std::cout << "Form " << ref.get_Name() << " has sign grade " << ref.get_grade_sign() <<\
" and execution grade " << ref.get_grade_exec() << std::endl;
	return os;
}
Form::~Form(void)
{
}