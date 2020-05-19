#include <iostream>
#include <cstdlib>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc > 1){
        if(strcmp(argv[1], "code") == 0){
            std::cout << "oi\n";
        }
        else if(strcmp(argv[1], "decode") == 0){
            std::cout << "ola\n";
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
