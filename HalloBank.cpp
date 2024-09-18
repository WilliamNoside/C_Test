#include <iostream>
#include <iomanip>
/*
一个模拟钱庄的程序
*/

void showbalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 1;

    do{
        std::cout << "*************************\n";
        std::cout << "欢迎来到钱庄，你要办理什么业务\n";
        std::cout << "*************************\n";
        std::cout << "1.查看余额\n";
        std::cout << "2.存钱\n";
        std::cout << "3.取钱\n";
        std::cout << "4.离开钱庄\n";
        std::cin >> choice ;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showbalance(balance);
                    break;
            case 2: balance += deposit();
                    showbalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showbalance(balance);
                    break;
            case 4: std::cout << "欢迎下次再来\n";
                    break;
            default: std::cout << "请输入正确的数字\n";
        }
    }
    while(choice != 4);

    return 0;
}

void showbalance(double balance){
    std::cout << "你的钱币数量为" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount = 0 ; 
    std::cout << "输入你要存入的钱币数量\n";
    std::cin >> amount ;

    if(amount > 0){
        return amount;
    }else{
        std::cout << "请输入正确的的钱币数量\n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0 ;
    std::cout << "输入你要取出的钱币数量\n";
    std::cin >> amount ;

    if(amount > balance){
        std::cout << "你账户里没有那么多钱！\n";
        return 0;
    }else if(amount < 0){
        std::cout << "请输入正确的钱币数量\n";
        return 0;
    }
    else{
        return amount;
    }
}