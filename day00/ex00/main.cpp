#include <iostream>
#include <string>

void toUpper (std::string str)
{
    for (int i = 0; i < str.size(); i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            std::cout << (char)(str[i] - 32);
        else
            std::cout << (char)(str[i]);

}

int main (int argc, char *argv[]){
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < argc; i++)
            toUpper(argv[i]);
    std::cout << std::endl;
    return (0);
}