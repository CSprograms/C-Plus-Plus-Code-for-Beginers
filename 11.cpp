//Swapping two values without using temporary variable
#include <iostream>
using namespace std;
int main()
{
    int ip1, ip2;

    cout<<"Enter input 1 (ip1) : ";
    cin>>ip1;                           //06
    cout<<"Enter input 2 (ip2) : ";
    cin>>ip2;                           //24

    ip1 = ip1+ip2;                      //06 + 24 = 30
    ip2 = ip1-ip2;                      //30 - 24 = 6
    ip1 = ip1-ip2;                      //30 - 6 = 24

    cout<<"New value of ip1 : "<<ip1<<endl;
    cout<<"New value of ip2 : "<<ip2<<endl;

return 0;
}
