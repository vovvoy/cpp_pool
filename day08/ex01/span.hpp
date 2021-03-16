#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>
#include <exception>

class Span {
private:
	std::vector<int> _vec;
	unsigned int _num;
public:
	Span(unsigned int N);

	Span(Span const &obj);

	Span const &operator=(Span const &obj);

	~Span();

	class OutOfRangeException : public std::exception {
	public:
		const char *what() const throw();
	};

	class FillVectorException : public std::exception {
	public:
		const char *what() const throw();
	};

	void addNumber(int num);

	long shortestSpan();

	long longestSpan();

	void fillArray(int range);
};
#endif
