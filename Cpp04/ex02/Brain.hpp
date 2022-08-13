#ifndef BRAIN_HPP
#define BRAIN_HPP
	#include <string>
	#include <iostream>
	class Brain
	{
		private:
			std::string ideas[100];
		public:
			Brain(void);
			Brain(const Brain &);
			~Brain(void);
			const Brain &operator=(const Brain &);
			const std::string *get_ideas(void);
	} ;
#endif