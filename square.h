#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "operand.h"

class square : public operand
{
    int op;
public:
    square(int val = 0):operand(val){    }
    int getOp()
    {
        int temp = getIp();
        op = temp * temp;
        return op;
    }
};

#endif // SQUARE_H_INCLUDED
