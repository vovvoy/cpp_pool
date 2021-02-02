#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
private:
    Contact _contacts[8];
    std::string _field_name[11];
    int     _index;
public:
    Phonebook();
    void setFieldName();
    void setIndex();
    void addContact();
    void viewContactDetails();
    void viewAllContacts();
    ~Phonebook();
};

#endif