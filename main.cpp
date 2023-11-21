#include <iostream>
#include "Fraction.h"

using namespace std;

int main () {
    int num, den;
    cin >> num;
    cin >> den;

    Fraction one;
    Fraction two(num ,den);
    Fraction invalid(1, 0);


    cout << one.calcRealValue() << endl;
    cout << two.calcRealValue() << endl;
    cout << invalid.calcRealValue() << endl;

    cout << endl;

    one.printFraction();
    two.printFraction();
    invalid.printFraction();

    cout << endl;

    one.sumFractions(two).printFraction();
    two.sumFractions(one).printFraction();

    

    cout << one.sumFractions(two).calcRealValue() << endl;
    cout << two.sumFractions(one).calcRealValue() << endl;
}