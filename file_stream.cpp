#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::fstream file;

    file.open("file_exemple.txt");
        if(file){
            std::cout << "file stream created";
            std::string s;
            while(getline(file, s)){
                std::cout << s;
            }
        }else{
            std::cout << "file stream not created";
        }

    return 0;
}