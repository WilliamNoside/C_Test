#include <iostream>
#include <string>
#include <cctype>  // for isdigit()
#include <sstream> // for stringstream
#include <regex> // for regex
/*

要求
- Input：包含多个数字组成字符串，用空格隔开,如："81 67 93 78 89 91 76 87 65 64 63 62 61"
- 检测
— — 字符串中是否为数字，并将数字分别隔开
— — 转成Int
- — 检测数字大小，Grade A 为 81 - 100，Grade B 为 61 - 80，Grade C 为 0 - 60
- Output：输出 Grade A、B、C 对应的数字个数

思路
- 找出空格，并将字符串用stringstream分割为多个字符串
- 遍历每个字符串，判断是否为数字
- 判断数字大小，并计数
- 输出结果

或

- 检测第一个空格，并将字符串中空格前的数字存入数组，并用erase清除存入数组的数字
- 循环，直到字符串内没有空格，则结束循环
- 遍历数组，判断数字大小，并计数
- 输出结果

或

- 用正则表达式匹配数字，并将数字存入数组
- 遍历数组，判断数字大小，并计数
- 输出结果

实现
    使用方法一：
    1. 定义函数is_number，判断字符串是否为数字，并返回布尔值
    2. 输入字符串，并用stringstream分割为多个字符串
    3. 遍历每个字符串，判断是否为数字，并将数字分别存入数组
    4. 遍历数组，判断数字大小，并计数
    5. 输出结果
*/

bool is_number(const std::string& str) {

    for (char c : str) {               //循环判断每个字符是否为数字
        if (!isdigit(c)) {             //如果不是数字，则返回false   
            return false;
        }
    }
    return true;                       //如果全部是数字，则返回true
}

int main() {
    // 定于变量，初始化计数器
    int gradeA = 0, gradeB = 0, gradeC = 0;

    // 输入字符串
    std::string grade;
    std::cout << "************Grade system！************" << std::endl;
    std::cout << "Enter grades(separated by space/,): ";
    std::getline(std::cin, grade);

    // 分割字符串
    std::stringstream ss(grade);
    std::string number;
    while (ss >> number) {
        // 判断是否为数字
        if (is_number(number)) {
            // 将数字转为int
            int num = std::stoi(number);
            // 判断数字大小
            if (num > 80 && num <= 100) {
                gradeA++;
            }
            else if (num > 60 && num <= 80) {
                gradeB++;
            }
            else {
                gradeC++;
            }
        }
    }

    // 输出结果
    std::cout << "Grade A: " << gradeA << std::endl;
    std::cout << "Grade B: " << gradeB << std::endl;
    std::cout << "Grade C: " << gradeC << std::endl;
    std::cout << "**************************" << std::endl;

    return 0;
}


