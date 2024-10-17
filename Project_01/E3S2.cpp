#include <iostream>
#include <string>
#include <vector>
#include <cctype>  // for isdigit()
#include <sstream> // for stringstream
#include <regex> // for regex
#include <stdexcept> // for invalid_argument and out_of_range

/* 要求
_
                        _ooOoo_
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    ____/`---'\____
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /  _||||| -:- |||||_  \
                |   | \\\  -  /'| |   |
                | \_|  `\`---'//  |_/ |
                \  .-\__ `-. -'__/-.  /
              ___`. .'  /--.--\  `. .'___
           ."" '<  `.___\_<|>_/___.' _> \"".
          | | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. _.'_/_/  -' _.' /
===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
                         =---=
                        代码不报错
                        程序没问题
                        用户体验好
                        不要乱输入
                        
- Input：包含多个数字组成字符串，用空格隔开,如："81 67 93 78 89 91 76 87 65 64 63 62 61"
- 检测
— — 字符串中是否为数字，并将数字分别隔开
— — 转成Int
- — 检测数字大小，

    X 100
    A 90 - 99
    B 80 - 89
    ...
    H 20 - 29
    I 10 - 19
    J 0 - 9

- Output：输出如 X:0, A:2, B:0, C:0, D:2, E:2, F:0, G:0, H:0, I:0, J:0

限制：
- 不能使用 11个 变量
- 尝试使用 vector 和 数组
- 不允许使用 scanf, cin 和 subscript
- 必须使用 assign, find and append

实现
- 使用Vector
- 定义一个数组，长度为11，用于计数各个等级的数量
- 定义一个变量，用于记录非数字个数
- 输入字符串，并分割字符串
- 判断每个字符串是否为数字，并将数字转为int
- 判断数字大小，并计数
- 输出结果

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
    std::vector<int> grades(11, 0); //vector 定义，长度为11 初始值为0
    int invalid = 0;

    // 输入字符串
    std::string grade;
    std::cout << "************ Grade system！ ************" << std::endl;
    std::cout << "Enter grades(separated by space or ,): ";
    std::getline(std::cin, grade);

    // 分割字符串
    std::stringstream ss(grade);
    std::string number;
    while (ss >> number) {
        // 判断是否为数字
        if (is_number(number)) {
            try {
                // 将数字转为int
                int num = std::stoi(number);
                // 判断数字大小
                if (num >= 0 && num <= 100) {
                    if (num == 100) {
                        grades[0]++;
                    }else {
                        grades[10 - num / 10]++; // 90-99
                    }
                }else{
                    invalid ++; // 记录非数字个数
                }
            } catch (const std::invalid_argument& e) {
                invalid ++; // 记录非数字个数
            } catch (const std::out_of_range& e) {
                invalid ++; // 记录非数字个数
            }
        }else{
        invalid ++; // 记录非数字个数
        }
    }

    // 输出结果
    std::cout << "\n++++++++ Results ++++++++" << std::endl;
    std::cout << "| Grade |   X   |   A   |   B   |   C   |   D   |   E   |   F   |   G   |   H   |   I   |   J   |" << std::endl;
    std::cout << "|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|" << std::endl;
    std::cout << "| Count |   " << grades[0] << "   |   " << grades[1] << "   |   " << grades[2] << "   |   " << grades[3] 
              << "   |   " << grades[4] << "   |   " << grades[5] << "   |   " << grades[6] << "   |   " 
              << grades[7] << "   |   " << grades[8] << "   |   " << grades[9] << "   |   " << grades[10] << "   |" << std::endl;
    std::cout << "++++++++++++++++++++++++++++" << std::endl;
    if (invalid > 0) {
        std::cout << "Invalid input count:" << invalid << std::endl;
        std::cout << "Please make sure your input is an integer between 0 and 100." << std::endl;
        std::cout << "++++++++++++++++++++++++++++" << std::endl;
    } // 输出非数字个数
    
    
    
    return 0;
}