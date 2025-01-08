#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact& contact) {
    m_contacts[idx];
    m_contacts[idx].setFirstname(contact.getFirstname());
    m_contacts[idx].setLastname(contact.getLastname());
    m_contacts[idx].setNickname(contact.getNickname());
    m_contacts[idx].setPhonenumber(contact.getPhonenumber());
    m_contacts[idx].setDarkestsecret(contact.getDarkestsecret());
    if(idx >= 8)
        idx %=8;
    else
        idx++;
}

void PhoneBook::printContact(Contact c){
    std::cout << "Firs tname : " + c.getFirstname() << std::endl;
    std::cout << "Last name : " + c.getLastname() << std::endl;
    std::cout << "Nick name : " + c.getNickname() << std::endl;
    std::cout << "Phone : " + c.getPhonenumber() << std::endl;
    std::cout << "Darkest secret : " + c.getDarkestsecret() << std::endl;
}

void PhoneBook::align_right(std::string str){
    if(str.size() <= 10){
        for(size_t i(0); i < 10 - str.size(); i++)
            std::cout << " ";
        std::cout << str;
    }
    else if (str.size() > 10){
        std::cout << str.substr(0, 9);
        std::cout << ".";
    }
}

void PhoneBook::search_contact(int id_search){
    if(m_contacts[id_search].getFirstname().size() != 0){
        align_right(std::to_string(id_search));
        std::cout << "|";
        align_right(m_contacts[id_search].getFirstname());
        std::cout << "|";
        align_right(m_contacts[id_search].getLastname());
        std::cout << "|";
        align_right(m_contacts[id_search].getNickname());
        std::cout << std::endl;
    }
    else{
        std::cout << "Not yet contact for this ID" << std::endl;
    }
}