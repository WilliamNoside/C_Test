#include <iostream>
/* 
Array 数组 用中括号标识
如 double array[] = {1.00,2.00,3.00}
数组中的数据类型需要一致
如果要从数组中提取数字如 std::cout << array[0];//输出数字内的第一个数字

*/
int main(){
    double price[] = {1.00,3.00,5.00,7.00};//定义一个数组
    std::cout << price[0] << '\n';
    std::cout << price[1] << '\n';//输出第二个
    std::cout << price[2] << '\n';
    std::cout << price[3] << '\n';//框内数字为n，输出数组内第"N+1"的数字

    std::string city[] = {"上海","广州","武汉","成都"};//定义一个数据类型为字符串的数组
    city[2] = "伦敦";//覆写第三个为伦敦
    std::cout << city[2];//输出第三个

    std::string PC[3];//定义一个有三个数字的数组
    city[0] = "mac book pro";//赋值
    city[1] = "mac book air";
    city[2] = "Huawei";
    //定义空数组时要先定义
    return 0; 
}