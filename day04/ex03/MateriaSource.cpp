#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
	saved(0)
{
	for (int i = 0; i < MAX_SAVED; i++)
		storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < saved; i++)
		delete storage[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < this->saved; i++)
			delete this->storage[i];
		for (int i = 0; i < other.saved; i++)
			this->storage[i] = other.storage[i]->clone();
		saved = other.saved;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria * materia)
{
	if (saved == MAX_SAVED || !materia)
		return;
	for (int i = 0; i < saved; i++)
		if (storage[i] == materia)
			return;
	for (int i = 0; i < MAX_SAVED; i++)
		if (storage[i] == NULL)
		{
			storage[i] = materia;
			break;
		}
	saved++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < saved; i++)
		if (storage[i]->getType() == type)
			return storage[i]->clone();

	return NULL;
}
