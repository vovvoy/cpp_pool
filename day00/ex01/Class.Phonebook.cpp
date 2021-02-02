#include "Phonebook.hpp"

void Phonebook::setFieldName(){
    _field_name[0] = "firs name: ";
    _field_name[1] = "last name: ";
    _field_name[2] = "nickname: ";
    _field_name[3] = "login: ";
    _field_name[4] = "postal address: ";
    _field_name[5] = "email address: ";
    _field_name[6] = "phone number: ";
    _field_name[7] = "birthday date: ";
    _field_name[8] = "favorite meal: ";
    _field_name[9] = "underwear color: ";
    _field_name[10] = "darkest secret: ";
}
void Phonebook::setIndex(){
    _index = 0;
}
void Phonebook::addContact(){
    std::string str;

    if (_index > 7) {
        std::cout << "Limit off!!!\n";
        return ;
    }
    for (int i = 0; i < 3; i++) {
        while (!str.size()) {
            std::cout << _field_name[i];
            std::getline(std::cin, str);
            if (str.size())
                _contacts[_index].setContactInfo(str, i);
            else
                std::cout << "Empty input!!!\n";
        }
        std::cout << "\n\n";
        str = "";
    }
    for (int i = 3; i < 11; i++) {
        std::cout << _field_name[i];
        std::getline(std::cin, str);
        _contacts[_index].setContactInfo(str, i);
        str = "";
    }
    _index++;;
}

void Phonebook::viewContactDetails(){
    std::string str;

    std::cout << "To get more information about contact tell me index or just press enter to go main manu.\n";
    std::getline(std::cin, str);
    if (str.size() == 1 && str[0] - 48 - 1 < _index) {
        std::cout <<"\n\n";
        for (int i = 0; i < 11; i++)
            std::cout << _field_name[i] << "->  " << _contacts[str[0] - 48 - 1].getContactInfo(i) << std::endl;
        viewAllContacts();
    }
}

void Phonebook::viewAllContacts(){
    int contact_id = 0;
    int diff = 0;
    std::string str;

    if (_index == 0) {
        std::cout << "Empty phonebook!!!\n";
        return ;
    }
    std::cout << "\n\nindex     |first name|last name |nickname  |\n";

    for (contact_id = 0; contact_id < _index; contact_id++) {
        std::cout << "--------------------------------------------\n";
        std::cout << contact_id + 1 << "         " << "|";
        for (int info_id = 0; info_id < 3; info_id++) {
            str = _contacts[contact_id].getContactInfo(info_id);
            if (str.size() > 10)
                str = str.substr(0, 9) + ".";
            diff = 10 - str.size();
            for (int i = 0 ; i < diff; i++)
                str += " ";
            str += "|";
            std::cout << str;
        }
        std::cout << std::endl;
    }
    std::cout << "\n\n";
    viewContactDetails();
}