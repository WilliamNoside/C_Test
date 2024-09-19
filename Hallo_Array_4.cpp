#include <iostream>
/* 
Array 数组导入到其他方程。
利用额外的size计算

*/
double getTotal(double price[],int size);

int main()
{
    double price[] = {49.99,89.99,60.99,90.99};
    int size = sizeof(price)/sizeof(price[0]);
    double total = getTotal(price,size);

    std::cout << "$" << total;

    return 0; 
}

double getTotal(double price[],int size){
    double total = 0;

    for (int i = 0 ; i < size ; i++){
        total += price[i];
    }

    return total;
}