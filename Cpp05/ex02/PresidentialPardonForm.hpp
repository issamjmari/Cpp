#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
	#include "Form.hpp"
	class PresidentialPardonForm : public Form
	{
		Public:
			PresidentialPardonForm(void)
			PresidentialPardonForm(const PresidentialPardonForm &);
			const  PresidentialPardonForm operator=(const  PresidentialPardonForm &);
			~PresidentialPardonForm(void);
	} ;
#endif