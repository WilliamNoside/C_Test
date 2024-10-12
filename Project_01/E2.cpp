#include <iostream>
#include <string>

/*

要求
- Input：Fistname,space,Lastname.
- Output：‘Firstname‘, ‘Lastname‘, and initials.
Example:
- Input: John Doe
- Output: 
    - Firstname: John 
    - Lastname: Doe
    - Initials: JD

思路
- 输入字符串，以空格分割
- 取出第一个字符串作为Firstname
- 取出最后一个字符串作为Lastname
- 取出中间的字符串作为Initials
- 输出结果

实现
- 和第一题难度不成正比，不写了

*/

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Split input string by space
    std::string firstname, lastname, initials;
    size_t pos = name.find(' ');
    firstname = name.substr(0, pos);
    lastname = name.substr(pos + 1);
    initials = firstname.substr(0, 1) + lastname.substr(0, 1);

    // Output results
    std::cout << "Firstname: " << firstname << std::endl;
    std::cout << "Lastname: " << lastname << std::endl;
    std::cout << "Initials: " << initials << std::endl;

    return 0;
}