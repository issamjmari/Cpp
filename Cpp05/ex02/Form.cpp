#include "Form.hpp"
#include "Bureaucrat.hpp"

const std::string Form::get_Name(void) const
{
	return (this->Name);
}
bool		Form::get_v_signed(void) const
{
	return (this->v_signed);
}
const int	Form::get_grade_sign(void) const
{
	return (this->grade_sign);
}
const int	Form::get_grade_exec(void) const
{
	return (this->grade_exec);
}

void		Form::set_Name(const std::string s)
{
	this->Name = s;
}
void		Form::set_v_signed(bool _sign)
{
	this->v_signed = _sign;
}
void		Form::set_grade_sign(const int g_sign)
{
	this->grade_sign = g_sign;
}
void		Form::set_grade_exec(const int g_exec)
{
	this->grade_exec = g_exec;
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
const Form Form::operator=(const Form &ref)
{
	return (Form(ref.Name, ref.grade_sign, ref.grade_exec));
}
void	Form::beSigned(Bureaucrat &Bur)
{
	if(Bur.getGrade() <= this->grade_sign)
		v_signed = 1;
	else
		throw Low_mem;
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