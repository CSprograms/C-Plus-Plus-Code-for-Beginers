#include<iostream>
using namespace std;

int main()
{
    int sum;
    static int static_sum;
    int count;
    for(count = 1; count <= 10; ++count) {
        sum += count;
        static_sum += count;
        cout<<"count : "<<count<<"\tsum : "<<sum<<"\tstatic_sum : "<<static_sum<<endl;
    }

    return(0);
}
