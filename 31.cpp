
#include <iostream>
#include <iomanip>

using namespace std;

int value() {
    int val = 0;
    return ++val;
}

int staticValue()
{
    static int val;
    return ++val;
}

int main() {
    int loop;
    cout<<setw(5)<<"Loop"<<setw(15)<<"Value"<<setw(15)<<"Static Value"<<endl;
    for(loop = 0; loop < 5; loop++)
        cout<<setw(5)<<loop<<setw(15)<<value()<<setw(15)<<staticValue()<<endl;

    return 0;
}


