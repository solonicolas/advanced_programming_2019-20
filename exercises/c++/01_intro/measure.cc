#include <iostream>
#include <string>

int main() {
    std::cout << "Insert your number and unit of measure:\n";
    double number;
    std::string unit;
    std::cin >> number >> unit;
    if(unit == "inch"){
        std::cout << number*0.0254 << " m\n";
    } else {
        std::cout << number/0.0254 << " inch\n";
    }
    return 0;
}