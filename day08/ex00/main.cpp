#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main() {
    std::vector<int> v;
    v.push_back(3);
    v.push_back(234);
    v.push_back(100);
    easyfind(v, 3);
    return 0;
}
