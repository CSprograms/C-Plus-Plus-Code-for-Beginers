// setw() setprecision()  sqrt()
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double ip, sr;

   cout<<"Enter a value : ";
   cin>>ip;

   cout <<setw(10)<<"Input"<<setw(12)<<"Square Root"<< endl;

   cout <<setw(10)<<ip<<setw(12)<<setprecision(3)<<sqrt(ip)<< endl;

return 0;
}
