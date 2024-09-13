#include <iostream>
/*
加减乘除计算器！
用到了Switch Case的知识
*/

int main(){

    char op ;
    double a ;
    double b ;
    double c ;

    std::cout << "************计算器*************" << '\n';

    std::cout << "输入你的运算符号：“+ - * /”：";
    std::cin >> op;

    std::cout << "输入你要运算的数字1：";
    std::cin >> a;

    std::cout << "输入你要运算的数字2：";
    std::cin >> b; 

    switch(op){
        case '+':
            c = a + b;
            std::cout << "计算结果为" << c << '\n';
            break;
        case '-':
            c = a - b;
            std::cout << "计算结果为" << c << '\n';
            break;
        case '*':
            c = a * b;
            std::cout << "计算结果为" << c << '\n';
            break;
        case '/':
            c = a / b;
            std::cout << "计算结果为" << c << '\n';
            break;
        default:
            std::cout << "请输入正确的运算符号";
    }

    std::cout << "*******************************" ;

    return 0;
}
