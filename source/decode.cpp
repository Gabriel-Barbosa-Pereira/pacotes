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

std::string convert_decode(std::string txt){
    int t{0};
    std::string ret;
    std::map<std::string, std::string> dec;
    dec["0"] = "A"; dec["1"] = "B"; dec["2"] = "C"; dec["3"] = "D"; dec["4"] = "E"; dec["5"] = "F"; 
    dec["6"] = "G"; dec["7"] = "H"; dec["8"] = "I"; dec["9"] = "J"; dec["10"] = "K"; dec["11"] = "L";
    dec["12"] = "M"; dec["13"] = "N"; dec["14"] = "O"; dec["15"] = "P"; dec["16"] = "Q"; dec["17"] = "R";
    dec["18"] = "S"; dec["19"] = "T"; dec["20"] = "U"; dec["21"] = "V"; dec["22"] = "W"; dec["23"] = "X";
    dec["24"] = "Y"; dec["25"] = "Z";
    dec["26"] = "a"; dec["27"] = "b"; dec["28"] = "c"; dec["29"] = "d"; dec["30"] = "e"; dec["31"] = "f";
    dec["32"] = "g"; dec["33"] = "h"; dec["34"] = "i"; dec["35"] = "j"; dec["36"] = "k"; dec["37"] = "l";
    dec["38"] = "m"; dec["39"] = "n"; dec["40"] = "o"; dec["41"] = "p"; dec["42"] = "q"; dec["43"] = "r";
    dec["44"] = "s"; dec["45"] = "t"; dec["46"] = "u"; dec["47"] = "v"; dec["48"] = "w"; dec["49"] = "x";
    dec["50"] = "y"; dec["51"] = "z";
    dec["52"] = "0"; dec["53"] = "1"; dec["54"] = "2"; dec["55"] = "3"; dec["56"] = "4"; dec["57"] = "5";
    dec["58"] = "6"; dec["59"] = "7"; dec["60"] = "8"; dec["61"] = "9"; dec[";"] = " ";
    do{
        if(txt[t] != '.'){
            if(txt[t] == '@'){
                ret += "@";
            }
            else if(txt[t] == ';'){
                ret += " ";
            }
            else if(txt[t + 1] == '.' || txt[t + 1] == '@' || txt[t + 1] == ';' || t == txt.size() - 1){
                ret += dec.find(std::string(1, txt[t]))->second;
            }
            else{
                std::string a{std::string(1, txt[t])};
                std::string b{std::string(1, txt[t + 1])};
                std::string uni{a + b};
                ret += dec.find(uni)->second;
                t++;
            }
        }
        t++;
    }while(t <= txt.size() - 1);
    return ret;
}