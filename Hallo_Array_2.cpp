#include <iostream>
/* 
Array 遍历数组，将数组中所有东西列出来
用到Size of

*/
int main()
{
    std::string bsChar[] = {"Bo","Charlie","Gene","Jessie"};
    for(int i = 0;i < sizeof(bsChar)/sizeof(std::string);i++){
        std::cout << bsChar[i] << '\n';
    }

    return 0; 
}