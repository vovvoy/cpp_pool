#include <cstdlib>
#include <algorithm>
#include <ctime>
#include "span.hpp"

Span::Span(unsigned int N) : _num(N) {
	_vec.reserve(N);
};

Span::Span(Span const &obj)
{
	*this = obj;
}

Span const &Span::operator=(Span const &obj)
{
	if (this->_vec == obj._vec)
		return *this;

	this->_vec = obj._vec;
	this->_num = obj._num;

	return *this;
}

void Span::addNumber(int num) {
    if (this->_vec.size() == _num)
        throw Span::OutOfRangeException();
	this->_vec.push_back(num);
}

long  Span::longestSpan() {
    if (this->_vec.size() < _num)
        throw Span::FillVectorException();
	std::sort(this->_vec.begin(), this->_vec.end());
    return (static_cast<long>(this->_vec[this->_vec.size() - 1] - this->_vec[0]));
}

long Span::shortestSpan() {
	if (this->_vec.size() < _num)
		throw Span::FillVectorException();
	long minDiff = 2147483647;
	long diff;

	std::vector<int> vec = this->_vec;
	std::sort(vec.begin(), vec.end());

	std::vector<int>::iterator first = vec.begin();
	for (std::vector<int>::iterator second = vec.begin() + 1; second != vec.end(); second++)
	{
		diff = std::abs(static_cast<long>(*second) - static_cast<long>(*first));

		if (diff < minDiff)
			minDiff = diff;

		first = second;
	}

	return minDiff;
}

void Span::fillArray(int range) {
	srand(time(NULL));
	int arr[1000000];
	for (int i = 0; i < 100000; i++)
		arr[i] = 0;
    for (int i = 0; i < range; i++) {
    	int ret;
    		while (true) {
				ret = std::rand() % 1000000;
				if (!arr[ret]){
					arr[ret] = 1;
					break ;
				}
			}
		addNumber(ret);
	}
}

const char *Span::FillVectorException::what() const throw() {
    return ("Error: Vector not full");
}
const char *Span::OutOfRangeException::what() const throw() {
	return "Error: Vector out of range";
}


Span::~Span() {
	std::vector<int>().swap(this->_vec);
}


