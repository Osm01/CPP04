//
// Created by ouidriss on 11/14/23.
//

#ifndef CPP04_DOG_H
# define CPP04_DOG_H

#include "Animal.h"


class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &other);
	Dog		&operator=(const Dog &other);
	void	makeSound(void) const;
	~Dog();
};


#endif //CPP04_DOG_H
