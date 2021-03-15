#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
void easyfind(T const &array, int num){
    for (int i = 0; i < array.size(); i++)
        if (array[i] == num){
            std::cout << "soccess" << std::endl;
            return ;
        }
    std::cout << "Error: No any matches with " << num << std::endl;
}

#endif
