#include <iostream>

using namespace std;

int main()
{
    int ip1=10;     //Declaring and Initializing a variable.

    int ip2{20};    //Value Initialization.
    int ip3{};      //ip3 is initialized to default value, 0.

    int ip4(40);    //Initializing a variable using parenthesis, Constructor type.
    int ip5();      //ip5 is initialized to default value, 1.

    int ip6;        //Unknown initial value.

    //Output.
    cout<<"ip1 : "<<ip1<<endl;
    cout<<"ip2 : "<<ip2<<endl;
    cout<<"ip3 : "<<ip3<<endl;
    cout<<"ip4 : "<<ip4<<endl;
    cout<<"ip5 : "<<ip5<<endl;
    cout<<"ip6 : "<<ip6<<endl;

return 0;
}
