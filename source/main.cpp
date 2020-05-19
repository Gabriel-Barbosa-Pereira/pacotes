#include <iostream>
#include <cstring>
#include <string>

#include "../header/code.hpp"
#include "../header/decode.hpp"

int main(int argc, char* argv[]){
    if(argc > 1){
        if(strcmp(argv[1], "code") == 0){
            std::string signature, name, language, path;
            char compiled;
            std::cout << "Your signature: ";
            std::cin >> signature;
            std::cout << "Code name: ";
            std::cin >> name;
            std::cout << "Code path: ";
            std::cin >> path;
            std::cout << "Programming language: ";
            std::cin >> language;
            std::cout << "It's compiled[y/n]: ";
            std::cin >> compiled;
            code(signature.c_str(), name.c_str(), path.c_str(), language.c_str(), compiled);
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
