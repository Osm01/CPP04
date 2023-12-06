//
// Created by ouidriss on 11/25/23.
//

#ifndef CPP04_CURE_H
# define CPP04_CURE_H
# include "AMateria.h"

class AMateria;


class Cure : public AMateria{
public:
	Cure();
	Cure(const Cure &other);
	Cure		&operator=(const Cure &other);
	AMateria	*clone() const;
	void		use(ICharacter& target);
	~Cure();
};


#endif //CPP04_CURE_H
