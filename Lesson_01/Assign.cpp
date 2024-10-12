#include <iostream>
#include <string>

int main() {
    std::string name; // 定义一个字符串变量
    std::cout << "Enter your name: "; // 提示用户输入姓名
    std::getline(std::cin, name); 
    std::cout << "Hello, " << name << "!" << std::endl; 
    
    name.assign(name,0,1); // 取出姓名的第一个字母
    
    std::cout << "Can I call you Mr." << name << "?" << std::endl; // 问候语
    return 0;
}