#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
private:
    std::string _contact[11];
public:
    Contact();
    void setContactInfo(std::string &info, int index);
    std::string getContactInfo(int index);
    ~Contact();
};

#endif