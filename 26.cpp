// Binary '=' Operator Overloading
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
    io& operator= (const io &rhs)
    {
        if(this == &rhs)
            return *this;

        this->data = rhs.data;
        return *this;
    }
};

int main()
{

   io object1 = 24;
   io object2;

   object2 = object1;

   cout<<"The object 1 value : "<<object1.getData()<<endl;
   cout<<"The object 2 value : "<<object2.getData()<<endl;

return 0;
}
