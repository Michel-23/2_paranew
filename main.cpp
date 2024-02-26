#include <iostream>
#include "class.h"

int main(){
    int32_t num = 1, denom = 6; //*
    std::cin >> num;
    std::cout <<std::endl;
    
    std::cin >> denom;
    std::cout <<std::endl;

    double n;
    std::cin >> n;
    std::cout <<std::endl;

    //Fraction drob = Fraction(num,denom);
    Fraction drob = Fraction(num, denom); //*
    Fraction drob1 = Fraction(n);
    //Fraction drob = Fraction(1,2); // создание переменной типа class через конструктор
    drob.Print(); // через точку выполняем какую-нибудь функцию класса
    drob1.Print();
    return 0;
}