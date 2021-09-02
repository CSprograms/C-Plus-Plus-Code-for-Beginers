// Inline Function
#include<iostream>
using namespace std;

int addition(int arg1, int arg2)
{
    return arg1+arg2;
}

int main()
{

    int val1=5, val2=10;

    cout<<"Sum : "<<addition(val1,val2);

    return 0;
}