#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* testWronganimal = new WrongAnimal();
	const WrongAnimal* testcat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << testWronganimal->getType() << " " << std::endl;
	std::cout << testcat->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	testcat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete testWronganimal;
	delete testcat;
	return 0;
}