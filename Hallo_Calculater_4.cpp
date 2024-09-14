#include <iostream>
#include <cmath>
#include <string>

/*
十进制数换二进制计算器
*/

int main(){
    std::string lnumber;
    double number ;
    int ipart ;
    std::string inumber ;  
    double fpart ;
    std::string fnumber ;
    int i1;

    std::cout << "******二进制计算器******" << '\n';
    std::cout << "输入你要转换的数字！" << '\n';
    std::cin >> number; 
    std::cout << "输入你要保留几位小数！" << '\n';
    std::cin >> i1;
    
    ipart = floor (number); 
    fpart = number - ipart ;

    if (ipart == 0){
        inumber = "0" ;
    }else{
        while(ipart > 0){
            inumber = std::to_string(ipart % 2) + inumber ;
            ipart /= 2 ;
        }
    }

    if (fpart > 0){
        fnumber += ".";
        while(i1-- > 0 && fpart > 0){
            fpart *= 2;
            if (fpart >= 1){
                fnumber += "1";
                fpart -= 1;
            } else {
                fnumber += "0";
            }
        }
    }
    
    lnumber = inumber + fnumber ;
    std::cout << "本次计算的结果为" <<  lnumber << '\n';

    std::cout << "*********************" ;

    return 0;
}
