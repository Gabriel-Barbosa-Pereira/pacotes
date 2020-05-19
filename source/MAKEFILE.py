from os import system

def main():
    x = system("C:\\MinGW\\bin\\g++ main.cpp -o main.exe")
    if(x == 0):
        print("Compilation was a success")
    else:
        print("Compilaiton was not a success")

if __name__ == "__main__":
    main()
    system("pause > nul")
