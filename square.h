#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "operand.h"
#include <cmath>

class square : private operand
{
    int sq;
    void calcSq()
    {
        sq = ceil(pow(getOperand1(),2));
    }
public:
    square(int val1 = 0):operand(val1){    }
    int getSq()
    {
        calcSq();
        return sq;
    }
};

#endif // SQUARE_H_INCLUDED
