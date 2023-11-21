

#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction {
    private:
        int num, den;
        void simplyFraction();
    public:
        Fraction(int _num = 1, int _den = 2);
        ~Fraction();
        void setNum(int _num);
        int getNum();
        void setDen(int _den);
        int getDen();
        double calcRealValue();
        Fraction sumFractions(Fraction f);
        void printFraction();
        
       
};

#endif