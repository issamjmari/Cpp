#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
	#include "WrongAnimal.hpp"
	class WrongCat : public WrongAnimal
	{
		public:
			WrongCat(void);
			WrongCat(const WrongCat &);
			~WrongCat(void);
			const WrongCat &operator=(const WrongCat &);
	} ;
#endif