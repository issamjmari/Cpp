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
			GradeTooHighException High_mem;
			GradeTooLowException Low_mem;
		public:
			const std::string get_Name(void) const;
			bool		get_v_signed(void) const;
			const int	get_grade_sign(void) const;
			const int	get_grade_exec(void) const;
			void		set_Name(const std::string)
			void		set_v_signed(bool);
			void		set_grade_sign(const int);
			void		set_grade_exec(const int);
			Form(const std::string, const int grade_s, const int grade_ex);
			Form(void);
			Form(const Form &ref);
			void execute(Bureaucrat const & executor) const;
			const Form operator=(const Form &);
			~Form(void);
			void	beSigned(Bureaucrat &ref);
	} ;
	std::ostream& operator<<(std::ostream &os, const Form &ref);
#endif