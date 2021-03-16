#include <iostream>
#include <ctime>
#include "span.hpp"


int main() {
	Span sp = Span(100);
	sp.addNumber(93);
	try{
		sp.fillArray(99);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
    return 0;
}

//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(5);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//}