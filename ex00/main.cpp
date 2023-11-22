
# include "Animal.h"
# include "WrongAnimal.h"
# include "Dog.h"
# include "Cat.h"
# include "WrongCat.h"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << RED << "|--------|Wrong Animal|--------|" << RESET << std::endl;
	std::cout << RED << "|--------|   Heap  |--------|" << RESET << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();
		std::cout << i->getType() << std::endl;
		meta->makeSound();
		i->makeSound();
		delete meta;
		delete i;
	}
	std::cout << std::endl;
	std::cout << RED << "|--------|Wrong Animal|--------|" << RESET << std::endl;
	std::cout << RED << "|--------|   Stack  |--------|" << RESET << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal meta;
		const WrongAnimal i = WrongCat();
		std::cout << i.getType() << std::endl;
		meta.makeSound();
		i.makeSound();
	}
	return 0;
}
