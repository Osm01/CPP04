
#ifndef CPP04_MATERIASOURCE_H
# define CPP04_MATERIASOURCE_H

# include "AMateria.h"
# include "IMateriaSource.h"
# include "Ice.h"
# include "Cure.h"

class AMateria;

class MateriaSource : public IMateriaSource{
private:
	AMateria	*matirias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource	&operator=(const MateriaSource &other);
	void			learnMateria(AMateria *materia);
	AMateria		*createMateria(std::string const & type);
	~MateriaSource();
};


#endif //CPP04_MATERIASOURCE_H
