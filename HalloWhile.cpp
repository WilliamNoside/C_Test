#include <iostream>
/*
While循环的使用，非常简单
*/
int main(){
    std::string name;

    while(name.empty()){
        std::cout << "输入你的名字\n" ;
        std::getline(std::cin , name);
    }

    std::cout << "欢迎来到江湖游戏，" << name << "少侠" ;

    return 0;
}