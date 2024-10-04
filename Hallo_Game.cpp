#include <iostream>

int main() {

    char chioce;
    int Fun = 0;
    int HP = 10;
    int Prograss = 0;

    std::cout << "Hello, Welcome to the Hallo Game!" << std::endl;
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << "Day 1: " << std::endl;
    std::cout << "1. This is the first day Studying C++" << std::endl;
    std::cout << "A.Studying C++ is fun" << std::endl;
    std::cout << "B.C++ is a okey language" << std::endl;
    std::cout << "C.C++ is a bad language" << std::endl;

    std::cin >> chioce;
    if (chioce == 'A' || chioce == 'a') {
        std::cout << "Fun + 3 point!,HP - 3 point,Prograss + 2 point!" << std::endl;
        Fun = Fun + 3;
        HP = HP - 3;
        Prograss = Prograss + 2;
    }
    else if (chioce == 'B' || chioce == 'b') {
        std::cout << "Fun + 1 point!,HP - 1 point,Prograss + 1 point!" << std::endl;
        Fun = Fun + 1;
        HP = HP - 1;
        Prograss = Prograss + 1;
    }
    else if (chioce == 'C' || chioce == 'c') {
        std::cout << "Fun - 1 point!,HP - 2 point,Prograss + 1 point!" << std::endl;
        Fun = Fun - 1;
        HP = HP - 2;
        Prograss = Prograss + 1;
    }else{
        std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "=================== " << std::endl;
    std::cout << "Your point now is:" << std::endl;
    std::cout << "Fun: " << Fun << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "Prograss: " << Prograss << std::endl;
    std::cout << "=================== " << std::endl;

    std::cout << "2. This is the second day Studying C++" << std::endl;
    std::cout << "You meet a Problem with C++" << std::endl;
    std::cout << "A.Try to solve the problem" << std::endl;
    std::cout << "B.Ask for help" << std::endl;
    std::cout << "C.Ignore the problem" << std::endl;

    std::cin >> chioce;
    if (chioce == 'A' || chioce == 'a') {
        std::cout << "Fun + 1 point!,HP - 3 point,Prograss + 3 point!" << std::endl;
        Fun = Fun + 2;
        HP = HP - 1;
        Prograss = Prograss + 2;
    }
    else if (chioce == 'B' || chioce == 'b') {
        std::cout << "Fun + 3 point!,HP - 2 point,Prograss + 2 point!" << std::endl;
        Fun = Fun + 3;
        HP = HP - 1;
        Prograss = Prograss + 1;
    }
    else if (chioce == 'C' || chioce == 'c') {
        std::cout << "Fun - 1 point!,HP - 1 point,Prograss + 0 point!" << std::endl;
        Fun = Fun - 1;
        HP = HP + 2;
        Prograss = Prograss + 0;
    }else{
        std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "=================== " << std::endl;
    std::cout << "Your point now is:" << std::endl;
    std::cout << "Fun: " << Fun << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "Prograss: " << Prograss << std::endl;
    std::cout << "=================== " << std::endl;

    std::cout << "3. This is the third day Studying C++" << std::endl;
    std::cout << "Bro wanna go to the cinema with you" << std::endl;
    std::cout << "A.refuse and study C++" << std::endl;
    std::cout << "B.Studying C++ in the cinema" << std::endl;
    std::cout << "C.Sure, I will com" << std::endl;

    std::cin >> chioce;
    if (chioce == 'A' || chioce == 'a') {
        std::cout << "Fun - 1 point!,HP - 2 point,Prograss + 3 point!" << std::endl;
        Fun = Fun + 1;
        HP = HP - 2;
        Prograss = Prograss + 2;
    }
    else if (chioce == 'B' || chioce == 'b') {
        std::cout << "Fun + 1 point!,HP - 1 point,Prograss + 2 point!" << std::endl;
        Fun = Fun + 2;
        HP = HP - 1;
        Prograss = Prograss + 1;
    }
    else if (chioce == 'C' || chioce == 'c') {
        std::cout << "HP + 2 point,Prograss + 0 point!" << std::endl;
        HP = HP + 2;
        Prograss = Prograss + 0;
    }else{
        std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "=================== " << std::endl;
    std::cout << "Your point now is:" << std::endl;
    std::cout << "Fun: " << Fun << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "Prograss: " << Prograss << std::endl;
    std::cout << "=================== " << std::endl;

    std::cout << "4. This is the fourth day Studying C++" << std::endl;
    std::cout << "You have a meeting c++ pro" << std::endl;
    std::cout << "A.Ask for skills abour C++" << std::endl;
    std::cout << "B.Have a talk with the pro" << std::endl;
    std::cout << "C.Ask him to play minecraft" << std::endl;

    std::cin >> chioce;
    if (chioce == 'A' || chioce == 'a') {
        std::cout << "Fun + 2 point!,HP - 3 point,Prograss + 2 point!" << std::endl;
        Fun = Fun + 2;
        HP = HP - 3;
        Prograss = Prograss + 2;
    }
    else if (chioce == 'B' || chioce == 'b') {
        std::cout << "Fun + 1 point!,HP - 1 point,Prograss + 1 point!" << std::endl;
        Fun = Fun + 1;
        HP = HP - 1;
        Prograss = Prograss + 1;
    }
    else if (chioce == 'C' || chioce == 'c') {
        std::cout << "Fun - 1 point!,HP + 2 point,Prograss - 1 point!" << std::endl;
        Fun = Fun - 1;
        HP = HP - 2;
        Prograss = Prograss + 1;
    }else{
        std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "=================== " << std::endl;
    std::cout << "Your point now is:" << std::endl;
    std::cout << "Fun: " << Fun << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "Prograss: " << Prograss << std::endl;
    std::cout << "=================== " << std::endl;

    std::cout << "5. This is the fifth day Studying C++" << std::endl;
    std::cout << "You have a meeting c++ god" << std::endl;
    std::cout << "A.Ask for skills about C++" << std::endl;
    std::cout << "B.Have a talk with the god" << std::endl;
    std::cout << "C.Ask him to play minecraft" << std::endl;


    std::cin >> chioce;
    if (chioce == 'A' || chioce == 'a') {
        std::cout << "Fun + 2 point!,HP - 3 point,Prograss + 2 point!" << std::endl;
        Fun = Fun + 2;
        HP = HP - 3;
        Prograss = Prograss + 2;
    }
    else if (chioce == 'B' || chioce == 'b') {
        std::cout << "Fun + 1 point!,HP - 1 point,Prograss + 1 point!" << std::endl;
        Fun = Fun + 1;
        HP = HP - 1;
        Prograss = Prograss + 1;
    }
    else if (chioce == 'C' || chioce == 'c') {
        std::cout << "Fun - 1 point!,HP + 2 point,Prograss - 1 point!" << std::endl;
        Fun = Fun - 1;
        HP = HP - 2;
        Prograss = Prograss + 1;
    }else{
        std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "=================== " << std::endl;
    std::cout << "Your point now is:" << std::endl;
    std::cout << "Fun: " << Fun << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "Prograss: " << Prograss << std::endl;
    std::cout << "=================== " << std::endl;

    if (HP <= 0) {
        std::cout << "You died!" << name << std::endl;
    }else if (Prograss >= 5){
        std::cout << "You are a C++ Bro!" << name << std::endl;
    }else if (Prograss >= 7 && Fun >= 5){
        std::cout << "You are a C++ Pro!" << name <<std::endl;
    }else if (Prograss >= 10 && Fun >= 10){
        std::cout << "You are a C++ God!" << name <<std::endl;
    }else{
        std::cout << "You are a C++ Beginner!" << name << std::endl;
    }
    
    return 0;
    }
