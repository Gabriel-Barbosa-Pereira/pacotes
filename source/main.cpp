#include <iostream>
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
            if(code(signature, title, language, path) == 0){
                std::cout << "Coding was a success\n";
            }
            else{
                std::cout << "Coding wasn't a success\n";
            }
        }
        else if(strcmp(argv[1], "decode") == 0){
            std::string path;
            std::cout << "Full path: ";
            std::cin >> path;
            if(decode(path) == 0){
                std::cout << "Decoding was a success\n";
            }
            else{
                std::cout << "Decoding wasn't a success\n";
            }
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
