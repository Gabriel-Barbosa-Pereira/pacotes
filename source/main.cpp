#include <iostream>
#include <cstdlib>
#include <cstring>

#include "../header/code.hpp"
#include "../header/decode.hpp"

int main(int argc, char* argv[]){
    if(argc > 1){
        if(strcmp(argv[1], "code") == 0){
            std::string signature, title, language, path;
            std::cout << "Your signature: ";
            std::cin >> signature;
            std::cout << "Title: ";
            std::cin >> title;
            std::cout << "Language: ";
            std::cin >> language;
            std::cout << "Full path: ";
            std::cin >> path;
            code(signature, title, language, path);
        }
        else if(strcmp(argv[1], "decode") == 0){
            decode();
        }
        else{
            std::cout << "ERROR: 404\n";
        }
    }
    else{
        std::cout << "ERROR: 404\n";
    }
    return 0;
}
