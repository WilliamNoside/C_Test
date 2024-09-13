#include <iostream>
/*
这是If循环，以及If Else的运用。
这边使用了一个R18检测器作为示例
*/

int main(){
    int age; //定义一个int变量age

    std::cout << "请输入你的年龄";
    std::cin >> age; //输入年龄

    //if循环检测年龄大小是否大于等于18
    if(age >= 18){
        std::cout << "欢迎访问该网页！";
        //如大于等于18，则输出
    }
    else if(age >= 100){
        std::cout << "你太老了，不能访问！";
        //因为这个循环在"age >= 18"的后面，由于程序会根据顺序循环检测，因此就算大于100岁，也不会输出
    }
    else if(age < 0){
        std::cout << "你还没有出生呢！";
        //如年龄小于0，则输出
    }
    else{
        std::cout << "年龄不足以访问！";
        //如小于，则输出
    }
    //会根据顺序循环检测，如检测成功，则不会允许下面的检测。
    

    return 0;
}
