#include <iostream>
/*
Do While循环的使用，非常简单
*/
int main(){
    int age;

    do{
        std::cout << "输入你的年龄\n" ;
        std::cin >> age;
    }while(age <= 0);

    std::cout << "你" << age << "岁" ;

    return 0;
}