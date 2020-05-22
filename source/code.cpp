#include "../header/code.hpp"

int code(std::string signature, std::string title, std::string language, std::string path){
    std::ifstream file;
    file.open(path); // Verificar
    if(file.is_open()){
        signature = invert(signature);
        title = invert(title);
        language = invert(language);
        file.close();
        return 0;
    }
    else{
        file.close();
        return 1;
    }
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
