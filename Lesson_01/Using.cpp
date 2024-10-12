#include <iostream>

using std::cout;    //使用命名空间std中的cout
using std::endl;    //使用命名空间std中的endl
using std::string;  //使用命名空间std中的string

int main() {
    cout << "Hello, world!" << endl;
    string name (10, 'x');
    cout << "Name: " << name << endl;
    return 0;
}


