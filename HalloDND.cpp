#include <iostream>
/*
这里我们要用随机数做一个类龙与地下城车卡的小东西
我也不知道能不能做出来，但是尽可能的用到之前学的内容进行制作
*/
int main(){
    std::string name;
    int age;
    int HP; 
    int MP;
    int SPD;
    int MONEY;
    int G;
    int GMONEY;
    int ITEM;
    char s;
    srand(time(NULL));

    /*
    这里规定了变量
    */

    while(name.empty()){
        std::cout << "输入你的名字\n" ;
        v
    }
    
    do{
        std::cout << "输入你的年龄\n" ;
        std::cin >> age;
    }while(age <= 0);

    std::cout << "欢迎来到江湖游戏，" << name << "少侠\n" ;
    std::cout << "你" << age << "岁\n" ;
    std::cout << "你将随机获得自己的天赋属性和物品\n" ;

    HP = (rand()% 50) +51 ;
    MP = (rand()% 30) +31 ;
    SPD = (rand()% 10) +11 ;
    MONEY = (rand()% 300) +100 ;
    ITEM = (rand()% 20) +1 ;

    std::cout << "你的筋骨值为" << HP << "，这决定了你的生命值和物理攻击。\n" ;
    std::cout << "你的内力值为" << MP << "，这决定了你的技能伤害和冷却时间。\n" ;
    std::cout << "你的速度值为" << SPD << "，这决定了你的移动和攻击速度。\n" ;
    switch(ITEM){
        case 1 :
            std::cout << "大失败！你什么都没有，甚至被山贼打劫，丢掉了所有的钱。\n" ;
            MONEY = 0;
            break;
        case 5 :
            std::cout << "你获得了一个玄级功法。\n" ;
            break;
        case 6 :
            std::cout << "你获得了一个玄级功法。\n" ;
            break;
        case 7 :
            std::cout << "你获得了一个玄级功法。\n" ;
            break;
        case 8 :
            std::cout << "你获得了一个玄级功法。\n" ;
            break;
        case 9 :
            std::cout << "你获得了一把古锭刀。\n" ;
            break;
        case 10 :
            std::cout << "你获得了一件皮甲。\n" ;
            break;
        case 11 :
            std::cout << "你获得了一件皮护腕。\n" ;
            break;
        case 12 :
            std::cout << "你获得了一把皮裤。\n" ;
            break;
        case 13 :
            std::cout << "你获得了一把皮鞋。\n" ;
            break;
        case 14 :
            std::cout << "你获得了一把皮帽。\n" ;
            break;
        case 15 :
            std::cout << "你获得了少量财宝。\n" ;
            MONEY = MONEY +100;
            break;
        case 16 :
            std::cout << "你获得了少量财宝。\n" ;
            MONEY = MONEY +100;
            break;
        case 17 :
            std::cout << "你获得了大量财宝。\n" ;
            MONEY = MONEY +500;
            break;
        case 18 :
            std::cout << "你获得了大量财宝。\n" ;
            MONEY = MONEY +500;
            break;
        case 19 :
            std::cout << "你获得了一个保命法宝。\n" ;
            break;
        case 20 :
            std::cout << "大成功！你获得了秘境地图，和一个保命法宝。\n" ;
            break;
        default :
            std::cout << "你什么都没有获得。\n" ;
    }
    std::cout << "你的钱币为" << MONEY << "，你可以用它来购买物品。\n" ;
    std::cout << "现在将开始你的冒险吧，加油！" << name << "少侠\n" ;

    for(int i=0; i<100 ;i++){
        std::cout << "你的来到了一个赌场，要赌博吗？（Y/N）\n" ;
        std::cout << "你的现在的钱币数量为" << MONEY ;
        std::cin >> s ;
        if(MONEY <= 0){
            std::cout << "赌到最后，一无所有\n" ;
            std::cout << "你没钱了，被赌场老板轰了出去\n" ;
            std::cout << "一个道人看你可怜，帮你还了所有债务，并打发了你20块钱\n" ;
            MONEY = 20 ;
            break;
        }
        else if(s == 'Y' ||s == 'y'){
            std::cout << "开始赌博" ;
            G = (rand()% 6) +1;
            switch(G){
                case 1:
                    std::cout << "你输的一塌糊涂，亏了很多钱。\n" ;
                    GMONEY = (rand()% 800) +101 ;
                    std::cout << "你损失了" << GMONEY << "两银子\n" ;
                    MONEY = MONEY - GMONEY;
                    continue;
                case 2:
                    std::cout << "你输了，亏了一些钱。\n" ;
                    GMONEY = (rand()% 100) +51 ;
                    std::cout << "你损失了" << GMONEY << "两银子\n" ;
                    MONEY = MONEY - GMONEY;
                    continue;
                case 5:
                    std::cout << "你赢了，挣了一些钱。\n" ;
                    GMONEY = (rand()% 100) +51 ;
                    std::cout << "你获得了" << GMONEY << "两银子\n" ;
                    MONEY = MONEY + GMONEY;
                    continue;
                case 6:
                    std::cout << "你赢了庄家，发财。\n" ;
                    GMONEY = (rand()% 800) +101 ;
                    std::cout << "你获得了" << GMONEY << "两银子\n" ;
                    MONEY = MONEY + GMONEY;
                    continue;
                default :
                    std::cout << "你没赢也没输\n" ;
                    continue;
            }
        }
        else if(s == 'N' ||s == 'n'){
            std::cout << "及时止损，趁早收手！\n";
            std::cout << "你还剩下" << MONEY ;
            break;
        }
        else {
            std::cout << "请输入(Y/N)\n";
        }
    }
    std::cout << "你走出了赌场！" << name << "少侠，加油吧\n" ;
    return 0;
}