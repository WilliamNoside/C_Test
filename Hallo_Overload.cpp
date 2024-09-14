#include <iostream>

void bakePizza();
void bakePizza(Topping1);
void bakePizza(Topping1 , Topping2);


int main(){
    
    std::string Topping1;
    std::string Topping2;

    std::cout << "欢迎来到披萨餐厅\n";

    std::cout << "你想要什么顶料？\n";
    std::cin >> Topping1 ;
    std::cout << "你还要什么顶料？\n";
    std::cin >> Topping2 ; 

    bakePizza(Topping1 , Topping2);
    return 0;
}

void bakePizza(){
    std::cout << "这是你的披萨。" << '\n' ; 
}

void bakePizza(std::string Topping1){
    std::cout << "这是你的" << Topping1 << "披萨。" << '\n' ;
}

void bakePizza(std::string Topping1 , std::string Topping2 ){
    std::cout << "这是你的" << Topping1 << "和" << Topping2 << "披萨。" << '\n';
}