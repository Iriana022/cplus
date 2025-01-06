#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact& contact) {
    m_contacts[idx];
    m_contacts[idx].setFirstname(contact.getFirstname());
    m_contacts[idx].setLastname(contact.getLastname());
    m_contacts[idx].setNickname(contact.getNickname());
    m_contacts[idx].setPhonenumber(contact.getPhonenumber());
    m_contacts[idx].setDarkestsecret(contact.getDarkestsecret());
    idx++;
}

void PhoneBook::printContact(Contact c){
    std::cout << "Firs tname : " + c.getFirstname() << std::endl;
    std::cout << "Last name : " + c.getLastname() << std::endl;
    std::cout << "Nick name : " + c.getNickname() << std::endl;
    std::cout << "Phone : " + c.getPhonenumber() << std::endl;
    std::cout << "Darkest secret : " + c.getDarkestsecret() << std::endl;
}