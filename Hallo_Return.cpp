#include <iostream>
/*
return 一直在代码里面，现在我们要把它和方程结合起来
*/

typedef std::string text_t;

text_t textCon(text_t name1,text_t name2);

int main(){
    text_t name1; 
    text_t name2; 
    int age; 

    std::cout << "你的姓是？";
    std::cin >> name1;

    std::cout << "你的名是？";
    std::cin >> name2;

    std::cout << "你的年龄是？";
    std::cin >> age;
    
    text_t fullname = textCon(name1,name2);  

    std::cout << fullname << "今年" << age << "岁了";
    return 0;
}
text_t textCon(text_t name1,text_t name2){
    return name1 + " " +name2 ;
}