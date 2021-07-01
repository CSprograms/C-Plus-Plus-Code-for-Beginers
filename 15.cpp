//Prime Number
#include <iostream>
using namespace std;

int main()
{
    int ip, p{1}, mid;

    cout<<"Enter input 1 (ip1) : ";
    cin>>ip;

    if( ip % 2 == 0)
        p = 0;
    else
    {
        mid = ip / 2;

        for( int loop = 3; loop < mid ; mid += 2 )
        {
            if ( ip % loop == 0)
            {
                p = 0;
                break;
            }
        }
    }
    if (p)
        cout<<"The given value is Prime."<<endl;
    else
        cout<<"The given value is not Prime."<<endl;

return 0;
}
