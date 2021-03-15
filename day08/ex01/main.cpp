#include <iostream>
#include <ctime>
#include "span.hpp"


int main() {
    span arr(5);
    arr.addNumber(10);
    arr.addNumber(100);
    arr.addNumber(45);
    arr.addNumber(50);
    arr.addNumber(500);
    std::cout << arr.longestSpan() << std::endl;
    std::cout << arr.shortestSpan() << std::endl;

    return 0;
}
