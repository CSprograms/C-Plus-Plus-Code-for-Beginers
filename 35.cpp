// Memory Allocation in C++ -- Read & Print in Dynamic Two Dimensional Array
#include<iostream>
using namespace std;

int main()
{
    int M, N, loop1, loop2;

    cout<<"Enter the row size 'M' : ";
    cin>>M;

    cout<<"Enter the column size 'N' : ";
    cin>>N;

    int **array = new int*[M];
    for(loop1=0; loop1<M; ++loop1) {array[loop1] = new int[N];}

    for(loop1 = 0; loop1 <M; ++loop1) {
        for(loop2 = 0; loop2<N; ++loop2) {
            cout<<"array["<<loop1<<"]["<<loop2<<"] : ";
            cin>>array[loop1][loop2];
        }
    }

    cout<<endl<<"OUTPUT"<<endl;
    for(loop1 = 0; loop1 <M; ++loop1) {
        for(loop2 = 0; loop2<N; ++loop2)
            cout<<"\t"<<array[loop1][loop2]<<"\t";
        cout<<endl;
    }

    return 0;
}