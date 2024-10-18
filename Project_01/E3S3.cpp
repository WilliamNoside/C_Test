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
- switch case 进行数字大小判断
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
                switch(num){
                    case 100:
                        grades[0]++;
                        break;
                    case 99:
                        grades[1]++;
                        break;
                    case 98:
                        grades[1]++;
                        break;
                    case 97:
                        grades[1]++;
                        break;
                    case 96:
                        grades[1]++;
                        break;
                    case 95:
                        grades[1]++;
                        break;
                    case 94:
                        grades[1]++;
                        break;
                    case 93:
                        grades[1]++;
                        break;
                    case 92:
                        grades[1]++;
                        break;
                    case 91:
                        grades[1]++;
                        break;
                    case 90:
                        grades[2]++;
                        break;
                    case 89:
                        grades[2]++;
                        break;
                    case 88:
                        grades[2]++;
                        break;
                    case 87:
                        grades[2]++;
                        break;
                    case 86:
                        grades[2]++;
                        break;
                    case 85:
                        grades[2]++;
                        break;
                    case 84:
                        grades[2]++;
                        break;
                    case 83:
                        grades[2]++;
                        break;
                    case 82:
                        grades[2]++;
                        break;
                    case 81:
                        grades[2]++;
                        break;
                    case 80:
                        grades[3]++;
                        break;
                    case 79:
                        grades[3]++;
                        break;
                    case 78:
                        grades[3]++;
                        break;
                    case 77:
                        grades[3]++;
                        break;
                    case 76:
                        grades[3]++;
                        break;
                    case 75:
                        grades[3]++;
                        break;
                    case 74:
                        grades[3]++;
                        break;
                    case 73:
                        grades[3]++;
                        break;
                    case 72:
                        grades[3]++;
                        break;
                    case 71:
                        grades[3]++;
                        break;
                    case 70:
                        grades[4]++;
                        break;
                    case 69:
                        grades[4]++;
                        break;
                    case 68:
                        grades[4]++;
                        break;
                    case 67:
                        grades[4]++;
                        break;
                    case 66:
                        grades[4]++;
                        break;
                    case 65:
                        grades[4]++;
                        break;
                    case 64:
                        grades[4]++;
                        break;
                    case 63:
                        grades[4]++;
                        break;
                    case 62:
                        grades[4]++;
                        break;
                    case 61:
                        grades[4]++;
                        break;
                    case 60:
                        grades[5]++;
                        break;
                    case 59:
                        grades[5]++;
                        break;
                    case 58:
                        grades[5]++;
                        break;
                    case 57:
                        grades[5]++;
                        break;
                    case 56:
                        grades[5]++;
                        break;
                    case 55:
                        grades[5]++;
                        break;
                    case 54:
                        grades[5]++;
                        break;
                    case 53:
                        grades[5]++;
                        break;
                    case 52:
                        grades[5]++;
                        break;
                    case 51:
                        grades[5]++;
                        break;
                    case 50:
                        grades[6]++;
                        break;
                    case 49:
                        grades[6]++;
                        break;
                    case 48:
                        grades[6]++;
                        break;
                    case 47:
                        grades[6]++;
                        break;
                    case 46:
                        grades[6]++;
                        break;
                    case 45:
                        grades[6]++;
                        break;
                    case 44:
                        grades[6]++;
                        break;
                    case 43:
                        grades[6]++;
                        break;
                    case 42:
                        grades[6]++;
                        break;
                    case 41:
                        grades[6]++;
                        break;
                    case 40:
                        grades[7]++;
                        break;
                    case 39:
                        grades[7]++;
                        break;
                    case 38:
                        grades[7]++;
                        break;
                    case 37:
                        grades[7]++;
                        break;
                    case 36:
                        grades[7]++;
                        break;
                    case 35:
                        grades[7]++;
                        break;
                    case 34:
                        grades[7]++;
                        break;
                    case 33:
                        grades[7]++;
                        break;
                    case 32:
                        grades[7]++;
                        break;
                    case 31:
                        grades[7]++;
                        break;
                    case 30:
                        grades[8]++;
                        break;
                    case 29:
                        grades[8]++;
                        break;
                    case 28:
                        grades[8]++;
                        break;
                    case 27:
                        grades[8]++;
                        break;
                    case 26:
                        grades[8]++;
                        break;
                    case 25:
                        grades[8]++;
                        break;
                    case 24:
                        grades[8]++;
                        break;
                    case 23:
                        grades[8]++;
                        break;
                    case 22:
                        grades[8]++;
                        break;
                    case 21:
                        grades[8]++;
                        break;
                    case 20:
                        grades[9]++;
                        break;
                    case 19:
                        grades[9]++;
                        break;
                    case 18:
                        grades[9]++;
                        break;
                    case 17:
                        grades[9]++;
                        break;
                    case 16:
                        grades[9]++;
                        break;
                    case 15:
                        grades[9]++;
                        break;
                    case 14:
                        grades[9]++;
                        break;
                    case 13:
                        grades[9]++;
                        break;
                    case 12:
                        grades[9]++;
                        break;
                    case 11:
                        grades[9]++;
                        break;
                    case 10:
                        grades[10]++;
                        break;
                    case 9:
                        grades[10]++;
                        break;
                    case 8:
                        grades[10]++;
                        break;
                    case 7:
                        grades[10]++;
                        break;
                    case 6:
                        grades[10]++;
                        break;
                    case 5:
                        grades[10]++;
                        break;
                    case 4:
                        grades[10]++;
                        break;
                    case 3:
                        grades[10]++;
                        break;
                    case 2:
                        grades[10]++;
                        break;
                    case 1:
                        grades[10]++;
                        break;
                    case 0:
                        grades[10]++;
                        break;
                    default:
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