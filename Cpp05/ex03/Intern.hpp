#ifndef INTERN_HPP
#define INTERN_HPP
	#include "Bureaucrat.hpp"
	#include "ShrubberyCreationForm.hpp"
	#include "RobotomyRequestForm.hpp"
	#include "PresidentialPardonForm.hpp"
	#include <iostream>
	#include <fstream>
	class Intern : public Bureaucrat 
	{
		public:
			Form *makeForm(const std::string, const std::string);
	} ;
#endif