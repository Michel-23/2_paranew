#include <iostream>
#include <cmath>
#include <cstdint>

class Fraction{
private:
    int32_t _num;
    int32_t _denom;
public:
    //Fraction(int32_t num, int32_t denom); // создание конструктора
    void SetDenom(int32_t newDenom);
    void Print();
    int nod(int32_t first, int32_t second);

    Fraction(int32_t numm, int32_t denomm);

    Fraction(double n);
};