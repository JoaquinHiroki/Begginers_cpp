#include <iostream>
#include <string>
#include "Fraction.h"
#include <numeric>

using namespace std;


Fraction::Fraction(int _num, int _den)
    : num{_num}, den{_den} {
    if (den == 0) {
        cout << "Invalid denominator" << endl;
        den = 1;
        num = 0;
    } else {
        int greatCommonDiv = gcd(num,den);
        num /= greatCommonDiv;
        den /= greatCommonDiv;
    }
    }

Fraction::~Fraction() {}
void Fraction::setNum(int _num) {
    num = _num;
}
int Fraction::getNum() {
    return num;
}

void Fraction::setDen(int _den) {
    den = _den;
}

int Fraction::getDen() {
    return den;
}

double Fraction::calcRealValue() {
    return (double)num / den;
}

Fraction Fraction::sumFractions(Fraction f) {
    int newNum = num * f.getDen() + den * f.getNum();
    int newDen = den * f.getDen();
    return Fraction{newNum, newDen};
}

void Fraction::printFraction() {
    cout << to_string(num) + "/" + to_string(den) << endl;
}

//void Fraction::simplyFraction() {
    //int common = gcd(num, den);
    //num /= common;
    //den /= common;
//}
