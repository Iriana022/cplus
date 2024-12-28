#include <iostream>
#include <cctype>

int main(int argc, char * argv[]){

    int i = 0;

    if(argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else{
        while(argv[++i])
            for(int j = 0; argv[i][j]; j++)
                std::cout << (char)toupper(argv[i][j]);
        std::cout << std::endl;
    }

    return 0;
}