// Hierarchical Inheritance
#include <iostream>
#include "square.h"
#include "cube.h"

using namespace std;

int main()
{
    square object1(10);
    cout<<"Object1 Square : ";
    cout<<object1.getSq()<<endl;

    cube object2(10);
    cout<<"Object2 Cube : ";
    cout<<object2.getCu()<<endl;

    return 0;
}
