#include <iostream>
#include <ctime>
/*
石头剪刀布小游戏
目标是做一个玩家选择以及电脑选择的效果。
电脑选择将使用随机数生成来解决
*/

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){
    
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "你的选择是";
    showChoice(player);
    
    computer = getComputerChoice();
    std::cout << "电脑的选择是";
    showChoice(computer);
    

    chooseWinner(player,computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout << "石头剪刀布游戏\n";
    do{
        std::cout << "输入字母选择要出什么\n";
        std::cout << "************\n";
        std::cout << "'S'代表剪刀\n";
        std::cout << "'R'代表石头\n";
        std::cout << "'P'代表布\n";
        std::cout << "你要选择什么？\n";
        std::cin >> player;
    }
    while(player != 'r' && player != 's' && player != 'p');

    return player;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 'c';
    }
    return 0;
}
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
void chooseWinner(char player, char computer){
    switch(player){
        case 'r' :  if(computer == 'r'){
                        std::cout << "你平局了\n";
                    }else if(computer == 'p'){
                        std::cout << "你输了\n";
                    }else{
                        std::cout << "你赢了\n";
                    }
                    break;
        case 'p' :  if(computer == 'p'){
                        std::cout << "你平局了\n";
                    }else if(computer == 's'){
                        std::cout << "你输了\n";
                    }else{
                        std::cout << "你赢了\n";
                    }
                    break;
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