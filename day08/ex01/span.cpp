#include <cstdlib>
#include "span.hpp"

span::span(unsigned int N) : _array(new int[N]), _size(N), _index(0){ };

void span::addNumber(int num) {
    if (_index >= _size)
        throw span::OutOfRangeException();
    _array[_index++] = num;
}

unsigned int span::longestSpan() {
    if (_index == 0)
        throw span::EmptyArrayException();
    if (_index == 1)
        throw span::OneElementException();
    std::sort(_array, _array + _index);
    return (abs(_array[_index - 1] - _array[0]));
}

unsigned int span::shortestSpan() {
    unsigned int shortest = INT_MAX;

    if (_index == 0)
        throw span::EmptyArrayException();
    if (_index == 1)
        throw span::OneElementException();
//    std::sort(_array, _array + _index);
    for (int i = 0; i < _index; i++)
        for (int j = 0; j < _index; j++)
            if (abs(_array[i] - _array[j]) <  shortest)
                shortest = abs(_array[i] - _array[j]);
    return (abs(_array[_index - 1] - _array[_index - 2]));
}

void span::fillArray(int range) {
    for (int i = 0; i < range; i++)
        addNumber(std::rand());
}

const char * span::OneElementException::what() const throw() {
    return ("Error: Only one element, enter some more...");
}

const char * span::EmptyArrayException::what() const throw() {
    return ("Error: Empty array, please first fill it");
}

const char * span::OutOfRangeException::what() const throw() {
    return ("Error: You are out of range");
}

span::~span() {
    delete [] _array;
}