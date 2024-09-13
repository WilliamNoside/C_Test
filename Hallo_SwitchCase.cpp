#include <iostream>
/*
这是Switch Case循环，适用于多种例子列举
这里用投票箱作为案例
*/

int main(){
    int number; //定义一个int变量

    std::cout << "请输入你的支持的候选人编号";
    std::cin >> number; //输入候选人编号

    switch(number){
        case 1:
            std::cout << "你支持特朗普";
            break;
        // 输入1时，输出"你支持特朗普"，然后跳出循环。
        case 2:
            std::cout << "你支持约翰逊";
            break;
        case 3:
            std::cout << "你支持杰克逊";
            break; 
        case 4:
            std::cout << "你支持勃列日涅夫";
            break; 
        case 5:
            std::cout << "你支持乔治五世";
            break; 
        case 6:
            std::cout << "你支持康熙";
            break; 
        case 7:
            std::cout << "你支持莫斯利";
            break; 
        case 8:
            std::cout << "你支持哈耶克";
            break; 
        case 9:
            std::cout << "你支持捷克里德";
            break; 
        case 10:
            std::cout << "你支持兰州拉面";
            break; 
        default:
            std::cout << "请输入数字“1-10”";
        //若没有输入1-10的数字时，默认回复"请输入数字“1-10”
    }
    return 0;
}
