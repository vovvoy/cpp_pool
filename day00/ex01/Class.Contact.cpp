#include "Contact.hpp"

void Contact::setContactInfo(std::string &info, int index) {
    _contact[index] = info;
}

std::string Contact::getContactInfo(int index){
    return (_contact[index]);
}