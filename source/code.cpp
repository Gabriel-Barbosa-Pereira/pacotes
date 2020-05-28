#include "../header/code.hpp"

int code(std::string signature, std::string title, std::string language, std::string path){
    std::ifstream file;
    file.open(path);
    if(file.is_open()){
        signature = invert(signature);
        title = invert(title);
        language = invert(language);
        std::string line;
        while(getline(file, line)){
           line = invert(line);
        }
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

void convert(std::string text){
    std::map<std::string, std::string> con;
    con["A"] = "0"; con["B"] = "1"; con["C"] = "2"; con["D"] = "3"; con["E"] = "4"; con["F"] = "5";
    con["G"] = "6"; con["H"] = "7"; con["I"] = "8"; con["J"] = "9"; con["K"] = "10"; con["L"] = "11";
    con["M"] = "12"; con["N"] = "13"; con["O"] = "14"; con["P"] = "15"; con["Q"] = "16"; con["R"] = "17";
    con["S"] = "18"; con["T"] = "19"; con["U"] = "20"; con["V"] = "21"; con["W"] = "22"; con["X"] = "23";
    con["Y"] = "24"; con["Z"] = "25";
}