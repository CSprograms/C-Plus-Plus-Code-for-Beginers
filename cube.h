#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED

#include "operand.h"
#include <cmath>

class cube : private operand
{
    int cu;
    void calcCu()
    {
        cu = ceil(pow(getOperand1(),3));
    }
public:
    cube(int val1 = 0):operand(val1){    }
    int getCu()
    {
        calcCu();
        return cu;
    }
};


#endif // CUBE_H_INCLUDED
