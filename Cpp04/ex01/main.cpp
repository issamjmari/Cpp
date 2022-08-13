#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
void f()
{
	const Animal *animals[13];
	int loop = 0;
	while (loop < 13)
	{
		if(loop < 6)
			animals[loop] = new Cat();
		else
			animals[loop] = new Dog();
		loop++;
	}
	loop = 0;
	while (loop < 13)
	{
		delete animals[loop];
		loop++;
	}
}
int main()
{
	f();
	system("leaks a.out");
}