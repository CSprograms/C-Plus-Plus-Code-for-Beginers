//32
#include<iostream>
using namespace std;

extern char *date_time;

int main()
{
    extern char *date_time;

    cout<<"System Time :  "<<date_time;

	return 0;
}