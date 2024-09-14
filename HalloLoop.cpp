#include <iostream>
/*
循环套循环，循环何其多
使用两个循环做一个长方形
*/
int main(){

    int a;
    int b;
    char c;

    std::cout << "长方形长度多少";
    std::cin >> a ;

    std::cout << "长方形高度多少";
    std::cin >> b ;

    std::cout << "长方形由什么构成的";
    std::cin >> c ;

    for(int i=1 ;i<=b ;i++){
        for(int i=1 ;i<=a ;i++){
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "画完了";
    return 0;
}