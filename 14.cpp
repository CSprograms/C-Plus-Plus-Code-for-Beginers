//Armstrong Number -- Three Digit numbers
// 1 = 1^1 = 1
// 153 = (1^3)+(5^3)+(3^3) = 1 + 125 + 27 = 153
// 1634 = (1^4)+(6^4)+(3^4)+(4^4) = 1 + 1296 + 81 + 256 = 1634
#include <iostream>

using namespace std;
int main()
{
    int ip, op{0}, temp, val ;

    cout<<"Enter input : ";
    cin>>ip;

    for( val = ip; val > 0 ; val /= 10 )
    {
        temp = val%10;
        op += temp * temp * temp;
    }

    if ( ip == op )
        cout<<"The given value "<<ip<<" is armstrong number."<<endl;
    else
        cout<<"The given value "<<ip<<" is not a armstrong number."<<endl;

return 0;
}
