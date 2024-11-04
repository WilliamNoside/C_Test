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

// 计算阶乘的函数
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

// 大小写方法的函数
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
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');
}

// 员工类
class Employee {
    private:
        // 定义三个成员变量，用于存储员工的姓名、健康值、工资
        std::string name;
        int health;
        int salary;
    public:
        Employee(int initialSalary, int initialHealth , std::string name) : salary(initialSalary), health(initialHealth), name(name) {}
        // 定义三个函数，用于修改员工的健康值、工资
        void changeSalary(int amount) { // 加减工资
            salary += amount; 
        } 

        void changeHealth(int amount) { // 加减健康值
            health += amount;
        }

        int getSalary() const { // 显示工资
            return salary;
        }

        int getHealth() const { // 显示健康值
            return health;
        }

        bool isAlive() const { // 判断是否存活
            return health > 0;
        }
};

// 事件类
class Event {
public:
    void triggerEvent(Employee& employee) {

        // 定义一个int变量，用于选择工作、休息、工作到家
        int choice;
        std::cout << "What do you want to do?\n";
        std::cout << "1. Work\n";
        std::cout << "2. Rest\n";
        std::cout << "3. Work at home\n";
        std::cout << "Enter your choice (1, 2, 3): ";
        std::cin >> choice;

        // 选择工作、休息、工作到家
        switch(choice) {
            case 1:
                std::cout << "You selected to work!\n";
                employee.changeSalary(3000);
                employee.changeHealth(-50);
                break;
            case 2:
                std::cout << "You selected to rest!\n";
                employee.changeSalary(-1000);
                employee.changeHealth(50);
                break;
            case 3:
                std::cout << "You selected to Work at home！\n";
                employee.changeSalary(1500);
                employee.changeHealth(-20);
                break;
            default:
                std::cout << "invalid choice。\n"; //无效选择后重复
                triggerEvent(employee);
                break;
        }
    }
};

// 游戏方法的函数
void playGame() {
    char repeat;
    do {
        std::cout << "————————————————————————————————————\n";
        std::cout << "Welcome to the \"salaryman\" game!\n";
        std::cout << "You have 100 health and $10,000 salary.\n";
        std::cout << "You will go for a 5-day internship.\n";
        std::cout << "You can choose what to do during the internship.\n";
        std::cout << "Work hard for more salary!\n";
        std::cout << "Watch out for your health. If you run out of health, you will die.\n";
        std::cout << "What is your name? ";
        std::string name;
        std::getline(std::cin, name);
        
        // 创建一个员工对象
        Employee employee(3000, 100, name);
        Event event;

        // 开始游戏
        for (int day = 1; day <= 10; ++day) {
            std::cout << "Day " << day << ":\n";
            event.triggerEvent(employee);

            // 判断是否死亡
            if (!employee.isAlive()) {
                std::cout << "You Died!\n";
                std::cout << "   .-.      \n"
                             " __| |__    \n"
                             "[__   __]   \n"
                             "   | |      \n"
                             "   | |      \n"
                             "   | |      \n"
                             "   '-'      \n";
                break;
            }
            // 显示员工的健康值和工资
            std::cout << "Salary: " << employee.getSalary() << ", Health: " << employee.getHealth() << "\n";
        }
        // 显示游戏结束后的信息
        if (employee.isAlive()) {
            std::cout << "Your final salary: " << employee.getSalary() << "\n";
            
            if (employee.getSalary() >= 10000) {
                std::cout << "You got promoted!\n";                 // 判断是否升职
            } else if (employee.getSalary() >= 5000) {
                std::cout << "You got the job.\n";                  // 判断是否得到工作
            } else {
                std::cout << "You failed to secure the job.\n";     // 判断是否失败
            }
        }
        std::cout << "Thanks for playing!\n";
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}

// 菜单函数
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
                playGame();
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

// 主函数
int main() {
    // 调用菜单函数
    menu();
    // 退出程序
    return 0;
}
