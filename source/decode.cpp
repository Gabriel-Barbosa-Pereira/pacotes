#include "../header/decode.hpp"

int decode(std::string path){
    std::ofstream file;
    file.open(path);
    if(file.is_open()){
        file.close();
        return 0;
    }
    else{
        file.close();
        return 1;
    }
}
