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
    int id_search;

    do{
        do{
            std::cout << "What do you want ? ";
            getline(std::cin, cmd);
            if(cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
                std::cout << "Try with \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
        }while(cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT");
    
        if(cmd == "EXIT")
            return 0;

        if(cmd == "ADD") {
            do{
                std::cout << "Firstname : ";
                getline(std::cin, fn);
                if(!fn.size())
                    std::cout << "required field" << std::endl;
            }while(!fn.size());
            do{
                std::cout << "Lastname : ";
                getline(std::cin, ln);
                if(!fn.size())
                    std::cout << "required field" << std::endl;
            }while(!ln.size());
            do{
                std::cout << "Nickname : ";
                getline(std::cin, nn);
                if(!nn.size())
                    std::cout << "required field" << std::endl;
            }while(!nn.size());
            do{
                std::cout << "Your phone number : ";
                getline(std::cin, pn);
                if(!pn.size())
                    std::cout << "required field" << std::endl;
            }while(!pn.size());
            do{
                std::cout << "Dark secret : ";
                getline(std::cin, ds);
                if(!ds.size())
                    std::cout << "required field" << std::endl;
            }while(!ds.size());
            ct.setFirstname(fn);
            ct.setLastname(ln);
            ct.setNickname(nn);
            ct.setPhonenumber(pn);
            ct.setDarkestsecret(ds);
            pb.add_contact(ct);
        }else if(cmd == "SEARCH"){
            do{
                std::cout << "Enter id to search : ";
                std::cin >> id_search;
                if(id_search < 0 && id_search > 8)
                    std::cout << "Incorrect parameter, please enter between 0 - 7";
            }while(id_search < 0 && id_search > 7);
            if (id_search >= 0 && id_search < 8 )
                pb.search_contact(id_search);
        }
    }while(cmd != "EXIT");


    return 0;
}