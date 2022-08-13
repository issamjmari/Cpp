#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void make(Animal *l)
{
	l->makeSound();
}
int main()
{
	Cat c;
	Animal *l;
	 l = &c;
	 make(l);
}
