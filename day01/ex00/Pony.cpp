#include "Pony.hpp"

Pony::Pony(std::string codename, int age, float length, float height) : _codename(codename), _age(age), _length(length), _height(height)
{
    std::cout << "New pony!!!\n";
}

std::string Pony::getPonyNickname() {
    return (_codename);
}

int Pony::getPonyAge(){
    return (_age);
}

float Pony::getPonyLength(){
    return (_length);
}

float Pony::getPonyHeight(){
    return (_height);
}

Pony::~Pony() {
    std::cout << "delete pony!\n";
}