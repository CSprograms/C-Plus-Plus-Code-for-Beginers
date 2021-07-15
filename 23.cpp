// Copy Constructor VS Assignment by default memberwise copy
#include <iostream>
using namespace std;

class io
{
    int data;
public:
    io(int arg = 0)
    {
        data = arg;
        cout<<"Argumented Constructor."<<endl;
    }
    io (const io &arg)
    {
        data = arg.data;
        cout<<"Copy Constructor."<<endl;
    }
    void getData()
    {
        cout<<data<<endl;
    };
};

int main()
{

   io object1 = 10;
   io object2 = object1;
   io object3;
   object3 = object2;

   cout<<"The object 1 value : ";
   object1.getData();

   cout<<"The object 2 value : ";
   object2.getData();

   cout<<"The object 3 value : ";
   object3.getData();

return 0;
}
