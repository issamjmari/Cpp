#ifndef DOG_HPP
#define DOG_HPP
	#include "Animal.hpp"
	#include "Brain.hpp"
	class Dog : public Animal
	{
		private:
			Brain *dog_ideas;
		public:
		Dog(void);
		Dog(const Dog &);
		~Dog(void);
		const std::string &getType(void) const;
		const Dog &operator=(const Dog &);
		void makeSound(void) const;
	} ;
#endif