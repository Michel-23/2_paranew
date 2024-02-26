#include "class.h"

// Fraction::Fraction(int32_t num, int32_t denom){
//     _num = num;
//     SetDenom(denom);
// }

void Fraction::SetDenom(int32_t newDenom){ //реализация функции внутри класса Fraction
    if (newDenom == 0){
        throw "Eror";        
    }
    _denom = newDenom;
}

void Fraction::Print(){
    std::cout << _num << "/" << _denom << std::endl;
}

Fraction::Fraction(int32_t numm, int32_t denomm){ // получение новых значений 
    int temp = nod(fabs(numm), fabs(denomm)); // Нод
    if (temp > 1){ // сокращение
        numm /= temp;
        denomm /= temp;
    }
    _num = numm;
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

Fraction::Fraction(double n){
    int32_t num = (int)(floor(n * 10000000));
    int32_t denom = 10000000;
    int temp = nod(fabs(num), fabs(denom)); // Нод
    if (temp > 1){ // сокращение
        num /= temp;
        denom /= temp;
    }
    _num = num;
    SetDenom(denom);
}