//Comparison between two integers using simple if.
#include <iostream>

using namespace std;

int main()
{
    int ip1, ip2;

    cout<<"Enter input 1 (ip1) : ";
    cin>>ip1;
    cout<<"Enter input 2 (ip2) : ";
    cin>>ip2;

    if( ip1 > ip2 )
        cout<<"ip1 is bigger than ip2."<<endl;

    if( ip1 < ip2 )
        cout<<"ip1 is less than ip2."<<endl;

    if( ip1 == ip2 )
        cout<<"ip1 and ip2 are equal."<<endl;

return 0;
}
