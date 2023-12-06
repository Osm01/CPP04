
# include "Animal.h"
# include "Dog.h"
# include "Cat.h"

int main()
{
//	{
//		 //cannot instantiate object cause of abstract class that have atleast one pure virtual function
//		Animal animal;
//	}
	{
		Cat cat;
		cat.makeSound();
		Cat	cat1 = cat;
		cat1.makeSound();
	}
	{
		Animal *animal = new Cat();
		animal->makeSound();
		delete animal;
	}
	{
		Animal *animal = new Dog();
		animal->makeSound();
		delete animal;
	}
	return 0;
}
