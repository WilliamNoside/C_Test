#include <iostream>

int main()
{
    /* 
    我要做一个模拟剪刀石头布的小游戏
    */
    // 定义变量 
    int player_choice, computer_choice;
    // 玩家输入选择
    std::cout << "请选择(剪刀(0) 石头(1) 布(2))：";
    std::cin >> player_choice;
    // 随机生成电脑选择
    computer_choice = rand() % 3;
    // 输出电脑选择
    std::cout << "电脑选择：" << computer_choice << std::endl;
    // 输出结果
    if (player_choice == computer_choice) {
        std::cout << "平局！" << std::endl;
    } else if (player_choice == 0 && computer_choice == 2) {
        std::cout << "你赢了！" << std::endl;
    } else if (player_choice == 1 && computer_choice == 0) {
        std::cout << "你赢了！" << std::endl;
    } else if (player_choice == 2 && computer_choice == 1) {
        std::cout << "你赢了！" << std::endl;
    } else {
        std::cout << "你输了！" << std::endl;
        }
        // 结束游戏

    return 0; 
}