#include <iostream>
#include "class.h"

int main(){

    int32_t num, denom;
    std::cout << "Num: " << std::endl;
    std::cin >> num;
    std::cout <<std::endl;
    
    std::cout << "Denom: " << std::endl;
    std::cin >> denom;
    std::cout <<std::endl;

    std::cout << "Chislo: " << std::endl;
    double n;
    std::cin >> n;
    std::cout <<std::endl;

    // создание объекта drob с помощью конструктора класса Fraction
    Fraction drob = Fraction(num, denom);
    Fraction drob1 = Fraction(n);
    
    drob.Print(); // через точку выполняем какую-нибудь функцию класса
    drob1.Print();

    return 0;
}