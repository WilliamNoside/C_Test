#include <iostream>
/*
typedef 可以用于定义复杂的内容统合定义为一个更方便的式子
using 可以起到同样的效果，且排版更加美观，所以更加通用（？
在遇到长且麻烦的代码时不妨使用他们，还可以自动补全！
*/

typedef std::string text_t;
//设string为text_t以便引用
using number_t = int;
//设int为number_t 以引用，不方便

int main(){
    text_t name = "William"; //直接使用text_t来代替string
    //std::string name = "William"; //string照常可以使用
    
    number_t age = 20;//使用number_t来代替int
    //int age = 20;//int照常可以使用
    
    std::cout << name << "今年" << age << "岁了";
    return 0;
}
