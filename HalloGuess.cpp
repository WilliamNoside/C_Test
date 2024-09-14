#include <iostream>
/*
在循环中如果想要跳出或跳过循环，则需要用到Break和Continue
跳出循环使用Break，用于停止整个循环并运行接下来的代码
跳过循环使用Continue，用于停止单次循环，并不会停止跳出循环
还是使用放烟花作为示例，10-0倒数，且跳过6
*/
int main(){

    for(int i=11 ;i--;){
        if(i == 6){
            continue;
        }
        if(i == -1){
            break;
        }
        std::cout << i << '\n';
    }

    std::cout << "放烟花咯";
    return 0;
}