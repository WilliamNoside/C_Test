#include <iostream>
/*
Memory Address是数据存储的位置
一般数据将会用16进制来表示，不同的数据类型将占用不同的大小

*/
int main(){
    std::string test1 = "halloworld";
    int test2 = 20;
    bool test3 = 0;
    double test4 = 4.0;
    //不同的数据类型

    std::cout << &test1 << '\n' ;
    std::cout << &test2 << '\n' ;
    std::cout << &test3 << '\n' ;
    std::cout << &test4 << '\n' ;
    //使用&加上变量以得到16进制的数据位置
    //每次编译后的结果不同，但是相差的数字相同

    return 0; 
}