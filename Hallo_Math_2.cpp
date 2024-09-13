#include <iostream>

int main(){
    int x = 5; // x 代表目标值
    double y = 5.5; //double为小数类型
    char grade = 'A'; //char为单个字节，多个字符会导致溢出报错
    bool question = true ; //布尔运算，输出结果或正（T）或负（F）
    std::string fruit = "Apple"; //字符串可以为多个字符，但需注意格式为双引号“”包裹而非单引号‘’
    std::cout << "我最喜欢的水果是" << fruit ;
    /*
        const 可以确保变量在之后的代码中不变，保持为目标值。
        例如 const int /const double
        const 后的变量将作为只读值，不再会发生变化。
    */
   const double Coins = 3.58; //金币数量永久为3块五毛8，真穷

    return 0;
}
