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
- 遍历每个字符串，判断是否为数字，并将数字分别存入数组
- 遍历数组，判断数字大小，并计数
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

- 使用思路二
- 定义函数is_number，判断字符串是否为数字（使用<cctype>中的isdigit()函数）
- 输入字符串，循环，直到字符串内没有空格
- 找出第一个空格的位置，将数字字符串存入num_str，并删掉空格及空格后面的字符
- 判断是否为数字
- 判断数字大小，并计数
- 输出结果

结果：
- 输入："81 67 93 78 89 91 76 87 65 64 63 62 61 2100 你好"
- 输出："Grade A: 3" "Grade B: 4" "Grade C: 5"
- 非数字字符"你好"被忽略，不在范围内的数字"2100"也被忽略
*/

// 判断是否为数字
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
    std::cout << "Enter grades(separated by space): ";
    std::getline(std::cin, grade);

    // 循环，直到字符串内没有空格
    while (!grade.empty()) {

        std::size_t space = grade.find(" ");     // 找出第一个空格的位置
        std::string num_str;                     // 存放数字字符串

        if (space == std::string::npos) {        // 如果没有空格，则将整个字符串存入num_str
            num_str = grade;
            grade.clear();
        } else {                                 // 如果有空格，则将数字字符串存入num_str
            num_str = grade.substr(0, space);    // 取出数字字符串，substr的作用是从字符串中取出一段子串，这里是从开头到空格前的子串
            grade.erase(0, space + 1);           // 删掉空格及空格后面的字符
        }

        //关于space+1的理解：
        //substr(0, space)返回从第0个位置到第space-1个位置的子串，
        //而erase(0, space+1)则是从第0个位置开始删除，删除的长度为space+1，
        //即从第0个位置开始删除第space个字符，包括空格。

        // 判断是否为数字，并将数字分别存入数组
        if (is_number(num_str)) {                // 这里使用到了is_number函数，在文件的开头定义，返回布尔值
            int num = std::stoi(num_str);        // 转成Int

            // 判断数字大小，并计数
            if (num > 80 && num <= 100) {       // Grade A
                gradeA++;
            } else if (num > 60 && num <= 80) { // Grade B
                gradeB++;
            } else {  // Grade C
                gradeC++;
            }
        }
    }

    // 输出结果
    std::cout << "Grade A: " << gradeA << std::endl; 
    std::cout << "Grade B: " << gradeB << std::endl;
    std::cout << "Grade C: " << gradeC << std::endl;
    std::cout << "**************************" << std::endl;
    
    // 程序结束
    return 0;
}
        
            



    
