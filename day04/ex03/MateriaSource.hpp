#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#define MAX_SAVED (4)

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*storage[4];
	int 		saved;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria * materia);
	AMateria* createMateria(std::string const & type);
};


#endif
