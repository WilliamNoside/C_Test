#include <iostream>
/* 
Array 2D数组，有行和列的区分，可以使用两个中括号来表达
例如：int num[][]={1,2,4},{3,4,5},{6,9,7};


*/
int main()
{
    std::string bsChars[][3]= {{"Bo","Charlie","Gene"},
                              {"Jessie","Bea","Dynamike"},
                              {"Ruffs","Spike","Pam"}} ;

    int rows = sizeof(bsChars)/sizeof(bsChars[0]);
    int columns = sizeof(bsChars[0])/sizeof(bsChars[0][0]);

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
            std::cout << bsChars[i][j] << '\n';
        }
        std::cout << '\n';
    }

    return 0; 
}