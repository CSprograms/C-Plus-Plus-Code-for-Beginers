#ifndef OPERAND_H_INCLUDED
#define OPERAND_H_INCLUDED

class operand
{
        int operand1;

    public:
        operand(int val)
        {
            operand1 = val;
        }
        int getOperand1()
        {
            return operand1;
        }
};

#endif // OPERAND_H_INCLUDED
