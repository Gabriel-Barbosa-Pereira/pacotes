from os import system

def main():
    x = system("C:\\MinGW\\bin\\g++ main.cpp code.cpp decode.cpp function.cpp -o main.exe")
    if(x == 0):
        print("Compilation was a success")
        system("move main.exe C:\\Users\\celin\\Desktop\\pacotes\\release")
    else:
        print("Compilaiton wasn't a success")

if __name__ == "__main__":
    main()
    system("pause > nul")
