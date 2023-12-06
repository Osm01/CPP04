
# include "Animal.h"
# include "Dog.h"
# include "Cat.h"

int main()
{
//	{
//		Animal *animal[10];
//		int i = 0;
//		while (i < 10)
//		{
//			if (i < 5)
//				animal[i] = new Cat();
//			else
//				animal[i] = new Dog();
//			std::cout << std::endl;
//			i ++;
//		}
//		i = 0;
//		while (i < 10)
//		{
//			delete animal[i ++];
//			std::cout << std::endl;
//		}
//	}
	std::cout << GREEN << "-------------------------------" << RESET << std::endl;
	std::cout << std::endl;
	Cat c1;
	{
		Cat c2;
		c2 = c1;
		c1.makeSound();
		c2.makeSound();
	}

//	std::cout << GREEN << "-------------------------------" << RESET << std::endl;
//	std::cout << std::endl;
//	{
//		Cat	cat;
//		Cat cat1 = cat;
//	}
	return 0;
}
