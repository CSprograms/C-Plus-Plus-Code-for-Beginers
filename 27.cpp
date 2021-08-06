// Overloading the insertion "<<" and extraction ">>" Operator
#include <iostream>
using namespace std;

class io
{
    int ip;
public:
    io()
    {
        ip = 0;
    }
    friend istream& operator>>( istream  &, io & );
    friend ostream& operator<<(ostream &, const io & );
};

istream& operator>>( istream  &input, io &obj )
{
         input >> obj.ip;
         return input;
}

ostream& operator<<( ostream &output, const io &obj )
{
         output << "IP : " << obj.ip<<endl;
         return output;
}

int main()
{

   io object1;

   cout<<"Enter the value for object 1 : ";
   cin>>object1;

   cout<<object1;

return 0;
}
