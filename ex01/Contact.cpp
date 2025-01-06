#include "Contact.hpp"

Contact::Contact(){
    m_firstname = "";
    m_lastname = "";
    m_nickname = "";
    m_phonenumber = "";
    m_darkestsecret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
    m_firstname = fn;
    m_lastname = ln;
    m_nickname = nn;
    m_phonenumber = pn;
    m_darkestsecret = ds;
}

/* GETTERS */
std::string Contact::getFirstname(){
    return m_firstname;
}

std::string Contact::getLastname(){
    return m_lastname;
}

std::string Contact::getNickname(){
    return m_nickname;
}

std::string Contact::getPhonenumber(){
    return m_phonenumber;
}

std::string Contact::getDarkestsecret(){
    return m_darkestsecret;
}

/* SETTERS */
void Contact::setFirstname(std::string fs){
    m_firstname = fs;
}

void Contact::setLastname(std::string ls){
    m_lastname = ls;
}

void Contact::setNickname(std::string nn){
    m_nickname = nn;
}

void Contact::setPhonenumber(std::string pn){
    m_phonenumber = pn;
}

void Contact::setDarkestsecret(std::string ds){
    m_darkestsecret = ds;
}