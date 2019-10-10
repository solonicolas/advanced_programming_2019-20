#include <iostream>
#include <cmath>

void get_int();
//void get_double();

int main() {
    get_int();
    //  get_double();
    return 0;
}

void get_int() {
    int i;
    int j;
    std::cout << "Please enter an integer value: ";
    while(!(std::cin >> i)){
        //j = floor(i);
        std::cin.clear();
        std::cin.ignore();
      //  std::cout << j << "\n";
       /* if(i == j){
            break;
        }*/
    }

}