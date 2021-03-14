#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string str1;
	int			n;
	std::string	str2;
};


void		*serialize(void)
{
	int i;
	char *raw = new char[21];
	std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (i = 0; i < 8; i++)
		raw[i] = str[rand() % 62];
	*reinterpret_cast<int *>(raw + 8) = rand() % 2147483647;
	for (i = 12; i < 20; i++)
		raw[i] = str[rand() % 62];
	raw[20] = '\0';
	return static_cast<void *>(raw);
}

Data		*deserialize(void *raw)
{
	char	*s;
	Data	*data = new Data;

	s = reinterpret_cast<char *>(raw);
	data->str1 = std::string(s, 8);
	data->str2 = std::string(s + 12, 8);
	data->n = *reinterpret_cast<int *>(s + 8);
	return data;
}

int			main(void)
{
	void		*raw;
	Data		*data;

	srand(time(NULL));
	raw = serialize();
	data = deserialize(raw);

	std::cout << "n:  " << data->n << std::endl;
	std::cout << "s1: " << data->str1 << std::endl;
	std::cout << "s2: " << data->str2 << std::endl;

	delete static_cast<char *>(raw);
	delete data;
	return 0;
}
