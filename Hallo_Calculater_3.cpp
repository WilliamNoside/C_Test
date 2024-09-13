#include <iostream>
/*
温度计算器🌡️！
用到了If else和与或非的知识
*/

int main(){

    char unit ;
    double temp ;

    std::cout << "******温度计算器******" << '\n';

    std::cout << "输入你要转换的单位！" << '\n';
    std::cout << "输入C将从摄氏度转换成华氏度" << '\n';
    std::cout << "输入F将从华氏度转换成摄氏度" << '\n';
    std::cout << "你想转换什么单位？" << '\n';

    std::cin >> unit; 

    if(unit == 'C'||unit == 'c'){
        std::cout << "输入你想转换的摄氏度温度？" ;
        std::cin >> temp; 

        temp = (1.8 * temp) + 32.0;
        std::cout << "转换结果为" << temp << "华氏度" << '\n';
    }
    else if(unit == 'F'||unit == 'f'){
        std::cout << "输入你想转换的华氏度温度？" ;
        std::cin >> temp; 

        temp = (temp - 32.0) / 1.8;
        std::cout << "转换结果为" << temp << "摄氏度" << '\n';
    }
    else{
        std::cout << "请输入正确的单位！" << '\n';
    }

    std::cout << "*********************" ;

    return 0;
}
