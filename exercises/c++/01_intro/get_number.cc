#include <iostream>
#include <cmath>

bool get_int();
//void get_double();

int main() {

    std::cout << "Please enter an integer value: ";
    while(!get_int());
   // get_double();
    return 0;
}

bool get_int() {
    int i;
    while(!(std::cin >> i)){
        std::cin.clear();
        std::cin.ignore();
    }

}

/*void get_double() {
    double i;
    std::cout << "Please enter a double value: ";
    while(!(std::cin >> i)){
        std::cin.clear();
        std::cin.ignore();
    }
}*/