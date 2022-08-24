#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j; //should not create a leak
	delete i;
	const Animal *animals[12];
	int loop = 0;
	while (loop < 12)
	{
		if(loop < 6)
			animals[loop] = new Cat();
		else
			animals[loop] = new Dog();
		loop++;
	}
	loop = 0;
	while (loop < 12)
	{
		delete animals[loop];
		loop++;
	}
}