#include <iostream>

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> stack_cp;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	stack_cp = mstack;
	MutantStack<int>::iterator begin = stack_cp.begin();
	MutantStack<int>::iterator end = stack_cp.end();
	++begin;
	--begin;
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	std::cout << std::endl;
	std::stack<int> s(stack_cp);
	std::cout << s.top() << std::endl;
	return (0);
}