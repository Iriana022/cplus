#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

    private :
    Contact m_contacts[8];
    void align_right(std::string str);

    public :
    static int idx;
    
    void add_contact(Contact& contact);
    void search_contact(int id_search);
    void printContact(Contact c); 
};

#endif