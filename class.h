#include <iostream>
#include <cmath>
#include <cstdint>

class Fraction{
private:
    int32_t _num;
    int32_t _denom;
public:
    Fraction();
    void SetDenom(int32_t newDenom); // создание функции
    void Print();
    int nod(int32_t first, int32_t second);
    int CelCh();

    Fraction(int32_t numm, int32_t denomm); // создание конструктора

    Fraction(double n);
};