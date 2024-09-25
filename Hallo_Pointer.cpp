#include <iostream>
/*
Pointer适用于解码Memory类型的数据
在使用&后，再使用*可以将数据还原回原始数据
取地址符 &：用于获取变量的地址。
解引用符 *：用于访问指针指向的变量的值（即从内存地址中取出数据）。
*/

int main(){
    std::string test1 = "halloworld";
    int test2 = 20;
    std::string test3[] = {"halloworld","worldhallo","hallohallo"};
    
    //定义数据

    std::string *pTest1 = &test1;
    int *pTest2 = &test2;
    std::string *pTest3 = test3;//数组类型不需要&直接为Memory类型数据。

    //将数据改为Memory类型

    std::cout << *pTest1 << '\n' ;
    std::cout << *pTest2 << '\n' ;
    std::cout << *pTest3 << '\n' ;

    //使用&加上变量以得到16进制的数据位置
    //可以利用

    return 0; 
}