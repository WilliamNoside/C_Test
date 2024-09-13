#include <iostream>
#include <cmath>
/*
勾股定理计算器
*/

int main(){
    double a ;
    double b ;
    double c ;

    std::cout << "a边长为多少";
    std::cin >> a;

    std::cout << "b边长为多少";
    std::cin >> b;

    double a1 = pow(a,2);
    double b1 = pow(b,2);
    c = sqrt (a1+b1);

    std::cout << "c边长为" << c ;

    return 0;
}
