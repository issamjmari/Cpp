#ifndef GRADE_TOO_LOW_HPP
#define GRADE_TOO_LOW_HPP
	#include <exception>
	class GradeTooLowException : public std::exception
	{
		const char * what() const throw();
	} ;
#endif