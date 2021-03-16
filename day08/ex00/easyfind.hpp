#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <exception>

template <typename T>
void easyfind(T &array, int num){
	typename T::iterator it = std::find(array.begin(), array.end(), num);

	if (it == array.end())
		throw std::exception();

	std::cout << "soccess -> " <<  *it << std::endl;
}

#endif
