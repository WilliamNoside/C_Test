# include <iostream>
# include <vector>
# include <cmath>
# include <string>

/*
要求
- 制作一个菜单栏，可以通往各个功能页面
- 在菜单栏中，有四个功能页面：
- 计算方法
— — 计算阶乘
- 大小写方法
— — 将名字的英文转为全大写
— 游戏方法
— — 一个文字小游戏
- 退出方法
- - 退出程序
- 需要有一个菜单栏和一个退出程序

思路
- 菜单栏可以用do while解决
- 计算阶乘可以用一个函数实现
- - 使用一个循环，从1乘到输入的数字，累加求和
- 大小写方法可以用一个函数实现
- - 使用upper()函数将输入的字符串全部转为大写
- 游戏方法可以用两个函数实现
- - SalaryMan 可以拆分成游戏和判断函数，玩家输入选项后调用判断函数，增加或减少生命值或工资
- - 死亡后退回菜单，游戏结束后退回菜单
- 退出直接结束菜单函数

*/
void calculateFactorial() {
    char repeat;
    do{ 
        // 定义一个int变量，用于输入数字
        int num;
        std::cout << "Enter a number to calculate its factorial: ";
        std::cin >> num;

        // 定义一个int变量，用于阶乘的计算
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            // i乘到num，累加求和
            factorial *= i;
        }
        // 输出结果
        std::cout << "The factorial of " << num << " is " << factorial << std::endl;
        // 询问用户是否重复
        std::cout << "Do you want to calculate another number? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}

void convertToUppercase() {
    char repeat;
    do {
        // 定义一个string变量，用于输入字符串
        std::string name;
        std::cout << "Enter a name to convert to uppercase: ";
        std::cin >> name;

        // 调用upper()函数，将输入的字符串全部转为大写
        std::string upperName = name;
        std::transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);

        // 输出结果
        std::cout << "The uppercase name is " << upperName << std::endl;

        // 询问用户是否重复
        std::cout << "Do you want to get another name? (y/n): ";
        char repeat;
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');
}


class Employee {
    private:
        std::string name;
        int health;
        int salary;
    public:
        Employee(int initialSalary, int initialHealth , std::string name) : salary(initialSalary), health(initialHealth), name(name) {}

        void changeSalary(int amount) {
            salary += amount;
        }

        void changeHealth(int amount) {
            health += amount;
        }

        int getSalary() const {
            return salary;
        }

        int getHealth() const {
            return health;
        }

        bool isAlive() const {
            return health > 0;
        }
};


class Event {
public:
    void triggerEvent(Employee& employee) {

        int choice;
        std::cout << "选择一个选项 (1, 2, 3): ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "你选择了加班，工资增加，健康减少。\n";
                employee.changeSalary(100);
                employee.changeHealth(-10);
                break;
            case 2:
                std::cout << "你选择了休息，健康增加，但工资不变。\n";
                employee.changeHealth(15);
                break;
            case 3:
                std::cout << "你选择了出差，工资大幅增加，健康大幅减少。\n";
                employee.changeSalary(200);
                employee.changeHealth(-30);
                break;
            default:
                std::cout << "无效选择。\n";
                break;
        }
    }
};

void playGame() {
    char repeat;
    do{
    std::cout << "Welcome to the "salaryman" game!\n";
    std::cout << "You have 100 health and $10,000 salary.\n";
    std::cout << "You will go for a 5 day internship.\n";
    std::cout << "You can choose what to do during the internship.\n";
    std::cout << "Work hard for mor salary!\n";
    std::cout << "Watch out your health, if you run out of health, you will die.\n";
    std::cout << "What is your name sir?\n";
    std::string name;
    std::cin >> name;
    Employee employee(10000, 100, name);
    Event event;
    for (int day = 1; day <= 5; ++day) {
        std::cout << "Day " << day << ":\n";
        dayEvent.triggerEvent(player);

        if (!player.isAlive()) {
            std::cout << "You Died!   \n";
            std::cout << "   .-.      \n 
                           __| |__    \n
                          [__   __]   \n
                             | |      \n
                             | |      \n
                             | |      \n
                             '-'      \n";
            break;
        }
        std::cout << "Salary: " << player.getSalary() << ", Health: " << player.getHealth() << "\n";
    } 

    if (player.isAlive()) {
        std::cout << ": " << player.getSalary() << "\n";
        // 检查结局
        if (player.getSalary() >= 1000) {
            std::cout << "You got promoted！\n";
        } else if(player.getSalary() >= 500) {
            std::cout << "You got this job。\n";
        } else {
            std::cout << "You failed this job。\n";
        }
    }
    std::cout << "Thanks for playing!\n";
    // 询问用户是否重复
    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}

void menu() {
    // 定义一个int变量，用于选择功能页面
    int choice;
    // 使用do while循环，直到选择退出功能页面
    do {
        std::cout << "1. Calculate Factorial\n";
        std::cout << "2. Convert to Uppercase\n";
        std::cout << "3. Play Game\n";
        std::cout << "4. Exit Program\n";
        std::cout << "Please Enter your choice: ";
        std::cin >> choice;

        //清理缓冲区，避免错误
        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                calculateFactorial();
                break;
            case 2:
                convertToUppercase();
                break;
            case 3:
                //playGame();
                break;
            case 4:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
                break;
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
