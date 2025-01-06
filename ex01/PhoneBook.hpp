#ifndef PHONEBOOK_FILE
#define PHONEBOOK_FILE

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

    private :
    Contact m_contacts[8];

    public :
    static int idx;
    
    void add_contact(Contact& contact);
    void printContact(Contact c);
};

#endif