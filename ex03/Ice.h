//
// Created by ouidriss on 11/25/23.
//

#ifndef CPP04_ICE_H
# define CPP04_ICE_H
# include "AMateria.h"

class AMateria;

class Ice  : public AMateria{
public:
	Ice();
	Ice(const Ice &other);
	Ice			&operator=(const Ice &other);
	AMateria	*clone() const;
	void		use(ICharacter& target);
	~Ice();
};


#endif //CPP04_ICE_H
