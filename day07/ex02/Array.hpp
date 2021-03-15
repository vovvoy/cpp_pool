#include <exception>
#include <iostream>
#include <sstream>

template <typename T>
class Array {
private:
	T *_array;
	unsigned int _n;

public:
	Array(void) : _array(NULL), _n(0) {}
	Array(unsigned int n) : _array(new T[n]()), _n(n) {}

	~Array(void)
	{
		if (this->_array != NULL)
			delete [] this->_array;
	}

	Array(Array const &obj) : _array(NULL), _n(0)
	{
		*this = obj;
	}

	Array const &operator=(Array const &other)
	{
		if (&other == this)
			return *this;

		if (this->size() != other.size())
		{
			if (this->_array != NULL)
				delete [] this->_array;
			this->_array = new T[other.size()];
		}

		this->_n = other.size();
		for (unsigned int i = 0; i < other.size(); i++)
			this->_array[i] = other._array[i];

		return *this;
	}

	T &operator[](unsigned int i) const
	{
		if (!this->_array || i < 0 || i >= this->_n)
			throw std::exception();

		return this->_array[i];
	}

	unsigned int size(void) const
	{
		return this->_n;
	}

};
