#include "class.h"

Fraction::Fraction(){
    _num =0;
    _denom = 1;
}

// реализация функции внутри класса Fraction
void Fraction::SetDenom(int32_t newDenom){ //реализация функции внутри класса Fraction
    if (newDenom == 0){
        throw "Error";
    }
    _denom = newDenom;
}

// функция печати
void Fraction::Print(){
    int cel = CelCh();
    if (cel == 0){
        if (_num == 0){
            std::cout << 0 << std::endl;
        }    
        else{
            std::cout << _num << "/" << _denom << std::endl;
        }
    }
    else{
        std::cout << cel << " ";
        if (_num - cel*_denom !=0)
            std::cout << _num - cel*_denom  << "/" << _denom;
        std::cout << std::endl;
    }

}

int Fraction::CelCh(){
    int temp;
    if (_num > _denom){
        temp = floor(_num / _denom);
        //_num -= temp*_denom;
    }
    else{
        temp = 0;
    }
    return temp;
}

// реализация функции, сокращающей дробь
Fraction::Fraction(int32_t numm, int32_t denomm){
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

Fraction:: Fraction(double n){
    int32_t num = (int)(round(n * 10000000));
    int32_t denom = 10000000;
    int temp = nod(fabs(num), fabs(denom)); // Нод
    if (temp > 1){ // сокращение
        num /= temp;
        denom /= temp;
    }
    _num = num;
    _denom = denom;
}