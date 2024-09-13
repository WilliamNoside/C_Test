#include <iostream>
/*
String Method 为你的字符串提供了很多新的拓展
用一些拓展来做一个江湖小游戏的起名系统
*/
int main(){
    
    std::string name;

    std::cout << "欢迎来到江湖游戏！\n";
    std::cout << "给自己起一个响亮的名字吧！\n";
    std::cin >> name ;

    if(name.empty()){
        std::cout << "少侠，你还没有起名呢\n";
    }
    else if(name.length() > 12){
        std::cout << "少侠，名字太长了，请少于12个字节\n";
    }
    else{
        name.append("少侠");
        std::cout << "欢迎来到江湖，" << name << "！祝你游玩愉快";
    }

    return 0;
}
