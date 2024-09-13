#include <iostream>
/*
namespace中相同的变量可以代表不同值，可以通过指代的方式在不同方法中引用变量。
*/
namespace first{
    int x = 3; // x 代表First命名空间里的目标值
}

namespace second{
    int x = 4; // x 代表Second命名空间里的目标值
}

int main(){
    using std::cout; //使用Using后可以在下省略cout前的std::
    //using namespace std 可以为下省略所有的std，但是标准库中有非常多内容，不建议使用此简写
    int x = 5; // x 代表main方法里的目标值
    cout << x << '\n' ;  // 输出main方法里x
    cout << first::x << '\n' ; // 输出first命名空间里x
    cout << second::x << '\n' ; // 输出second命名空间里x
    return 0;
}

