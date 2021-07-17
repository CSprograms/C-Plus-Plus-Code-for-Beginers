// Binary '-' Operator Overloading
#include <iostream>
using namespace std;

class io
{
    int data;
public:
    io(int arg = 0)
    {
        data = arg;
    }
    int getData()
    {
        return data;
    }
    io operator- (io ope2)
    {
        io temp;
        temp.data = data - ope2.data;
        return temp;
    }
};

int main()
{

   io object1 = 24;
   io object2 = 15;
   io object3;
   object3 = object1 - object2;

   cout<<"The object 1 value : "<<object1.getData()<<endl;
   cout<<"The object 2 value : "<<object2.getData()<<endl;
    cout<<"The object 3 value : "<<object3.getData()<<endl;

return 0;
}
