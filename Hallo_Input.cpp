#include <iostream>
/*
cout为输出
cin为输入
*/
int main(){
    std::string name;
    int age;

    std::cout << "你叫啥";
    std::getline(std::cin >> std::ws , name);//cin后要加上ws以确保不读取换行符干扰输入
    //在终端内输入名字

    std::cout << "你几岁";
    std::cin >> age ;
    //在终端内输入年龄

    std::cout << name << "今年" << age << "岁了";
    return 0;
}
