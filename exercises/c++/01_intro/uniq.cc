#include <iostream>
#include <string>

int main() {
    unsigned int count{1};
    std::string line;
    std::getline(std::cin,line);
    std::string nextLine;
    while(std::getline(std::cin,nextLine)){
        if(line == nextLine){
            count++;
        } else {
            std::cout << count << " " << line << "\n";
            line = nextLine;
            count = 1;
        }
    }
    std::cout << count << " " << line << "\n";
    return 0;
}
