#include <iostream>
/*
&& and 与 同时满足两个条件为正确，其余情况为错误
|| or 或 满足两个条件中的任意条件为正确，两个条件都不满足为错误
！ not 非 如果不满足条件为正确，如果满足条件为错误
*/

int main(){
    int temp;
    int grade;

    std::cout << "输入温度";
    std::cin >> temp;

    if(temp >=0 && temp <40){
        std::cout << "今天天气不错" << '\n' ;
    }
    else{
        std::cout << "今天天气很差" << '\n' ;
    }

    std::cout << "输入成绩";
    std::cin >> grade;

    if(grade < 0 || grade > 100){
        std::cout << "成绩无效" << '\n' ;
    }
    else if(grade >=60 && grade <=100){
        std::cout << "成绩合格" << '\n' ;
    }
    else{
        std::cout << "成绩不合格" << '\n';
    }

    return 0;
}
