#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
	#include <string>
	#include <iostream>
	#include "GradeTooLowException.hpp"
	#include "GradeTooHighException.hpp"
	class Form;
	class Bureaucrat
	{
		private:
			const std::string Name;
			int					Grade;
			GradeTooHighException High_mem;
			GradeTooLowException Low_mem;
		public:
			Bureaucrat(void);
			Bureaucrat(int, const std::string);
			Bureaucrat(const Bureaucrat &);
			~Bureaucrat(void);
			void increment_grade(void);
			void decrement_grade(void);
			void executeForm(Form const & form);
			const std::string getName(void) const;
			int		getGrade(void) const;
			void	signForm(Form &ref);
			const Bureaucrat operator=(const Bureaucrat &);
	} ;
	std::ostream& operator<<(std::ostream &os, const Bureaucrat &ref);
#endif