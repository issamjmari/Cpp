#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
	#include "Form.hpp"
	class RobotomyRequestForm : public Form
	{
		Public:
			RobotomyRequestForm(void)
			RobotomyRequestForm(const RobotomyRequestForm &);
			const  RobotomyRequestForm operator=(const  RobotomyRequestForm &);
			~RobotomyRequestForm(void);
	} ;
#endif