#ifndef DOG_HPP
#define DOG_HPP
	#include "Animal.hpp"
	class Dog : public Animal
	{
		public:
		Dog(void);
		Dog(const Dog &);
		~Dog(void);
		const std::string &getType(void) const;
		const Dog &operator=(const Dog &);
		void makeSound(void) const;
	} ;
#endif