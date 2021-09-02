// Memory Allocation in C++ -- Read & Print in Dynamic Array
#include<iostream>
using namespace std;

int main()
{
    int *array, N, loop;

    cout<<"Enter the number of elements 'N' : ";
    cin>>N;

    array = new int[N];

    for(loop = 0; loop < N; ++loop)
    {
        cout<<"array["<<loop<<"] : ";
        cin>>array[loop];
    }

    for(loop = 0; loop < N; ++loop)
    {
        cout<<array[loop]<<"\t";
    }

    return 0;
}