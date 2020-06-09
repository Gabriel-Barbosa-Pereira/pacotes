#include "../header/function.hpp"

std::string invert(std::string text){
    std::string reverse;
    size_t x{text.size() - 1};
    while(true){
        if(x > 0){
            reverse += text[x];
            x--;
        }
        else if(x == 0){
            reverse += text[x];
            break;
        }
    }
    return reverse;
}