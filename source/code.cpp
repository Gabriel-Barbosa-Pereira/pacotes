#include "../header/code.hpp"

void code(std::string signature, std::string title, std::string language, std::string path){
    signature = invert(signature);
    title = invert(title);
    language = invert(language);
}

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
