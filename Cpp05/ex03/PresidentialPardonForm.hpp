#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
	#include "Form.hpp"
	class PresidentialPardonForm : public Form
	{
		public:
			PresidentialPardonForm(void);
			PresidentialPardonForm(const std::string target);
			void execute(Bureaucrat const & executor) const;
			const PresidentialPardonForm	operator=(const PresidentialPardonForm &);
			PresidentialPardonForm(const PresidentialPardonForm &ref);
			~PresidentialPardonForm(void);
	} ;
#endif