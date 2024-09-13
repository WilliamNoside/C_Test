#include <iostream>
/*
转换分为Implicit Conversion（隐式转换）和Explicit Conversion（显式转换）
隐式由编译器自动转换，显式则是由程序员（我们）在代码中提示编译器进行转换
如将Int在除法中转换成Double，又或者将Int转换为Char（使用Unicode对照表对应）
*/
int main(){
    //int coin = 3.58 ;
    //std::cout << coin ;//如果使用这个代码会看到报错，且金币数量向下取整，吞了我们的钱。这里就用到了隐式转换，将double的3.58自动转为了int的3。
    //std::cout << coin ;//如果要实验将代码前的注释去掉即可。
    
    std::cout << (char)100 << '\n';//将数字100显式转换成char（字符）则会在Unicode表上找到对应位置输出

    int correct = 8;
    int question = 10;
    //double score = correct/question * 100; //因为correct和question都为int类型，int类型自动向下取整，得出答案为0%
    double score = correct/(double)question * 100;//将int转换为double后问题得到解决
    std::cout << score << "%";

    return 0;
}
