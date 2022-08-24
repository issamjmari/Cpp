#ifndef ANIMAL_HPP
#define ANIMAL_HPP
	#include <string>
	#include <iostream>
	class Animal
	{
		protected:
			std::string type;
		public:
			Animal(void);
			Animal(const Animal &);
			virtual ~Animal(void);
			virtual const std::string &getType(void) const;
			const Animal &operator=(const Animal &);
			virtual void makeSound(void) const;
	} ;
#endif