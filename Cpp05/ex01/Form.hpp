#ifndef FORM_HPP
#define FORM_HPP
	#include <string>
	#include "GradeTooLowException.hpp"
	#include "GradeTooHighException.hpp"
	class Bureaucrat;
	class Form
	{
		private:
			const std::string Name;
			bool			  v_signed;
			const 	int			grade_sign;
			const	int			grade_exec;
		public:
			GradeTooHighException High_mem;
			GradeTooLowException Low_mem;
			const std::string get_Name(void) const;
			bool		get_v_signed(void) const;
			int	get_grade_sign(void) const;
			int	get_grade_exec(void) const;
			Form(const std::string, const int grade_s, const int grade_ex);
			Form(void);
			Form(const Form &ref);
			const Form operator=(const Form &);
			void	beSigned(Bureaucrat &ref);
			~Form(void);
	} ;
	std::ostream& operator<<(std::ostream &os, const Form &ref);
#endif