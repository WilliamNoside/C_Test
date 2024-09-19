#include <iostream>
/* 
Array 遍历数组，将数组中所有东西列出来
用到for each
更方便一些

*/
int main()
{
    std::string bsChars[] = {"Bo","Charlie","Gene","Jessie"};
    for(std::string bsChar : bsChars){
        std::cout << bsChar << '\n';
    }

    return 0; 
}