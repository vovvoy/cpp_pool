#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {}

	MutantStack(std::stack<T> const &obj): std::stack<T>(obj) {}
	MutantStack(MutantStack const &obj): std::stack<T>(obj) {}

	MutantStack &operator=(const MutantStack &other) { std::stack<T>::operator = (other); }

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	virtual ~MutantStack() {}
};

#endif