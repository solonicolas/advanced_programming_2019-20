#include <iostream>
#include <string>

void break_line(unsigned int n, std::string line);

int main() {
    unsigned int n{20};
    std::string line;
    while(std::getline(std::cin,line)){
        if(line.length() > n){
            break_line(n, line);
        } else{
            std::cout << line << "\n";
        }
    }
    return 0;
}



void break_line(unsigned int n, std::string line) {
    unsigned int space1{0};
    unsigned int space2{0};
    while(space2 < n){
        space1 = line.find(" ", space1+1); 
        space2 = line.find(" ", space1+1); 
        std::cout << space2 << "," << space2 << "\n";
    }
    std::cout << line.substr(0,space1) << "\n";
    std::cout << line.substr(space1+1) << "\n";
}