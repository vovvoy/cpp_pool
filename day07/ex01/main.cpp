#include <iostream>

template<class T>
void iter(T *arr, int len, void (*func)(const T &))
{
	if (!arr)
		return;

	for (int  i = 0; i < len; ++i)
		(*func)(arr[i]);
}

template<class T>
void print(const T &x)
{
	std::cout << x << std::endl;
}


int main(void)
{
	int iArray[] = { 15, 453, 34, 6, 23, 25};
	std::string sArray[] = {
			"Kak dela?",
			"Chto ty delaesh?",
			"Privet",
			"Poka",
	};
	double dArray[] ={324.432, 234.34, 32.324, 324.3};
	char	cArray[] = {'H', 'e', 'l', 'l', 'o'};
	std::cout << "------------------------------------" << std::endl;
	iter(iArray, 6, print);
	std::cout << "------------------------------------" << std::endl;
	iter(sArray, 4, print);
	std::cout << "------------------------------------" << std::endl;
	iter(dArray, 6, print);
	std::cout << "------------------------------------" << std::endl;
	iter(cArray, 5, print);
	return (0);
}