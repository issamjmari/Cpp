#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
	#include "Form.hpp"
	#include <iostream>
	#include <fstream>
	class ShrubberyCreationForm : public Form
	{
		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(const std::string target);
			void execute(Bureaucrat const & executor) const;
			const ShrubberyCreationForm	operator=(const ShrubberyCreationForm &);
			ShrubberyCreationForm(const ShrubberyCreationForm &ref);
			~ShrubberyCreationForm(void);
	} ;
#endif