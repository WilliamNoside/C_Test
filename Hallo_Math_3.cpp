#include <iostream>
/*
加减乘除，样样精通，C才是最好的语言（
+加法-减法*乘法/除法
*/

int main(){
    int banana = 10;
    banana = banana + 10;//加十个香蕉
    banana +=5;//加五个香蕉
    banana ++;//加一个香蕉

    int apple =20;
    apple = apple - 10;//减十个苹果
    apple -=5;//减五个苹果
    apple --;//减一个苹果

    int pear =5;
    pear = pear*2;//两倍的梨
    pear *=2; //两倍的梨

    int human = 10;
    human = human/2 ;//二分之一的人
    human /=2;//二分之一的人
    //int类型向下取整，因为人不能被分成两份，所以分成两份的人就没了
    double people = 5;
    people /=2;//二分之一的人
    //如果人的类型是Double，那人的数量可以用小数来表示
    int child =20;
    int remainder = child % 3;//小孩被分成三组,%计算余数
    std::cout << remainder;//输出余数

    return 0;
}
