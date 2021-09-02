//Accessing Global Variable over Local Variable
#include<iostream>
using namespace std;

int value = 6;

int main()
{
    int value = 24;

    cout<<"value in main :  "<<value<<endl;
    cout<<"value in global from main : "<<::value<<endl;

    {
        int value = 23;
        cout<<"value in inner block :  "<<value<<endl;
        cout<<"value in global from inner block : "<<::value<<endl;
    }

    return 0;
}