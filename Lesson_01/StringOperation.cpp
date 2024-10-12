# include <iostream>
# include <string>

using namespace std;

int main() {
    string str1 = "Hello"; //str1是一个变量，它的值是"Hello"
    string str2 = "World"; //str2是一个变量，它的值是"World"
    string a = str1 + " " + str2; //可以这样做，因为str1 和 str2 都是变量，它们的值可能发生变化
    // string b = "Hello " + str2; //不可以这样做，因为str2是一个变量，它的值可能发生变化，而"World"是一个常量
    string c = str1 + " " + "World"; //可以这样做，因为str1 是变量，它的值可能发生变化，而"World"是一个常量
    // string d = "Hello " + "World"; //不可以这样做，因为"World"是一个常量，它的值不会发生变化
    
    return 0;
}
