#include "Phonebook.hpp"

int main() {
    std::string str;
    Phonebook a;

    a.setIndex();
    a.setFieldName();
    while(std::cin) {
        std::cout << "\nTell me what to do! :  SEARCH  ADD  EXIT\n\n";
        std::getline(std::cin, str);
        if (str == "ADD")
            a.addContact();
        if (str == "SEARCH")
            a.viewAllContacts();
        if (str == "EXIT")
            break ;
    }
    return 0;
}
