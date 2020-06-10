#include "../header/decode.hpp"

int decode(std::string path){
    std::ifstream file;
    file.open(path);
    if(file.is_open()){
        std::string signature;
        std::string title;
        std::string language;
        getline(file, signature);
        getline(file, title);
        getline(file, language);
        std::ofstream out;
        out.open("converted_"+title+".txt");
        if(out.is_open()){
            out << signature << "\n";
            out << title << "\n";
            out << language << "\n";
            file.close();
            out.close();
            return 0;
        }
        else{
            file.close();
            out.close();
            return 1;
        }
    }
    else{
        file.close();
        return 1;
    }
}
