// User Defined Function to Function Template
#include <iostream>

using namespace std;
template <class T>

T GetMax (T arg1, T arg2)
{
    T max = (arg1 > arg2)? arg1 : arg2;
    return max;
}

/*
char GetMax (char arg1, char arg2)
{
    cout<<"char function : ";
    char max = (arg1 > arg2)? arg1 : arg2;
    return max;
}

int GetMax (int arg1, int arg2)
{
    cout<<"int function : ";
    int max = (arg1 > arg2)? arg1 : arg2;
    return max;
}

float GetMax (float arg1, float arg2)
{
    cout<<"float function : ";
    float max = (arg1 > arg2)? arg1 : arg2;
    return max;
}
*/

int main () {
    char c1='a', c2='A';            // a : 97       A : 65

    int i1=5, i2=6;

    float f1=10.5, f2=5.1;

    cout<<"Max char : "<<GetMax(c1, c2)<<endl;

    cout<<"Max int : "<<GetMax(i1, i2)<<endl;;

    cout<<"Max float : "<<GetMax(f1, f2)<<endl;

return 0;
}