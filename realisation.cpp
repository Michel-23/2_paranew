#include "class.h"

// Fraction::Fraction(int32_t num, int32_t denom){
//     _num = num;
//     SetDenom(denom);
// }


// реализация функции внутри класса Fraction
void Fraction::SetDenom(int32_t newDenom){ //реализация функции внутри класса Fraction
    if (newDenom == 0){
        throw "Error";
    }
    _denom = newDenom;
}

// функция печати
void Fraction::Print(){
    std::cout << _num << "/" << _denom << std::endl;
}

// реализация функции, сокращающей дробь
Fraction::Fraction(int32_t numm, int32_t denomm){ // получение новых значений 
    int temp = nod(fabs(numm), fabs(denomm)); // Нод
    if (temp > 1){ // сокращение
        numm /= temp;
        denomm /= temp;
    }
    _num = numm; // присвоение полю класса нового значения числителя
    SetDenom(denomm);
}

int Fraction::nod(int32_t first, int32_t second){
    if ((first<=0) || (second<=0))
        return -1;
    else if (first==second) 
        return first;
    else{  
        int maxx=fmax(first,second);
        int minn=fmin(first,second);
        return nod(minn,maxx-minn);
    }
}

Fraction:: /*это означает обращение к конструктору*/Fraction(double n){
    int32_t num = (int)(round(n * 10000000));
    int32_t denom = 10000000;
    int temp = nod(fabs(num), fabs(denom)); // Нод
    if (temp > 1){ // сокращение
        num /= temp;
        denom /= temp;
    }
    _num = num;
    //SetDenom(denom);
    _denom = denom;
}