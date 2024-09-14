#include <iostream>
/*
void 以用于定义一个程序
你可以在不同地方使用这个void
void中需要另外声明前变量
*/

void starrPark(std::string name);

int main(){
    std::string name;
    std::cout << "你叫什么" << '\n';
    std::cin >> name;

    starrPark(name);

    return 0;
}

void starrPark(std::string name){
    std::cout << "欢迎来到星妙乐园" << '\n';
    std::cout << "请保持微笑" << '\n';
    std::cout << "请保持微笑" << name << '\n';
    std::cout << "请保持微笑" << '\n';
    std::cout << "请保持微笑" << '\n';
    std::cout << "请保持微笑" << '\n';
    std::cout << "请保持微笑" << '\n';
    std::cout << "请保持微笑" << '\n';
}
