#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello"; //定义字符串str1
    str1.append(" World"); //使用append()方法将" World"追加到str1后面
    std::cout << str1 << std::endl; //输出str1的内容
    return 0;
}