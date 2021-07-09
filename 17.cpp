// ceil, floor, trunc, round
#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
   float ip1{24.6}, ip2{24.4};

   cout<<setw(10)<<"Function"<<setw(10)<<"24.6"<<setw(10)<<"24.4"<<endl;

   cout<<setw(10)<<"ceil"<<setw(10)<<ceil(ip1)<<setw(10)<<ceil(ip2)<<endl;

   cout<<setw(10)<<"floor"<<setw(10)<<floor(ip1)<<setw(10)<<floor(ip2)<<endl;

   cout<<setw(10)<<"trunc"<<setw(10)<<trunc(ip1)<<setw(10)<<trunc(ip2)<<endl;

   cout<<setw(10)<<"round"<<setw(10)<<round(ip1)<<setw(10)<<round(ip2)<<endl;

return 0;
}
