//Swapping two values using temporary variable
#include <iostream>
using namespace std;
int main()
{
    int ip1, ip2, temp;

    cout<<"Enter input 1 (ip1) : ";
    cin>>ip1;
    cout<<"Enter input 2 (ip2) : ";
    cin>>ip2;

    temp = ip1;
    ip1 = ip2;
    ip2 = temp;

    cout<<"New value of ip1 : "<<ip1<<endl;
    cout<<"New value of ip2 : "<<ip2<<endl;

return 0;
}
