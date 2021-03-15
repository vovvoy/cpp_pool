#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>

class span {
private:
    int *_array;
    int _size;
    int _index;
public:
    span(unsigned int N);
    class OutOfRangeException : public std::exception {
    public:
        const char * what() const throw();
    };
    class EmptyArrayException : public std::exception {
    public:
        const char * what() const throw();
    };

    class OneElementException : public std::exception{
    public:
        const char * what() const throw();
    };
    void addNumber(int num);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    void fillArray(int range);
    ~span();
};


#endif
