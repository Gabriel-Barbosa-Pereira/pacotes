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
    std::map<char, std::string> con;
    std::string coded;
    size_t t{text.size() - 1};
    int i{0};
    con['A'] = "0"; con['B'] = "1"; con['C'] = "2"; con['D'] = "3"; con['E'] = "4"; con['F'] = "5";
    con['G'] = "6"; con['H'] = "7"; con['I'] = "8"; con['J'] = "9"; con['K'] = "10"; con['L'] = "11";
    con['M'] = "12"; con['N'] = "13"; con['O'] = "14"; con['P'] = "15"; con['Q'] = "16"; con['R'] = "17";
    con['S'] = "18"; con['T'] = "19"; con['U'] = "20"; con['V'] = "21"; con['W'] = "22"; con['X'] = "23";
    con['Y'] = "24"; con['Z'] = "25";
    con['a'] = "26"; con['b'] = "27"; con['c'] = "28"; con['d'] = "29"; con['e'] = "30"; con['f'] = "31";
    con['g'] = "32"; con['h'] = "33"; con['i'] = "34"; con['j'] = "35"; con['k'] = "36"; con['l'] = "37";
    con['m'] = "38"; con['n'] = "39"; con['o'] = "40"; con['p'] = "41"; con['q'] = "42"; con['r'] = "43";
    con['s'] = "44"; con['t'] = "45"; con['u'] = "46"; con['v'] = "47"; con['w'] = "48"; con['x'] = "49";
    con['y'] = "50"; con['z'] = "51";
    con['0'] = "52"; con['1'] = "53"; con['2'] = "54"; con['3'] = "55"; con['4'] = "56"; con['5'] = "57";
    con['6'] = "58"; con['7'] = "59"; con['8'] = "60"; con['9'] = "61"; con[' '] = ";";
    while(true){
        if(con.find(text[i]) != con.end() && con.find(text[i]) != con.find(' ') && i != t){
            coded += con.find(text[i])->second+".";
        }
        else if(con.find(text[i]) == con.find(' ')){
            coded += con[' '];
        }
        i++;
    }
}