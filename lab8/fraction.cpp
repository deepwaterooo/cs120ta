#include "fraction.h"

fraction::fraction() {

}

fraction::fraction(int x, int y) {
    numerator = x;
    denominator = y;
}


// get functions
int fraction::getNum() {

}

int fraction::getDen() {

}


// set funcitons
void fraction::setNum(int) {

}

void fraction::setDen(int x) {
}


// equals
bool fraction::equals(fraction src) {
    if (numerator == src.numerator && denominator == src.denominator)
    //if (numerator == src.getNum() && denominator == src.getDen())
        return true;
    else
        return false;
}

fraction fraction::add(fraction src) {
    fraction result;
    return result;
}

void fraction::reduce() {
    // smaller value of numerator or denominator
    int tmp;
    bool doneFlag;
    /*

    do {
        doneFlag = false;

        if (numerator <= denominator)
            tmp = numerator;
        else
            tmp = denominator;

        for (int i = 2; i <= tmp; ++i) {
            if (numerator % i == 0 && denominator % i == 0)  {
                numerator = numerator / i;
                denominator = denominator / i;
                doneFlag = true;
            }
        }
    } while (doneFlag);
    
    }*/
}


