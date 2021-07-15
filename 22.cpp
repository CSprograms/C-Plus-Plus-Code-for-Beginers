// Copy Constructor
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
    io (const io &arg)
    {
        data = arg.data;
    }
    void getData()
    {
        cout<<data<<endl;
    };
};

int main()
{

   io object1 = 10, object2 = object1;

   cout<<"The object 1 value : ";
   object1.getData();

   cout<<"The object 2 value : ";
   object2.getData();

return 0;
}
