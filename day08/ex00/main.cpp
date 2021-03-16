#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main() {
    std::vector<int> v;
    v.push_back(3);
    v.push_back(234);
    v.push_back(100);
    try{
		easyfind(v, 3);
    }
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

    return 0;
}
