#include <iostream>
/*
如果只是做单纯的对比，可以使用更简洁的代码表达
以以下格式表达
（需要对比的内容）？（如果对比内容正确运行的代码）：（如果对比内容错误运行的代码）
*/

int main(){
    int grade;
    std::cout << "成绩多少？";
    std::cin >> grade;
    grade >= 60 ? std::cout << "你合格了" << '\n': std::cout << "你不合格" << '\n';
    //测试成绩是否及格

    int number;
    std::cout << "数字多少？";
    std::cin >> number;
    number % 2 ? std::cout << "是奇数" : std::cout << "是偶数";
    //测试数字是奇偶数

    return 0;
}
