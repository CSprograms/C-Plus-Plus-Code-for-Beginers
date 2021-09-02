// Printing String using range based for loop
#include<iostream>
using namespace std;

int main()
{
    string name;

    cout<<"Enter the name : ";
    cin>>name;

    for(char ch :  name)
        cout<<ch;

    return 0;
}