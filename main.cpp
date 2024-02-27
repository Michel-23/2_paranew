#include <iostream>
#include "class.h"

int main(){
    int32_t num, denom; //* изначальные переменные (могут быть любые), НО определяющими являются типы данных
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

    //создание объекта с именем "drob" типа class (Fraction) с помощью конструктора класса Fraction, принимает значения num / denom 
    Fraction drob = Fraction(num, denom); //*
    Fraction drob1 = Fraction(n);
    //Fraction drob = Fraction(1,2); // создание переменной типа class через конструктор
    drob.Print(); // через точку выполняем какую-нибудь функцию класса
    drob1.Print();
    return 0;
}