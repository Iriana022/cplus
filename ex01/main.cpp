#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstring>

int PhoneBook::idx = 0;

int main(){
    std::string cmd;

    std::string fn;
    std::string ln;
    std::string nn;
    std::string pn;
    std::string ds;

    Contact ct;
    PhoneBook pb;

    do{
        std::cout << "Que voulez vous faire? ";
        getline(std::cin, cmd);
        if(cmd != "ADD" && cmd != "SEARCH" && cmd != "SEARCH")
            std::cout << "Essayez avec \"ADD\" ou \"SEARCH\" ou \"EXIT\"" << std::endl;
    }while(cmd != "ADD" && cmd != "SEARCH" && cmd != "SEARCH");

    if(cmd == "ADD") {
        do{
            std::cout << "Prenom : ";
            getline(std::cin, fn);
            if(!fn.size())
                std::cout << "champs obligatoire" << std::endl;
        }while(!fn.size());
        do{
            std::cout << "Nom : ";
            getline(std::cin, ln);
            if(!fn.size())
                std::cout << "champs obligatoire" << std::endl;
        }while(!ln.size());
        do{
            std::cout << "Surnom : ";
            getline(std::cin, nn);
            if(!nn.size())
                std::cout << "champs obligatoire" << std::endl;
        }while(!nn.size());
        do{
            std::cout << "Numero : ";
            getline(std::cin, pn);
            if(!pn.size())
                std::cout << "champs obligatoire" << std::endl;
        }while(!pn.size());
        do{
            std::cout << "Lourd secret : ";
            getline(std::cin, ds);
            if(!ds.size())
                std::cout << "champs obligatoire" << std::endl;
        }while(!ds.size());
        ct.setFirstname(fn);
        ct.setLastname(ln);
        ct.setNickname(nn);
        ct.setPhonenumber(pn);
        ct.setDarkestsecret(ds);
        pb.add_contact(ct);
        pb.printContact(ct);
    }

    return 0;
}