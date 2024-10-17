# include <iostream> 
# include <string> 
# include <cctype> // for std::isalpha()
# include <vector> // for std::vector
# include <sstream>

/*
|     |
                                \\_V_//
          捉虫勇士               \/=|=\/
          BUG死光光               [=v=]
                               __\___/_____
                              /..[  _____  ]
                             /_  [ [  M /] ]
                            /../.[ [ M /@] ]
                           <-->[_[ [M /@/] ]
                          /../ [.[ [ /@/ ] ]
     _________________]\ /__/  [_[ [/@/ C] ]
    <_________________>>0---]  [=\ \@/ C / /
       ___      ___   ]/000o   /__\ \ C / /
          \    /              /....\ \_/ /
       ....\||/....           [___/=\___/
      .    .  .    .          [...] [...]
     .      ..      .         [___/ \___]
     .    0 .. 0    .         <---> <--->
  /\/\.    .  .    ./\/\      [..]   [..]
 / / / .../|  |\... \ \ \    _[__]   [__]_
/ / /       \/       \ \ \  [____>   <____]


要求
- Input：输入姓名，格式为“Firstname Lastname”
- Output：输出姓名的首字母、姓氏的首字母、全名的首字母
- E.g.：
    - Input：John Doe
    - Output：First Name: John
              Last Name: Doe
              Initials: JD
- 注意事项：
    - 名字中出现数字、特殊字符等字符时，输入无效。
    - 名字的空格只有一个。

The usage of scanf, cin and subscript are forbidden.
The usage of assign, find and append must be present.i

    
*/
bool is_alpha(const std::string& str) {
    // 判断字符串是否只包含字母
    for (char c : str) {
        if (!std::isalpha(c)) {  // 如果有不是字母的字符，则返回 false
            return false;
        }
    }
    return true;
}

int main() {
    std::string full_name;

    // 循环输入姓名，直到输入有效的姓名
    while (true) {

        //清除缓存区
        std::cin.clear();
        fflush(stdin);

        std::cout << "Enter your full name (Firstname Lastname): ";
        std::getline(std::cin, full_name);

        if (full_name.empty() || full_name.find_first_not_of(' ') == std::string::npos){// 输入为空或单独输入空格
            // 输入为空
            std::cout << "OK，I dont need to know your name, no body cares,bye!" << std::endl;
            break;
            // 跳出 while 循环
        }

        // 输入有效，判断格式是否正确

        std::stringstream ss(full_name);
        std::vector<std::string> name_parts;
        std::string part;

        while (ss >> part) {
            name_parts.push_back(part);
        }

        if (name_parts.size() < 2 ) {
            std::cout << "Hi," << full_name << ",Nice to meet you! Do you have a surname?(Y/N)" << std::endl;
            // 询问是否有姓氏
            if (std::cin.get() == 'N' || std::cin.get() == 'n') {
                std::cout << "OK, MR. " << full_name << " Bye！" << std::endl;
                break;  // 跳出 while 循环
            }
            continue;  // 重新请求输入
        }

        if (name_parts.size() > 3) {
            std::cout << "You have a really long name,are you sure ?! But please enter 2 or 3 parts (Firstname [Middlename] Lastname)." << std::endl;
            continue;  // 重新请求输入
        }

        bool valid = true;
        for (const std::string& name : name_parts) {
            if (!is_alpha(name)) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            std::cout << "Are you kidding me ?! Name should only contain alphabetic characters." << std::endl;
            continue;  // 重新请求输入
        }

        size_t space_pos = full_name.find(' '); // 记录空格的位置

        std::string firstname = name_parts[0]; // 名字
        std::string lastname = name_parts[name_parts.size() - 1]; // 姓氏
        std::string middlename = (name_parts.size() == 3) ? name_parts[1] : ""; // 名字中间的名字

        std::string initials;
        initials.append(1, firstname[0]);  // 名字的首字母
        if (!middlename.empty()) {
            initials.append(1, middlename[0]);  // 中间名的首字母
        }
        initials.append(1, lastname[0]);   // 姓氏的首字母

        std::cout << "First Name: " << firstname << std::endl;
        if (!middlename.empty()) {
            std::cout << "Middle Name: " << middlename << std::endl;
        }
        std::cout << "Last Name: " << lastname << std::endl;
        std::cout << "Initials: " << initials << std::endl;

        // 输出结果
        break;
        // 跳出 while 循环
    }

    return 0;
}

