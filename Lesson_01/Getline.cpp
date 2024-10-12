#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "You entered: " << name << std::endl;
    return 0;
}