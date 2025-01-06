#ifndef  CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

    private:
    std::string m_firstname;
    std::string m_lastname;
    std::string m_nickname;
    std::string m_phonenumber;
    std::string m_darkestsecret;

    public:
    Contact();

    Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    std::string getFirstname();
    std::string getLastname();
    std::string getNickname();
    std::string getPhonenumber();
    std::string getDarkestsecret();

    void setFirstname(std::string fn);
    void setLastname(std::string ln);
    void setNickname(std::string nn);
    void setPhonenumber(std::string pn);
    void setDarkestsecret(std::string ds);

};

#endif