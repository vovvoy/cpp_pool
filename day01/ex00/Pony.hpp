#ifndef PONY_HPP
# define PPONY_HPP

# include <iostream>
# include <string>

class Pony{
private:
    std::string _codename;
    int         _age;
    float         _length;
    float         _height;
public:
    Pony(std::string codename, int age, float length, float height);
    std::string getPonyNickname();
    int getPonyAge();
    float getPonyLength();
    float getPonyHeight();
    ~Pony();
};



#endif


































