#include "Squad.hpp"
#include "ISpaceMarine.hpp"

#include "iostream"
#include "string"

Squad::Squad(): _quantity(0), _array(NULL) {

}

Squad::Squad(const Squad &other) :
		_quantity(0),
		_array(NULL)
{
	this->operator = (other);
}


Squad::~Squad() {
	if (this->_array){
		for (int i = 0; i < this->_quantity; i++)
			delete this->_array[i];
		delete[] this->_array;
	}
}

Squad& Squad::operator=(const Squad &other){
	if (this != &other){
		if (other._array){
			ISpaceMarine **marine = new ISpaceMarine*[this->_quantity];
			for (int i = 0; i < this->_quantity; i++)
				marine[i] = other._array[i];
			this->_array = marine;
		}
		this->_quantity = other._quantity;
	}
	return (*this);
}

int Squad::getCount() const {
	return (this->_quantity);
}

ISpaceMarine * Squad::getUnit(int index) const {
	if (index < 0 || index >= this->_quantity)
		return (NULL);
	return (this->_array[index]);
}
int Squad::push(ISpaceMarine *marine) {
	if (!marine)
		return (this->_quantity);

	for (int i = 0; i < this->_quantity; i++)
		if (this->_array[i] == marine)
			return (this->_quantity);

	ISpaceMarine **tmp = new ISpaceMarine*[this->_quantity + 1];
	for (int index = 0; index < this->_quantity; ++index)
		tmp[index] = this->_array[index];

	tmp[_quantity] = marine;

	this->_quantity++;

	delete[] this->_array;
	this->_array = tmp;

	return (this->_quantity);
}