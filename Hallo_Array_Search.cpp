#include <iostream>
/* 
Array 数组中找到对应内容的对应位置
再用对应位置找到另一个数组的对应价格
利用遍历对象，

*/
int searchArray(std::string array[],int size,std::string element);

int main()
{
    std::string manu[] = {"披萨","可乐","汉堡","热狗","薯条","鸡翅"};
    double price[] = {10.99,0.99,5.99,3.99,2.99,4.50};
    int size = sizeof(manu)/sizeof(manu[0]);
    int index;
    std::string myFood;

    std::cout << "欢迎来到餐厅,你想要点什么，我们有:" << '\n';
    for(int i = 0 ; i < size ; i++){
        std::cout << manu[i] << '\n';
    }
    std::getline(std::cin, myFood);

    index = searchArray(manu,size,myFood);

    if(index != -1){
        std::cout << "你点了" << myFood << ",请付款$" << price[index];
    }else{
        std::cout << "你点的" << myFood << "不在菜单上";
    }

    return 0; 
}

int searchArray(std::string array[],int size,std::string element){

    for (int i = 0 ; i < size ; i++){
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}