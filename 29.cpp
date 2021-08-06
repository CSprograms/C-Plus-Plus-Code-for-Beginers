// Single Inheritance
#include <iostream>
#include "square.h"

using namespace std;

int main()
{
    square object(10);
    cout<<"Square of "<<object.getIp()<<" is "<<object.getOp()<<"."<<endl;

    return 0;
}
