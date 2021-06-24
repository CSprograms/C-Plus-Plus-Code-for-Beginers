//Converting Multiple Simple IF to ELSE IF Ladder
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

    else if( ip1 < ip2 )
        cout<<"ip1 is less than ip2."<<endl;

    else
        cout<<"ip1 and ip2 are equal."<<endl;

return 0;
}
