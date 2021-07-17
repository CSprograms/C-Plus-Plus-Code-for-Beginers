// Single Inheritance
#include <iostream>
#include "square.h"

using namespace std;

int main()
{
    square object1;
    cout<<"Object1 Square : ";
    cout<<object1.getSq()<<endl;

    square object2(10);
    cout<<"Object2 Square : ";
    cout<<object2.getSq()<<endl;

    return 0;
}
