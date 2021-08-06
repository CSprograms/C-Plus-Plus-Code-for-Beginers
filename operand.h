#ifndef OPERAND_H_INCLUDED
#define OPERAND_H_INCLUDED

class operand
{
        int ip;

    public:
        operand(int val)
        {
            ip = val;
        }
        int getIp()
        {
            return ip;
        }
};

#endif // OPERAND_H_INCLUDED
