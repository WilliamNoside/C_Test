#include <iostream>
#include <string>



int main() {    
    std::cout << "what is your name? ";// 输出提示信息

    std::string name; // 定义字符串变量
    
    std::getline(std::cin, name); // 输入名字

    std::cout << "Hello, " << name << "!" << std::endl; // 输出问候语

    if (name.empty()) { // 判断字符串是否为空
        std::cout << "You didn't enter a name." << std::endl; // 输出提示信息
    }else if(name.size() < 2){
        std::cout << "Your name is too short." << std::endl; // 输出提示信息
    }else{
        std::string initial;
        initial = name.substr(0, 1); // 取出名字的首字母
        std::cout << "Can I call you Mr." << initial << "?" << std::endl; // 问候语
    }

    //if (name.find(" ") != -1){ // -1 表示没找到，为C++遗留问题

    if (name.find(" ") != string::npos){ // string::npos 表示没找到，是C++标准中定义的空值
        std::cout << "Your have a good name!" << std::endl; // 输出
    }else{
        std::cout << "Do you have a surname?" << std::endl; // 输出
    }

    return 0;
}