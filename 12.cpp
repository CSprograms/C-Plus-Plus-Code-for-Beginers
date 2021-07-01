//Multiplication without '*' operator
#include <iostream>
using namespace std;
int main()
{
    int ip1, ip2, op{0};

    cout<<"Enter input 1 (ip1) : ";
    cin>>ip1;
    cout<<"Enter input 2 (ip2) : ";
    cin>>ip2;

    for(int loop = 1; loop <= ip2 ; loop++ )
        op += ip1;      // op = op + ip1;

    cout<<ip1<<" * "<<ip2<<" = "<<op<<endl;

return 0;
}
