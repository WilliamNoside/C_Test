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
(大多使用课上讲的内容实现)
- 检测第一个空格，并将字符串中空格前的数字存入数组，并用erase清除存入数组的数字
- 循环，直到字符串内没有空格，则结束循环
- 遍历数组，判断数字大小，并计数
- 输出结果

或

- 用正则表达式匹配数字，并将数字存入数组
- 遍历数组，判断数字大小，并计数
- 输出结果

实现
- 第三种方法：
    - 定义正则表达式，用于匹配数字
    - 使用正则表达式查找所有数字
    - 遍历匹配到的数字，判断数字大小，并计数
    - 输出结果

正则表达式是什么？
- 正则表达式（Regular Expression）是一种文本模式，它描述了一种字符串匹配的模式。
- 它是由一系列字符组成的字符串，用来匹配一系列符合某个模式的字符串。
- 常用的正则表达式有：
    - \d：匹配任意数字，等价于 [0-9]
    - \D：匹配任意非数字，等价于 [^0-9]
    - \s：匹配任意空白字符，等价于 [\f\n\r\t\v]
    - \S：匹配任意非空白字符，等价于 [^ \f\n\r\t\v]
    - \w：匹配任意字母、数字或下划线，等价于 [a-zA-Z0-9_]
    - \W：匹配任意非字母、数字或下划线，等价于 [^a-zA-Z0-9_]
    - . ：匹配任意字符，除了换行符 \n
    - ^ ：匹配字符串的开始
    - $ ：匹配字符串的结束
    - []：匹配括号内的任意字符
    - | ：匹配括号内的任意一个字符
    - * ：匹配前面的字符零次或多次
    - + ：匹配前面的字符一次或多次
    - ? ：匹配前面的字符零次或一次
    - {n}：匹配前面的字符 n 次
    - {n,}：匹配前面的字符 n 次或多次
    - {n,m}：匹配前面的字符 n 到 m 次

本题中，我们需要匹配数字，因此使用 \d 即可。

\\d+ 的含义是匹配一或多个数字。两个 \\ 用于转义，表示 \d 是一个普通字符，而不是一个特殊字符。+ 表示匹配前面的字符一次或多次。

*/

/*

正则表达式方法中我们不需要额外的函数来判断是否为数字，因为正则表达式已经帮我们做了。

bool is_number(const std::string& str) {

    for (char c : str) {               //循环判断每个字符是否为数字
        if (!isdigit(c)) {             //如果不是数字，则返回false   
            return false;
        }
    }
    return true;                       //如果全部是数字，则返回true
}

byebye is_number() function. I will use regex instead. It's more powerful and flexible. I dont need you anymore. 
*/

int main() {
    // 定于变量，初始化计数器
    int gradeA = 0, gradeB = 0, gradeC = 0;

    // 输入字符串
    std::string grade;
    std::cout << "************Grade system！************" << std::endl;
    std::cout << "Enter grades(separated by space): ";
    std::getline(std::cin, grade);

    
    //// 正则表达式，用于匹配数字
    std::regex number_regex("\\d+"); // 匹配数字的正则表达式 \\d+ 匹配一或多个数字
    std::smatch match;               // 存放匹配结果 

    // 使用正则表达式查找所有数字
    std::string::const_iterator search_start(grade.cbegin());  // 定义搜索起点
                                                               // std::string::const_iterator 是一个常量迭代器，用于指向字符串的常量位置
                                                               // search_start 指向 grade 字符串的起始位置
                                                               // grade.cbegin() 返回指向 grade 字符串的第一个字符
    
    while (std::regex_search(search_start, grade.cend(), match, number_regex)) {
                                                                // std::regex_search() 函数用于在字符串中查找正则表达式的匹配
                                                                // 第一个参数 search_start 指向搜索起点
                                                                // 第二个参数 grade.cend() 指向字符串的结尾
                                                                // 第三个参数 match 用于存放匹配结果
                                                                // 第四个参数 number_regex 用于定义正则表达式
                                                                // 该While循环将一直执行，直到没有匹配到数字为止                                                              

        // 提取匹配的数字字符串
        std::string number_str = match[0];
        
        // 将匹配到的数字字符串转换为整数
        int num = std::stoi(number_str);
        
        // 判断数字所属的等级
        if (num > 80 && num <= 100) {
            gradeA++;
        } else if (num > 60 && num <= 80) {
            gradeB++;
        } else {
            gradeC++;
        }
        
        // 移动搜索起点，继续查找下一个匹配
        search_start = match.suffix().first;
    }

    // 输出结果
    std::cout << "Grade A: " << gradeA << std::endl;
    std::cout << "Grade B: " << gradeB << std::endl;
    std::cout << "Grade C: " << gradeC << std::endl;
    std::cout << "**************************" << std::endl;

    return 0;
}