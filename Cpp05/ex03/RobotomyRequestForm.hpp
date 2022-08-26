#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
	#include "Form.hpp"
	#include <cstdlib>
	#include <ctime>
	class RobotomyRequestForm : public Form
	{
		public:
			RobotomyRequestForm(void);
			RobotomyRequestForm(const std::string target);
			void execute(Bureaucrat const & executor) const;
			const RobotomyRequestForm	operator=(const RobotomyRequestForm &);
			RobotomyRequestForm(const RobotomyRequestForm &ref);
			~RobotomyRequestForm(void);
	} ;
#endif