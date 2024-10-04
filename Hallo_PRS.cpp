#include <iostream>
#include <ctime>  //引入时间函数库
/*
石头剪刀布小游戏
目标是做一个玩家选择以及电脑选择的效果。
电脑选择将使用随机数生成来解决
*/

char getUserChoice(); //玩家选择函数
char getComputerChoice(); //电脑选择函数
void showChoice(char choice); //展示选择函数
void chooseWinner(char player, char computer); //判断胜利条件


int main(){
    
    char player; //玩家选择变量
    char computer; //电脑选择变量

    player = getUserChoice(); //玩家选择
    std::cout << "你的选择是";
    showChoice(player);
    
    computer = getComputerChoice(); //电脑选择
    std::cout << "电脑的选择是";
    showChoice(computer);
    

    chooseWinner(player,computer); //判断胜利条件

    return 0; //结束程序
}

//玩家选择函数
char getUserChoice(){

    //输入字母选择要出什么
    char player;
    std::cout << "石头剪刀布游戏\n";
    do{
        std::cout << "输入字母选择要出什么\n";
        std::cout << "************\n";
        std::cout << "'S'代表剪刀\n";
        std::cout << "'R'代表石头\n";
        std::cout << "'P'代表布\n";
        std::cout << "你要选择什么？\n";
        std::cin >> player; //输入选择
    }
    while(player != 'r' && player != 's' && player != 'p');

    return player;
}

//电脑选择函数
char getComputerChoice(){
    //随机生成电脑选择
    srand(time(0));//设置随机数种子
    int num = rand() % 3 + 1;//生成1-3的随机数
    switch(num){
        case 1: return 'r'; //石头
        case 2: return 'p'; //布
        case 3: return 'c'; //剪刀
    }
    return 0;
    
}

//展示选择函数
void showChoice(char choice){

    switch(choice){
        case 'r' : std::cout << "石头\n";
                break;
        case 's' : std::cout << "剪刀\n";
                break;
        case 'p' : std::cout << "布\n";
                break;
    }   
}

//判断胜利条件
void chooseWinner(char player, char computer){
    switch(player){
        //石头胜利条件
        case 'r' :  if(computer == 'r'){
                        std::cout << "你平局了\n";
                    }else if(computer == 'p'){
                        std::cout << "你输了\n";
                    }else{
                        std::cout << "你赢了\n";
                    }
                    break;
        //布胜利条件
        case 'p' :  if(computer == 'p'){
                        std::cout << "你平局了\n";
                    }else if(computer == 's'){
                        std::cout << "你输了\n";
                    }else{
                        std::cout << "你赢了\n";
                    }
                    break;
        //剪刀胜利条件
        case 's' :  if(computer == 's'){
                        std::cout << "你平局了\n";
                    }else if(computer == 'r'){
                        std::cout << "你输了\n";
                    }else{
                        std::cout << "你赢了\n";
                    }
                    break;
    }
}