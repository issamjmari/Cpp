#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
	#include <string>
	#include <iostream>
	class WrongAnimal
	{
		protected:
			std::string type;
		public:
			WrongAnimal(void);
			WrongAnimal(const WrongAnimal &);
			~WrongAnimal(void);
			const std::string &getType(void) const;
			const WrongAnimal &operator=(const WrongAnimal &);
			void makeSound(void) const;
	} ;
#endif